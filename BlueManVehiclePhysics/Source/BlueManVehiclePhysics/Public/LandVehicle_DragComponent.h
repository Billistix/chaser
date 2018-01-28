// Copyright Blue Man

#pragma once

#include "Components/SceneComponent.h"
#include "LandVehicle_DragComponent.generated.h"

/*Used to simulate drag on the vehicle using this component.*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLUEMANVEHICLEPHYSICS_API ULandVehicle_DragComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULandVehicle_DragComponent();


	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	//Enables debug view.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		bool Debug = false;

	//Force multiplier, it can be use to make air resistance stronger.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		float AirResistanceMultiplier = 2.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Settings")
		UPrimitiveComponent* Mesh;

	FCalculateCustomPhysics OnCaluclateCustomPhysics;

	/*Main calculation for drag physics.*/
	void CustomPhysics(float DeltaTime, FBodyInstance* BodyInstance);

};
