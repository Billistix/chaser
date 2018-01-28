// Copyright Blue Man

#include "SuspensionPhysics_Component.h"
#include "BlueManVehiclePhysicsPrivatePCH.h"


// Sets default values for this component's properties
USuspensionPhysics_Component::USuspensionPhysics_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
//	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

}

void USuspensionPhysics_Component::BeginPlay()
{
	Super::BeginPlay();

	OnCaluclateCustomPhysics.BindUObject(this, &USuspensionPhysics_Component::CustomPhysics, false, GetWorld());
	CreateWheelMesh.BindUObject(this, &USuspensionPhysics_Component::CreateWheel);

	if(GetOwner()) Owner = Cast<APawn>(GetOwner());
	if(CreateWheelMesh.IsBound()) CreateWheelMesh.Execute();
}

void USuspensionPhysics_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Delta = DeltaTime;

	if (CreateWheelOnNextTick && CreateWheelMesh.IsBound())
	{
		CreateWheelMesh.Execute();
		CreateWheelOnNextTick = false;
	}


	if (!Mesh || !GetOwner() || !Mesh->GetBodyInstance()) return;

	FName SocketName = GetAttachSocketName();

	if (SocketName != NAME_None)
	{
		SuspensionLocation = -GetOwner()->GetActorTransform().InverseTransformPosition(GetComponentLocation());
	}
	else
	{
		SuspensionLocation = GetComponentTransform().InverseTransformPosition(GetOwner()->GetActorLocation());
	}

	Mesh->GetBodyInstance()->AddCustomPhysics(OnCaluclateCustomPhysics);

	if (Debug)
	{
		if (Collision)
		{
			DrawDebugLine(GetWorld(), Hit.TraceStart, Hit.ImpactPoint, FColor::Cyan, false, -1.0f, 0.0f, 20.0f);
			DrawDebugSphere(GetWorld(), Hit.ImpactPoint + FVector(0, 0, TireRadius), TireRadius, 2, FColor::Orange, false, -1, 0, 20);
		}
		else
		{
			DrawDebugLine(GetWorld(), Hit.TraceStart, Hit.TraceEnd, FColor::Cyan, false, -1.0f, 0.0f, 20.0f);
			DrawDebugSphere(GetWorld(), Hit.TraceEnd + FVector(0, 0, TireRadius), TireRadius, 2, FColor::Orange, false, -1, 0, 20);
		}
	}
}

void USuspensionPhysics_Component::CreateConstraint()
{
	if (!Owner) Owner = Cast<APawn>(GetOwner());
	UPhysicsConstraintComponent* Constraint = NewObject<UPhysicsConstraintComponent>(Owner);
	Constraint->ConstraintActor1 = GetOwner();
	Constraint->RegisterComponent();
	Constraint->SetWorldLocation(this->GetComponentLocation());
	Constraint->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
	Constraint->SetConstrainedComponents(Mesh, NAME_None, nullptr, NAME_None);

}

