// Copyright Blue Man

#include "VehiclePhysicsActor.h"
#include "BlueManVehiclePhysicsPrivatePCH.h"


// Sets default values
AVehiclePhysicsActor::AVehiclePhysicsActor()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AVehiclePhysicsActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AVehiclePhysicsActor, ServerThrottle); 
	DOREPLIFETIME(AVehiclePhysicsActor, ServerEngineComponent); 
	DOREPLIFETIME(AVehiclePhysicsActor, ServerHandbrake);
	DOREPLIFETIME(AVehiclePhysicsActor, ServerSteering);
	DOREPLIFETIME(AVehiclePhysicsActor, ServerWheelManager);

}

// Called every frame
void AVehiclePhysicsActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	Time = GetWorld()->GetRealTimeSeconds();

	if (StoredPredictionComponent)
	{
		if (StoredEngineComponent) StoredPredictionComponent->EngineComponent = StoredEngineComponent;
		if (StoredWheelManager) StoredPredictionComponent->WheelManager = StoredWheelManager;
		if (MeshComponent) StoredPredictionComponent->BPMesh = MeshComponent;
	}

	if(Time > NextComponentsUpdate)
	{ 
		NextComponentsUpdate = Time + ComponentsUpdateRate;

		if (!HasAuthority() && IsLocallyControlled())
		{
			if (StoredEngineComponent && StoredWheelManager) UpdateComponents(StoredEngineComponent, StoredWheelManager);
		}

		if (HasAuthority())
		{
			if (StoredEngineComponent && StoredWheelManager)
			{
				ServerEngineComponent = StoredEngineComponent;
				ServerWheelManager = StoredWheelManager;
			}
		}
	}

	if (Time > NextInputNetUpdate && IsLocallyControlled())
	{
		NextInputNetUpdate = Time + (1.0f / InputNetUpdates);

		if (MovementReplicationMethod != EMovementReplicationMethod::ServerSideReplication)
		{
			ClientHandbrake = Handbrake_Temp;
			ClientThrottle = Throttle_Temp;
			ClientSteering = Steering_Temp;

			FInputInfo NewData = FInputInfo();
			NewData.StoredThrottleInput = ClientThrottle;
			NewData.StoredSteeringInput = ClientSteering;

			if (HasAuthority() && StoredPredictionComponent && IsLocallyControlled())
			{
				SendMovementDataToAll(NewData);
			}

			if (!HasAuthority() && StoredPredictionComponent && IsLocallyControlled())
			{
				SendMovementDataToServer(NewData);
			}
		}
		else
		{
			ReplicateSteeringToServer(Steering_Temp);
			ReplicateHandbrakeToServer(Handbrake_Temp);
			ReplicateThrottleToServer(Throttle_Temp);
		}

	}

		if (MovementReplicationMethod == EMovementReplicationMethod::ServerSideReplication)
		{
			ClientThrottle = ServerThrottle;
			ClientSteering = ServerSteering;
			ClientHandbrake = ServerHandbrake;
		}

	//Throttle
	if (ServerEngineComponent) ServerEngineComponent->SetEngineThrottleInput(ClientThrottle);

	//Handbrake And Steering
	if (ServerWheelManager)
	{
		ServerWheelManager->SetHandbrake(ClientHandbrake);
		ServerWheelManager->SetSteering(ClientSteering);
	}

}

void AVehiclePhysicsActor::SetEngineThrottle(float ThrottleInput)
{
	Throttle_Temp = ThrottleInput;
}

bool AVehiclePhysicsActor::ReplicateThrottleToServer_Validate(float ThrottleToReplicate)
{
	return true;
}

void AVehiclePhysicsActor::ReplicateThrottleToServer_Implementation(float ThrottleToReplicate)
{
	ServerThrottle = ThrottleToReplicate;
}

void AVehiclePhysicsActor::SetHandbrake(bool Handbrake)
{
	Handbrake_Temp = Handbrake;
}

