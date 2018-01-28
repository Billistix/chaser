// Copyright Blue Man

#include "ClientSidePrediction_Component.h"
#include "BlueManVehiclePhysicsPrivatePCH.h"


// Sets default values for this component's properties
UClientSidePrediction_Component::UClientSidePrediction_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UClientSidePrediction_Component::BeginPlay()
{
	Super::BeginPlay();

	OnCaluclateCustomPhysics.BindUObject(this, &UClientSidePrediction_Component::CustomPhysics);

	Pawn = Cast<APawn>(GetOwner());

	PhysicsScene = new FPhysScene();

	FTimerHandle Handle;
	GetWorld()->GetTimerManager().SetTimer(Handle, this, &UClientSidePrediction_Component::CreateWorld, 1.0f, false);

	PScene = PhysicsScene->GetPhysXScene(EPhysicsSceneType::PST_Sync);
	PScene->setGravity(GetWorld()->GetPhysicsScene()->GetPhysXScene(EPhysicsSceneType::PST_Sync)->getGravity());

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStaticMeshActor::StaticClass(), Actors);

	for (AActor* Actor : Actors)
	{
		AStaticMeshActor* StaticActor = Cast<AStaticMeshActor>(Actor);
		if (!StaticActor) continue;

		FBodyInstance* ActorBI = StaticActor->GetStaticMeshComponent()->GetBodyInstance();
		if (!ActorBI) continue;

		PhysxActors.Add(ActorBI->RigidActorSync);
		PxActor* PhysXActor = ActorBI->RigidActorSync;
	}
}

void UClientSidePrediction_Component::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	delete PhysicsScene;
	PhysicsScene = nullptr;
}

// Called every frame
void UClientSidePrediction_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!BPMesh || !BPMesh->GetBodyInstance()) return;

	if (!Pawn) Pawn = Cast<APawn>(GetOwner());

	BPMesh->GetBodyInstance()->AddCustomPhysics(OnCaluclateCustomPhysics);

	if (GetWorld()->GetRealTimeSeconds() > NextUpdate)
	{
		NextUpdate = GetWorld()->GetRealTimeSeconds() + (1 / NetUpdates);

		if (GetOwner()->HasAuthority() && Pawn && Pawn->IsLocallyControlled())
		{
			FHistoryBuffer ServerData = FHistoryBuffer();
			FHistoryBufferMinimum ServerDataNet = FHistoryBufferMinimum();
			ServerData = GetTransformFromBody(BPMesh->GetBodyInstance());

			ServerDataNet.StoredLocation = ServerData.StoredLocation;
			ServerDataNet.StoredRotation = ServerData.StoredRotation;
			ServerDataNet.StoredAngularVelocity = ServerData.StoredAngularVelocity;
			ServerDataNet.StoredLinearVelocity = ServerData.StoredLinearVelocity;

			AllReceiveTimeRequest(ServerDataNet);
		}

		if (!GetOwner()->HasAuthority() && Pawn && Pawn->IsLocallyControlled())
		{
			if (!CanBeCorrected && Wait && ServerReached) return;

			CanBeCorrected = false;
			SendServerTimeRequest(GetWorld()->GetRealTimeSeconds(), BPMesh);
		}
	}
}



bool UClientSidePrediction_Component::SendServerTimeRequest_Validate(float SentTime, UPrimitiveComponent* Comp)
{
	return true;
}

void UClientSidePrediction_Component::SendServerTimeRequest_Implementation(float SentTime, UPrimitiveComponent* Comp)
{
	FHistoryBuffer ServerData = FHistoryBuffer();
	FHistoryBufferMinimum ServerDataNet = FHistoryBufferMinimum();
	ServerData = GetTransformFromBody(Comp->GetBodyInstance());

	ServerDataNet.StoredLocation = ServerData.StoredLocation;
	ServerDataNet.StoredRotation = ServerData.StoredRotation;
	ServerDataNet.StoredAngularVelocity = ServerData.StoredAngularVelocity;
	ServerDataNet.StoredLinearVelocity = ServerData.StoredLinearVelocity;

	ClientReceiveTimeRequest(GetWorld()->GetRealTimeSeconds(), SentTime, ServerDataNet);
	AllReceiveTimeRequest(ServerDataNet);
}


