// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WheelManager_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheelManager_Component() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UWheelManager_Component_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UWheelManager_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_UWheelManager_Component_AddWheel();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_USuspensionPhysics_Component_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FWheelDataStruct();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_UWheelManager_Component_SetHandbrake();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_UWheelManager_Component_SetSteering();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void UWheelManager_Component::StaticRegisterNativesUWheelManager_Component()
	{
		UClass* Class = UWheelManager_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWheel", (Native)&UWheelManager_Component::execAddWheel },
			{ "SetHandbrake", (Native)&UWheelManager_Component::execSetHandbrake },
			{ "SetSteering", (Native)&UWheelManager_Component::execSetSteering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWheelManager_Component_AddWheel()
	{
		struct WheelManager_Component_eventAddWheel_Parms
		{
			FWheelDataStruct WheelData;
			USuspensionPhysics_Component* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WheelManager_Component_eventAddWheel_Parms, ReturnValue), Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelData = { UE4CodeGen_Private::EPropertyClass::Struct, "WheelData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WheelManager_Component_eventAddWheel_Parms, WheelData), Z_Construct_UScriptStruct_FWheelDataStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Functions" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
				{ "ToolTip", "Create a new wheel from Wheel Data." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheelManager_Component, "AddWheel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WheelManager_Component_eventAddWheel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWheelManager_Component_SetHandbrake()
	{
		struct WheelManager_Component_eventSetHandbrake_Parms
		{
			bool HandbrakeInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_HandbrakeInput_SetBit = [](void* Obj){ ((WheelManager_Component_eventSetHandbrake_Parms*)Obj)->HandbrakeInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HandbrakeInput = { UE4CodeGen_Private::EPropertyClass::Bool, "HandbrakeInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WheelManager_Component_eventSetHandbrake_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HandbrakeInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "DisplayName", "Set Handbrake Input To Wheel Manager" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheelManager_Component, "SetHandbrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WheelManager_Component_eventSetHandbrake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWheelManager_Component_SetSteering()
	{
		struct WheelManager_Component_eventSetSteering_Parms
		{
			float SteeringInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringInput = { UE4CodeGen_Private::EPropertyClass::Float, "SteeringInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WheelManager_Component_eventSetSteering_Parms, SteeringInput), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "DisplayName", "Set Steering Input To Wheel Manager" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWheelManager_Component, "SetSteering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WheelManager_Component_eventSetSteering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWheelManager_Component_NoRegister()
	{
		return UWheelManager_Component::StaticClass();
	}
	UClass* Z_Construct_UClass_UWheelManager_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWheelManager_Component_AddWheel, "AddWheel" }, // 1197363091
				{ &Z_Construct_UFunction_UWheelManager_Component_SetHandbrake, "SetHandbrake" }, // 2177830729
				{ &Z_Construct_UFunction_UWheelManager_Component_SetSteering, "SetSteering" }, // 3180345454
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "WheelManager_Component.h" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
				{ "ToolTip", "Keeps track off all wheels and it provides them with the required data." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSide_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RightSide = { UE4CodeGen_Private::EPropertyClass::Array, "RightSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, RightSide), METADATA_PARAMS(NewProp_RightSide_MetaData, ARRAY_COUNT(NewProp_RightSide_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightSide_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RightSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftSide_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeftSide = { UE4CodeGen_Private::EPropertyClass::Array, "LeftSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, LeftSide), METADATA_PARAMS(NewProp_LeftSide_MetaData, ARRAY_COUNT(NewProp_LeftSide_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftSide_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LeftSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeWheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandbrakeWheels = { UE4CodeGen_Private::EPropertyClass::Array, "HandbrakeWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, HandbrakeWheels), METADATA_PARAMS(NewProp_HandbrakeWheels_MetaData, ARRAY_COUNT(NewProp_HandbrakeWheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandbrakeWheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "HandbrakeWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringWheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteeringWheels = { UE4CodeGen_Private::EPropertyClass::Array, "SteeringWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, SteeringWheels), METADATA_PARAMS(NewProp_SteeringWheels_MetaData, ARRAY_COUNT(NewProp_SteeringWheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteeringWheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SteeringWheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Wheels = { UE4CodeGen_Private::EPropertyClass::Array, "Wheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, Wheels), METADATA_PARAMS(NewProp_Wheels_MetaData, ARRAY_COUNT(NewProp_Wheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Wheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockdownMultiplier_MetaData[] = {
				{ "Category", "Settings|Lockdown" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockdownMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "LockdownMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, LockdownMultiplier), METADATA_PARAMS(NewProp_LockdownMultiplier_MetaData, ARRAY_COUNT(NewProp_LockdownMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockdownActivationSpeed_MetaData[] = {
				{ "Category", "Settings|Lockdown" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockdownActivationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LockdownActivationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, LockdownActivationSpeed), METADATA_PARAMS(NewProp_LockdownActivationSpeed_MetaData, ARRAY_COUNT(NewProp_LockdownActivationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresHandbrakeMultiplier_MetaData[] = {
				{ "Category", "Settings|StickyTires" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresHandbrakeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresHandbrakeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, StickyTiresHandbrakeMultiplier), METADATA_PARAMS(NewProp_StickyTiresHandbrakeMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresHandbrakeMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresActivationSpeed_MetaData[] = {
				{ "Category", "Settings|StickyTires" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresActivationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresActivationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, StickyTiresActivationSpeed), METADATA_PARAMS(NewProp_StickyTiresActivationSpeed_MetaData, ARRAY_COUNT(NewProp_StickyTiresActivationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresMultiplier_MetaData[] = {
				{ "Category", "Settings|StickyTires" },
				{ "ModuleRelativePath", "Public/WheelManager_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWheelManager_Component, StickyTiresMultiplier), METADATA_PARAMS(NewProp_StickyTiresMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightSide_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftSide_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeWheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeWheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringWheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringWheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockdownMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockdownActivationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresHandbrakeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresActivationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresMultiplier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWheelManager_Component>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWheelManager_Component::StaticClass,
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
	IMPLEMENT_CLASS(UWheelManager_Component, 788759915);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWheelManager_Component(Z_Construct_UClass_UWheelManager_Component, &UWheelManager_Component::StaticClass, TEXT("/Script/BlueManVehiclePhysics"), TEXT("UWheelManager_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWheelManager_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
