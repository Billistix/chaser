// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VehiclePhysicsActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehiclePhysicsActor() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UEnum* Z_Construct_UEnum_BlueManVehiclePhysics_EMovementReplicationMethod();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_AVehiclePhysicsActor_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_AVehiclePhysicsActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_InitializeAllSystems();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateHandbrakeToServer();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateSteeringToServer();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateThrottleToServer();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SendMovementDataToAll();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FInputInfo();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SendMovementDataToServer();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SetEngineThrottle();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SetHandbrake();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SetSteering();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_UpdateComponents();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UWheelManager_Component_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_DragComponent_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UClientSidePrediction_Component_NoRegister();
// End Cross Module References
	static UEnum* EMovementReplicationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueManVehiclePhysics_EMovementReplicationMethod, Z_Construct_UPackage__Script_BlueManVehiclePhysics(), TEXT("EMovementReplicationMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementReplicationMethod(EMovementReplicationMethod_StaticEnum, TEXT("/Script/BlueManVehiclePhysics"), TEXT("EMovementReplicationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueManVehiclePhysics_EMovementReplicationMethod_CRC() { return 3364977318U; }
	UEnum* Z_Construct_UEnum_BlueManVehiclePhysics_EMovementReplicationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueManVehiclePhysics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementReplicationMethod"), 0, Get_Z_Construct_UEnum_BlueManVehiclePhysics_EMovementReplicationMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementReplicationMethod::ClientSidePredictionAntiCheat", (int64)EMovementReplicationMethod::ClientSidePredictionAntiCheat },
				{ "EMovementReplicationMethod::ServerSideReplication", (int64)EMovementReplicationMethod::ServerSideReplication },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClientSidePredictionAntiCheat.DisplayName", "Client Side Prediction with Replay/Rewind" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovementReplicationMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovementReplicationMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AVehiclePhysicsActor_ReplicateHandbrakeToServer = FName(TEXT("ReplicateHandbrakeToServer"));
	void AVehiclePhysicsActor::ReplicateHandbrakeToServer(bool HandbrakeToReplicate)
	{
		VehiclePhysicsActor_eventReplicateHandbrakeToServer_Parms Parms;
		Parms.HandbrakeToReplicate=HandbrakeToReplicate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePhysicsActor_ReplicateHandbrakeToServer),&Parms);
	}
	static FName NAME_AVehiclePhysicsActor_ReplicateSteeringToServer = FName(TEXT("ReplicateSteeringToServer"));
	void AVehiclePhysicsActor::ReplicateSteeringToServer(float SteeringToReplicate)
	{
		VehiclePhysicsActor_eventReplicateSteeringToServer_Parms Parms;
		Parms.SteeringToReplicate=SteeringToReplicate;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePhysicsActor_ReplicateSteeringToServer),&Parms);
	}
	static FName NAME_AVehiclePhysicsActor_ReplicateThrottleToServer = FName(TEXT("ReplicateThrottleToServer"));
	void AVehiclePhysicsActor::ReplicateThrottleToServer(float ThrottleToReplicate)
	{
		VehiclePhysicsActor_eventReplicateThrottleToServer_Parms Parms;
		Parms.ThrottleToReplicate=ThrottleToReplicate;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePhysicsActor_ReplicateThrottleToServer),&Parms);
	}
	static FName NAME_AVehiclePhysicsActor_SendMovementDataToAll = FName(TEXT("SendMovementDataToAll"));
	void AVehiclePhysicsActor::SendMovementDataToAll(FInputInfo Data)
	{
		VehiclePhysicsActor_eventSendMovementDataToAll_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePhysicsActor_SendMovementDataToAll),&Parms);
	}
	static FName NAME_AVehiclePhysicsActor_SendMovementDataToServer = FName(TEXT("SendMovementDataToServer"));
	void AVehiclePhysicsActor::SendMovementDataToServer(FInputInfo Data)
	{
		VehiclePhysicsActor_eventSendMovementDataToServer_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePhysicsActor_SendMovementDataToServer),&Parms);
	}
	static FName NAME_AVehiclePhysicsActor_UpdateComponents = FName(TEXT("UpdateComponents"));
	void AVehiclePhysicsActor::UpdateComponents(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager)
	{
		VehiclePhysicsActor_eventUpdateComponents_Parms Parms;
		Parms.Engine=Engine;
		Parms.Manager=Manager;
		ProcessEvent(FindFunctionChecked(NAME_AVehiclePhysicsActor_UpdateComponents),&Parms);
	}
	void AVehiclePhysicsActor::StaticRegisterNativesAVehiclePhysicsActor()
	{
		UClass* Class = AVehiclePhysicsActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeAllSystems", (Native)&AVehiclePhysicsActor::execInitializeAllSystems },
			{ "ReplicateHandbrakeToServer", (Native)&AVehiclePhysicsActor::execReplicateHandbrakeToServer },
			{ "ReplicateSteeringToServer", (Native)&AVehiclePhysicsActor::execReplicateSteeringToServer },
			{ "ReplicateThrottleToServer", (Native)&AVehiclePhysicsActor::execReplicateThrottleToServer },
			{ "SendMovementDataToAll", (Native)&AVehiclePhysicsActor::execSendMovementDataToAll },
			{ "SendMovementDataToServer", (Native)&AVehiclePhysicsActor::execSendMovementDataToServer },
			{ "SetEngineThrottle", (Native)&AVehiclePhysicsActor::execSetEngineThrottle },
			{ "SetHandbrake", (Native)&AVehiclePhysicsActor::execSetHandbrake },
			{ "SetSteering", (Native)&AVehiclePhysicsActor::execSetSteering },
			{ "UpdateComponents", (Native)&AVehiclePhysicsActor::execUpdateComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_InitializeAllSystems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Initialization" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "InitializeAllSystems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateHandbrakeToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_HandbrakeToReplicate_SetBit = [](void* Obj){ ((VehiclePhysicsActor_eventReplicateHandbrakeToServer_Parms*)Obj)->HandbrakeToReplicate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HandbrakeToReplicate = { UE4CodeGen_Private::EPropertyClass::Bool, "HandbrakeToReplicate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VehiclePhysicsActor_eventReplicateHandbrakeToServer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HandbrakeToReplicate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandbrakeToReplicate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "ReplicateHandbrakeToServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(VehiclePhysicsActor_eventReplicateHandbrakeToServer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateSteeringToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringToReplicate = { UE4CodeGen_Private::EPropertyClass::Float, "SteeringToReplicate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventReplicateSteeringToServer_Parms, SteeringToReplicate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteeringToReplicate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "ReplicateSteeringToServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(VehiclePhysicsActor_eventReplicateSteeringToServer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateThrottleToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleToReplicate = { UE4CodeGen_Private::EPropertyClass::Float, "ThrottleToReplicate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventReplicateThrottleToServer_Parms, ThrottleToReplicate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrottleToReplicate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "ReplicateThrottleToServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(VehiclePhysicsActor_eventReplicateThrottleToServer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SendMovementDataToAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventSendMovementDataToAll_Parms, Data), Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "SendMovementDataToAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(VehiclePhysicsActor_eventSendMovementDataToAll_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SendMovementDataToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventSendMovementDataToServer_Parms, Data), Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "SendMovementDataToServer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(VehiclePhysicsActor_eventSendMovementDataToServer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SetEngineThrottle()
	{
		struct VehiclePhysicsActor_eventSetEngineThrottle_Parms
		{
			float ThrottleInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrottleInput = { UE4CodeGen_Private::EPropertyClass::Float, "ThrottleInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventSetEngineThrottle_Parms, ThrottleInput), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrottleInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "SetEngineThrottle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehiclePhysicsActor_eventSetEngineThrottle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SetHandbrake()
	{
		struct VehiclePhysicsActor_eventSetHandbrake_Parms
		{
			bool Handbrake;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Handbrake_SetBit = [](void* Obj){ ((VehiclePhysicsActor_eventSetHandbrake_Parms*)Obj)->Handbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Handbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "Handbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VehiclePhysicsActor_eventSetHandbrake_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Handbrake_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Handbrake,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "SetHandbrake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehiclePhysicsActor_eventSetHandbrake_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_SetSteering()
	{
		struct VehiclePhysicsActor_eventSetSteering_Parms
		{
			float Steering;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steering = { UE4CodeGen_Private::EPropertyClass::Float, "Steering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventSetSteering_Parms, Steering), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Steering,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BlueManVehiclePhysicsPlugin|Controls" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "SetSteering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VehiclePhysicsActor_eventSetSteering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVehiclePhysicsActor_UpdateComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager = { UE4CodeGen_Private::EPropertyClass::Object, "Manager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventUpdateComponents_Parms, Manager), Z_Construct_UClass_UWheelManager_Component_NoRegister, METADATA_PARAMS(NewProp_Manager_MetaData, ARRAY_COUNT(NewProp_Manager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engine_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Engine = { UE4CodeGen_Private::EPropertyClass::Object, "Engine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VehiclePhysicsActor_eventUpdateComponents_Parms, Engine), Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister, METADATA_PARAMS(NewProp_Engine_MetaData, ARRAY_COUNT(NewProp_Engine_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Manager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehiclePhysicsActor, "UpdateComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(VehiclePhysicsActor_eventUpdateComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVehiclePhysicsActor_NoRegister()
	{
		return AVehiclePhysicsActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AVehiclePhysicsActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_InitializeAllSystems, "InitializeAllSystems" }, // 891103179
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateHandbrakeToServer, "ReplicateHandbrakeToServer" }, // 1921653298
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateSteeringToServer, "ReplicateSteeringToServer" }, // 2978703524
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_ReplicateThrottleToServer, "ReplicateThrottleToServer" }, // 2369950104
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_SendMovementDataToAll, "SendMovementDataToAll" }, // 608232976
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_SendMovementDataToServer, "SendMovementDataToServer" }, // 1293592393
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_SetEngineThrottle, "SetEngineThrottle" }, // 2711071524
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_SetHandbrake, "SetHandbrake" }, // 4208203585
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_SetSteering, "SetSteering" }, // 2015218005
				{ &Z_Construct_UFunction_AVehiclePhysicsActor_UpdateComponents, "UpdateComponents" }, // 2814149998
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "VehiclePhysicsPawn" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VehiclePhysicsActor.h" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
				{ "ToolTip", "Controls the main functions of the vehicle, it has built in replication." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredEngineComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoredEngineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StoredEngineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, StoredEngineComponent), Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister, METADATA_PARAMS(NewProp_StoredEngineComponent_MetaData, ARRAY_COUNT(NewProp_StoredEngineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredWheelManager_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoredWheelManager = { UE4CodeGen_Private::EPropertyClass::Object, "StoredWheelManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, StoredWheelManager), Z_Construct_UClass_UWheelManager_Component_NoRegister, METADATA_PARAMS(NewProp_StoredWheelManager_MetaData, ARRAY_COUNT(NewProp_StoredWheelManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, MeshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredDragComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoredDragComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StoredDragComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, StoredDragComponent), Z_Construct_UClass_ULandVehicle_DragComponent_NoRegister, METADATA_PARAMS(NewProp_StoredDragComponent_MetaData, ARRAY_COUNT(NewProp_StoredDragComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredPredictionComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoredPredictionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StoredPredictionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, StoredPredictionComponent), Z_Construct_UClass_UClientSidePrediction_Component_NoRegister, METADATA_PARAMS(NewProp_StoredPredictionComponent_MetaData, ARRAY_COUNT(NewProp_StoredPredictionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationMethod_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementReplicationMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, MovementReplicationMethod), Z_Construct_UEnum_BlueManVehiclePhysics_EMovementReplicationMethod, METADATA_PARAMS(NewProp_MovementReplicationMethod_MetaData, ARRAY_COUNT(NewProp_MovementReplicationMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementReplicationMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "EngineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, EngineComponent), Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister, METADATA_PARAMS(NewProp_EngineComponent_MetaData, ARRAY_COUNT(NewProp_EngineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWheelManager_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerWheelManager = { UE4CodeGen_Private::EPropertyClass::Object, "ServerWheelManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080028, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, ServerWheelManager), Z_Construct_UClass_UWheelManager_Component_NoRegister, METADATA_PARAMS(NewProp_ServerWheelManager_MetaData, ARRAY_COUNT(NewProp_ServerWheelManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerEngineComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerEngineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ServerEngineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080028, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, ServerEngineComponent), Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister, METADATA_PARAMS(NewProp_ServerEngineComponent_MetaData, ARRAY_COUNT(NewProp_ServerEngineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerSteering_MetaData[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerSteering = { UE4CodeGen_Private::EPropertyClass::Float, "ServerSteering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, ServerSteering), METADATA_PARAMS(NewProp_ServerSteering_MetaData, ARRAY_COUNT(NewProp_ServerSteering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHandbrake_MetaData[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			auto NewProp_ServerHandbrake_SetBit = [](void* Obj){ ((AVehiclePhysicsActor*)Obj)->ServerHandbrake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ServerHandbrake = { UE4CodeGen_Private::EPropertyClass::Bool, "ServerHandbrake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AVehiclePhysicsActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ServerHandbrake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ServerHandbrake_MetaData, ARRAY_COUNT(NewProp_ServerHandbrake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerThrottle_MetaData[] = {
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerThrottle = { UE4CodeGen_Private::EPropertyClass::Float, "ServerThrottle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, ServerThrottle), METADATA_PARAMS(NewProp_ServerThrottle_MetaData, ARRAY_COUNT(NewProp_ServerThrottle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNetUpdates_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/VehiclePhysicsActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputNetUpdates = { UE4CodeGen_Private::EPropertyClass::Int, "InputNetUpdates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVehiclePhysicsActor, InputNetUpdates), METADATA_PARAMS(NewProp_InputNetUpdates_MetaData, ARRAY_COUNT(NewProp_InputNetUpdates_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredEngineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredWheelManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredDragComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredPredictionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReplicationMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReplicationMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerWheelManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerEngineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerSteering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerHandbrake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerThrottle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputNetUpdates,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVehiclePhysicsActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVehiclePhysicsActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AVehiclePhysicsActor, 463361143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehiclePhysicsActor(Z_Construct_UClass_AVehiclePhysicsActor, &AVehiclePhysicsActor::StaticClass, TEXT("/Script/BlueManVehiclePhysics"), TEXT("AVehiclePhysicsActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehiclePhysicsActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
