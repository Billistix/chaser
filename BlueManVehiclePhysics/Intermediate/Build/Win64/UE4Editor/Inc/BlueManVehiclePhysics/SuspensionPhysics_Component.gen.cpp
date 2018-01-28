// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SuspensionPhysics_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuspensionPhysics_Component() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionData();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_USuspensionPhysics_Component_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_USuspensionPhysics_Component();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_CreateConstraint();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_DestroyWheel();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelData();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FWheelDataStruct();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelMesh();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelSuspensionOffset();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetBrakingForce();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetDriveForce();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetHandbrake();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetMesh();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetSteering();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetWheelData();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
class UScriptStruct* FFrictionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FFrictionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionData, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("FrictionData"), sizeof(FFrictionData), Get_Z_Construct_UScriptStruct_FFrictionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionData(FFrictionData::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("FrictionData"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFFrictionData
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFFrictionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrictionData")),new UScriptStruct::TCppStructOps<FFrictionData>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFFrictionData;
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionData"), sizeof(FFrictionData), Get_Z_Construct_UScriptStruct_FFrictionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeEnabled_MetaData[] = {
				{ "Category", "VehiclePhysics|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewProp_HandbrakeEnabled_SetBit = [](void* Obj){ ((FFrictionData*)Obj)->HandbrakeEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HandbrakeEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "HandbrakeEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFrictionData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HandbrakeEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HandbrakeEnabled_MetaData, ARRAY_COUNT(NewProp_HandbrakeEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelTorque_MetaData[] = {
				{ "Category", "VehiclePhysics|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelTorque = { UE4CodeGen_Private::EPropertyClass::Float, "WheelTorque", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionData, WheelTorque), METADATA_PARAMS(NewProp_WheelTorque_MetaData, ARRAY_COUNT(NewProp_WheelTorque_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelSpin_MetaData[] = {
				{ "Category", "VehiclePhysics|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelSpin = { UE4CodeGen_Private::EPropertyClass::Float, "WheelSpin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionData, WheelSpin), METADATA_PARAMS(NewProp_WheelSpin_MetaData, ARRAY_COUNT(NewProp_WheelSpin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingForceApplied_MetaData[] = {
				{ "Category", "VehiclePhysics|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingForceApplied = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingForceApplied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionData, BrakingForceApplied), METADATA_PARAMS(NewProp_BrakingForceApplied_MetaData, ARRAY_COUNT(NewProp_BrakingForceApplied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidewaysForceApplied_MetaData[] = {
				{ "Category", "VehiclePhysics|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidewaysForceApplied = { UE4CodeGen_Private::EPropertyClass::Float, "SidewaysForceApplied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionData, SidewaysForceApplied), METADATA_PARAMS(NewProp_SidewaysForceApplied_MetaData, ARRAY_COUNT(NewProp_SidewaysForceApplied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SidewaysSlip_MetaData[] = {
				{ "Category", "VehiclePhysics|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SidewaysSlip = { UE4CodeGen_Private::EPropertyClass::Float, "SidewaysSlip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFrictionData, SidewaysSlip), METADATA_PARAMS(NewProp_SidewaysSlip_MetaData, ARRAY_COUNT(NewProp_SidewaysSlip_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelTorque,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelSpin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrakingForceApplied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SidewaysForceApplied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SidewaysSlip,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FrictionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFrictionData),
				alignof(FFrictionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionData_CRC() { return 3259388006U; }
	void USuspensionPhysics_Component::StaticRegisterNativesUSuspensionPhysics_Component()
	{
		UClass* Class = USuspensionPhysics_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateConstraint", (Native)&USuspensionPhysics_Component::execCreateConstraint },
			{ "DestroyWheel", (Native)&USuspensionPhysics_Component::execDestroyWheel },
			{ "GetWheelData", (Native)&USuspensionPhysics_Component::execGetWheelData },
			{ "GetWheelLocation", (Native)&USuspensionPhysics_Component::execGetWheelLocation },
			{ "GetWheelMesh", (Native)&USuspensionPhysics_Component::execGetWheelMesh },
			{ "GetWheelSuspensionOffset", (Native)&USuspensionPhysics_Component::execGetWheelSuspensionOffset },
			{ "SetBrakingForce", (Native)&USuspensionPhysics_Component::execSetBrakingForce },
			{ "SetDriveForce", (Native)&USuspensionPhysics_Component::execSetDriveForce },
			{ "SetHandbrake", (Native)&USuspensionPhysics_Component::execSetHandbrake },
			{ "SetMesh", (Native)&USuspensionPhysics_Component::execSetMesh },
			{ "SetSteering", (Native)&USuspensionPhysics_Component::execSetSteering },
			{ "SetWheelData", (Native)&USuspensionPhysics_Component::execSetWheelData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_CreateConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "CreateConstraint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_DestroyWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "DestroyWheel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelData()
	{
		struct SuspensionPhysics_Component_eventGetWheelData_Parms
		{
			FWheelDataStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventGetWheelData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWheelDataStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "GetWheelData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SuspensionPhysics_Component_eventGetWheelData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelLocation()
	{
		struct SuspensionPhysics_Component_eventGetWheelLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventGetWheelLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "GetWheelLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(SuspensionPhysics_Component_eventGetWheelLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelMesh()
	{
		struct SuspensionPhysics_Component_eventGetWheelMesh_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventGetWheelMesh_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Check the returned object for validity before using it, it might be null" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "GetWheelMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SuspensionPhysics_Component_eventGetWheelMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelSuspensionOffset()
	{
		struct SuspensionPhysics_Component_eventGetWheelSuspensionOffset_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventGetWheelSuspensionOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "GetWheelSuspensionOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(SuspensionPhysics_Component_eventGetWheelSuspensionOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetBrakingForce()
	{
		struct SuspensionPhysics_Component_eventSetBrakingForce_Parms
		{
			float ForceInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceInput = { UE4CodeGen_Private::EPropertyClass::Float, "ForceInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventSetBrakingForce_Parms, ForceInput), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "SetBrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SuspensionPhysics_Component_eventSetBrakingForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetDriveForce()
	{
		struct SuspensionPhysics_Component_eventSetDriveForce_Parms
		{
			float ForceInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceInput = { UE4CodeGen_Private::EPropertyClass::Float, "ForceInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventSetDriveForce_Parms, ForceInput), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "SetDriveForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SuspensionPhysics_Component_eventSetDriveForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetHandbrake()
	{
		struct SuspensionPhysics_Component_eventSetHandbrake_Parms
		{
			bool HandbrakeInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_HandbrakeInput_SetBit = [](void* Obj){ ((SuspensionPhysics_Component_eventSetHandbrake_Parms*)Obj)->HandbrakeInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HandbrakeInput = { UE4CodeGen_Private::EPropertyClass::Bool, "HandbrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SuspensionPhysics_Component_eventSetHandbrake_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HandbrakeInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "DisplayName", "Set Handbrake Input To Suspension Component" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "SetHandbrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SuspensionPhysics_Component_eventSetHandbrake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetMesh()
	{
		struct SuspensionPhysics_Component_eventSetMesh_Parms
		{
			UPrimitiveComponent* Mesh_Input;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_Input_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Input = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh_Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventSetMesh_Parms, Mesh_Input), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_Input_MetaData, ARRAY_COUNT(NewProp_Mesh_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh_Input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "DisplayName", "SetPhysicsSubsteppingMesh" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "SetMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SuspensionPhysics_Component_eventSetMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetSteering()
	{
		struct SuspensionPhysics_Component_eventSetSteering_Parms
		{
			float Steering;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steering = { UE4CodeGen_Private::EPropertyClass::Float, "Steering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventSetSteering_Parms, Steering), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Steering,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "DisplayName", "Set Steering Input To Suspension Component" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "SetSteering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SuspensionPhysics_Component_eventSetSteering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USuspensionPhysics_Component_SetWheelData()
	{
		struct SuspensionPhysics_Component_eventSetWheelData_Parms
		{
			FWheelDataStruct Data;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SuspensionPhysics_Component_eventSetWheelData_Parms, Data), Z_Construct_UScriptStruct_FWheelDataStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USuspensionPhysics_Component, "SetWheelData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SuspensionPhysics_Component_eventSetWheelData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USuspensionPhysics_Component_NoRegister()
	{
		return USuspensionPhysics_Component::StaticClass();
	}
	UClass* Z_Construct_UClass_USuspensionPhysics_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_CreateConstraint, "CreateConstraint" }, // 2624098071
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_DestroyWheel, "DestroyWheel" }, // 2941516672
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelData, "GetWheelData" }, // 1685230732
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelLocation, "GetWheelLocation" }, // 822002200
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelMesh, "GetWheelMesh" }, // 3606038736
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_GetWheelSuspensionOffset, "GetWheelSuspensionOffset" }, // 4085336936
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_SetBrakingForce, "SetBrakingForce" }, // 1968616320
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_SetDriveForce, "SetDriveForce" }, // 761703815
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_SetHandbrake, "SetHandbrake" }, // 2985772662
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_SetMesh, "SetMesh" }, // 3482286895
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_SetSteering, "SetSteering" }, // 4288385670
				{ &Z_Construct_UFunction_USuspensionPhysics_Component_SetWheelData, "SetWheelData" }, // 1891017209
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "SuspensionPhysics_Component.h" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Main component for wheel physics (friction, suspension and power delivery)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceWorld_MetaData[] = {
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceWorld = { UE4CodeGen_Private::EPropertyClass::Object, "TraceWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, TraceWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_TraceWorld_MetaData, ARRAY_COUNT(NewProp_TraceWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelCollision_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelCollision = { UE4CodeGen_Private::EPropertyClass::Object, "WheelCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, WheelCollision), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_WheelCollision_MetaData, ARRAY_COUNT(NewProp_WheelCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wheel_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wheel = { UE4CodeGen_Private::EPropertyClass::Object, "Wheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Wheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Wheel_MetaData, ARRAY_COUNT(NewProp_Wheel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermanRightSide_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermanRightSide = { UE4CodeGen_Private::EPropertyClass::Float, "AckermanRightSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, AckermanRightSide), METADATA_PARAMS(NewProp_AckermanRightSide_MetaData, ARRAY_COUNT(NewProp_AckermanRightSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermanLeftSide_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermanLeftSide = { UE4CodeGen_Private::EPropertyClass::Float, "AckermanLeftSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, AckermanLeftSide), METADATA_PARAMS(NewProp_AckermanLeftSide_MetaData, ARRAY_COUNT(NewProp_AckermanLeftSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionLocation_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "SuspensionLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SuspensionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SuspensionLocation_MetaData, ARRAY_COUNT(NewProp_SuspensionLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberCompression_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberCompression = { UE4CodeGen_Private::EPropertyClass::Float, "CamberCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CamberCompression), METADATA_PARAMS(NewProp_CamberCompression_MetaData, ARRAY_COUNT(NewProp_CamberCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Angle), METADATA_PARAMS(NewProp_Angle_MetaData, ARRAY_COUNT(NewProp_Angle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Compression = { UE4CodeGen_Private::EPropertyClass::Float, "Compression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Compression), METADATA_PARAMS(NewProp_Compression_MetaData, ARRAY_COUNT(NewProp_Compression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner = { UE4CodeGen_Private::EPropertyClass::Object, "Owner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_Owner_MetaData, ARRAY_COUNT(NewProp_Owner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Data" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000014, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasEngineComponent_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Data" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewProp_HasEngineComponent_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->HasEngineComponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasEngineComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "HasEngineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HasEngineComponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HasEngineComponent_MetaData, ARRAY_COUNT(NewProp_HasEngineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherSuspensionComponent_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Data" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherSuspensionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OtherSuspensionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, OtherSuspensionComponent), Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(NewProp_OtherSuspensionComponent_MetaData, ARRAY_COUNT(NewProp_OtherSuspensionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSuspensionComponent_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Data" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightSuspensionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "RightSuspensionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, RightSuspensionComponent), Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(NewProp_RightSuspensionComponent_MetaData, ARRAY_COUNT(NewProp_RightSuspensionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpring_MetaData[] = {
				{ "Category", "Settings|Antiroll" },
				{ "DisplayName", "Maximum Antiroll Force" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpring = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, MaxSpring), METADATA_PARAMS(NewProp_MaxSpring_MetaData, ARRAY_COUNT(NewProp_MaxSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollB_MetaData[] = {
				{ "Category", "Settings|Antiroll" },
				{ "DisplayName", "Antiroll Front/Back" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollB = { UE4CodeGen_Private::EPropertyClass::Float, "RollB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, RollB), METADATA_PARAMS(NewProp_RollB_MetaData, ARRAY_COUNT(NewProp_RollB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
				{ "Category", "Settings|Antiroll" },
				{ "DisplayName", "Antiroll Left/Right" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll = { UE4CodeGen_Private::EPropertyClass::Float, "Roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Roll), METADATA_PARAMS(NewProp_Roll_MetaData, ARRAY_COUNT(NewProp_Roll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDrivewheelGrip_MetaData[] = {
				{ "Category", "Settings|ForwardForce" },
				{ "DisplayName", "Wheel Spin Grip" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDrivewheelGrip = { UE4CodeGen_Private::EPropertyClass::Float, "MinDrivewheelGrip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, MinDrivewheelGrip), METADATA_PARAMS(NewProp_MinDrivewheelGrip_MetaData, ARRAY_COUNT(NewProp_MinDrivewheelGrip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelRollingResistance_MetaData[] = {
				{ "Category", "Settings|ForwardForce" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelRollingResistance = { UE4CodeGen_Private::EPropertyClass::Float, "WheelRollingResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, WheelRollingResistance), METADATA_PARAMS(NewProp_WheelRollingResistance_MetaData, ARRAY_COUNT(NewProp_WheelRollingResistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineForce_MetaData[] = {
				{ "Category", "Settings|ForwardForce" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineForce = { UE4CodeGen_Private::EPropertyClass::Float, "EngineForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, EngineForce), METADATA_PARAMS(NewProp_EngineForce_MetaData, ARRAY_COUNT(NewProp_EngineForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionGripRatioMin_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "DisplayName", "Minimum Compression Grip" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionGripRatioMin = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionGripRatioMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CompressionGripRatioMin), METADATA_PARAMS(NewProp_CompressionGripRatioMin_MetaData, ARRAY_COUNT(NewProp_CompressionGripRatioMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionGripRatioMax_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "DisplayName", "Maximum Compression Grip" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionGripRatioMax = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionGripRatioMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CompressionGripRatioMax), METADATA_PARAMS(NewProp_CompressionGripRatioMax_MetaData, ARRAY_COUNT(NewProp_CompressionGripRatioMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlipMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "DisplayName", "Wheel Spin Multiplier" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlipMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SlipMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SlipMultiplier), METADATA_PARAMS(NewProp_SlipMultiplier_MetaData, ARRAY_COUNT(NewProp_SlipMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceOffset_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "EditCondition", "!ApplyForceAtContactPoint" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ForceOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, ForceOffset), METADATA_PARAMS(NewProp_ForceOffset_MetaData, ARRAY_COUNT(NewProp_ForceOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyForceAtContactPoint_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Determines if the sideways force should be applied at the contact point with the ground or at the suspension location." },
			};
#endif
			auto NewProp_ApplyForceAtContactPoint_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->ApplyForceAtContactPoint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyForceAtContactPoint = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyForceAtContactPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyForceAtContactPoint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyForceAtContactPoint_MetaData, ARRAY_COUNT(NewProp_ApplyForceAtContactPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThrottleSlipLimit_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThrottleSlipLimit = { UE4CodeGen_Private::EPropertyClass::Float, "FullThrottleSlipLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, FullThrottleSlipLimit), METADATA_PARAMS(NewProp_FullThrottleSlipLimit_MetaData, ARRAY_COUNT(NewProp_FullThrottleSlipLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThrottleSlipRatioReverse_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThrottleSlipRatioReverse = { UE4CodeGen_Private::EPropertyClass::Float, "FullThrottleSlipRatioReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, FullThrottleSlipRatioReverse), METADATA_PARAMS(NewProp_FullThrottleSlipRatioReverse_MetaData, ARRAY_COUNT(NewProp_FullThrottleSlipRatioReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThrottleSlipRatio_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThrottleSlipRatio = { UE4CodeGen_Private::EPropertyClass::Float, "FullThrottleSlipRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, FullThrottleSlipRatio), METADATA_PARAMS(NewProp_FullThrottleSlipRatio_MetaData, ARRAY_COUNT(NewProp_FullThrottleSlipRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGrip_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "Wheel Spin Sideways Grip" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGrip = { UE4CodeGen_Private::EPropertyClass::Float, "MinGrip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, MinGrip), METADATA_PARAMS(NewProp_MinGrip_MetaData, ARRAY_COUNT(NewProp_MinGrip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeeringFrictionMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "Steering Friction Multiplier" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeeringFrictionMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SeeringFrictionMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SeeringFrictionMultiplier), METADATA_PARAMS(NewProp_SeeringFrictionMultiplier_MetaData, ARRAY_COUNT(NewProp_SeeringFrictionMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeeringSensitivity_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "Steering Sensitivity" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeeringSensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "SeeringSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SeeringSensitivity), METADATA_PARAMS(NewProp_SeeringSensitivity_MetaData, ARRAY_COUNT(NewProp_SeeringSensitivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLat_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "Max Sideways Force" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLat = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, MaxLat), METADATA_PARAMS(NewProp_MaxLat_MetaData, ARRAY_COUNT(NewProp_MaxLat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorneringStiffness_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CorneringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "CorneringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CorneringStiffness), METADATA_PARAMS(NewProp_CorneringStiffness_MetaData, ARRAY_COUNT(NewProp_CorneringStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresRollingResistanceMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresRollingResistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresRollingResistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, StickyTiresRollingResistanceMultiplier), METADATA_PARAMS(NewProp_StickyTiresRollingResistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresRollingResistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresMaxForceMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresMaxForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresMaxForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, StickyTiresMaxForceMultiplier), METADATA_PARAMS(NewProp_StickyTiresMaxForceMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresMaxForceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresSpeedMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, StickyTiresSpeedMultiplier), METADATA_PARAMS(NewProp_StickyTiresSpeedMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresSpeedMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestPosition_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestPosition = { UE4CodeGen_Private::EPropertyClass::Float, "RestPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, RestPosition), METADATA_PARAMS(NewProp_RestPosition_MetaData, ARRAY_COUNT(NewProp_RestPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionLength_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionLength = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SuspensionLength), METADATA_PARAMS(NewProp_SuspensionLength_MetaData, ARRAY_COUNT(NewProp_SuspensionLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireRadius_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TireRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TireRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, TireRadius), METADATA_PARAMS(NewProp_TireRadius_MetaData, ARRAY_COUNT(NewProp_TireRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping = { UE4CodeGen_Private::EPropertyClass::Float, "Damping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Damping), METADATA_PARAMS(NewProp_Damping_MetaData, ARRAY_COUNT(NewProp_Damping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Multiplier), METADATA_PARAMS(NewProp_Multiplier_MetaData, ARRAY_COUNT(NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionStiffness_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SuspensionStiffness), METADATA_PARAMS(NewProp_SuspensionStiffness_MetaData, ARRAY_COUNT(NewProp_SuspensionStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrakingForce_MetaData[] = {
				{ "Category", "Settings|Braking" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBrakingForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxBrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, MaxBrakingForce), METADATA_PARAMS(NewProp_MaxBrakingForce_MetaData, ARRAY_COUNT(NewProp_MaxBrakingForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingForce_Multiplier_MetaData[] = {
				{ "Category", "Settings|Braking" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingForce_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingForce_Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, BrakingForce_Multiplier), METADATA_PARAMS(NewProp_BrakingForce_Multiplier_MetaData, ARRAY_COUNT(NewProp_BrakingForce_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingForce_MetaData[] = {
				{ "Category", "Settings|Braking" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingForce = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, BrakingForce), METADATA_PARAMS(NewProp_BrakingForce_MetaData, ARRAY_COUNT(NewProp_BrakingForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_GripLimit_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake_GripLimit = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake_GripLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Handbrake_GripLimit), METADATA_PARAMS(NewProp_Handbrake_GripLimit_MetaData, ARRAY_COUNT(NewProp_Handbrake_GripLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_Grip_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake_Grip = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake_Grip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Handbrake_Grip), METADATA_PARAMS(NewProp_Handbrake_Grip_MetaData, ARRAY_COUNT(NewProp_Handbrake_Grip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_Multiplier_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake_Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Handbrake_Multiplier), METADATA_PARAMS(NewProp_Handbrake_Multiplier_MetaData, ARRAY_COUNT(NewProp_Handbrake_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewProp_Handbrake_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->Handbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Handbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "Handbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Handbrake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Handbrake_MetaData, ARRAY_COUNT(NewProp_Handbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeGripCurve_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "EditCondition", "UseHandbrakeGripCurve" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandbrakeGripCurve = { UE4CodeGen_Private::EPropertyClass::Object, "HandbrakeGripCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, HandbrakeGripCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_HandbrakeGripCurve_MetaData, ARRAY_COUNT(NewProp_HandbrakeGripCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHandbrakeGripCurve_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewProp_UseHandbrakeGripCurve_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->UseHandbrakeGripCurve = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHandbrakeGripCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "UseHandbrakeGripCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseHandbrakeGripCurve_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseHandbrakeGripCurve_MetaData, ARRAY_COUNT(NewProp_UseHandbrakeGripCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "DisplayName", "Steering Angle" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteeringCurve = { UE4CodeGen_Private::EPropertyClass::Object, "SteeringCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SteeringCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_SteeringCurve_MetaData, ARRAY_COUNT(NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalSteeringAngle_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "DisplayName", "Steering Angle" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalSteeringAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NormalSteeringAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, NormalSteeringAngle), METADATA_PARAMS(NewProp_NormalSteeringAngle_MetaData, ARRAY_COUNT(NewProp_NormalSteeringAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberNegativeAngle_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberNegativeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "CamberNegativeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CamberNegativeAngle), METADATA_PARAMS(NewProp_CamberNegativeAngle_MetaData, ARRAY_COUNT(NewProp_CamberNegativeAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberPositiveAngle_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberPositiveAngle = { UE4CodeGen_Private::EPropertyClass::Float, "CamberPositiveAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CamberPositiveAngle), METADATA_PARAMS(NewProp_CamberPositiveAngle_MetaData, ARRAY_COUNT(NewProp_CamberPositiveAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberNeautralPosition_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "EditCondition", "DoNotUseRestPositionAsCamberNeautralPosition" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberNeautralPosition = { UE4CodeGen_Private::EPropertyClass::Float, "CamberNeautralPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CamberNeautralPosition), METADATA_PARAMS(NewProp_CamberNeautralPosition_MetaData, ARRAY_COUNT(NewProp_CamberNeautralPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoNotUseRestPositionAsCamberNeautralPosition_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewProp_DoNotUseRestPositionAsCamberNeautralPosition_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->DoNotUseRestPositionAsCamberNeautralPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoNotUseRestPositionAsCamberNeautralPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "DoNotUseRestPositionAsCamberNeautralPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DoNotUseRestPositionAsCamberNeautralPosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DoNotUseRestPositionAsCamberNeautralPosition_MetaData, ARRAY_COUNT(NewProp_DoNotUseRestPositionAsCamberNeautralPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertAckermanSteering_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			auto NewProp_InvertAckermanSteering_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->InvertAckermanSteering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertAckermanSteering = { UE4CodeGen_Private::EPropertyClass::Bool, "InvertAckermanSteering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InvertAckermanSteering_SetBit)>::SetBit, METADATA_PARAMS(NewProp_InvertAckermanSteering_MetaData, ARRAY_COUNT(NewProp_InvertAckermanSteering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermanRatio_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermanRatio = { UE4CodeGen_Private::EPropertyClass::Float, "AckermanRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, AckermanRatio), METADATA_PARAMS(NewProp_AckermanRatio_MetaData, ARRAY_COUNT(NewProp_AckermanRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAirWheelRotationMultiplier_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAirWheelRotationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "InAirWheelRotationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, InAirWheelRotationMultiplier), METADATA_PARAMS(NewProp_InAirWheelRotationMultiplier_MetaData, ARRAY_COUNT(NewProp_InAirWheelRotationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDriveWheel_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Determines if the wheel should be affected by throttle inputs." },
			};
#endif
			auto NewProp_IsDriveWheel_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->IsDriveWheel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDriveWheel = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDriveWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsDriveWheel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsDriveWheel_MetaData, ARRAY_COUNT(NewProp_IsDriveWheel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelOffset_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "WheelOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, WheelOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_WheelOffset_MetaData, ARRAY_COUNT(NewProp_WheelOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "DisplayName", "Wheel Size" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Size of the visual representation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, Scale), METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipWheelRotation_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Determines if the visual representation of the wheel should be flipped." },
			};
#endif
			auto NewProp_FlipWheelRotation_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->FlipWheelRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlipWheelRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "FlipWheelRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_FlipWheelRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_FlipWheelRotation_MetaData, ARRAY_COUNT(NewProp_FlipWheelRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "DisplayName", "CollisionMesh" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Mesh for collision detection." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, CollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_CollisionMesh_MetaData, ARRAY_COUNT(NewProp_CollisionMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelMeshComponent_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "DisplayName", "WheelMesh" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Mesh for the visual representation of the wheel." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "WheelMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, WheelMeshComponent), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_WheelMeshComponent_MetaData, ARRAY_COUNT(NewProp_WheelMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionData_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|FrictionData" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionData = { UE4CodeGen_Private::EPropertyClass::Struct, "FrictionData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, FrictionData), Z_Construct_UScriptStruct_FFrictionData, METADATA_PARAMS(NewProp_FrictionData_MetaData, ARRAY_COUNT(NewProp_FrictionData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedByHandbrake_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Determines if this component should be affected by handbrake inputs." },
			};
#endif
			auto NewProp_AffectedByHandbrake_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->AffectedByHandbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectedByHandbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "AffectedByHandbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AffectedByHandbrake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AffectedByHandbrake_MetaData, ARRAY_COUNT(NewProp_AffectedByHandbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereTrace_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Determines if the system should use high precision sphere trace or standard line trace." },
			};
#endif
			auto NewProp_SphereTrace_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->SphereTrace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SphereTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "SphereTrace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SphereTrace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SphereTrace_MetaData, ARRAY_COUNT(NewProp_SphereTrace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
				{ "ToolTip", "Enables the debug mode." },
			};
#endif
			auto NewProp_Debug_SetBit = [](void* Obj){ ((USuspensionPhysics_Component*)Obj)->Debug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Debug = { UE4CodeGen_Private::EPropertyClass::Bool, "Debug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USuspensionPhysics_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Debug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Debug_MetaData, ARRAY_COUNT(NewProp_Debug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionTraceChannel_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/SuspensionPhysics_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuspensionTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "SuspensionTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USuspensionPhysics_Component, SuspensionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_SuspensionTraceChannel_MetaData, ARRAY_COUNT(NewProp_SuspensionTraceChannel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AckermanRightSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AckermanLeftSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Angle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Compression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Owner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasEngineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherSuspensionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightSuspensionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDrivewheelGrip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelRollingResistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionGripRatioMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionGripRatioMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlipMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyForceAtContactPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullThrottleSlipLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullThrottleSlipRatioReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullThrottleSlipRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinGrip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeeringFrictionMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeeringSensitivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CorneringStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresRollingResistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresMaxForceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresSpeedMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RestPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TireRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBrakingForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrakingForce_Multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrakingForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake_GripLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake_Grip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake_Multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeGripCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseHandbrakeGripCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalSteeringAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberNegativeAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberPositiveAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberNeautralPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoNotUseRestPositionAsCamberNeautralPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvertAckermanSteering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AckermanRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAirWheelRotationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsDriveWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlipWheelRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrictionData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AffectedByHandbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereTrace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Debug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionTraceChannel,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USuspensionPhysics_Component>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USuspensionPhysics_Component::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuspensionPhysics_Component, 4272019487);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuspensionPhysics_Component(Z_Construct_UClass_USuspensionPhysics_Component, &USuspensionPhysics_Component::StaticClass, TEXT("/Script/BlueManVehiclePhysics"), TEXT("USuspensionPhysics_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuspensionPhysics_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