void UClientSidePrediction_Component::ClientReceiveTimeRequest_Implementation(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction)
{
	if (!PScene) nullptr;

	FHistoryBuffer CorrectionLocal = FHistoryBuffer();
	CorrectionLocal.StoredLocation = Correction.StoredLocation;
	CorrectionLocal.StoredRotation = Correction.StoredRotation;
	CorrectionLocal.StoredAngularVelocity = Correction.StoredAngularVelocity;
	CorrectionLocal.StoredLinearVelocity = Correction.StoredLinearVelocity;

	if (SentTime < LastTime || AddToBuffer == false) return;
	LastTime = SentTime;

	AddToBuffer = false;

	RoundTrip = GetWorld()->GetRealTimeSeconds() - SentTime;
	ServerTime = ReceivedServerTime - (RoundTrip / 2.0f);
	float ClientTime = SentTime + (RoundTrip * RoundTripMultiplier);

	ServerReached = true;
	CanBeCorrected = true;

	float Index = 0;

	float ClosestTime = 1000.0f;
	for (int32 a = 0; a < HistoryBuffer.Num(); a++)
	{
		if (ClosestTime > FMath::Abs(HistoryBuffer[a].TimeStamp - ClientTime))
		{
			ClosestTime = FMath::Abs(HistoryBuffer[a].TimeStamp - ClientTime);
			Index = a;
		}
	}

	for (int32 a = HistoryBuffer.Num() - 1; a >= 0; a--)
	{
		if (a > Index) HistoryBuffer.RemoveAt(a);
	}

	BufferValues.Insert(HistoryBuffer.Num(), 0);

	for (int32 a = BufferValues.Num() - 1; a >= 0; a--)
	{
		if (a > AverageContainerSize) BufferValues.RemoveAt(a);
	}

	AverageBufferSize = 0;
	for (int32 CurrentNum : BufferValues)
	{
		AverageBufferSize = AverageBufferSize + CurrentNum;
	}
	AverageBufferSize = AverageBufferSize / BufferValues.Num();

	if (FMath::Abs(HistoryBuffer.Num() - AverageBufferSize) > AverageErrorTolerance && CurrentErrorLimit < ErrorLimit)
	{
		CurrentErrorLimit++;
		BufferValues.RemoveAt(0);
		AddToBuffer = true;
		return;
	}
	CurrentErrorLimit = 0;

	if (!HistoryBuffer.IsValidIndex(0))
	{
		AddToBuffer = true;
		return;
	}

	FHistoryBuffer NormalState = GetTransformFromBody(BPMesh->GetBodyInstance());
	NormalState.CurrentGear = HistoryBuffer[0].CurrentGear;
	NormalState.StoredThrottleInput = HistoryBuffer[0].StoredThrottleInput;
	NormalState.StoredBrakingInput = HistoryBuffer[0].StoredBrakingInput;
	NormalState.SteeringWheels = HistoryBuffer[0].SteeringWheels;
	NormalState.SteeringPerWheel = HistoryBuffer[0].SteeringPerWheel;
	NormalState.Wheels = HistoryBuffer[0].Wheels;
	NormalState.SuspensionPositions = HistoryBuffer[0].SuspensionPositions;

	if (!HistoryBuffer.IsValidIndex(Index)) return;


	ApplyBodyTransform(BPMesh->GetBodyInstance(), CorrectionLocal);
	for (int32 a = 0; a < HistoryBuffer[Index].Wheels.Num(); a++)
	{
		HistoryBuffer[Index].Wheels[a]->PreviousPosition = HistoryBuffer[Index].SuspensionPositions[a];
	}

	FPhysScene * Scene = GetWorld()->GetPhysicsScene();

	PxActor* ActorToAdd = BPMesh->GetBodyInstance()->RigidActorSync;
	GetWorld()->GetPhysicsScene()->GetPhysXScene(EPhysicsSceneType::PST_Sync)->removeActor(*ActorToAdd);
	PScene->addActor(*ActorToAdd);

	for (PxActor* PhysxActor : PhysxActors)
	{
		GetWorld()->GetPhysicsScene()->GetPhysXScene(EPhysicsSceneType::PST_Sync)->removeActor(*PhysxActor);
		PScene->addActor(*PhysxActor);
	}


	for (int32 a = Index; a >= 0; a--)
	{

		for (int32 b = 0; b < HistoryBuffer[a].SteeringWheels.Num(); b++)
		{
			HistoryBuffer[a].SteeringWheels[b]->Angle = HistoryBuffer[a].SteeringPerWheel[b];
		}

		for (int32 b = 0; b < HistoryBuffer[a].Wheels.Num(); b++)
		{
			HistoryBuffer[a].Wheels[b]->EngineForce = HistoryBuffer[a].EngineForcePerWheel[b];
			HistoryBuffer[a].Wheels[b]->BrakingForce_Calculated = HistoryBuffer[a].BrakingForcePerWheel[b];
			HistoryBuffer[a].Wheels[b]->CustomPhysics(HistoryBuffer[a].StoredDeltaTime, BPMesh->GetBodyInstance(), true, SuspensionTraceWorld);
		}

		Rewind(PScene, HistoryBuffer[a].StoredDeltaTime);


	}


	PScene->removeActor(*ActorToAdd);
	GetWorld()->GetPhysicsScene()->GetPhysXScene(EPhysicsSceneType::PST_Sync)->addActor(*ActorToAdd);

	for (PxActor* PhysxActor : PhysxActors)
	{
		PScene->removeActor(*PhysxActor);
		GetWorld()->GetPhysicsScene()->GetPhysXScene(EPhysicsSceneType::PST_Sync)->addActor(*PhysxActor);
	}

	for (int32 b = 0; b < NormalState.SteeringWheels.Num(); b++)
	{
		NormalState.SteeringWheels[b]->Angle = NormalState.SteeringPerWheel[b];
	}

	for (int32 b = 0; b < NormalState.Wheels.Num(); b++)
	{
		NormalState.Wheels[b]->PreviousPosition = NormalState.SuspensionPositions[b];
	}

	if (Debug && Draw)
	{
		DrawDebugBox(GetWorld(), BPMesh->GetBodyInstance()->GetUnrealWorldTransform().GetLocation(), FVector(400.0f, 300.0f, 150.0f), BPMesh->GetBodyInstance()->GetUnrealWorldTransform().Rotator().Quaternion(), FColor::Blue, false, Persistent && Blue ? 5.0f : RoundTrip * 0.2f + (1 / NetUpdates), 0.0f, 10.0f);
		DrawDebugBox(GetWorld(), CorrectionLocal.StoredLocation, FVector(400.0f, 300.0f, 150.0f), CorrectionLocal.StoredRotation.Quaternion(), FColor::Green, false, Persistent && Green ? 5.0f : RoundTrip * 0.2f + (1 / NetUpdates), 0.0f, 10.0f);
		DrawDebugBox(GetWorld(), HistoryBuffer[Index].StoredLocation, FVector(400.0f, 300.0f, 150.0f), HistoryBuffer[Index].StoredRotation.Quaternion(), FColor::Red, false, Persistent && Red ? 5.0f : RoundTrip * 0.2f + (1 / NetUpdates), 0.0f, 10.0f);
	}
	else if (Debug)
	{
		ClientUpdate.Broadcast(HistoryBuffer[Index].StoredLocation, CorrectionLocal.StoredLocation, BPMesh->GetBodyInstance()->GetUnrealWorldTransform().GetLocation(), HistoryBuffer[Index].StoredRotation, CorrectionLocal.StoredRotation, BPMesh->GetBodyInstance()->GetUnrealWorldTransform().Rotator());
	}

	Smoothing(BPMesh->GetBodyInstance(), NormalState, true, Index, true);

	AddToBuffer = true;
}

