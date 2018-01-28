// Copyright Blue Man

#pragma once

#include "LandVehicle_EngineComponent.h"
#include "PredictionData.generated.h"


/*Holds all the data for Client side prediction to work.*/
USTRUCT(BlueprintType)
struct FHistoryBuffer
{
	GENERATED_BODY()

		FHistoryBuffer()
	{
		Wheels = TArray<USuspensionPhysics_Component*>();
		SteeringWheels = TArray<USuspensionPhysics_Component*>();
		SuspensionPositions = TArray<float>();
		SteeringPerWheel = TArray<float>();
		EngineForcePerWheel = TArray<float>();
		BrakingForcePerWheel = TArray<float>();
		StoredLocation = FVector();
		StoredLinearVelocity = FVector();
		StoredAngularVelocity = FVector();
		StoredRotation = FRotator();
		TimeStamp = 0.f;
		StoredDeltaTime = 0.f;
		TimeStampOffset = 0.f;
		StoredSteeringInput = 0.f;
		StoredThrottleInput = 0.f;
		StoredBrakingInput = 0.f;
		CurrentGear = FGears();
	}

	UPROPERTY()
		TArray<USuspensionPhysics_Component*> Wheels;

	UPROPERTY()
		TArray<USuspensionPhysics_Component*> SteeringWheels;

	UPROPERTY()
		TArray<float> SuspensionPositions;

	UPROPERTY()
		TArray<float> SteeringPerWheel;

	UPROPERTY()
		TArray<float> EngineForcePerWheel;

	UPROPERTY()
		TArray<float> BrakingForcePerWheel;

	UPROPERTY()
		FVector StoredLocation;

	UPROPERTY()
		FVector StoredLinearVelocity;

	UPROPERTY()
		FVector StoredAngularVelocity;

	UPROPERTY()
		FRotator StoredRotation;

	UPROPERTY()
		float TimeStamp;

	UPROPERTY()
		float StoredDeltaTime;

	UPROPERTY()
		float TimeStampOffset;

	UPROPERTY()
		float StoredSteeringInput;

	UPROPERTY()
		float StoredThrottleInput;

	UPROPERTY()
		float StoredBrakingInput;

	UPROPERTY()
		FGears CurrentGear;


};

USTRUCT(BlueprintType)
struct FHistoryBufferMinimum
{
	GENERATED_BODY()

		FHistoryBufferMinimum()
	{
		StoredLocation = FVector();
		StoredLinearVelocity = FVector();
		StoredAngularVelocity = FVector();
		StoredRotation = FRotator();
	}

	UPROPERTY()
		FVector StoredLocation;

	UPROPERTY()
		FVector StoredLinearVelocity;

	UPROPERTY()
		FVector StoredAngularVelocity;

	UPROPERTY()
		FRotator StoredRotation;


};

USTRUCT(BlueprintType)
struct FInputInfo
{
	GENERATED_BODY()

		FInputInfo()
	{
		StoredSteeringInput = 0.f;
		StoredThrottleInput = 0.f;
		StoredBrakingInput = 0.f;
	}


	UPROPERTY()
		float StoredSteeringInput;

	UPROPERTY()
		float StoredThrottleInput;

	UPROPERTY()
		float StoredBrakingInput;


};

USTRUCT(BlueprintType)
struct FReplayData
{
	GENERATED_BODY()

	FReplayData()
	{
		SentTime = 0.f;
		Correction = FHistoryBuffer();
	}

	UPROPERTY()
		float SentTime;

	UPROPERTY()
		FHistoryBuffer Correction;

};