FWheelDataStruct USuspensionPhysics_Component::GetWheelData()
{
	FWheelDataStruct DataToReturn = FWheelDataStruct();
	DataToReturn.HasEngineComponent = HasEngineComponent;
	DataToReturn.FullThrottleSlipRatioReverse = FullThrottleSlipRatioReverse;
	DataToReturn.FullThrottleSlipRatio = FullThrottleSlipRatio;
	DataToReturn.FullThrottleSlipLimit = FullThrottleSlipLimit;
	DataToReturn.VisualWheelOffset = WheelOffset;
	DataToReturn.DoNotUseRestPositionAsCamberNeautralPosition = DoNotUseRestPositionAsCamberNeautralPosition;
	DataToReturn.CamberNeautralPosition = CamberNeautralPosition;
	DataToReturn.CamberPositiveAngle = CamberPositiveAngle;
	DataToReturn.CamberNegativeAngle = CamberNegativeAngle;
	DataToReturn.UseHandbrakeGripCurve = UseHandbrakeGripCurve;
	if (HandbrakeGripCurve) DataToReturn.HandbrakeGripCurve = HandbrakeGripCurve;
	DataToReturn.WheelOffset = -SuspensionLocation;
	if (SteeringCurve) DataToReturn.SteeringCurve = SteeringCurve;
	DataToReturn.InvertAckermanSteering = InvertAckermanSteering;
	DataToReturn.AckermanRatio = AckermanRatio;
	DataToReturn.AffectedByHandbrake = AffectedByHandbrake;
	DataToReturn.Debug = Debug;
	DataToReturn.BrakingForce = BrakingForce;
	DataToReturn.BrakingForce_Multiplier = BrakingForce_Multiplier;
	DataToReturn.CompressionGripRatioMax = CompressionGripRatioMax;
	DataToReturn.CompressionGripRatioMin = CompressionGripRatioMin;
	DataToReturn.CorneringStiffness = CorneringStiffness;
	DataToReturn.Damping = Damping;
	DataToReturn.EngineForce = EngineForce;
	DataToReturn.FlipWheelRotation = FlipWheelRotation;
	DataToReturn.Handbrake = Handbrake;
	DataToReturn.Handbrake_Grip = Handbrake_Grip;
	DataToReturn.Handbrake_GripLimit = Handbrake_GripLimit;
	DataToReturn.Handbrake_Multiplier = Handbrake_Multiplier;
	DataToReturn.IsDriveWheel = IsDriveWheel;
	DataToReturn.MaxBrakingForce = MaxBrakingForce;
	DataToReturn.MaxLat = MaxLat;
	DataToReturn.MaxSpring = MaxSpring;
	DataToReturn.MinDrivewheelGrip = MinDrivewheelGrip;
	DataToReturn.MinGrip = MinGrip;
	DataToReturn.Multiplier = Multiplier;
	DataToReturn.NormalSteeringAngle = NormalSteeringAngle;
	DataToReturn.RestPosition = RestPosition;
	DataToReturn.Roll = Roll;
	DataToReturn.RollB = RollB;
	DataToReturn.Scale = Scale;
	DataToReturn.SeeringFrictionMultiplier = SeeringFrictionMultiplier;
	DataToReturn.SeeringSensitivity = SeeringSensitivity;
	DataToReturn.SlipMultiplier = SlipMultiplier;
	DataToReturn.SphereTrace = SphereTrace;
	DataToReturn.SuspensionLength = SuspensionLength;
	DataToReturn.SuspensionStiffness = SuspensionStiffness;
	DataToReturn.SuspensionTraceChannel = SuspensionTraceChannel;
	DataToReturn.TireRadius = TireRadius;
	if (WheelMeshComponent) DataToReturn.WheelMeshComponent = WheelMeshComponent;
	DataToReturn.WheelRollingResistance = WheelRollingResistance;

	return DataToReturn;
}

void USuspensionPhysics_Component::DestroyWheel()
{
	TArray<USceneComponent*> Components;
	this->GetChildrenComponents(true, Components);

	for (USceneComponent* Comp : Components)
	{
		if (Comp && !Comp->IsPendingKill()) Comp->DestroyComponent();
	}

	this->DestroyComponent();

}


void USuspensionPhysics_Component::SetMesh(UPrimitiveComponent* Mesh_Input)
{
	Mesh = Mesh_Input;

}

void USuspensionPhysics_Component::SetSteering(float Steering)
{
	SteeringInput = Steering;
}

