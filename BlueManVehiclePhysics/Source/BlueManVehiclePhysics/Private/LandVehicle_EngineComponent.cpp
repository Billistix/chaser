// Copyright Blue Man

#include "LandVehicle_EngineComponent.h"
#include "BlueManVehiclePhysicsPrivatePCH.h"


// Sets default values for this component's properties
ULandVehicle_EngineComponent::ULandVehicle_EngineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
//	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	NeutralGear.GearName = "Neutral";
	NeutralGear.GearNumber = 0;
	NeutralGear.GearRatio = 0.0f;

}

void ULandVehicle_EngineComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULandVehicle_EngineComponent, CurrentGear);

}

#if WITH_EDITOR
void ULandVehicle_EngineComponent::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{

	if (Gears.Num() < 2)
	{
		if (Gears.Num() <= 0)
		{
			Gears.Empty();

			Gears.Add(FGears(1.0f, "1", 1, 0.9f, 0.2f));
			Gears.Add(FGears(-1.0f, "Reverse", -1, 0.9f, 0.2f));
		}
		else if (Gears.Num() == 1)
		{
			Gears[0].GearNumber = 1;
			Gears[0].GearName = "1";
			Gears.Add(FGears(-1.0f, "Reverse", -1 , 0.9f, 0.2f));
		}

	}
	else
	{
		for (int32 a = 0; a < Gears.Num(); a++)
		{
			Gears[a].GearNumber = a + 1;
			Gears[a].GearName = FString::FromInt(a + 1);
		}

		Gears[Gears.Num() - 1].GearNumber = -1;
		Gears[Gears.Num() - 1].GearName = "Reverse";

	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

// Called when the game starts
void ULandVehicle_EngineComponent::BeginPlay()
{
	Super::BeginPlay();

	OnCaluclateCustomPhysics.BindUObject(this, &ULandVehicle_EngineComponent::CustomPhysics);

	FGears::SetValueFromOtherGear(CurrentGear, Gears[0]);

	if (!GetOwner()) return;

	FindMesh();
}


void ULandVehicle_EngineComponent::SearchForWheels()
{
	TInlineComponentArray<USuspensionPhysics_Component*> Components;
	GetOwner()->GetComponents(Components);

	TArray<USuspensionPhysics_Component*> TempDriveWheels;
	TArray<USuspensionPhysics_Component*> TempWheels;

	//Drive Wheels
	for (int32 a = 0; a < Components.Num(); a++)
	{

		if (Components.IsValidIndex(a))
		{
			USuspensionPhysics_Component* Wheel = Components[a];
			if(Wheel) TempWheels.Add(Wheel);

			if (Wheel && Wheel->IsDriveWheel)
			{
				TempDriveWheels.Add(Wheel);
			}
		}

	}

	AllWheels = TempWheels;
	DriveWheels = TempDriveWheels;
}

void ULandVehicle_EngineComponent::FindMesh()
{
	TArray<UActorComponent*> Components;
	Components = GetOwner()->GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName("Main"));
	if (Components.Num() == 0) GetOwner()->GetComponents(Components);

	//Mesh
	for (int32 a = 0; a < Components.Num(); a++)
	{
		if (Components.IsValidIndex(a))
		{

			UPrimitiveComponent* NewMesh = Cast<UPrimitiveComponent>(Components[a]);
			if (NewMesh)
			{
				Mesh = NewMesh;
				break;
			}
		}

	}

}

// Called every frame
void ULandVehicle_EngineComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	SearchForWheels();
	if(!Mesh) FindMesh();

	//APawn* Owner = Cast<APawn>(GetOwner());

	if (SetGear && AutomaticGearbox)
	{
		if (DriveWheels.Num() == 0)
		{
			if (CurrentGear.GearNumber != 1)
			{
				for (FGears NewGear : Gears)
				{
					if (NewGear.GearNumber == 1)
					{
						SetGear = false;
						FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
						FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
						FTimerHandle GearHandle;
						GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
						GearChangeStarted.Broadcast();
						break;

					}

				}
			}

		}
		else
		{
			if (Braking < 0.0f && Speed * 0.036f < ReverseSpeed && CurrentGear.GearNumber > 0)
			{
				for (FGears NewGear : Gears)
				{
					if (NewGear.GearNumber == -1)
					{
						SetGear = false;
						FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
						FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
						FTimerHandle GearHandle;
						GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
						GearChangeStarted.Broadcast();
						break;

					}

				}
			}
			else if (-Throttle < 0.0f && Speed * 0.036f > -ReverseSpeed && CurrentGear.GearNumber < 0)
			{
				for (FGears NewGear : Gears)
				{
					if (NewGear.GearNumber == 1)
					{
						SetGear = false;
						FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
						FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
						FTimerHandle GearHandle;
						GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
						GearChangeStarted.Broadcast();
						break;

					}

				}

			}
			else if (RPM > FMath::Clamp(MaxRPM * CurrentGear.GearUpRatio, 700.0f, MaxRPM))
			{
				if (CurrentGear.GearNumber != Gears.Num() - 1)
				{
					for (FGears NewGear : Gears)
					{
						if (NewGear.GearNumber == CurrentGear.GearNumber + 1)
						{
							SetGear = false;
							FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
							FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
							FTimerHandle GearHandle;
							GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
							GearChangeStarted.Broadcast();
							break;

						}

					}

				}


			}
			else if (RPM < FMath::Clamp(MaxRPM * CurrentGear.GearDownRatio, 700.0f, MaxRPM))
			{
				if (CurrentGear.GearNumber != 1)
				{
					for (FGears NewGear : Gears)
					{
						if (NewGear.GearNumber == CurrentGear.GearNumber - 1)
						{
							SetGear = false;
							FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
							FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
							FTimerHandle GearHandle;
							GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
							GearChangeStarted.Broadcast();
							break;

						}

					}

				}

			}
		}
	}
	
	if (!Mesh || !Mesh->GetBodyInstance()) return;

	Mesh->GetBodyInstance()->AddCustomPhysics(OnCaluclateCustomPhysics);

}

