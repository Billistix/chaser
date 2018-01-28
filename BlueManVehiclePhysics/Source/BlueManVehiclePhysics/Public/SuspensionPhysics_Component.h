// Copyright Blue Man

#pragma once

#include "Components/SceneComponent.h"
#include "Curves/CurveFloat.h"
#include "WheelData.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "SuspensionPhysics_Component.generated.h"

DECLARE_DELEGATE(FCreateWheelMesh);

USTRUCT(BlueprintType)
struct FFrictionData
{
	GENERATED_USTRUCT_BODY()

		FFrictionData()
	{
		SidewaysSlip = 0.0f;
		SidewaysForceApplied = 0.0f;
		BrakingForceApplied = 0.0f;
		WheelSpin = 0.0f;
		WheelTorque = 0.0f;
		HandbrakeEnabled = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VehiclePhysics|FrictionData")
		float SidewaysSlip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VehiclePhysics|FrictionData")
		float SidewaysForceApplied;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VehiclePhysics|FrictionData")
		float BrakingForceApplied;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VehiclePhysics|FrictionData")
		float WheelSpin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VehiclePhysics|FrictionData")
		float WheelTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VehiclePhysics|FrictionData")
		bool HandbrakeEnabled;

};

/*Main component for wheel physics (friction, suspension and power delivery).*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLUEMANVEHICLEPHYSICS_API USuspensionPhysics_Component : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USuspensionPhysics_Component();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;


		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		TEnumAsByte<ECollisionChannel> SuspensionTraceChannel = ECollisionChannel::ECC_Visibility;

		//Enables the debug mode.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
			bool Debug = false;
		
		//Determines if the system should use high precision sphere trace or standard line trace.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
			bool SphereTrace = true;

		//Determines if this component should be affected by handbrake inputs.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
		bool AffectedByHandbrake = false;

		UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|FrictionData")
			FFrictionData FrictionData;
		
	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|StickyTires") <- Moved To Wheel Manager Class
			float StickyTiresMultiplier = 1.0f;

	//  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|StickyTires") <- Moved To Wheel Manager Class
			float StickyTiresActivationSpeed = 10.0f;

	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|StickyTires") <- Moved To Wheel Manager Class
			float StickyTiresHandbrakeMultiplier = 2.2f;

		//Mesh for the visual representation of the wheel.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "WheelMesh"), Category = "Settings|General|WheelMesh")
			UStaticMesh* WheelMeshComponent;

		//Mesh for collision detection.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "CollisionMesh"), Category = "Settings|General|WheelMesh")
			UStaticMesh* CollisionMesh;

		//Determines if the visual representation of the wheel should be flipped.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General|WheelMesh")
			bool FlipWheelRotation = false;

		//Size of the visual representation.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Size"), Category = "Settings|General|WheelMesh")
			float Scale = 1.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General|WheelMesh")
			FVector WheelOffset;

		//Determines if the wheel should be affected by throttle inputs.
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
			bool IsDriveWheel = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
			float InAirWheelRotationMultiplier = 0.05f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
			float AckermanRatio = 0.5f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
			bool InvertAckermanSteering = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|WheelCamber")
			bool DoNotUseRestPositionAsCamberNeautralPosition = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = DoNotUseRestPositionAsCamberNeautralPosition), Category = "Settings|WheelCamber")
			float CamberNeautralPosition = 0.4f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|WheelCamber")
			float CamberPositiveAngle = 7.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|WheelCamber")
			float CamberNegativeAngle = -4.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Steering Angle"), Category = "Settings|General")
			float NormalSteeringAngle = 40.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Steering Angle"), Category = "Settings|General")
			UCurveFloat* SteeringCurve;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
			bool UseHandbrakeGripCurve = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = UseHandbrakeGripCurve), Category = "Settings|Handbrake")
			UCurveFloat* HandbrakeGripCurve;

		UPROPERTY(BlueprintReadOnly, Category = "Settings|Handbrake")
			bool Handbrake = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
			float Handbrake_Multiplier = 2.0f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
			float Handbrake_Grip = 0.6f;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Handbrake")
			float Handbrake_GripLimit = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Braking")
		float BrakingForce = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Braking")
		float BrakingForce_Multiplier = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Braking")
		float MaxBrakingForce = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float SuspensionStiffness = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float Multiplier = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float Damping = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float TireRadius = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SuspensionSettings")
		float SuspensionLength = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SuspensionSettings")
		float RestPosition = 0.2f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresSpeedMultiplier = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresMaxForceMultiplier = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction And ForwardForce")
		float StickyTiresRollingResistanceMultiplier = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction")
		float CorneringStiffness = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Max Sideways Force"), Category = "Settings|SidewaysFriction")
		float MaxLat = 4.0f;

	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Steering Sensitivity"), Category = "Settings|SidewaysFriction")
		float SeeringSensitivity = 8.0f; // << Should be SteeringSensitivity, have to fix that at some point.

	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Steering Friction Multiplier"), Category = "Settings|SidewaysFriction")
		float SeeringFrictionMultiplier = 1.4f; // << Should be SteeringFrictionMultiplier, and also have to fix that at some point.

	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Spin Sideways Grip"), Category = "Settings|SidewaysFriction")
		float MinGrip = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SidewaysFriction")
		float FullThrottleSlipRatio = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SidewaysFriction")
		float FullThrottleSlipRatioReverse = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f), Category = "Settings|SidewaysFriction")
		float FullThrottleSlipLimit = 0.7f;

	//Determines if the sideways force should be applied at the contact point with the ground or at the suspension location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|SidewaysFriction")
		bool ApplyForceAtContactPoint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!ApplyForceAtContactPoint"), Category = "Settings|SidewaysFriction")
		float ForceOffset = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Spin Multiplier"), Category = "Settings|SidewaysFriction And ForwardForce")
		float SlipMultiplier = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f, DisplayName = "Maximum Compression Grip"), Category = "Settings|SidewaysFriction And ForwardForce")
		float CompressionGripRatioMax = 0.9f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMax = 1.0f, ClampMin = 0.0f, UIMax = 1.0f, UIMin = 0.0f, DisplayName = "Minimum Compression Grip"), Category = "Settings|SidewaysFriction And ForwardForce")
		float CompressionGripRatioMin = 0.7f;

	UPROPERTY(BlueprintReadWrite, Category = "Settings|ForwardForce")
		float EngineForce = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|ForwardForce")
		float WheelRollingResistance = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Wheel Spin Grip"), Category = "Settings|ForwardForce")
		float MinDrivewheelGrip = 0.4f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Antiroll Left/Right"), Category = "Settings|Antiroll")
		float Roll = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Antiroll Front/Back"), Category = "Settings|Antiroll")
		float RollB = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Maximum Antiroll Force "), Category = "Settings|Antiroll")
		float MaxSpring = 1.70f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BlueManVehiclePhysicsPlugin|Data")
		USuspensionPhysics_Component* RightSuspensionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BlueManVehiclePhysicsPlugin|Data")
		USuspensionPhysics_Component* OtherSuspensionComponent;

	UPROPERTY(BlueprintReadWrite, Category = "BlueManVehiclePhysicsPlugin|Data")
		bool HasEngineComponent = false;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|Data")
	FHitResult Hit;

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Functions")
		void CreateConstraint();

	UPROPERTY()
	APawn* Owner;

	FCreateWheelMesh CreateWheelMesh;

	int32 N_Wheels;

	int32 N_HandbrakeWheels;

	float WheelSuspensionOffset;

	FVector WheelSuspensionlocation;

	bool CreateWheelOnNextTick = false;

	bool Collision;

	bool IsInLockdown = false;

	float InputFromEngine_Internal;

	float RpmFromEngine_Internal;

	float MaxRpmFromEngine_Internal;

	float PowerAngle;

	float Angle_Temp;

	float PreviousCompression;

	float Force;

	float NormalForce;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float Compression;
	
	float PreviousForce;

	float Delta;

	float PreviousPosition;

	float SpringPosition;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float Angle;

	float SteeringInput;

	float RotationAngle;

	float RotationVelocity;

	float NormalRotationVelocity;

	float Speed;

	float RPMVelocity;

	float BrakingForce_Calculated;

	float PrevoiusLength;

	float AngleForSteering;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float CamberCompression;

	float LastRotation;

	bool IsInReverse = false;

	bool Previous_Reverse;

	bool SetFullSuspLength = true;

	UPROPERTY(BlueprintReadOnly, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	FVector SuspensionLocation;

	FVector VectorForce;

	UPROPERTY(BlueprintReadWrite, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float AckermanLeftSide = -100.0f;

	UPROPERTY(BlueprintReadWrite, Category = "BlueManVehiclePhysicsPlugin|OutputData")
	float AckermanRightSide = 100.0f;

	UPROPERTY()
	UStaticMeshComponent* Wheel;

	UPROPERTY()
		UStaticMeshComponent* WheelCollision;

	UFUNCTION(BlueprintPure, Category = "BlueManVehiclePhysicsPlugin|Functions")
		FWheelDataStruct GetWheelData();

	UPROPERTY()
	UPrimitiveComponent* Mesh;

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Functions")
		void DestroyWheel();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetPhysicsSubsteppingMesh"), Category = "BlueManVehiclePhysicsPlugin|Functions")
		void SetMesh(UPrimitiveComponent* Mesh_Input);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Steering Input To Suspension Component"), Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetSteering(float Steering);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Functions")
	void SetWheelData(FWheelDataStruct Data);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Handbrake Input To Suspension Component"), Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetHandbrake(bool HandbrakeInput);

	/*Check the returned object for validity before using it, it might be null*/
	UFUNCTION(BlueprintPure, Category = "BlueManVehiclePhysicsPlugin|Functions")
		UPrimitiveComponent* GetWheelMesh();

	UFUNCTION(BlueprintPure, Category = "BlueManVehiclePhysicsPlugin|Functions")
		float GetWheelSuspensionOffset();

	UFUNCTION(BlueprintPure, Category = "BlueManVehiclePhysicsPlugin|Functions")
		FVector GetWheelLocation();

	FCalculateCustomPhysics OnCaluclateCustomPhysics;

	/*Calculates main physics of the wheel.*/
	void CustomPhysics(float DeltaTime, FBodyInstance * BodyInstance, bool Rewind, UWorld* NewTraceWorld = nullptr);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
	void SetBrakingForce(float ForceInput);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetDriveForce(float ForceInput);

	UPROPERTY()
		UWorld* TraceWorld;

	private:

	void CreateWheel();

};
