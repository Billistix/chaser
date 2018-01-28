// Copyright Blue Man

#pragma once

#include "Components/ActorComponent.h"
#include "Engine.h"
#include "PhysicsPublic.h"
#include "Runtime/Engine/Private/PhysicsEngine/PhysXSupport.h"
#include "PhysXIncludes.h" 
#include "SuspensionPhysics_Component.h"
#include "LandVehicle_EngineComponent.h"
#include "WheelManager_Component.h"
#include "PredictionData.h"
#include "ClientSidePrediction_Component.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FClientUpdate, FVector, RedLocation, FVector, GreenLocation, FVector, BlueLocation, FRotator, RedRotation, FRotator, GreenRotation, FRotator, BlueRotation);

/*This component provides custom physics replication.*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BLUEMANVEHICLEPHYSICS_API UClientSidePrediction_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UClientSidePrediction_Component();


	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		UPrimitiveComponent* BPMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		UWheelManager_Component* WheelManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		TArray<USuspensionPhysics_Component*> Allwheels;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		ULandVehicle_EngineComponent* EngineComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		int32 AverageContainerSize = 20;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		int32 AverageErrorTolerance = 5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		int32 ErrorLimit = 5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		float NetUpdates = 100.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		float RoundTripMultiplier = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Position")
		float AllowedError = 100.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Position")
		float ErrorCorrection = 0.1f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Position")
		float ErrorCorrectionHigh = 0.7f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Rotation")
		float AllowedError_Rotation = 20.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Rotation")
		float ErrorCorrection_Rotation = 0.1f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Rotation")
		float ErrorCorrectionHigh_Rotation = 0.7f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Wait = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Debug = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Draw = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Persistent = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Red = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Green = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
		bool Blue = false;

	UPROPERTY(BlueprintAssignable, Category = "Settings")
		FClientUpdate ClientUpdate;

	FCalculateCustomPhysics OnCaluclateCustomPhysics;

	void CustomPhysics(float DeltaTime, FBodyInstance* BodyInstance);


private:

	UPROPERTY()
	APawn* Pawn;

	int32 CurrentErrorLimit;

	TArray<int32> BufferValues;

	int32 AverageBufferSize;

	float RoundTrip;

	float LastTime;

	bool AddToBuffer = true;

	TArray<FHistoryBuffer> HistoryBuffer;

	float NextUpdate;

	float ServerTime;

	bool CanBeCorrected = true;

	bool ServerReached = false;

	TArray<FReplayData> ReplayData;

	FPhysScene* PhysicsScene;

	TArray<PxActor*> PhysxActors;

	UPROPERTY()
		UWorld* SuspensionTraceWorld;


public:

	PxScene* PScene;

	UFUNCTION(Server, Reliable, WithValidation)
	void SendServerTimeRequest(float SentTime, UPrimitiveComponent* Comp);

	UFUNCTION(Client, Reliable)
	void ClientReceiveTimeRequest(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction);

	UFUNCTION(NetMulticast, Reliable)
		void AllReceiveTimeRequest(FHistoryBufferMinimum Correction);

	void ApplyBodyTransform(FBodyInstance * Body, FHistoryBuffer DataToApply, bool ApplyVelocity = true);

	void Rewind(PxScene * PhysicsScene, float Delta);

	FHistoryBuffer GetTransformFromBody(FBodyInstance* Body);

	void CreateWorld()
	{
		if (PhysicsScene)
		{
			SuspensionTraceWorld = NewObject<UWorld>(UWorld::StaticClass());
			SuspensionTraceWorld->SetPhysicsScene(PhysicsScene);
			SuspensionTraceWorld->WorldType = EWorldType::GamePreview;
		}
	}

	void Smoothing(FBodyInstance* BodyToCorrect, FHistoryBuffer StateToCompareAgainst, bool ApplyVelocity = true, int32 Index = 0, bool DebugMessage = false);

};

