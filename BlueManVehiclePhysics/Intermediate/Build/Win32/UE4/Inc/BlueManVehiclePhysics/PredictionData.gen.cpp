// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PredictionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredictionData() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FReplayData();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FHistoryBuffer();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FInputInfo();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FHistoryBufferMinimum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FGears();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_USuspensionPhysics_Component_NoRegister();
// End Cross Module References
class UScriptStruct* FReplayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FReplayData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayData, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("ReplayData"), sizeof(FReplayData), Get_Z_Construct_UScriptStruct_FReplayData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplayData(FReplayData::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("ReplayData"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFReplayData
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFReplayData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplayData")),new UScriptStruct::TCppStructOps<FReplayData>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFReplayData;
	UScriptStruct* Z_Construct_UScriptStruct_FReplayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplayData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplayData"), sizeof(FReplayData), Get_Z_Construct_UScriptStruct_FReplayData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Correction_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Correction = { UE4CodeGen_Private::EPropertyClass::Struct, "Correction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FReplayData, Correction), Z_Construct_UScriptStruct_FHistoryBuffer, METADATA_PARAMS(NewProp_Correction_MetaData, ARRAY_COUNT(NewProp_Correction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SentTime = { UE4CodeGen_Private::EPropertyClass::Float, "SentTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FReplayData, SentTime), METADATA_PARAMS(NewProp_SentTime_MetaData, ARRAY_COUNT(NewProp_SentTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Correction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SentTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ReplayData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FReplayData),
				alignof(FReplayData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplayData_CRC() { return 2400246023U; }
class UScriptStruct* FInputInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FInputInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputInfo, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("InputInfo"), sizeof(FInputInfo), Get_Z_Construct_UScriptStruct_FInputInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputInfo(FInputInfo::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("InputInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFInputInfo
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFInputInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputInfo")),new UScriptStruct::TCppStructOps<FInputInfo>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFInputInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FInputInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputInfo"), sizeof(FInputInfo), Get_Z_Construct_UScriptStruct_FInputInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredBrakingInput_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredBrakingInput = { UE4CodeGen_Private::EPropertyClass::Float, "StoredBrakingInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInputInfo, StoredBrakingInput), METADATA_PARAMS(NewProp_StoredBrakingInput_MetaData, ARRAY_COUNT(NewProp_StoredBrakingInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredThrottleInput_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "StoredThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInputInfo, StoredThrottleInput), METADATA_PARAMS(NewProp_StoredThrottleInput_MetaData, ARRAY_COUNT(NewProp_StoredThrottleInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredSteeringInput_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredSteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "StoredSteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInputInfo, StoredSteeringInput), METADATA_PARAMS(NewProp_StoredSteeringInput_MetaData, ARRAY_COUNT(NewProp_StoredSteeringInput_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredBrakingInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredThrottleInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredSteeringInput,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InputInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInputInfo),
				alignof(FInputInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputInfo_CRC() { return 310851261U; }
class UScriptStruct* FHistoryBufferMinimum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FHistoryBufferMinimum_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHistoryBufferMinimum, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("HistoryBufferMinimum"), sizeof(FHistoryBufferMinimum), Get_Z_Construct_UScriptStruct_FHistoryBufferMinimum_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHistoryBufferMinimum(FHistoryBufferMinimum::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("HistoryBufferMinimum"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFHistoryBufferMinimum
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFHistoryBufferMinimum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HistoryBufferMinimum")),new UScriptStruct::TCppStructOps<FHistoryBufferMinimum>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFHistoryBufferMinimum;
	UScriptStruct* Z_Construct_UScriptStruct_FHistoryBufferMinimum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHistoryBufferMinimum_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HistoryBufferMinimum"), sizeof(FHistoryBufferMinimum), Get_Z_Construct_UScriptStruct_FHistoryBufferMinimum_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHistoryBufferMinimum>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredRotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBufferMinimum, StoredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_StoredRotation_MetaData, ARRAY_COUNT(NewProp_StoredRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredAngularVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBufferMinimum, StoredAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StoredAngularVelocity_MetaData, ARRAY_COUNT(NewProp_StoredAngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredLinearVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredLinearVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredLinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBufferMinimum, StoredLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StoredLinearVelocity_MetaData, ARRAY_COUNT(NewProp_StoredLinearVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBufferMinimum, StoredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StoredLocation_MetaData, ARRAY_COUNT(NewProp_StoredLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredAngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredLinearVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HistoryBufferMinimum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHistoryBufferMinimum),
				alignof(FHistoryBufferMinimum),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHistoryBufferMinimum_CRC() { return 2113334039U; }
class UScriptStruct* FHistoryBuffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FHistoryBuffer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHistoryBuffer, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("HistoryBuffer"), sizeof(FHistoryBuffer), Get_Z_Construct_UScriptStruct_FHistoryBuffer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHistoryBuffer(FHistoryBuffer::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("HistoryBuffer"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFHistoryBuffer
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFHistoryBuffer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HistoryBuffer")),new UScriptStruct::TCppStructOps<FHistoryBuffer>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFHistoryBuffer;
	UScriptStruct* Z_Construct_UScriptStruct_FHistoryBuffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHistoryBuffer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HistoryBuffer"), sizeof(FHistoryBuffer), Get_Z_Construct_UScriptStruct_FHistoryBuffer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PredictionData.h" },
				{ "ToolTip", "Holds all the data for Client side prediction to work." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHistoryBuffer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGear_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentGear = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentGear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, CurrentGear), Z_Construct_UScriptStruct_FGears, METADATA_PARAMS(NewProp_CurrentGear_MetaData, ARRAY_COUNT(NewProp_CurrentGear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredBrakingInput_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredBrakingInput = { UE4CodeGen_Private::EPropertyClass::Float, "StoredBrakingInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredBrakingInput), METADATA_PARAMS(NewProp_StoredBrakingInput_MetaData, ARRAY_COUNT(NewProp_StoredBrakingInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredThrottleInput_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "StoredThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredThrottleInput), METADATA_PARAMS(NewProp_StoredThrottleInput_MetaData, ARRAY_COUNT(NewProp_StoredThrottleInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredSteeringInput_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredSteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "StoredSteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredSteeringInput), METADATA_PARAMS(NewProp_StoredSteeringInput_MetaData, ARRAY_COUNT(NewProp_StoredSteeringInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStampOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStampOffset = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStampOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, TimeStampOffset), METADATA_PARAMS(NewProp_TimeStampOffset_MetaData, ARRAY_COUNT(NewProp_TimeStampOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredDeltaTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "StoredDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredDeltaTime), METADATA_PARAMS(NewProp_StoredDeltaTime_MetaData, ARRAY_COUNT(NewProp_StoredDeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, TimeStamp), METADATA_PARAMS(NewProp_TimeStamp_MetaData, ARRAY_COUNT(NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredRotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_StoredRotation_MetaData, ARRAY_COUNT(NewProp_StoredRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredAngularVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StoredAngularVelocity_MetaData, ARRAY_COUNT(NewProp_StoredAngularVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredLinearVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredLinearVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredLinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StoredLinearVelocity_MetaData, ARRAY_COUNT(NewProp_StoredLinearVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredLocation_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, StoredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StoredLocation_MetaData, ARRAY_COUNT(NewProp_StoredLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingForcePerWheel_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrakingForcePerWheel = { UE4CodeGen_Private::EPropertyClass::Array, "BrakingForcePerWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, BrakingForcePerWheel), METADATA_PARAMS(NewProp_BrakingForcePerWheel_MetaData, ARRAY_COUNT(NewProp_BrakingForcePerWheel_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingForcePerWheel_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingForcePerWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineForcePerWheel_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EngineForcePerWheel = { UE4CodeGen_Private::EPropertyClass::Array, "EngineForcePerWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, EngineForcePerWheel), METADATA_PARAMS(NewProp_EngineForcePerWheel_MetaData, ARRAY_COUNT(NewProp_EngineForcePerWheel_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineForcePerWheel_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "EngineForcePerWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringPerWheel_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteeringPerWheel = { UE4CodeGen_Private::EPropertyClass::Array, "SteeringPerWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, SteeringPerWheel), METADATA_PARAMS(NewProp_SteeringPerWheel_MetaData, ARRAY_COUNT(NewProp_SteeringPerWheel_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringPerWheel_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "SteeringPerWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionPositions_MetaData[] = {
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuspensionPositions = { UE4CodeGen_Private::EPropertyClass::Array, "SuspensionPositions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, SuspensionPositions), METADATA_PARAMS(NewProp_SuspensionPositions_MetaData, ARRAY_COUNT(NewProp_SuspensionPositions_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionPositions_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionPositions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringWheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteeringWheels = { UE4CodeGen_Private::EPropertyClass::Array, "SteeringWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, SteeringWheels), METADATA_PARAMS(NewProp_SteeringWheels_MetaData, ARRAY_COUNT(NewProp_SteeringWheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteeringWheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SteeringWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PredictionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Wheels = { UE4CodeGen_Private::EPropertyClass::Array, "Wheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(FHistoryBuffer, Wheels), METADATA_PARAMS(NewProp_Wheels_MetaData, ARRAY_COUNT(NewProp_Wheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Wheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentGear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredBrakingInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredThrottleInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredSteeringInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStampOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredDeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredAngularVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredLinearVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrakingForcePerWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrakingForcePerWheel_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineForcePerWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineForcePerWheel_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringPerWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringPerWheel_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionPositions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionPositions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringWheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringWheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wheels_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HistoryBuffer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FHistoryBuffer),
				alignof(FHistoryBuffer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHistoryBuffer_CRC() { return 792241953U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