void UClientSidePrediction_Component::AllReceiveTimeRequest_Implementation(FHistoryBufferMinimum Correction)
{

	if (!Pawn || Pawn->IsLocallyControlled()) return;

	FHistoryBuffer CorrectionLocal = FHistoryBuffer();
	CorrectionLocal.StoredLocation = Correction.StoredLocation;
	CorrectionLocal.StoredRotation = Correction.StoredRotation;
	CorrectionLocal.StoredAngularVelocity = Correction.StoredAngularVelocity;
	CorrectionLocal.StoredLinearVelocity = Correction.StoredLinearVelocity;

	FHistoryBuffer NormalState = GetTransformFromBody(BPMesh->GetBodyInstance());

	FHistoryBuffer CorrectionData = GetTransformFromBody(BPMesh->GetBodyInstance());
	float Distance = (Correction.StoredLocation - NormalState.StoredLocation).Size();
	float RotationError_Yaw = FMath::Abs(Correction.StoredRotation.Yaw - NormalState.StoredRotation.Yaw);
	float RotationError_Pitch = FMath::Abs(Correction.StoredRotation.Pitch - NormalState.StoredRotation.Pitch);
	float RotationError_Roll = FMath::Abs(Correction.StoredRotation.Roll - NormalState.StoredRotation.Roll);
	float Ratio = FMath::GetMappedRangeValueClamped(FVector2D(AllowedError * 0.2f, AllowedError * 0.7f), FVector2D(ErrorCorrection, ErrorCorrectionHigh), Distance);

	float RotationRatio = FMath::GetMappedRangeValueClamped(FVector2D(AllowedError_Rotation * 0.2f, AllowedError_Rotation * 0.7f), FVector2D(ErrorCorrection_Rotation, ErrorCorrectionHigh_Rotation), (RotationError_Roll + RotationError_Pitch + RotationError_Yaw) / 3.0f);

	CorrectionData.StoredLocation = FMath::Lerp(NormalState.StoredLocation, Correction.StoredLocation, Ratio);
	CorrectionData.StoredRotation = FMath::Lerp(NormalState.StoredRotation, Correction.StoredRotation, RotationRatio);
	CorrectionData.StoredLinearVelocity = FMath::Lerp(NormalState.StoredLinearVelocity, Correction.StoredLinearVelocity, Ratio);
	CorrectionData.StoredAngularVelocity = FMath::Lerp(NormalState.StoredAngularVelocity, Correction.StoredAngularVelocity, Ratio);


	ApplyBodyTransform(BPMesh->GetBodyInstance(), CorrectionData);
}

