// Copyright Blue Man

#include "WheelManager_Component.h"
#include "BlueManVehiclePhysicsPrivatePCH.h"


// Sets default values for this component's properties
UWheelManager_Component::UWheelManager_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
//	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

#if WITH_EDITOR
void UWheelManager_Component::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	if (LockdownActivationSpeed > StickyTiresActivationSpeed) LockdownActivationSpeed = StickyTiresActivationSpeed;

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

// Called when the game starts
void UWheelManager_Component::BeginPlay()
{
	Super::BeginPlay();

	OnCaluclateCustomPhysics.BindUObject(this, &UWheelManager_Component::CustomPhysics);
	SetStaticMesh();

}

// Called every frame
void UWheelManager_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateWheels();
	SetAckermanSteeringLimits();

	if (!Mesh || !Mesh->GetBodyInstance()) return;

	Mesh->GetBodyInstance()->AddCustomPhysics(OnCaluclateCustomPhysics);

}

void UWheelManager_Component::SetStaticMesh()
{
	if (!GetOwner()) return;

	TInlineComponentArray<USuspensionPhysics_Component*> SuspensionComponents;
	GetOwner()->GetComponents(SuspensionComponents);

	TArray<UActorComponent*> PrimitiveComponents = GetOwner()->GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName("Main"));
	if (PrimitiveComponents.Num() == 0) GetOwner()->GetComponents(PrimitiveComponents);

	//Mesh
	for (int32 a = 0; a < PrimitiveComponents.Num(); a++)
	{
		if (PrimitiveComponents.IsValidIndex(a))
		{

			UPrimitiveComponent* NewMesh = Cast<UPrimitiveComponent>(PrimitiveComponents[a]);
			if (NewMesh)
			{
				Mesh = NewMesh;
				break;
			}
		}

	}

	if (!Mesh) return;

	//Wheels
	for (int32 a = 0; a < SuspensionComponents.Num(); a++)
	{
		if (SuspensionComponents.IsValidIndex(a))
		{
			USuspensionPhysics_Component* Wheel = SuspensionComponents[a];
			if (Wheel)
			{
				Wheel->SetMesh(Mesh);
				Wheel->StickyTiresMultiplier = StickyTiresMultiplier;
				Wheel->StickyTiresActivationSpeed = StickyTiresActivationSpeed;
				Wheel->StickyTiresHandbrakeMultiplier = StickyTiresHandbrakeMultiplier;

				Wheels.Add(Wheel);
				if (Wheel->NormalSteeringAngle > 0.0f) SteeringWheels.Add(Wheel);
				if (Wheel->AffectedByHandbrake) HandbrakeWheels.Add(Wheel);
			}

		}

	}

	SetWheelNumbers(Wheels);
	GetWheelsOnEachSide();
	SetAntiRoll();
}

void UWheelManager_Component::SetAntiRoll()
{
	USuspensionPhysics_Component* FR = nullptr;
	USuspensionPhysics_Component* FL = nullptr;
	USuspensionPhysics_Component* RR = nullptr;
	USuspensionPhysics_Component* RL = nullptr;


	float XLoc = 0.0f;

	TArray<USuspensionPhysics_Component*> FrontWheels;
	TArray<USuspensionPhysics_Component*> RearWheels;
	TArray<USuspensionPhysics_Component*> LocalWheels = Wheels;

	//Front Wheels
	for (int32 a = 0; a < 2; a++)
	{
		USuspensionPhysics_Component* CurrentWheelToAdd = nullptr;
		XLoc = -10000000.0f;


		for (USuspensionPhysics_Component* Wheel : LocalWheels)
		{
			if (Wheel)
			{
				float CurrentXLoc = Wheel->GetComponentTransform().InverseTransformPosition(GetOwner()->GetActorLocation()).X;

				if (CurrentXLoc > XLoc)
				{
					CurrentWheelToAdd = Wheel;
					XLoc = CurrentXLoc;
				}

			}

		}

		if (CurrentWheelToAdd)
		{
			FrontWheels.Add(CurrentWheelToAdd);
			LocalWheels.RemoveAt(LocalWheels.Find(CurrentWheelToAdd));
		}

	}

	LocalWheels = Wheels;

	//Rear Wheels
	for (int32 a = 0; a < 2; a++)
	{
		USuspensionPhysics_Component* CurrentWheelToAdd = nullptr;
		XLoc = 10000000.0f;


		for (USuspensionPhysics_Component* Wheel : LocalWheels)
		{
			if (Wheel)
			{
				float CurrentXLoc = Wheel->GetComponentTransform().InverseTransformPosition(GetOwner()->GetActorLocation()).X;

				if (CurrentXLoc < XLoc)
				{
					CurrentWheelToAdd = Wheel;
					XLoc = CurrentXLoc;
				}

			}

		}

		if (CurrentWheelToAdd)
		{
			RearWheels.Add(CurrentWheelToAdd);
			LocalWheels.RemoveAt(LocalWheels.Find(CurrentWheelToAdd));
		}

	}

	LocalWheels.Empty();

	FR = FindWheel(true, FrontWheels);
	FL = FindWheel(false, FrontWheels);
	RR = FindWheel(true, RearWheels);
	RL = FindWheel(false, RearWheels);

	if (FR && FL && RR && RL)
	{
		//Switched Sides
		FR->RightSuspensionComponent = FL;
		FL->RightSuspensionComponent = FR;

		RR->RightSuspensionComponent = RL;
		RL->RightSuspensionComponent = RR;

		//Other Component
		FR->OtherSuspensionComponent = RL;
		RL->OtherSuspensionComponent = FR;

		RR->OtherSuspensionComponent = FL;
		FL->OtherSuspensionComponent = RR;

	}

}

