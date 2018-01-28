// Copyright Blue Man

#pragma once

#include "GameFramework/Pawn.h"
#include "LandVehicle_EngineComponent.h"
#include "SuspensionPhysics_Component.h"
#include "LandVehicle_DragComponent.h"
#include "ClientSidePrediction_Component.h"
#include "LandVehicle_EngineComponent.h"
#include "VehiclePhysicsActor.generated.h"

UENUM(BlueprintType)
enum class EMovementReplicationMethod : uint8
{
	ClientSidePredictionAntiCheat UMETA(DisplayName = "Client Side Prediction with Replay/Rewind"),
	ServerSideReplication

};

/*Controls the main functions of the vehicle, it has built in replication.*/
UCLASS(DisplayName = "VehiclePhysicsPawn")
class BLUEMANVEHICLEPHYSICS_API AVehiclePhysicsActor : public APawn
{
	GENERATED_BODY()

public:

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;


	// Sets default values for this pawn's properties
	AVehiclePhysicsActor();
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		int32 InputNetUpdates = 30;

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetEngineThrottle(float ThrottleInput);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetHandbrake(bool Handbrake);

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetSteering(float Steering);

	UFUNCTION(Server, Reliable, WithValidation)
		void ReplicateThrottleToServer(float ThrottleToReplicate);

	UFUNCTION(Server, Reliable, WithValidation)
		void ReplicateHandbrakeToServer(bool HandbrakeToReplicate);

	UFUNCTION(Server, Reliable, WithValidation)
		void ReplicateSteeringToServer(float SteeringToReplicate);

		float ClientThrottle;

		bool ClientHandbrake;

		float ClientSteering;

	UPROPERTY(Replicated)
		float ServerThrottle;

	UPROPERTY(Replicated)
		bool ServerHandbrake;

	UPROPERTY(Replicated)
		float ServerSteering;

	UPROPERTY(Replicated)
		ULandVehicle_EngineComponent* ServerEngineComponent;

	UPROPERTY(Replicated)
		UWheelManager_Component* ServerWheelManager;

	UPROPERTY()
	ULandVehicle_EngineComponent* EngineComponent;

	UFUNCTION(Server, Reliable, WithValidation)
	void SendMovementDataToServer(FInputInfo Data);

	UFUNCTION(NetMulticast, Reliable)
		void SendMovementDataToAll(FInputInfo Data);

	UFUNCTION(Server, Reliable, WithValidation)
		void UpdateComponents(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
		EMovementReplicationMethod MovementReplicationMethod = EMovementReplicationMethod::ServerSideReplication;

	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Initialization")
		void InitializeAllSystems();

	int64 ID;

private:

	float Throttle_Temp;

	float Steering_Temp;

	bool Handbrake_Temp;

	float NextInputNetUpdate = 0.0f;

	float ComponentsUpdateRate = 10.0f;

	float NextComponentsUpdate = 0.0f;

	float Time;

	UPROPERTY()
	UClientSidePrediction_Component* StoredPredictionComponent;

	UPROPERTY()
	ULandVehicle_DragComponent* StoredDragComponent;

	UPROPERTY()
	UPrimitiveComponent* MeshComponent;

	UPROPERTY()
	UWheelManager_Component* StoredWheelManager;

	UPROPERTY()
	ULandVehicle_EngineComponent* StoredEngineComponent;

	/*Does a search for all required components.*/
	void SearchForComponents();

};