void ULandVehicle_EngineComponent::GearChange()
{
	FGears::SetValueFromOtherGear(CurrentGear, NewGearToSet);
	//GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Cyan, FString::SanitizeFloat(CurrentGear.GearUpRatio));
	FTimerHandle GearHandle;
	GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearReset, GearChangeTime * 2.0f, false);
	GearChangeCompleted.Broadcast();

}

void ULandVehicle_EngineComponent::GearReset()
{
	SetGear = true;

}

void ULandVehicle_EngineComponent::SetEngineThrottleInput(float ThrottleInput)
{
	Input = ThrottleInput;
	Input = FMath::Clamp(Input, -1.0f, 1.0f);

	if (CurrentGear.GearNumber > -1)
	{
		Throttle = FMath::Lerp(Throttle, 1.0f * Input, ThrottleSensitivity * GetWorld()->DeltaTimeSeconds);
		Braking = Input < 0.0f ? FMath::Lerp(Braking, 1.0f * Input, (ThrottleSensitivity * 2.0f) * GetWorld()->DeltaTimeSeconds) : Input;
	}
	else
	{
		Throttle = Input > 0.0f ? FMath::Lerp(Throttle, 1.0f * Input, (ThrottleSensitivity * 2.0f) * GetWorld()->DeltaTimeSeconds) : Input;
		Braking = FMath::Lerp(Braking, 1.0f * Input, ThrottleSensitivity * GetWorld()->DeltaTimeSeconds);
	}

	Throttle = FMath::Clamp(Throttle, 0.0f, 1.0f);
	Braking = FMath::Clamp(Braking, -1.0f, 0.0f);
}

void ULandVehicle_EngineComponent::GearUp()
{
	if (!SetGear || AutomaticGearbox) return;

	int32 NextGearNumber = 0;
	if (CurrentGear.GearNumber == -1)
	{
		NextGearNumber = 1;
	}
	else
	{
		NextGearNumber = CurrentGear.GearNumber + 1;
	}

	if (CurrentGear.GearNumber != Gears.Num() - 1)
	{
		for (FGears NewGear : Gears)
		{
			if (NewGear.GearNumber == NextGearNumber)
			{
				SetGear = false;
				FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
				FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
				FTimerHandle GearHandle;
				GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
				GearChangeStarted.Broadcast();
				break;

			}

		}

	}

}

void ULandVehicle_EngineComponent::SetGearNumber(int32 GearNumber)
{
	if (!SetGear || AutomaticGearbox) return;

	if (GearNumber == 0)
	{
		SetGear = false;
		FGears::SetValueFromOtherGear(NewGearToSet, NeutralGear);
		FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
		FTimerHandle GearHandle;
		GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
		GearChangeStarted.Broadcast();
		return;
	}

		for (FGears NewGear : Gears)
		{
			if (NewGear.GearNumber == GearNumber)
			{
				SetGear = false;
				FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
				FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
				FTimerHandle GearHandle;
				GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
				GearChangeStarted.Broadcast();
				break;
	
			}
	
		}
}


void ULandVehicle_EngineComponent::GearDown()
{
	if (!SetGear || AutomaticGearbox) return;
	if (CurrentGear.GearNumber == -1) return;

	int32 NextGearNumber = 0;
	if (CurrentGear.GearNumber == 1)
	{
		NextGearNumber = -1;
	}
	else
	{
		NextGearNumber = CurrentGear.GearNumber - 1;
	}

		for (FGears NewGear : Gears)
		{
			if (NewGear.GearNumber == NextGearNumber)
			{
				SetGear = false;
				FGears::SetValueFromOtherGear(NewGearToSet, NewGear);
				FGears::SetValueFromOtherGear(CurrentGear, NeutralGear);
				FTimerHandle GearHandle;
				GetWorld()->GetTimerManager().SetTimer(GearHandle, this, &ULandVehicle_EngineComponent::GearChange, GearChangeTime, false);
				GearChangeStarted.Broadcast();
				break;

			}

		}
}