void UClientSidePrediction_Component::ApplyBodyTransform(FBodyInstance* Body, FHistoryBuffer DataToApply, bool ApplyVelocity)
{
	Body->SetBodyTransform(FTransform(DataToApply.StoredRotation, DataToApply.StoredLocation, FVector(1.0f)), ETeleportType::TeleportPhysics);

	if (ApplyVelocity)
	{
		Body->SetAngularVelocityInRadians(FMath::DegreesToRadians(DataToApply.StoredAngularVelocity), false);
		Body->SetLinearVelocity(DataToApply.StoredLinearVelocity, false);
	}

}

void UClientSidePrediction_Component::Rewind(PxScene* PXPhysicsScene, float Delta)
{
	//	SCOPED_SCENE_WRITE_LOCK(PXPhysicsScene);
	PXPhysicsScene->simulate(Delta);
	PXPhysicsScene->fetchResults(true);
}




void UClientSidePrediction_Component::CustomPhysics(float DeltaTime, FBodyInstance* BodyInstance)
{
	FHistoryBuffer ReceivedBuffer = GetTransformFromBody(BodyInstance);

	if (WheelManager && EngineComponent)
	{
		ReceivedBuffer.CurrentGear = EngineComponent->CurrentGear;
		ReceivedBuffer.StoredBrakingInput = EngineComponent->Braking;
		ReceivedBuffer.StoredThrottleInput = EngineComponent->Throttle;
		ReceivedBuffer.SteeringWheels = WheelManager->SteeringWheels;
		ReceivedBuffer.Wheels = WheelManager->Wheels;

		ReceivedBuffer.SuspensionPositions.Empty();
		ReceivedBuffer.EngineForcePerWheel.Empty();
		ReceivedBuffer.BrakingForcePerWheel.Empty();
		ReceivedBuffer.SteeringPerWheel.Empty();

		for (int32 a = 0; a < ReceivedBuffer.Wheels.Num(); a++)
		{
			if (!ReceivedBuffer.Wheels[a]) continue;

			ReceivedBuffer.SuspensionPositions.Add(ReceivedBuffer.Wheels[a]->PreviousPosition);
			ReceivedBuffer.EngineForcePerWheel.Add(ReceivedBuffer.Wheels[a]->EngineForce);
			ReceivedBuffer.BrakingForcePerWheel.Add(ReceivedBuffer.Wheels[a]->BrakingForce_Calculated);
		}

		for (int32 a = 0; a < ReceivedBuffer.SteeringWheels.Num(); a++)
		{
			if (!ReceivedBuffer.SteeringWheels[a]) continue;

			ReceivedBuffer.SteeringPerWheel.Add(ReceivedBuffer.SteeringWheels[a]->Angle);
		}
	}

	ReceivedBuffer.StoredDeltaTime = DeltaTime;
	ReceivedBuffer.TimeStamp = GetWorld()->GetRealTimeSeconds();

	if (AddToBuffer) HistoryBuffer.Insert(ReceivedBuffer, 0);


}

