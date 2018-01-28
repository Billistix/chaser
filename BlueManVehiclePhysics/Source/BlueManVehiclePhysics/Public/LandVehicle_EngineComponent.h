// Copyright Blue Man

#pragma once

#include "Components/SceneComponent.h"
#include "SuspensionPhysics_Component.h"
#include "Curves/CurveFloat.h"
#include "LandVehicle_EngineComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGearChangeStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGearChangeCompleted);

USTRUCT(BlueprintType)
struct FGears
{
	GENERATED_USTRUCT_BODY()

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gears")
		float GearRatio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gears")
		float GearUpRatio = 0.8f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gears")
		float GearDownRatio = 0.2f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gears")
		FString GearName;

	UPROPERTY()
		int32 GearNumber;

	FGears()
	{
		GearRatio = 1;
		GearName = "None";
		GearNumber = 0;
		GearUpRatio = 0.8f;
		GearDownRatio = 0.4f;
	}

	FGears(float GearRatio_Private, FString GearName_Private, int32 GearNumber_Private, float GearUpRatio_Private, float GearDownRatio_Private)
	{
		GearRatio = GearRatio_Private;
		GearName = GearName_Private;
		GearNumber = GearNumber_Private;
		GearUpRatio = GearUpRatio_Private;
		GearDownRatio = GearDownRatio_Private;
	}

	static bool IsEqual(FGears GearToCompare, FGears OtherGear)
	{
		if (GearToCompare.GearName == OtherGear.GearName && GearToCompare.GearNumber == OtherGear.GearNumber && GearToCompare.GearRatio == OtherGear.GearRatio && GearToCompare.GearUpRatio == OtherGear.GearUpRatio && GearToCompare.GearDownRatio == OtherGear.GearDownRatio)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	static bool IsGearNumberEqual(FGears GearToCompare, FGears OtherGear)
	{
		if (GearToCompare.GearNumber == OtherGear.GearNumber)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	static void SetValueFromOtherGear(FGears &GearToChange, FGears NewGearValue)
	{
		GearToChange.GearName = NewGearValue.GearName;
		GearToChange.GearNumber = NewGearValue.GearNumber;
		GearToChange.GearRatio = NewGearValue.GearRatio;
		GearToChange.GearUpRatio = NewGearValue.GearUpRatio;
		GearToChange.GearDownRatio = NewGearValue.GearDownRatio;
	}

};



/*Complete gearbox and engine calculation/simulation. */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLUEMANVEHICLEPHYSICS_API ULandVehicle_EngineComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULandVehicle_EngineComponent();

	// Called when the game starts
	virtual void BeginPlay() override;

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

#if WITH_EDITOR

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

	FCalculateCustomPhysics OnCaluclateCustomPhysics;

	void CustomPhysics(float DeltaTime, FBodyInstance* BodyInstance);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FGearChangeStarted GearChangeStarted;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FGearChangeCompleted GearChangeCompleted;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Settings")
		UPrimitiveComponent* Mesh;

	//The torque curve to read the values from, it can be changed at runtime.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		UCurveFloat* TorqueCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		bool AutomaticGearbox = true;

	//The minimum speed at which the current gear is switched to reverse or first gear.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Minimum Speed"), Category = "Settings")
		float ReverseSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		float MaxSpeedInReverse = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		float MaxForwardSpeed = 250.0f;

	//This is the maximum allowed engine RPM.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Engine")
		float MaxRPM = 15000.0f;

	//This is the maximum allowed engine RPM.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Engine")
		float RPMMultiplier = 0.5f;

	//This indicates how much energy is transferred.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Engine")
		float TransmissionEfficiency = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Engine")
		float DifferentialRatio = 2.1f;

	//This indicates how much time is needed to switch to another gear.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Gears")
		float GearChangeTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		float ThrottleSensitivity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Gears")
		TArray<FGears> Gears;

	UPROPERTY()
	TArray<USuspensionPhysics_Component*> DriveWheels;

	UPROPERTY()
	TArray<USuspensionPhysics_Component*> AllWheels;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float RPM;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	FGears CurrentGear;

	float Throttle;

	float Braking;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float Speed;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
		float SpeedKPH;

	FGears NewGearToSet;

	FGears NeutralGear;

	bool SetGear = true;

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetEngineThrottleInput(float ThrottleInput);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void GearUp();

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetGearNumber(int32 GearNumber);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void GearDown();

	/*Called on gear change.*/
	void GearChange();

	/*Called on gear reset.*/
	void GearReset();

private:

	float Input;

	/*Does a search for wheels.*/
	void SearchForWheels();

	/*Does a search for primitive components.*/
	void FindMesh();

};