void ULandVehicle_EngineComponent::CustomPhysics(float DeltaTime, FBodyInstance * BodyInstance)
{
	//Engine Calculation
	if (!TorqueCurve) return;

	float RotationRates = 0.0f;
	float WheelRadius = 0.0f;
	float CurrentSpeed = 0.0f;

	for (int32 a = 0; a < AllWheels.Num(); a++)
	{
		if (AllWheels.IsValidIndex(a) && AllWheels[a]) CurrentSpeed = CurrentSpeed + AllWheels[a]->Speed;
	}

	for (int32 a = 0; a < DriveWheels.Num(); a++)
	{
		if(DriveWheels.IsValidIndex(a) && DriveWheels[a]) RotationRates = RotationRates + DriveWheels[a]->NormalRotationVelocity * FMath::GetMappedRangeValueClamped(FVector2D(1.0f, 0.0f), FVector2D(0.0f, 1.0f), DriveWheels[a]->Compression);
		if (DriveWheels.IsValidIndex(a) && DriveWheels[a]) WheelRadius = WheelRadius + DriveWheels[a]->TireRadius;
	}

	Speed = CurrentSpeed / AllWheels.Num();
	SpeedKPH = Speed * 0.036f;
	WheelRadius = WheelRadius / DriveWheels.Num();

	RPM = (RotationRates / DriveWheels.Num()) * FMath::Abs(CurrentGear.GearRatio) * DifferentialRatio * 60 / 2 * PI;
	RPM = FMath::Abs(RPM);
	RPM = FMath::Clamp(RPM * RPMMultiplier, 500.0f, MaxRPM);

	float EngineTorque = (TorqueCurve->GetFloatValue(RPM) * 10000.0f) / DriveWheels.Num();
	float ThrottleValue = CurrentGear.GearNumber != -1 ? Throttle : -Braking;
	float DriveForce = (EngineTorque * CurrentGear.GearRatio * DifferentialRatio * TransmissionEfficiency / WheelRadius) *  ThrottleValue;

	float MaxSpeedMultiplier = 1.0f / CurrentGear.GearRatio;
	float DriveForceMultiplier = CurrentGear.GearNumber != -1 ? FMath::GetMappedRangeValueClamped(FVector2D(MaxForwardSpeed * MaxSpeedMultiplier, MaxForwardSpeed * FMath::Clamp(MaxSpeedMultiplier * 1.5f, 0.0f, 1.0f)), FVector2D(1.0f, 0.2f), SpeedKPH) : FMath::GetMappedRangeValueClamped(FVector2D(-MaxSpeedInReverse * 0.4f, -MaxSpeedInReverse), FVector2D(1.0f, 0.0f), SpeedKPH);
	DriveForce = DriveForce * DriveForceMultiplier;

	float BrakingValue = CurrentGear.GearNumber != -1 ? Braking : -Throttle;
	float BrakingSpeedMultiplier = FMath::GetMappedRangeValueClamped(FVector2D(0.5f, 5.0f), FVector2D(0.0f, 1.0f), FMath::Abs(SpeedKPH));

	for (int32 a = 0; a < AllWheels.Num(); a++)
	{
		if (AllWheels.IsValidIndex(a) && AllWheels[a])
		{	
			if (CurrentGear.GearNumber != 0) AllWheels[a]->IsInReverse = CurrentGear.GearNumber == -1;
			AllWheels[a]->InputFromEngine_Internal = ThrottleValue;
			AllWheels[a]->RpmFromEngine_Internal = RPM;
			AllWheels[a]->MaxRpmFromEngine_Internal = MaxRPM;
			AllWheels[a]->HasEngineComponent = true;

			if (AllWheels[a]->IsDriveWheel)
			{

				AllWheels[a]->SetDriveForce(DriveForce);
				AllWheels[a]->SetBrakingForce((AllWheels[a]->Speed * BrakingSpeedMultiplier) * (AllWheels[a]->BrakingForce * 100.0f) * AllWheels[a]->BrakingForce_Multiplier * BrakingValue);
			}
			else
			{
				AllWheels[a]->SetBrakingForce((AllWheels[a]->Speed * BrakingSpeedMultiplier) * (AllWheels[a]->BrakingForce * 100.0f) * AllWheels[a]->BrakingForce_Multiplier * BrakingValue);

			}

		}

	}
}

