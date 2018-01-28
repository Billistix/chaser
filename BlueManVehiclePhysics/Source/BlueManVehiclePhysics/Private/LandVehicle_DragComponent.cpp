// Copyright Blue Man

#include "LandVehicle_DragComponent.h"
#include "BlueManVehiclePhysicsPrivatePCH.h"


// Sets default values for this component's properties
ULandVehicle_DragComponent::ULandVehicle_DragComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
//	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	

}

// Called when the game starts
void ULandVehicle_DragComponent::BeginPlay()
{
	Super::BeginPlay();

	OnCaluclateCustomPhysics.BindUObject(this, &ULandVehicle_DragComponent::CustomPhysics);

	if (!GetOwner()) return;

	TArray<UActorComponent*> Components;
	Components = GetOwner()->GetComponentsByTag(UPrimitiveComponent::StaticClass(), FName("Main"));
	if (Components.Num() == 0) GetOwner()->GetComponents(Components);
	
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
void ULandVehicle_DragComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (!Mesh || !Mesh->GetBodyInstance()) return;

	Mesh->GetBodyInstance()->AddCustomPhysics(OnCaluclateCustomPhysics);

}

void ULandVehicle_DragComponent::CustomPhysics(float DeltaTime, FBodyInstance * BodyInstance)
{
	FTransform BodyTransform = BodyInstance->GetUnrealWorldTransform();
	FVector BodyLocation = BodyTransform.GetLocation();

	FVector BodyForward = BodyTransform.GetUnitAxis(EAxis::X);
	FVector BodyRight = BodyTransform.GetUnitAxis(EAxis::Y);
	FVector BodyUp = BodyTransform.GetUnitAxis(EAxis::Z);

	float BodySpeed = BodyInstance->GetUnrealWorldVelocityAtPoint(BodyLocation).Size() * 0.036;
	FVector AirResistance = (BodyInstance->GetUnrealWorldVelocityAtPoint(BodyLocation).GetSafeNormal() * BodySpeed * AirResistanceMultiplier);

	BodyInstance->AddForceAtPosition(-AirResistance * BodyInstance->GetBodyMass(), BodyLocation, false);
	
	if (Debug)
	{
		DrawDebugLine(GetWorld(), BodyInstance->GetCOMPosition(), (BodyUp * 500.0f) + BodyInstance->GetCOMPosition(), FColor::Orange, false, -1.0f, 0.0f, 20.0f);
		DrawDebugLine(GetWorld(), BodyLocation, (BodyInstance->GetUnrealWorldVelocityAtPoint(BodyLocation) + BodyLocation), FColor::Cyan, false, -1.0f, 0.0f, 20.0f);
	}

}

