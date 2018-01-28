// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WheelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheelData() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FWheelDataStruct();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FWheelDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEMANVEHICLEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FWheelDataStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelDataStruct, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("WheelDataStruct"), sizeof(FWheelDataStruct), Get_Z_Construct_UScriptStruct_FWheelDataStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelDataStruct(FWheelDataStruct::StaticStruct, TEXT("/Script/BlueManVehiclePhysics"), TEXT("WheelDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFWheelDataStruct
{
	FScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFWheelDataStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WheelDataStruct")),new UScriptStruct::TCppStructOps<FWheelDataStruct>);
	}
} ScriptStruct_BlueManVehiclePhysics_StaticRegisterNativesFWheelDataStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FWheelDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelDataStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelDataStruct"), sizeof(FWheelDataStruct), Get_Z_Construct_UScriptStruct_FWheelDataStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "ToolTip", "Holds all wheel data, this struct is used on wheel creation and on destruction." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelDataStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasEngineComponent_MetaData[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Data" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_HasEngineComponent_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->HasEngineComponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasEngineComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "HasEngineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HasEngineComponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HasEngineComponent_MetaData, ARRAY_COUNT(NewProp_HasEngineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThrottleSlipLimit_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThrottleSlipLimit = { UE4CodeGen_Private::EPropertyClass::Float, "FullThrottleSlipLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, FullThrottleSlipLimit), METADATA_PARAMS(NewProp_FullThrottleSlipLimit_MetaData, ARRAY_COUNT(NewProp_FullThrottleSlipLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThrottleSlipRatioReverse_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThrottleSlipRatioReverse = { UE4CodeGen_Private::EPropertyClass::Float, "FullThrottleSlipRatioReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, FullThrottleSlipRatioReverse), METADATA_PARAMS(NewProp_FullThrottleSlipRatioReverse_MetaData, ARRAY_COUNT(NewProp_FullThrottleSlipRatioReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullThrottleSlipRatio_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullThrottleSlipRatio = { UE4CodeGen_Private::EPropertyClass::Float, "FullThrottleSlipRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, FullThrottleSlipRatio), METADATA_PARAMS(NewProp_FullThrottleSlipRatio_MetaData, ARRAY_COUNT(NewProp_FullThrottleSlipRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpring_MetaData[] = {
				{ "Category", "Settings|Antiroll" },
				{ "DisplayName", "Maximum Antiroll Force" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpring = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, MaxSpring), METADATA_PARAMS(NewProp_MaxSpring_MetaData, ARRAY_COUNT(NewProp_MaxSpring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollB_MetaData[] = {
				{ "Category", "Settings|Antiroll" },
				{ "DisplayName", "Antiroll Front/Back" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollB = { UE4CodeGen_Private::EPropertyClass::Float, "RollB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, RollB), METADATA_PARAMS(NewProp_RollB_MetaData, ARRAY_COUNT(NewProp_RollB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
				{ "Category", "Settings|Antiroll" },
				{ "DisplayName", "Antiroll Left/Right" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll = { UE4CodeGen_Private::EPropertyClass::Float, "Roll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Roll), METADATA_PARAMS(NewProp_Roll_MetaData, ARRAY_COUNT(NewProp_Roll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDrivewheelGrip_MetaData[] = {
				{ "Category", "Settings|ForwardForce" },
				{ "DisplayName", "Wheel Spin Grip" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDrivewheelGrip = { UE4CodeGen_Private::EPropertyClass::Float, "MinDrivewheelGrip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, MinDrivewheelGrip), METADATA_PARAMS(NewProp_MinDrivewheelGrip_MetaData, ARRAY_COUNT(NewProp_MinDrivewheelGrip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelRollingResistance_MetaData[] = {
				{ "Category", "Settings|ForwardForce" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WheelRollingResistance = { UE4CodeGen_Private::EPropertyClass::Float, "WheelRollingResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, WheelRollingResistance), METADATA_PARAMS(NewProp_WheelRollingResistance_MetaData, ARRAY_COUNT(NewProp_WheelRollingResistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineForce_MetaData[] = {
				{ "Category", "Settings|ForwardForce" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineForce = { UE4CodeGen_Private::EPropertyClass::Float, "EngineForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, EngineForce), METADATA_PARAMS(NewProp_EngineForce_MetaData, ARRAY_COUNT(NewProp_EngineForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionGripRatioMin_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "DisplayName", "Minimum Compression Grip" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionGripRatioMin = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionGripRatioMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, CompressionGripRatioMin), METADATA_PARAMS(NewProp_CompressionGripRatioMin_MetaData, ARRAY_COUNT(NewProp_CompressionGripRatioMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionGripRatioMax_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "DisplayName", "Maximum Compression Grip" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionGripRatioMax = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionGripRatioMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, CompressionGripRatioMax), METADATA_PARAMS(NewProp_CompressionGripRatioMax_MetaData, ARRAY_COUNT(NewProp_CompressionGripRatioMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlipMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "DisplayName", "Wheel Spin Multiplier" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlipMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SlipMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SlipMultiplier), METADATA_PARAMS(NewProp_SlipMultiplier_MetaData, ARRAY_COUNT(NewProp_SlipMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyForceAtContactPoint_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_ApplyForceAtContactPoint_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->ApplyForceAtContactPoint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyForceAtContactPoint = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyForceAtContactPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyForceAtContactPoint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyForceAtContactPoint_MetaData, ARRAY_COUNT(NewProp_ApplyForceAtContactPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGrip_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "Wheel Spin Sideways Grip" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGrip = { UE4CodeGen_Private::EPropertyClass::Float, "MinGrip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, MinGrip), METADATA_PARAMS(NewProp_MinGrip_MetaData, ARRAY_COUNT(NewProp_MinGrip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeeringFrictionMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "SteeringFrictionMultiplier" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeeringFrictionMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SeeringFrictionMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SeeringFrictionMultiplier), METADATA_PARAMS(NewProp_SeeringFrictionMultiplier_MetaData, ARRAY_COUNT(NewProp_SeeringFrictionMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeeringSensitivity_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "DisplayName", "SteeringSensitivity" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeeringSensitivity = { UE4CodeGen_Private::EPropertyClass::Float, "SeeringSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SeeringSensitivity), METADATA_PARAMS(NewProp_SeeringSensitivity_MetaData, ARRAY_COUNT(NewProp_SeeringSensitivity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLat_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLat = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, MaxLat), METADATA_PARAMS(NewProp_MaxLat_MetaData, ARRAY_COUNT(NewProp_MaxLat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorneringStiffness_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CorneringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "CorneringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, CorneringStiffness), METADATA_PARAMS(NewProp_CorneringStiffness_MetaData, ARRAY_COUNT(NewProp_CorneringStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresRollingResistanceMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresRollingResistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresRollingResistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, StickyTiresRollingResistanceMultiplier), METADATA_PARAMS(NewProp_StickyTiresRollingResistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresRollingResistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresMaxForceMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresMaxForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresMaxForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, StickyTiresMaxForceMultiplier), METADATA_PARAMS(NewProp_StickyTiresMaxForceMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresMaxForceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresSpeedMultiplier_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, StickyTiresSpeedMultiplier), METADATA_PARAMS(NewProp_StickyTiresSpeedMultiplier_MetaData, ARRAY_COUNT(NewProp_StickyTiresSpeedMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyTiresActivationSpeed_MetaData[] = {
				{ "Category", "Settings|SidewaysFriction And ForwardForce" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyTiresActivationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "StickyTiresActivationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, StickyTiresActivationSpeed), METADATA_PARAMS(NewProp_StickyTiresActivationSpeed_MetaData, ARRAY_COUNT(NewProp_StickyTiresActivationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestPosition_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
				{ "UIMax", "1.000000" },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestPosition = { UE4CodeGen_Private::EPropertyClass::Float, "RestPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, RestPosition), METADATA_PARAMS(NewProp_RestPosition_MetaData, ARRAY_COUNT(NewProp_RestPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionLength_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionLength = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SuspensionLength), METADATA_PARAMS(NewProp_SuspensionLength_MetaData, ARRAY_COUNT(NewProp_SuspensionLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireRadius_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TireRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TireRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, TireRadius), METADATA_PARAMS(NewProp_TireRadius_MetaData, ARRAY_COUNT(NewProp_TireRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping = { UE4CodeGen_Private::EPropertyClass::Float, "Damping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Damping), METADATA_PARAMS(NewProp_Damping_MetaData, ARRAY_COUNT(NewProp_Damping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Multiplier), METADATA_PARAMS(NewProp_Multiplier_MetaData, ARRAY_COUNT(NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionStiffness_MetaData[] = {
				{ "Category", "Settings|SuspensionSettings" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SuspensionStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SuspensionStiffness), METADATA_PARAMS(NewProp_SuspensionStiffness_MetaData, ARRAY_COUNT(NewProp_SuspensionStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrakingForce_MetaData[] = {
				{ "Category", "Settings|Braking" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBrakingForce = { UE4CodeGen_Private::EPropertyClass::Float, "MaxBrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, MaxBrakingForce), METADATA_PARAMS(NewProp_MaxBrakingForce_MetaData, ARRAY_COUNT(NewProp_MaxBrakingForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingForce_Multiplier_MetaData[] = {
				{ "Category", "Settings|Braking" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingForce_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingForce_Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, BrakingForce_Multiplier), METADATA_PARAMS(NewProp_BrakingForce_Multiplier_MetaData, ARRAY_COUNT(NewProp_BrakingForce_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingForce_MetaData[] = {
				{ "Category", "Settings|Braking" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingForce = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, BrakingForce), METADATA_PARAMS(NewProp_BrakingForce_MetaData, ARRAY_COUNT(NewProp_BrakingForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_GripLimit_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake_GripLimit = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake_GripLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Handbrake_GripLimit), METADATA_PARAMS(NewProp_Handbrake_GripLimit_MetaData, ARRAY_COUNT(NewProp_Handbrake_GripLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_Grip_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake_Grip = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake_Grip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Handbrake_Grip), METADATA_PARAMS(NewProp_Handbrake_Grip_MetaData, ARRAY_COUNT(NewProp_Handbrake_Grip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_Multiplier_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handbrake_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Handbrake_Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Handbrake_Multiplier), METADATA_PARAMS(NewProp_Handbrake_Multiplier_MetaData, ARRAY_COUNT(NewProp_Handbrake_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handbrake_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_Handbrake_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->Handbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Handbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "Handbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Handbrake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Handbrake_MetaData, ARRAY_COUNT(NewProp_Handbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "DisplayName", "Steering Angle" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteeringCurve = { UE4CodeGen_Private::EPropertyClass::Object, "SteeringCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SteeringCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_SteeringCurve_MetaData, ARRAY_COUNT(NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalSteeringAngle_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "DisplayName", "Steering Angle" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalSteeringAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NormalSteeringAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, NormalSteeringAngle), METADATA_PARAMS(NewProp_NormalSteeringAngle_MetaData, ARRAY_COUNT(NewProp_NormalSteeringAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertAckermanSteering_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_InvertAckermanSteering_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->InvertAckermanSteering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertAckermanSteering = { UE4CodeGen_Private::EPropertyClass::Bool, "InvertAckermanSteering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InvertAckermanSteering_SetBit)>::SetBit, METADATA_PARAMS(NewProp_InvertAckermanSteering_MetaData, ARRAY_COUNT(NewProp_InvertAckermanSteering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AckermanRatio_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AckermanRatio = { UE4CodeGen_Private::EPropertyClass::Float, "AckermanRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, AckermanRatio), METADATA_PARAMS(NewProp_AckermanRatio_MetaData, ARRAY_COUNT(NewProp_AckermanRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDriveWheel_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_IsDriveWheel_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->IsDriveWheel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDriveWheel = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDriveWheel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsDriveWheel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsDriveWheel_MetaData, ARRAY_COUNT(NewProp_IsDriveWheel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, Scale), METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipWheelRotation_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_FlipWheelRotation_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->FlipWheelRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlipWheelRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "FlipWheelRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_FlipWheelRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_FlipWheelRotation_MetaData, ARRAY_COUNT(NewProp_FlipWheelRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelMeshComponent_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "WheelMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, WheelMeshComponent), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_WheelMeshComponent_MetaData, ARRAY_COUNT(NewProp_WheelMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedByHandbrake_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_AffectedByHandbrake_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->AffectedByHandbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectedByHandbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "AffectedByHandbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AffectedByHandbrake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AffectedByHandbrake_MetaData, ARRAY_COUNT(NewProp_AffectedByHandbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereTrace_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_SphereTrace_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->SphereTrace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SphereTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "SphereTrace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SphereTrace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SphereTrace_MetaData, ARRAY_COUNT(NewProp_SphereTrace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_Debug_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->Debug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Debug = { UE4CodeGen_Private::EPropertyClass::Bool, "Debug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Debug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Debug_MetaData, ARRAY_COUNT(NewProp_Debug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionTraceChannel_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuspensionTraceChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "SuspensionTraceChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, SuspensionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_SuspensionTraceChannel_MetaData, ARRAY_COUNT(NewProp_SuspensionTraceChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelOffset_MetaData[] = {
				{ "Category", "Settings|General" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "WheelOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, WheelOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_WheelOffset_MetaData, ARRAY_COUNT(NewProp_WheelOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandbrakeGripCurve_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "EditCondition", "UseHandbrakeGripCurve" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandbrakeGripCurve = { UE4CodeGen_Private::EPropertyClass::Object, "HandbrakeGripCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, HandbrakeGripCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_HandbrakeGripCurve_MetaData, ARRAY_COUNT(NewProp_HandbrakeGripCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHandbrakeGripCurve_MetaData[] = {
				{ "Category", "Settings|Handbrake" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_UseHandbrakeGripCurve_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->UseHandbrakeGripCurve = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHandbrakeGripCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "UseHandbrakeGripCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseHandbrakeGripCurve_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseHandbrakeGripCurve_MetaData, ARRAY_COUNT(NewProp_UseHandbrakeGripCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberNegativeAngle_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberNegativeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "CamberNegativeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, CamberNegativeAngle), METADATA_PARAMS(NewProp_CamberNegativeAngle_MetaData, ARRAY_COUNT(NewProp_CamberNegativeAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberPositiveAngle_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberPositiveAngle = { UE4CodeGen_Private::EPropertyClass::Float, "CamberPositiveAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, CamberPositiveAngle), METADATA_PARAMS(NewProp_CamberPositiveAngle_MetaData, ARRAY_COUNT(NewProp_CamberPositiveAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamberNeautralPosition_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "DisplayName", "CamberNeutralPosition" },
				{ "EditCondition", "DoNotUseRestPositionAsCamberNeautralPosition" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamberNeautralPosition = { UE4CodeGen_Private::EPropertyClass::Float, "CamberNeautralPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, CamberNeautralPosition), METADATA_PARAMS(NewProp_CamberNeautralPosition_MetaData, ARRAY_COUNT(NewProp_CamberNeautralPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoNotUseRestPositionAsCamberNeautralPosition_MetaData[] = {
				{ "Category", "Settings|WheelCamber" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			auto NewProp_DoNotUseRestPositionAsCamberNeautralPosition_SetBit = [](void* Obj){ ((FWheelDataStruct*)Obj)->DoNotUseRestPositionAsCamberNeautralPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoNotUseRestPositionAsCamberNeautralPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "DoNotUseRestPositionAsCamberNeautralPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FWheelDataStruct), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DoNotUseRestPositionAsCamberNeautralPosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DoNotUseRestPositionAsCamberNeautralPosition_MetaData, ARRAY_COUNT(NewProp_DoNotUseRestPositionAsCamberNeautralPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualWheelOffset_MetaData[] = {
				{ "Category", "Settings|General|WheelMesh" },
				{ "ModuleRelativePath", "Public/WheelData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualWheelOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "VisualWheelOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWheelDataStruct, VisualWheelOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VisualWheelOffset_MetaData, ARRAY_COUNT(NewProp_VisualWheelOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasEngineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullThrottleSlipLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullThrottleSlipRatioReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullThrottleSlipRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RollB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDrivewheelGrip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelRollingResistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionGripRatioMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionGripRatioMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlipMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyForceAtContactPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinGrip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeeringFrictionMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeeringSensitivity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CorneringStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresRollingResistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresMaxForceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresSpeedMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StickyTiresActivationSpeed,
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalSteeringAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvertAckermanSteering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AckermanRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsDriveWheel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlipWheelRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AffectedByHandbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereTrace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Debug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionTraceChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeGripCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseHandbrakeGripCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberNegativeAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberPositiveAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamberNeautralPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoNotUseRestPositionAsCamberNeautralPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisualWheelOffset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WheelDataStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWheelDataStruct),
				alignof(FWheelDataStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelDataStruct_CRC() { return 3964125463U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