void UWheelManager_Component::SetWheelNumbers(TArray<USuspensionPhysics_Component*> WheelComponentsToUse)
{
	for (USuspensionPhysics_Component* CurrentWheel : WheelComponentsToUse)
	{
		if (!CurrentWheel) continue;
		CurrentWheel->N_HandbrakeWheels = HandbrakeWheels.Num();
		CurrentWheel->N_Wheels = Wheels.Num();
	}

}

USuspensionPhysics_Component* UWheelManager_Component::AddWheel(FWheelDataStruct WheelData)
{
	APawn* Owner = Cast<APawn>(GetOwner());
	if (!Owner) return nullptr;

	FName CompName = *FString::SanitizeFloat(FMath::FRand());

	USuspensionPhysics_Component* NewWheel = NewObject<USuspensionPhysics_Component>(Owner, CompName);
	if (!NewWheel) return nullptr;

	NewWheel->SetWorldLocation(Owner->GetActorLocation() + Owner->GetActorForwardVector() * WheelData.WheelOffset.X + Owner->GetActorRightVector() * WheelData.WheelOffset.Y + Owner->GetActorUpVector() * WheelData.WheelOffset.Z);
	NewWheel->SetWorldRotation(Owner->GetActorRotation());
	NewWheel->SetWheelData(WheelData);
	NewWheel->AttachToComponent(Owner->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
	NewWheel->RegisterComponent();

	return NewWheel;

}

void UWheelManager_Component::UpdateWheels()
{
	if (!GetOwner()) return;

	int32 NumberOfWheels = Wheels.Num();

	TInlineComponentArray<USuspensionPhysics_Component*> SuspensionComponents;
	GetOwner()->GetComponents(SuspensionComponents);

	TArray<UActorComponent*> PrimitiveComponents = GetOwner()->GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName("Main"));
	if (PrimitiveComponents.Num() == 0) GetOwner()->GetComponents(PrimitiveComponents);

	//Mesh
	for (int32 a = 0; a < PrimitiveComponents.Num(); a++)
	{
		if (PrimitiveComponents.IsValidIndex(a))
		{

			UPrimitiveComponent* NewMesh = Cast<UPrimitiveComponent>(PrimitiveComponents[a]);
			if (NewMesh)
			{
				Mesh = NewMesh;
				break;
			}
		}

	}

	if (!Mesh) return;

	TArray<USuspensionPhysics_Component*> TempWheels;
	TArray<USuspensionPhysics_Component*> TempSteeringWheels;
	TArray<USuspensionPhysics_Component*> TempHandbrakeWheels;

	//Wheels
	for (int32 a = 0; a < SuspensionComponents.Num(); a++)
	{
		if (SuspensionComponents.IsValidIndex(a))
		{
			USuspensionPhysics_Component* Wheel = SuspensionComponents[a];
			if (Wheel)
			{
				Wheel->SetMesh(Mesh);
				Wheel->StickyTiresMultiplier = StickyTiresMultiplier;
				Wheel->StickyTiresActivationSpeed = StickyTiresActivationSpeed;
				Wheel->StickyTiresHandbrakeMultiplier = StickyTiresHandbrakeMultiplier;

				TempWheels.Add(Wheel);
				if (Wheel->NormalSteeringAngle > 0.0f) TempSteeringWheels.Add(Wheel);
				if (Wheel->AffectedByHandbrake) TempHandbrakeWheels.Add(Wheel);
			}

		}

	}

	Wheels = TempWheels;
	SteeringWheels = TempSteeringWheels;
	HandbrakeWheels = TempHandbrakeWheels;

	SetWheelNumbers(Wheels);

	if (Wheels.Num() == NumberOfWheels)
	{
		GetWheelsOnEachSide();
		SetAntiRoll();
	}

}

USuspensionPhysics_Component* UWheelManager_Component::FindWheel(bool IsRightWheel, TArray<USuspensionPhysics_Component*> WheelsToSearch)
{
	float YLoc = IsRightWheel ? -10000000.0f : 10000000.0f;
	USuspensionPhysics_Component* WheelToAdd = nullptr;

	for (USuspensionPhysics_Component* Wheel : WheelsToSearch)
	{
		if (!Wheel) continue;

		float CurrentYLoc = Wheel->GetComponentTransform().InverseTransformPosition(GetOwner()->GetActorLocation()).Y;

		if (IsRightWheel)
		{
			if (CurrentYLoc > YLoc)
			{
				WheelToAdd = Wheel;
				YLoc = CurrentYLoc;
			}

		}
		else
		{
			if (CurrentYLoc < YLoc)
			{
				WheelToAdd = Wheel;
				YLoc = CurrentYLoc;
			}

		}

	}

	return WheelToAdd;
}

