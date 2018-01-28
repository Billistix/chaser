// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LandVehicle_DragComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandVehicle_DragComponent() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_DragComponent_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_DragComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void ULandVehicle_DragComponent::StaticRegisterNativesULandVehicle_DragComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandVehicle_DragComponent_NoRegister()
	{
		return ULandVehicle_DragComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandVehicle_DragComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "LandVehicle_DragComponent.h" },
				{ "ModuleRelativePath", "Public/LandVehicle_DragComponent.h" },
				{ "ToolTip", "Used to simulate drag on the vehicle using this component." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LandVehicle_DragComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ULandVehicle_DragComponent, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirResistanceMultiplier_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_DragComponent.h" },
				{ "ToolTip", "Force multiplier, it can be use to make air resistance stronger." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirResistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "AirResistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULandVehicle_DragComponent, AirResistanceMultiplier), METADATA_PARAMS(NewProp_AirResistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_AirResistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LandVehicle_DragComponent.h" },
				{ "ToolTip", "Enables debug view." },
			};
#endif
			auto NewProp_Debug_SetBit = [](void* Obj){ ((ULandVehicle_DragComponent*)Obj)->Debug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Debug = { UE4CodeGen_Private::EPropertyClass::Bool, "Debug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandVehicle_DragComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Debug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Debug_MetaData, ARRAY_COUNT(NewProp_Debug_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AirResistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Debug,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandVehicle_DragComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandVehicle_DragComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ULandVehicle_DragComponent, 380035819);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandVehicle_DragComponent(Z_Construct_UClass_ULandVehicle_DragComponent, &ULandVehicle_DragComponent::StaticClass, TEXT("/Script/BlueManVehiclePhysics"), TEXT("ULandVehicle_DragComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandVehicle_DragComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
