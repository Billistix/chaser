// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LandVehicle_EngineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandVehicle_EngineComponent() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeStarted__DelegateSignature();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FGears();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_EngineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_GearDown();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_GearUp();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_SetEngineThrottleInput();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_SetGearNumber();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_USuspensionPhysics_Component_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics, "GearChangeCompleted__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics, "GearChangeStarted__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FGears::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FGears_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGears, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("Gears"), sizeof(FGears), Get_Z_Construct_UScriptStruct_FGears_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGears(FGears::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("Gears"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFGears
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFGears()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gears")),new UScriptStruct::TCppStructOps<FGears>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFGears;
	UScriptStruct* Z_Construct_UScriptStruct_FGears()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGears_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gears"), sizeof(FGears), Get_Z_Construct_UScriptStruct_FGears_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGears>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearNumber_MetaData[] = {
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GearNumber = { UE4CodeGen_Private::EPropertyClass::Int, "GearNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGears, GearNumber), METADATA_PARAMS(NewProp_GearNumber_MetaData, ARRAY_COUNT(NewProp_GearNumber_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearName_MetaData[] = {
				{ "Category", "Gears" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GearName = { UE4CodeGen_Private::EPropertyClass::Str, "GearName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FGears, GearName), METADATA_PARAMS(NewProp_GearName_MetaData, ARRAY_COUNT(NewProp_GearName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDownRatio_MetaData[] = {
				{ "Category", "Gears" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearDownRatio = { UE4CodeGen_Private::EPropertyClass::Float, "GearDownRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FGears, GearDownRatio), METADATA_PARAMS(NewProp_GearDownRatio_MetaData, ARRAY_COUNT(NewProp_GearDownRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearUpRatio_MetaData[] = {
				{ "Category", "Gears" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearUpRatio = { UE4CodeGen_Private::EPropertyClass::Float, "GearUpRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FGears, GearUpRatio), METADATA_PARAMS(NewProp_GearUpRatio_MetaData, ARRAY_COUNT(NewProp_GearUpRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearRatio_MetaData[] = {
				{ "Category", "Gears" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearRatio = { UE4CodeGen_Private::EPropertyClass::Float, "GearRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGears, GearRatio), METADATA_PARAMS(NewProp_GearRatio_MetaData, ARRAY_COUNT(NewProp_GearRatio_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearNumber,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDownRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearUpRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearRatio,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Gears",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGears),
				alignof(FGears),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGears_CRC() { return 3679120620U; }
	void ULandVehicle_EngineComponent::StaticRegisterNativesULandVehicle_EngineComponent()
	{
		UClass* Class = ULandVehicle_EngineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GearDown", (Native)&ULandVehicle_EngineComponent::execGearDown },
			{ "GearUp", (Native)&ULandVehicle_EngineComponent::execGearUp },
			{ "SetEngineThrottleInput", (Native)&ULandVehicle_EngineComponent::execSetEngineThrottleInput },
			{ "SetGearNumber", (Native)&ULandVehicle_EngineComponent::execSetGearNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_GearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandVehicle_EngineComponent, "GearDown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_GearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandVehicle_EngineComponent, "GearUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_SetEngineThrottleInput()
	{
		struct LandVehicle_EngineComponent_eventSetEngineThrottleInput_Parms
		{
			float ThrottleInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "ThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandVehicle_EngineComponent_eventSetEngineThrottleInput_Parms, ThrottleInput), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrottleInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandVehicle_EngineComponent, "SetEngineThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LandVehicle_EngineComponent_eventSetEngineThrottleInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULandVehicle_EngineComponent_SetGearNumber()
	{
		struct LandVehicle_EngineComponent_eventSetGearNumber_Parms
		{
			int32 GearNumber;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GearNumber = { UE4CodeGen_Private::EPropertyClass::Int, "GearNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LandVehicle_EngineComponent_eventSetGearNumber_Parms, GearNumber), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearNumber,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandVehicle_EngineComponent, "SetGearNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LandVehicle_EngineComponent_eventSetGearNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister()
	{
		return ULandVehicle_EngineComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandVehicle_EngineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULandVehicle_EngineComponent_GearDown, "GearDown" }, // 2651284590
				{ &Z_Construct_UFunction_ULandVehicle_EngineComponent_GearUp, "GearUp" }, // 2445797097
				{ &Z_Construct_UFunction_ULandVehicle_EngineComponent_SetEngineThrottleInput, "SetEngineThrottleInput" }, // 2113181951
				{ &Z_Construct_UFunction_ULandVehicle_EngineComponent_SetGearNumber, "SetGearNumber" }, // 2919246720
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "LandVehicle_EngineComponent.h" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "Complete gearbox and engine calculation/simulation." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedKPH_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedKPH = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedKPH", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, SpeedKPH), METADATA_PARAMS(NewProp_SpeedKPH_MetaData, ARRAY_COUNT(NewProp_SpeedKPH_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGear_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentGear = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentGear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000034, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, CurrentGear), Z_Construct_UScriptStruct_FGears, METADATA_PARAMS(NewProp_CurrentGear_MetaData, ARRAY_COUNT(NewProp_CurrentGear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|OutputData" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RPM = { UE4CodeGen_Private::EPropertyClass::Float, "RPM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, RPM), METADATA_PARAMS(NewProp_RPM_MetaData, ARRAY_COUNT(NewProp_RPM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWheels = { UE4CodeGen_Private::EPropertyClass::Array, "AllWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, AllWheels), METADATA_PARAMS(NewProp_AllWheels_MetaData, ARRAY_COUNT(NewProp_AllWheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllWheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveWheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DriveWheels = { UE4CodeGen_Private::EPropertyClass::Array, "DriveWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, DriveWheels), METADATA_PARAMS(NewProp_DriveWheels_MetaData, ARRAY_COUNT(NewProp_DriveWheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DriveWheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DriveWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gears_MetaData[] = {
				{ "Category", "Settings|Gears" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gears = { UE4CodeGen_Private::EPropertyClass::Array, "Gears", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, Gears), METADATA_PARAMS(NewProp_Gears_MetaData, ARRAY_COUNT(NewProp_Gears_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gears_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Gears", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGears, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottleSensitivity_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleSensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "ThrottleSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, ThrottleSensitivity), METADATA_PARAMS(NewProp_ThrottleSensitivity_MetaData, ARRAY_COUNT(NewProp_ThrottleSensitivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearChangeTime_MetaData[] = {
				{ "Category", "Settings|Gears" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "This indicates how much time is needed to switch to another gear." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GearChangeTime = { UE4CodeGen_Private::EPropertyClass::Float, "GearChangeTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, GearChangeTime), METADATA_PARAMS(NewProp_GearChangeTime_MetaData, ARRAY_COUNT(NewProp_GearChangeTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifferentialRatio_MetaData[] = {
				{ "Category", "Settings|Engine" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DifferentialRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DifferentialRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, DifferentialRatio), METADATA_PARAMS(NewProp_DifferentialRatio_MetaData, ARRAY_COUNT(NewProp_DifferentialRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmissionEfficiency_MetaData[] = {
				{ "Category", "Settings|Engine" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "This indicates how much energy is transferred." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransmissionEfficiency = { UE4CodeGen_Private::EPropertyClass::Float, "TransmissionEfficiency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, TransmissionEfficiency), METADATA_PARAMS(NewProp_TransmissionEfficiency_MetaData, ARRAY_COUNT(NewProp_TransmissionEfficiency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPMMultiplier_MetaData[] = {
				{ "Category", "Settings|Engine" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "This is the maximum allowed engine RPM." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RPMMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RPMMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, RPMMultiplier), METADATA_PARAMS(NewProp_RPMMultiplier_MetaData, ARRAY_COUNT(NewProp_RPMMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[] = {
				{ "Category", "Settings|Engine" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "This is the maximum allowed engine RPM." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRPM = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRPM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, MaxRPM), METADATA_PARAMS(NewProp_MaxRPM_MetaData, ARRAY_COUNT(NewProp_MaxRPM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForwardSpeed_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForwardSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxForwardSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, MaxForwardSpeed), METADATA_PARAMS(NewProp_MaxForwardSpeed_MetaData, ARRAY_COUNT(NewProp_MaxForwardSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedInReverse_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedInReverse = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeedInReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, MaxSpeedInReverse), METADATA_PARAMS(NewProp_MaxSpeedInReverse_MetaData, ARRAY_COUNT(NewProp_MaxSpeedInReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseSpeed_MetaData[] = {
				{ "Category", "Settings" },
				{ "DisplayName", "Minimum Speed" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "The minimum speed at which the current gear is switched to reverse or first gear." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ReverseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, ReverseSpeed), METADATA_PARAMS(NewProp_ReverseSpeed_MetaData, ARRAY_COUNT(NewProp_ReverseSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticGearbox_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			auto NewProp_AutomaticGearbox_SetBit = [](void* Obj){ ((ULandVehicle_EngineComponent*)Obj)->AutomaticGearbox = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutomaticGearbox = { UE4CodeGen_Private::EPropertyClass::Bool, "AutomaticGearbox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandVehicle_EngineComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutomaticGearbox_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AutomaticGearbox_MetaData, ARRAY_COUNT(NewProp_AutomaticGearbox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorqueCurve_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
				{ "ToolTip", "The torque curve to read the values from, it can be changed at runtime." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TorqueCurve = { UE4CodeGen_Private::EPropertyClass::Object, "TorqueCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, TorqueCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_TorqueCurve_MetaData, ARRAY_COUNT(NewProp_TorqueCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearChangeCompleted_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GearChangeCompleted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "GearChangeCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, GearChangeCompleted), Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeCompleted__DelegateSignature, METADATA_PARAMS(NewProp_GearChangeCompleted_MetaData, ARRAY_COUNT(NewProp_GearChangeCompleted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearChangeStarted_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Public/LandVehicle_EngineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GearChangeStarted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "GearChangeStarted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULandVehicle_EngineComponent, GearChangeStarted), Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeStarted__DelegateSignature, METADATA_PARAMS(NewProp_GearChangeStarted_MetaData, ARRAY_COUNT(NewProp_GearChangeStarted_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedKPH,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentGear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RPM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllWheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllWheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DriveWheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DriveWheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gears,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gears_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrottleSensitivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearChangeTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DifferentialRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransmissionEfficiency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RPMMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRPM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxForwardSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeedInReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverseSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutomaticGearbox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TorqueCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearChangeCompleted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearChangeStarted,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandVehicle_EngineComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandVehicle_EngineComponent::StaticClass,
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
	IMPLEMENT_CLASS(ULandVehicle_EngineComponent, 752698639);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandVehicle_EngineComponent(Z_Construct_UClass_ULandVehicle_EngineComponent, &ULandVehicle_EngineComponent::StaticClass, TEXT("/Script/BlueManVehiclePhysics"), TEXT("ULandVehicle_EngineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandVehicle_EngineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
