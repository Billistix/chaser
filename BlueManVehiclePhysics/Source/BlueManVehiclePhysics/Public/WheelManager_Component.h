// Copyright Blue Man

#pragma once


#include "Components/ActorComponent.h"
#include "SuspensionPhysics_Component.h"
#include "WheelData.h"
#include "WheelManager_Component.generated.h"


/*Keeps track off all wheels and it provides them with the required data.*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLUEMANVEHICLEPHYSICS_API UWheelManager_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWheelManager_Component();

#if WITH_EDITOR

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	/*Does a search for Primitive components and wheels and updates them.*/
	void SetStaticMesh();

	/*Sets the required data for anti roll system to work.*/
	void SetAntiRoll();

	void SetWheelNumbers(TArray<USuspensionPhysics_Component*> WheelComponentsToUse);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|StickyTires")
		float StickyTiresMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|StickyTires")
		float StickyTiresActivationSpeed = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|StickyTires")
		float StickyTiresHandbrakeMultiplier = 2.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Lockdown")
		float LockdownActivationSpeed = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Lockdown")
		float LockdownMultiplier = 1.0f;

	/*Create a new wheel from Wheel Data.*/
	UFUNCTION(BlueprintCallable, Category = "BlueManVehiclePhysicsPlugin|Functions")
		USuspensionPhysics_Component* AddWheel(FWheelDataStruct WheelData);

	UPROPERTY()
		TArray<USuspensionPhysics_Component*> Wheels;

	UPROPERTY()
		TArray<USuspensionPhysics_Component*> SteeringWheels;

	UPROPERTY()
		TArray<USuspensionPhysics_Component*> HandbrakeWheels;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Steering Input To Wheel Manager") , Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetSteering(float SteeringInput);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Handbrake Input To Wheel Manager"), Category = "BlueManVehiclePhysicsPlugin|Controls")
		void SetHandbrake(bool HandbrakeInput);


private:

	void CustomPhysics(float DeltaTime, FBodyInstance * BodyInstance);

	bool Handbrake = false;

	FCalculateCustomPhysics OnCaluclateCustomPhysics;

	TArray<float> Collisions;

	UPROPERTY()
		UPrimitiveComponent* Mesh;

	/*Does a search for Primitive components and wheels and updates them.*/
	void UpdateWheels();

	
	USuspensionPhysics_Component* FindWheel(bool IsRightWheel, TArray<USuspensionPhysics_Component*> WheelsToSearch);

	UPROPERTY()
	TArray<USuspensionPhysics_Component*> LeftSide;
	
	UPROPERTY()
	TArray<USuspensionPhysics_Component*> RightSide;

	/*Finds right wheels for anti roll system.*/
	void GetWheelsOnEachSide();

	/*Sets ackerman limits for steering wheels.*/
	void SetAckermanSteeringLimits();

	float StoredSteeringInput;


};