void USuspensionPhysics_Component::SetWheelData(FWheelDataStruct Data)
{
	HasEngineComponent = Data.HasEngineComponent;
	FullThrottleSlipRatioReverse = Data.FullThrottleSlipRatioReverse;
	FullThrottleSlipRatio = Data.FullThrottleSlipRatio;
	FullThrottleSlipLimit = Data.FullThrottleSlipLimit;
	WheelOffset = Data.VisualWheelOffset;
	DoNotUseRestPositionAsCamberNeautralPosition = Data.DoNotUseRestPositionAsCamberNeautralPosition;
	CamberNeautralPosition = Data.CamberNeautralPosition;
	CamberPositiveAngle = Data.CamberPositiveAngle;
	CamberNegativeAngle = Data.CamberNegativeAngle;
	UseHandbrakeGripCurve = Data.UseHandbrakeGripCurve;
	if (Data.HandbrakeGripCurve) HandbrakeGripCurve = Data.HandbrakeGripCurve;
	if (Data.SteeringCurve) SteeringCurve = Data.SteeringCurve;
	InvertAckermanSteering = Data.InvertAckermanSteering;
	AckermanRatio = Data.AckermanRatio;
	AffectedByHandbrake = Data.AffectedByHandbrake;
	Debug = Data.Debug;
	BrakingForce = Data.BrakingForce;
	BrakingForce_Multiplier = Data.BrakingForce_Multiplier;
	CompressionGripRatioMax = Data.CompressionGripRatioMax;
	CompressionGripRatioMin = Data.CompressionGripRatioMin;
	CorneringStiffness = Data.CorneringStiffness;
	Damping = Data.Damping;
	EngineForce = Data.EngineForce;
	FlipWheelRotation = Data.FlipWheelRotation;
	Handbrake = Data.Handbrake;
	Handbrake_Grip = Data.Handbrake_Grip;
	Handbrake_GripLimit = Data.Handbrake_GripLimit;
	Handbrake_Multiplier = Data.Handbrake_Multiplier;
	IsDriveWheel = Data.IsDriveWheel;
	MaxBrakingForce = Data.MaxBrakingForce;
	MaxLat = Data.MaxLat;
	MaxSpring = Data.MaxSpring;
	MinDrivewheelGrip = Data.MinDrivewheelGrip;
	MinGrip = Data.MinGrip;
	Multiplier = Data.Multiplier;
	NormalSteeringAngle = Data.NormalSteeringAngle;
	RestPosition = Data.RestPosition;
	Roll = Data.Roll;
	RollB = Data.RollB;
	Scale = Data.Scale;
	SeeringFrictionMultiplier = Data.SeeringFrictionMultiplier;
	SeeringSensitivity = Data.SeeringSensitivity;
	SlipMultiplier = Data.SlipMultiplier;
	SphereTrace = Data.SphereTrace;
	SuspensionLength = Data.SuspensionLength;
	SuspensionStiffness = Data.SuspensionStiffness;
	SuspensionTraceChannel = Data.SuspensionTraceChannel;
	TireRadius = Data.TireRadius;
	if (Data.WheelMeshComponent) WheelMeshComponent = Data.WheelMeshComponent;
	WheelRollingResistance = Data.WheelRollingResistance;

}

void USuspensionPhysics_Component::SetHandbrake(bool HandbrakeInput)
{
	Handbrake = HandbrakeInput;
}

UPrimitiveComponent* USuspensionPhysics_Component::GetWheelMesh()
{
	return Wheel;
}

float USuspensionPhysics_Component::GetWheelSuspensionOffset()
{
	return WheelSuspensionOffset;
}

FVector USuspensionPhysics_Component::GetWheelLocation()
{
	return WheelSuspensionlocation;
}