FHistoryBuffer UClientSidePrediction_Component::GetTransformFromBody(FBodyInstance * Body)
{
	FHistoryBuffer NewBuffer = FHistoryBuffer();
	NewBuffer.StoredLocation = Body->GetUnrealWorldTransform().GetLocation();
	NewBuffer.StoredRotation = Body->GetUnrealWorldTransform().Rotator();
	NewBuffer.StoredLinearVelocity = Body->GetUnrealWorldVelocity();
	NewBuffer.StoredAngularVelocity = FMath::RadiansToDegrees(Body->GetUnrealWorldAngularVelocityInRadians());

	return NewBuffer;
}

void UClientSidePrediction_Component::Smoothing(FBodyInstance* BodyToCorrect, FHistoryBuffer StateToCompareAgainst, bool ApplyVelocity, int32 Index, bool DebugMessage)
{
	FHistoryBuffer CorrectionData = GetTransformFromBody(BodyToCorrect);
	float Distance = (BodyToCorrect->GetUnrealWorldTransform().GetLocation() - StateToCompareAgainst.StoredLocation).Size();
	float RotationError_Yaw = FMath::Abs(BodyToCorrect->GetUnrealWorldTransform().Rotator().Yaw - StateToCompareAgainst.StoredRotation.Yaw);
	float RotationError_Pitch = FMath::Abs(BodyToCorrect->GetUnrealWorldTransform().Rotator().Pitch - StateToCompareAgainst.StoredRotation.Pitch);
	float RotationError_Roll = FMath::Abs(BodyToCorrect->GetUnrealWorldTransform().Rotator().Roll - StateToCompareAgainst.StoredRotation.Roll);
	float Ratio = FMath::GetMappedRangeValueClamped(FVector2D(AllowedError * 0.0f, AllowedError * 1.0f), FVector2D(ErrorCorrection, ErrorCorrectionHigh), Distance);

	if (DebugMessage)
	{
		GEngine->AddOnScreenDebugMessage(0, 0.5f, FColor::Green, "Ping " + FString::SanitizeFloat(RoundTrip * 1000.0f) + " AverageBufferSize: " + FString::FromInt(AverageBufferSize) + " AverageBufferError: " + FString::FromInt(FMath::Abs(HistoryBuffer.Num() - AverageBufferSize)) + " Position Error: " + FString::SanitizeFloat(Distance) + " Rotation Error( " + " Roll: "
			+ FString::SanitizeFloat(RotationError_Roll) + " Pitch :" + FString::SanitizeFloat(RotationError_Pitch) + " Yaw: " + FString::SanitizeFloat(RotationError_Yaw) + " )" + " Buffer Size: " + FString::SanitizeFloat(HistoryBuffer.Num()) + " Index: " + FString::SanitizeFloat(Index));
	}

	float RotationRatio = FMath::GetMappedRangeValueClamped(FVector2D(AllowedError_Rotation * 0.0f, AllowedError_Rotation * 1.0f), FVector2D(ErrorCorrection_Rotation, ErrorCorrectionHigh_Rotation), (RotationError_Pitch + RotationError_Yaw) / 2.0f);
	float VelocityRatio = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, 100.0f), FVector2D(0.2f, 1.0f), RoundTrip * 1000.0f);

	CorrectionData.StoredLocation = FMath::Lerp(StateToCompareAgainst.StoredLocation, BodyToCorrect->GetUnrealWorldTransform().GetLocation(), Ratio);
	CorrectionData.StoredRotation = FMath::Lerp(StateToCompareAgainst.StoredRotation, BodyToCorrect->GetUnrealWorldTransform().Rotator(), RotationRatio);
	CorrectionData.StoredLinearVelocity = FMath::Lerp(StateToCompareAgainst.StoredLinearVelocity, BodyToCorrect->GetUnrealWorldVelocity(), VelocityRatio);
	CorrectionData.StoredAngularVelocity = FMath::Lerp(StateToCompareAgainst.StoredAngularVelocity, FMath::RadiansToDegrees(BodyToCorrect->GetUnrealWorldAngularVelocityInRadians()), VelocityRatio);


	ApplyBodyTransform(BodyToCorrect, CorrectionData, ApplyVelocity);

}