bool AVehiclePhysicsActor::ReplicateHandbrakeToServer_Validate(bool HandbrakeToReplicate)
{
	return true;
}

void AVehiclePhysicsActor::ReplicateHandbrakeToServer_Implementation(bool HandbrakeToReplicate)
{
	ServerHandbrake = HandbrakeToReplicate;
}

void AVehiclePhysicsActor::SetSteering(float Steering)
{
	Steering_Temp = Steering;
}

bool AVehiclePhysicsActor::ReplicateSteeringToServer_Validate(float SteeringToReplicate)
{
	return true;
}

void AVehiclePhysicsActor::ReplicateSteeringToServer_Implementation(float SteeringToReplicate)
{
	ServerSteering = SteeringToReplicate;
}

bool AVehiclePhysicsActor::SendMovementDataToServer_Validate(FInputInfo Data)
{
	return true;
}

void AVehiclePhysicsActor::SendMovementDataToServer_Implementation(FInputInfo Data)
{
	ClientThrottle = Data.StoredThrottleInput;
	ClientSteering = Data.StoredSteeringInput;


	SendMovementDataToAll(Data);
}

void AVehiclePhysicsActor::SendMovementDataToAll_Implementation(FInputInfo Data)
{
	if (!IsLocallyControlled())
	{
		ClientThrottle = Data.StoredThrottleInput;
		ClientSteering = Data.StoredSteeringInput;
	}

}

bool AVehiclePhysicsActor::UpdateComponents_Validate(ULandVehicle_EngineComponent * Engine, UWheelManager_Component * Manager)
{
	return true;
}

void AVehiclePhysicsActor::UpdateComponents_Implementation(ULandVehicle_EngineComponent * Engine, UWheelManager_Component * Manager)
{
	ServerWheelManager = Manager;
	ServerEngineComponent = Engine;
}

void AVehiclePhysicsActor::InitializeAllSystems()
{
	SetReplicateMovement(MovementReplicationMethod == EMovementReplicationMethod::ServerSideReplication);

	SearchForComponents();

}

void AVehiclePhysicsActor::SearchForComponents()
{
	//Prediction Component
	TInlineComponentArray<UClientSidePrediction_Component*> PredictionComponents;
	GetComponents(PredictionComponents);

	if (PredictionComponents.IsValidIndex(0))
	{
		UClientSidePrediction_Component* Prediction_Temp = PredictionComponents[0];
		if(Prediction_Temp) StoredPredictionComponent = Prediction_Temp;
	}

	//Drag Component
	TInlineComponentArray<ULandVehicle_DragComponent*> DragComponents;
	GetComponents(DragComponents);

	if (DragComponents.IsValidIndex(0))
	{
		ULandVehicle_DragComponent* Drag_Temp = DragComponents[0];
		if (Drag_Temp) StoredDragComponent = Drag_Temp;
	}

	//Mesh Component
	TInlineComponentArray<UPrimitiveComponent*> PrimitiveComponents;
	GetComponents(PrimitiveComponents);

	if (PrimitiveComponents.IsValidIndex(0))
	{
		UPrimitiveComponent* Mesh_Temp = PrimitiveComponents[0];
		if (Mesh_Temp) MeshComponent = Mesh_Temp;
	}

	//Wheel Manager
	TInlineComponentArray<UWheelManager_Component*> WheelManagerComponents;
	GetComponents(WheelManagerComponents);

	if (WheelManagerComponents.IsValidIndex(0))
	{
		UWheelManager_Component* Manager_Temp = WheelManagerComponents[0];
		if (Manager_Temp) StoredWheelManager = Manager_Temp;
	}

	//Engine Component
	TInlineComponentArray<ULandVehicle_EngineComponent*> EngineComponents;
	GetComponents(EngineComponents);

	if (EngineComponents.IsValidIndex(0))
	{
		ULandVehicle_EngineComponent* Engine_Temp = EngineComponents[0];
		if (Engine_Temp) StoredEngineComponent = Engine_Temp;
	}

}