void USuspensionPhysics_Component::CustomPhysics(float DeltaTime, FBodyInstance * BodyInstance, bool Rewind, UWorld* NewTraceWorld)
{
	if (!Rewind)
	{
		Angle_Temp = FMath::Clamp(FMath::Lerp(Angle_Temp, NormalSteeringAngle * SteeringInput, SeeringSensitivity * DeltaTime), AckermanLeftSide, AckermanRightSide);

		if (SteeringCurve)
		{
			Angle = Angle_Temp * SteeringCurve->GetFloatValue(FMath::Abs(Speed * 0.036f));
		}
		else
		{
			Angle = Angle_Temp;
		}
	}

	if (Rewind && NewTraceWorld)
	{
		TraceWorld = NewTraceWorld;
	}
	else
	{
		TraceWorld = GetWorld();
	}

	if (!TraceWorld) return;

	FTransform BodyTransform = BodyInstance->GetUnrealWorldTransform();
	FVector BodyLocation = BodyTransform.GetLocation();

	FVector BodyForward = BodyTransform.GetUnitAxis(EAxis::X);
	FVector BodyRight = BodyTransform.GetUnitAxis(EAxis::Y);
	FVector BodyUp = BodyTransform.GetUnitAxis(EAxis::Z);
	FVector SuspensionLocationSub = BodyLocation + -BodyForward * SuspensionLocation.X + -BodyRight * SuspensionLocation.Y + -BodyUp * SuspensionLocation.Z;
	FVector VisualComponentLocation = GetComponentLocation() + BodyForward * WheelOffset.X + BodyRight * WheelOffset.Y + BodyUp * WheelOffset.Z;

	FVector Start = SuspensionLocationSub;
	ECollisionChannel Channel = ECollisionChannel::ECC_Visibility;
	FCollisionQueryParams Params;
	Params.bTraceAsyncScene = true;
	Params.AddIgnoredActor(GetOwner());

	FVector SuspForward = BodyForward.RotateAngleAxis(Angle, BodyUp);
	FVector SuspRight = BodyRight.RotateAngleAxis(Angle, BodyUp);

	if (!SphereTrace)
	{
		FVector End = (-BodyUp * (SuspensionLength + TireRadius)) + Start;
		Collision = TraceWorld->LineTraceSingleByChannel(Hit, Start, End, SuspensionTraceChannel, Params);
		PowerAngle = 1.0f;
	}
	else
	{
		Start = (BodyUp * (TireRadius)) + SuspensionLocationSub;
		FVector End = (-BodyUp * (SuspensionLength + TireRadius)) + Start;
		TArray<FHitResult> HitResults;
		Collision = TraceWorld->SweepMultiByChannel(HitResults, Start, End, SuspForward.ToOrientationQuat(), SuspensionTraceChannel, FCollisionShape::MakeSphere(TireRadius), Params);
		Hit = FHitResult();

		if (Collision)
		{
			Hit = HitResults[0];
			PowerAngle = FMath::Acos(FVector::DotProduct(Hit.ImpactNormal, BodyUp));
			PowerAngle = FMath::GetMappedRangeValueClamped(FVector2D(1.2f, 1.8f), FVector2D(1.0f, 0.0f), PowerAngle);
			float FisrtAngle = PowerAngle;

			if (PowerAngle <= 0)
			{
				for (FHitResult NewHit : HitResults)
				{
					PowerAngle = FMath::Acos(FVector::DotProduct(NewHit.ImpactNormal, BodyUp));
					PowerAngle = FMath::GetMappedRangeValueClamped(FVector2D(1.2f, 1.8f), FVector2D(1.0f, 0.0f), PowerAngle);
					if (PowerAngle > 0)
					{
						Hit = NewHit;
						break;
					}
					else
					{
						PowerAngle = FisrtAngle;
					}
				}
			}
		}

		Hit.TraceStart = SuspensionLocationSub;

		//if(Debug) GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Green, FString::SanitizeFloat(PowerAngle));

	}

	float WheelRotation = 0.0f;

	RotationVelocity = FVector::DotProduct(BodyInstance->GetUnrealWorldVelocityAtPoint(SuspensionLocationSub), SuspForward) / TireRadius;
	NormalRotationVelocity = IsInLockdown ? 0.0f : RotationVelocity;
	RPMVelocity = NormalRotationVelocity;
	WheelRotation = RotationVelocity;

	Speed = FVector::DotProduct(BodyInstance->GetUnrealWorldVelocityAtPoint(SuspensionLocationSub), SuspForward);

	float Difference = ((FMath::Abs(EngineForce) * 0.036f) / (TireRadius)) / 100;

	if (IsInReverse)
	{
		if (Collision)
		{
			NormalRotationVelocity = NormalRotationVelocity < -Difference ? NormalRotationVelocity : NormalRotationVelocity - Difference;
			LastRotation = NormalRotationVelocity;
		}
		else
		{
			NormalRotationVelocity = LastRotation - Difference;
			LastRotation = NormalRotationVelocity;
		}

	}
	else
	{
		if (Collision)
		{
			NormalRotationVelocity = NormalRotationVelocity > Difference ? NormalRotationVelocity : NormalRotationVelocity + Difference;
			LastRotation = NormalRotationVelocity;
		}
		else
		{
			NormalRotationVelocity = LastRotation + Difference;
			LastRotation = NormalRotationVelocity;
		}

	}

	if (!Collision)
	{
		float CalculatedValue = FMath::Abs(LastRotation) * InAirWheelRotationMultiplier;

		if (NormalRotationVelocity < 0.0f)
		{
			NormalRotationVelocity = NormalRotationVelocity + CalculatedValue;
			LastRotation = NormalRotationVelocity;
		}
		else
		{
			NormalRotationVelocity = NormalRotationVelocity - CalculatedValue;
			LastRotation = NormalRotationVelocity;
		}

	}

	float ForwardRotation = NormalRotationVelocity;


	if (Collision)
	{
		Compression = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, SuspensionLength + TireRadius), FVector2D(1.0f, 0.0f), (Hit.TraceStart - Hit.ImpactPoint).Size());
		float GripCompressionRatio = Compression;
		CamberCompression = Compression;
		Compression = FMath::GetMappedRangeValueClamped(FVector2D(RestPosition, 1.0f), FVector2D(0.0f, 1.0f), Compression);


		SpringPosition = (Hit.TraceStart - Hit.ImpactPoint).Size();
		float DamperVelocity = (SpringPosition - PreviousPosition) / DeltaTime;
		PreviousPosition = SpringPosition;
		float SpringForce = Compression * (SuspensionStiffness * 100.0f);
		SpringForce -= Damping * DamperVelocity;

		Force = SpringForce - (Damping * DamperVelocity);
		VectorForce = Force * Hit.Normal;
		NormalForce = Force;

		BodyInstance->AddImpulseAtPosition(((VectorForce * DeltaTime) * (Multiplier * PowerAngle)) * BodyInstance->GetBodyMass(), SuspensionLocationSub);

		PreviousCompression = Compression;

		bool StickyTires = FMath::Abs(Speed * 0.036f) <= StickyTiresActivationSpeed;
		
		
		N_Wheels = N_Wheels < 1 ? 1 : N_Wheels;
		FVector SidewaysSpeed = BodyInstance->GetUnrealWorldVelocityAtPoint(SuspensionLocationSub);
		FrictionData.SidewaysSlip = FMath::Abs(FVector::DotProduct(BodyInstance->GetUnrealWorldVelocityAtPoint(SuspensionLocationSub), SuspRight) * 0.036f);
		FVector SidewaysSpeed_S = BodyInstance->GetUnrealWorldVelocity();
		float SidewaysForce = (FVector::DotProduct(SidewaysSpeed, SuspRight)  * (CorneringStiffness * PowerAngle));
		float SidewaysForce_FinalCalculated = FMath::Clamp(SidewaysForce, -(MaxLat * 1000.0f), (MaxLat * 1000.0f))* FMath::GetMappedRangeValueClamped(FVector2D(0.0f, NormalSteeringAngle), FVector2D(1.0f, SeeringFrictionMultiplier), FMath::Abs(Angle));
		float StickyTiresForce = FVector::DotProduct(SidewaysSpeed, SuspRight) * 100.0f / N_Wheels;
		FrictionData.SidewaysForceApplied = SidewaysForce_FinalCalculated;

		FVector SurfaceRightVector = FRotationMatrix(FRotationMatrix::MakeFromZX(Hit.ImpactNormal, SuspForward).Rotator()).GetScaledAxis(EAxis::Y);
		FVector SurfaceForwardVector = FRotationMatrix(FRotationMatrix::MakeFromZX(Hit.ImpactNormal, SuspForward).Rotator()).GetScaledAxis(EAxis::X);

		float Grip = 0.0f;
		FrictionData.HandbrakeEnabled = Handbrake;
		if (HandbrakeGripCurve)
		{
			Grip = Handbrake ? HandbrakeGripCurve->GetFloatValue(FMath::Abs(Speed * 0.036f)) : 1.0f;
		}
		else
		{
			Grip = Handbrake ? Handbrake_Grip : 1.0f;
		}

		float EngineRatio = FMath::Abs((ForwardRotation - WheelRotation) * TireRadius * 100.0f * SlipMultiplier);
		float FrictionForceMultiplier = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, FMath::Abs(EngineForce)), FVector2D(1.0f, MinGrip), EngineRatio);
		float RpmBasedSlip = FMath::GetMappedRangeValueClamped(FVector2D(500.0f, MaxRpmFromEngine_Internal * FullThrottleSlipLimit), FVector2D(IsInReverse ? FullThrottleSlipRatioReverse : FullThrottleSlipRatio, 1.0f), RpmFromEngine_Internal);

		RpmBasedSlip = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, 1.0f), FVector2D(1.0f, RpmBasedSlip), InputFromEngine_Internal);
		if (RpmBasedSlip < FrictionForceMultiplier && IsDriveWheel && !Handbrake && HasEngineComponent) FrictionForceMultiplier = RpmBasedSlip;
		FrictionData.WheelSpin = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, 1.0f), FVector2D(1.0f, 0.0f), FrictionForceMultiplier);

		float StickyTiresRatio = FMath::GetMappedRangeValueClamped(FVector2D(StickyTiresActivationSpeed * 0.8f, StickyTiresActivationSpeed), FVector2D(1.0f, 0.0f), SidewaysSpeed.Size() * 0.036f);
		float NormalForceRatio = FMath::GetMappedRangeValueClamped(FVector2D(1.0f, 0.0f), FVector2D(0.0f, 1.0f), StickyTiresRatio);

		BodyInstance->AddImpulseAtPosition(((-SurfaceRightVector * (((SidewaysForce_FinalCalculated * NormalForceRatio * DeltaTime)* FMath::GetMappedRangeValueClamped(FVector2D(0.0f, 1.0f), FVector2D(CompressionGripRatioMin, CompressionGripRatioMax), GripCompressionRatio)) * BodyInstance->GetBodyMass())) * FrictionForceMultiplier) * Grip, ApplyForceAtContactPoint ? Hit.ImpactPoint : (BodyUp * ForceOffset) + SuspensionLocationSub);
		BodyInstance->AddImpulseAtPosition(-SuspRight * (StickyTiresForce * StickyTiresRatio * StickyTiresMultiplier) * BodyInstance->GetBodyMass()  * DeltaTime, SuspensionLocationSub);


		float EngineForceMultiplier = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, FMath::Abs(EngineForce)), FVector2D(1.0f, MinDrivewheelGrip), EngineRatio);
		float Traction = EngineForce * EngineForceMultiplier;

		if (Handbrake) Traction = 0.0f;
		FrictionData.WheelTorque = Traction;

		FrictionData.BrakingForceApplied = FMath::Clamp(BrakingForce_Calculated, -MaxBrakingForce * 100.0f, MaxBrakingForce * 100.0f) * BodyInstance->GetBodyMass();

		float RollingResistance = 0.0f;

		if (Handbrake)
		{
			N_HandbrakeWheels = N_HandbrakeWheels < 1 ? 1 : N_HandbrakeWheels;
			RollingResistance = FMath::Clamp(((-WheelRollingResistance * 100.0f) + -(Handbrake_Multiplier * 10.0f)) * (Speed * 1.0f), -Handbrake_GripLimit * 1000.0f, Handbrake_GripLimit * 1000.0f) * BodyInstance->GetBodyMass();
			float HandbrakeRollingResistance = -Speed * 20000.0 / N_HandbrakeWheels * StickyTiresHandbrakeMultiplier;
			RollingResistance = FMath::Lerp(RollingResistance, HandbrakeRollingResistance, StickyTiresRatio);
		}
		else
		{
			RollingResistance = ((-WheelRollingResistance * 100.0f) * (Speed * FMath::GetMappedRangeValueClamped(FVector2D((StickyTiresActivationSpeed / 2.0f) + ((StickyTiresActivationSpeed / 2.0f) / 2.0f), StickyTiresActivationSpeed), FVector2D(StickyTiresSpeedMultiplier * (StickyTiresRollingResistanceMultiplier * 10.0f), 1.0f), FMath::Abs(Speed * 0.036f)))) + FMath::Clamp(BrakingForce_Calculated, -MaxBrakingForce * 100.0f, MaxBrakingForce * 100.0f) * BodyInstance->GetBodyMass();
		}

		float LongitudinalForce = Traction + RollingResistance;

		BodyInstance->AddImpulseAtPosition(SurfaceForwardVector * (LongitudinalForce * DeltaTime), Hit.ImpactPoint);

		if (Wheel)
		{
			float Length = (Hit.TraceStart - Hit.ImpactPoint).Size();
			Length = Length > PrevoiusLength ? -Length : Length;
			PrevoiusLength = Length;

			WheelSuspensionOffset = Length + TireRadius;
			WheelSuspensionlocation = VisualComponentLocation + (BodyUp * WheelSuspensionOffset);
			Wheel->SetWorldLocation(WheelSuspensionlocation);

		}
		else
		{
			CreateWheelOnNextTick = true;
		}

	}
	else
	{
		if (Wheel)
		{
			float Length = (Hit.TraceStart - (Hit.TraceStart + (-BodyUp * (SuspensionLength + TireRadius)))).Size();
			Length = Length > PrevoiusLength ? -Length : Length;
			PrevoiusLength = Length;

			WheelSuspensionOffset = Length + TireRadius;
			WheelSuspensionlocation = VisualComponentLocation + (BodyUp * WheelSuspensionOffset);
			Wheel->SetWorldLocation(WheelSuspensionlocation);
		}
		else
		{
			CreateWheelOnNextTick = true;
		}

		FrictionData.SidewaysSlip = 0.0f;
		CamberCompression = 0.0f;
		Speed = FVector::DotProduct(BodyInstance->GetUnrealWorldVelocityAtPoint(SuspensionLocationSub), SuspForward);
		SpringPosition = SuspensionLength + TireRadius;
		PreviousPosition = SpringPosition;
		Compression = 0.0f;
		NormalForce = 0.0f;
	}

	if (RightSuspensionComponent && OtherSuspensionComponent)
	{
		float RollForce = FMath::Abs(NormalForce - RightSuspensionComponent->NormalForce) > 100.0f ? FMath::Clamp(((NormalForce - RightSuspensionComponent->NormalForce) * Roll), -(MaxSpring * 10000.0f), (MaxSpring * 10000.0f)) : 0.0f;
		float RollForce2 = FMath::Abs(NormalForce - OtherSuspensionComponent->NormalForce) > 100.0f ? FMath::Clamp(((NormalForce - OtherSuspensionComponent->NormalForce) * RollB), -(MaxSpring * 10000.0f), (MaxSpring * 10000.0f)) : 0.0f;

		BodyInstance->AddImpulseAtPosition(GetComponentRotation().RotateVector(FVector(0, 0, ((RollForce + RollForce2) * DeltaTime) * BodyInstance->GetBodyMass())), SuspensionLocationSub);
		PreviousForce = RollForce + RollForce2;
	}

	if (Wheel)
	{
		if (Handbrake)
		{
			ForwardRotation = 0.0f;
			NormalRotationVelocity = 0.0f;
			LastRotation = 0.0f;
		}

		RotationAngle += ForwardRotation * DeltaTime * 100.0f;
		float PreviousForwardRotation = Wheel->GetRelativeTransform().Rotator().Pitch;
		float Camber = FMath::GetMappedRangeValueClamped(FVector2D(0.0f, DoNotUseRestPositionAsCamberNeautralPosition ? CamberNeautralPosition : RestPosition), FVector2D(CamberPositiveAngle, CamberNegativeAngle), CamberCompression);
		Wheel->SetRelativeRotation(FRotator(0.0f, 0.0f, FlipWheelRotation ? Camber : -Camber));
		Wheel->AddLocalRotation(FRotator(-RotationAngle, Angle, 0.0f));

	}
	else
	{
		CreateWheelOnNextTick = true;
	}

}

void USuspensionPhysics_Component::SetBrakingForce(float ForceInput)
{
	BrakingForce_Calculated = ForceInput;
}

void USuspensionPhysics_Component::SetDriveForce(float ForceInput)
{
	EngineForce = ForceInput;
}

void USuspensionPhysics_Component::CreateWheel()
{
	if (!Owner) Owner = Cast<APawn>(GetOwner());

	if (Owner && !Wheel)
	{
		UStaticMeshComponent* WheelServer = NewObject<UStaticMeshComponent>(Owner);
		if (WheelServer && this)
		{
			WheelServer->RegisterComponent();
			WheelServer->SetWorldLocation(this->GetComponentLocation());
			WheelServer->SetWorldRotation(this->GetComponentRotation());
			WheelServer->SetWorldScale3D(FVector(Scale));
			WheelServer->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
			WheelServer->SetIsReplicated(false);
			WheelServer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			if (FlipWheelRotation) WheelServer->SetWorldScale3D(this->GetComponentScale() * -Scale);
			if (WheelMeshComponent) WheelServer->SetStaticMesh(WheelMeshComponent);

			Wheel = WheelServer;

		}

	}
}