void UWheelManager_Component::GetWheelsOnEachSide()
{
	TArray<USuspensionPhysics_Component*> LeftSide_Temp;
	TArray<USuspensionPhysics_Component*> RightSide_Temp;

	for (USuspensionPhysics_Component* CurrentWheel : Wheels)
	{
		if (!CurrentWheel) continue;

		float YLocation = CurrentWheel->GetComponentTransform().InverseTransformPosition(GetOwner()->GetActorLocation()).Y;

		if (YLocation < 0.0f)
		{
			LeftSide_Temp.Add(CurrentWheel);
		}
		else
		{
			RightSide_Temp.Add(CurrentWheel);
		}

	}

	LeftSide = LeftSide_Temp;
	RightSide = RightSide_Temp;

}

void UWheelManager_Component::SetAckermanSteeringLimits()
{
	for (USuspensionPhysics_Component* CurrentWheel : RightSide)
	{
		if (!CurrentWheel) continue;

		if (!CurrentWheel->InvertAckermanSteering)
		{
			CurrentWheel->AckermanLeftSide = -CurrentWheel->NormalSteeringAngle;
			CurrentWheel->AckermanRightSide = CurrentWheel->NormalSteeringAngle * CurrentWheel->AckermanRatio;
		}
		else
		{
			CurrentWheel->AckermanLeftSide = -CurrentWheel->NormalSteeringAngle * CurrentWheel->AckermanRatio;
			CurrentWheel->AckermanRightSide = CurrentWheel->NormalSteeringAngle;
		}
	}

	for (USuspensionPhysics_Component* CurrentWheel : LeftSide)
	{
		if (!CurrentWheel) continue;

		if (!CurrentWheel->InvertAckermanSteering)
		{
			CurrentWheel->AckermanLeftSide = -CurrentWheel->NormalSteeringAngle * CurrentWheel->AckermanRatio;
			CurrentWheel->AckermanRightSide = CurrentWheel->NormalSteeringAngle;
		}
		else
		{
			CurrentWheel->AckermanLeftSide = -CurrentWheel->NormalSteeringAngle;
			CurrentWheel->AckermanRightSide = CurrentWheel->NormalSteeringAngle * CurrentWheel->AckermanRatio;
		}
	}


}

void UWheelManager_Component::SetSteering(float SteeringInput)
{
	StoredSteeringInput = SteeringInput;

	for (USuspensionPhysics_Component* CurrentWheel : SteeringWheels)
	{
		if (CurrentWheel) CurrentWheel->SetSteering(SteeringInput);
	}

}

void UWheelManager_Component::SetHandbrake(bool HandbrakeInput)
{
	Handbrake = HandbrakeInput;
	for (USuspensionPhysics_Component* CurrentWheel : HandbrakeWheels)
	{
		if (CurrentWheel) CurrentWheel->SetHandbrake(HandbrakeInput);
	}
}

void UWheelManager_Component::CustomPhysics(float DeltaTime, FBodyInstance * BodyInstance)
{
	bool AnyCollision = false;

	for (USuspensionPhysics_Component* Wheel : Wheels)
	{
		if (!Wheel) continue;

		if (Wheel->Collision)
		{
			AnyCollision = true;
			break;
		}

	}

	if (!AnyCollision) return;

	FVector SidewaysSpeed = BodyInstance->GetUnrealWorldVelocity();
	FTransform BodyTransform = BodyInstance->GetUnrealWorldTransform();
	FVector BodyLocation = BodyTransform.GetLocation();

	FVector BodyForward = BodyTransform.GetUnitAxis(EAxis::X);
	FVector BodyRight = BodyTransform.GetUnitAxis(EAxis::Y);
	FVector BodyUp = BodyTransform.GetUnitAxis(EAxis::Z);

	float LockdownRatio = FMath::GetMappedRangeValueClamped(FVector2D(LockdownActivationSpeed * 0.2f, LockdownActivationSpeed), FVector2D(1.0f, 0.0f), SidewaysSpeed.Size() * 0.036f);
	float HandbrakeLockdown = Handbrake ? 1.0f : 0.0f;

	BodyInstance->SetBodyTransform(FTransform(BodyTransform.Rotator(), BodyTransform.GetLocation() - BodyForward * FVector::DotProduct(SidewaysSpeed * DeltaTime * LockdownMultiplier * LockdownRatio * HandbrakeLockdown, BodyForward) - BodyRight * FVector::DotProduct(SidewaysSpeed * DeltaTime * LockdownMultiplier * LockdownRatio, BodyRight)), ETeleportType::TeleportPhysics);

	bool IsInFullLockdown = (Handbrake && LockdownRatio > 0.5f);

		for (USuspensionPhysics_Component* Wheel : Wheels)
		{
			if (!Wheel) continue;

			Wheel->IsInLockdown = IsInFullLockdown;
		}

}


