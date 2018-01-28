// Copyright Blue Man

#pragma once

#include "EngineMinimal.h"
#include "WheelData.generated.h"

/*Holds all wheel data, this struct is used on wheel creation and on destruction.*/
USTRUCT(BlueprintType)
struct FWheelDataStruct
{
	GENERATED_USTRUCT_BODY()

		FWheelDataStruct()
	{
		HasEngineComponent = false;
		FullThrottleSlipLimit = 0.7f;
		FullThrottleSlipRatioReverse = 1.0f;
		FullThrottleSlipRatio = 1.0f;
		VisualWheelOffset = FVector();
		DoNotUseRestPositionAsCamberNeautralPosition = false;
		CamberNeautralPosition = 0.15f;
		CamberPositiveAngle = 10.0f;
		CamberNegativeAngle = 0.0f;
		UseHandbrakeGripCurve = false;
		HandbrakeGripCurve = nullptr;
		WheelOffset = FVector();
		SuspensionTraceChannel = ECollisionChannel::ECC_Visibility;
		Debug = false;
		SphereTrace = true;
		AffectedByHandbrake = false;
		WheelMeshComponent = nullptr;
		FlipWheelRotation = false;
		Scale = 1.0f;
		IsDriveWheel = false;
		AckermanRatio = 0.5f;
		InvertAckermanSteering = false;
		NormalSteeringAngle = 40.0f;
		SteeringCurve = nullptr;
		Handbrake = false;
		Handbrake_Multiplier = 7000.0f;
		Handbrake_Grip = 0.6f;
		Handbrake_GripLimit = 2000.0f;
		BrakingForce = 500000.0f;
		BrakingForce_Multiplier = 2.0f;
		MaxBrakingForce = 5.0f;
		SuspensionStiffness = 1000.0f;
		Multiplier = 5.0f;
		Damping = 0.2f;
		TireRadius = 50.0f;
		SuspensionLength = 200.0f;
		RestPosition = 0.2f;
		StickyTiresActivationSpeed = 10.0f;
		StickyTiresSpeedMultiplier = 10.0f;
		StickyTiresMaxForceMultiplier = 1.5f;
		StickyTiresRollingResistanceMultiplier = 0.5f;
		CorneringStiffness = 2.0f;
		MaxLat = 4000.0f;
		SeeringSensitivity = 8.0f;
		SeeringFrictionMultiplier = 1.4f;
		MinGrip = 0.1f;
		ApplyForceAtContactPoint = false;
		SlipMultiplier = 10.0f;
		CompressionGripRatioMax = 0.9f;
		CompressionGripRatioMin = 0.7f;
		EngineForce = 0.0f;
		WheelRollingResistance = 0.1f;
		MinDrivewheelGrip = 0.4f;
		Roll = 0.4f;
		RollB = 0.2f;
		MaxSpring = 17000.0f;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General|WheelMesh")
		FVector VisualWheelOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|WheelCamber")
		bool DoNotUseRestPositionAsCamberNeautralPosition = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "CamberNeutralPosition", EditCondition = DoNotUseRestPositionAsCamberNeautralPosition), Category = "Settings|WheelCamber")
		float CamberNeautralPosition = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|WheelCamber")
		float CamberPositiveAngle = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|WheelCamber")
		float CamberNegativeAngle = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
		bool UseHandbrakeGripCurve = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = UseHandbrakeGripCurve), Category = "Settings|Handbrake")
		UCurveFloat* HandbrakeGripCurve;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		FVector WheelOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		TEnumAsByte<ECollisionChannel> SuspensionTraceChannel = ECollisionChannel::ECC_Visibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		bool Debug = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		bool SphereTrace = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		bool AffectedByHandbrake = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General|WheelMesh")
		UStaticMesh* WheelMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General|WheelMesh")
		bool FlipWheelRotation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General|WheelMesh")
		float Scale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		bool IsDriveWheel = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		float AckermanRatio = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		bool InvertAckermanSteering = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Steering Angle"), Category = "Settings|General")
		float NormalSteeringAngle = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Steering Angle"), Category = "Settings|General")
		UCurveFloat* SteeringCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
		bool Handbrake = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
		float Handbrake_Multiplier = 7000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
		float Handbrake_Grip = 0.6f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
		float Handbrake_GripLimit = 2000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Braking")
		float BrakingForce = 500000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Braking")
		float BrakingForce_Multiplier = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Braking")
		float MaxBrakingForce = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float SuspensionStiffness = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float Multiplier = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float Damping = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float TireRadius = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float SuspensionLength = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SuspensionSettings")
		float RestPosition = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresActivationSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresSpeedMultiplier = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresMaxForceMultiplier = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresRollingResistanceMultiplier = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction")
		float CorneringStiffness = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction")
		float MaxLat = 4000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "SteeringSensitivity"), Category = "Settings|SidewaysFriction")
		float SeeringSensitivity = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "SteeringFrictionMultiplier"), Category = "Settings|SidewaysFriction")
		float SeeringFrictionMultiplier = 1.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Spin Sideways Grip"), Category = "Settings|SidewaysFriction")
		float MinGrip = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction")
		bool ApplyForceAtContactPoint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Spin Multiplier"), Category = "Settings|SidewaysFriction And ForwardForce")
		float SlipMultiplier = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f, DisplayName = "Maximum Compression Grip"), Category = "Settings|SidewaysFriction And ForwardForce")
		float CompressionGripRatioMax = 0.9f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f, DisplayName = "Minimum Compression Grip"), Category = "Settings|SidewaysFriction And ForwardForce")
		float CompressionGripRatioMin = 0.7f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Settings|ForwardForce")
		float EngineForce = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|ForwardForce")
		float WheelRollingResistance = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Spin Grip"), Category = "Settings|ForwardForce")
		float MinDrivewheelGrip = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Antiroll Left/Right"), Category = "Settings|Antiroll")
		float Roll = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Antiroll Front/Back"), Category = "Settings|Antiroll")
		float RollB = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Maximum Antiroll Force "), Category = "Settings|Antiroll")
		float MaxSpring = 17000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SidewaysFriction")
		float FullThrottleSlipRatio = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SidewaysFriction")
		float FullThrottleSlipRatioReverse = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SidewaysFriction")
		float FullThrottleSlipLimit = 0.7f;

	UPROPERTY(BlueprintReadWrite, Category = "BlueManVehiclePhysicsPlugin|Data")
		bool HasEngineComponent = false;

};

