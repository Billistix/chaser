// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULandVehicle_EngineComponent;
class UWheelManager_Component;
struct FInputInfo;
#ifdef BLUEMANVEHICLEPHYSICS_VehiclePhysicsActor_generated_h
#error "VehiclePhysicsActor.generated.h already included, missing '#pragma once' in VehiclePhysicsActor.h"
#endif
#define BLUEMANVEHICLEPHYSICS_VehiclePhysicsActor_generated_h

#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_RPC_WRAPPERS \
	virtual bool UpdateComponents_Validate(ULandVehicle_EngineComponent* , UWheelManager_Component* ); \
	virtual void UpdateComponents_Implementation(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager); \
	virtual void SendMovementDataToAll_Implementation(FInputInfo Data); \
	virtual bool SendMovementDataToServer_Validate(FInputInfo ); \
	virtual void SendMovementDataToServer_Implementation(FInputInfo Data); \
	virtual bool ReplicateSteeringToServer_Validate(float ); \
	virtual void ReplicateSteeringToServer_Implementation(float SteeringToReplicate); \
	virtual bool ReplicateHandbrakeToServer_Validate(bool ); \
	virtual void ReplicateHandbrakeToServer_Implementation(bool HandbrakeToReplicate); \
	virtual bool ReplicateThrottleToServer_Validate(float ); \
	virtual void ReplicateThrottleToServer_Implementation(float ThrottleToReplicate); \
 \
	DECLARE_FUNCTION(execInitializeAllSystems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeAllSystems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateComponents) \
	{ \
		P_GET_OBJECT(ULandVehicle_EngineComponent,Z_Param_Engine); \
		P_GET_OBJECT(UWheelManager_Component,Z_Param_Manager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->UpdateComponents_Validate(Z_Param_Engine,Z_Param_Manager)) \
		{ \
			RPC_ValidateFailed(TEXT("UpdateComponents_Validate")); \
			return; \
		} \
		this->UpdateComponents_Implementation(Z_Param_Engine,Z_Param_Manager); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMovementDataToAll) \
	{ \
		P_GET_STRUCT(FInputInfo,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendMovementDataToAll_Implementation(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMovementDataToServer) \
	{ \
		P_GET_STRUCT(FInputInfo,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->SendMovementDataToServer_Validate(Z_Param_Data)) \
		{ \
			RPC_ValidateFailed(TEXT("SendMovementDataToServer_Validate")); \
			return; \
		} \
		this->SendMovementDataToServer_Implementation(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateSteeringToServer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SteeringToReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ReplicateSteeringToServer_Validate(Z_Param_SteeringToReplicate)) \
		{ \
			RPC_ValidateFailed(TEXT("ReplicateSteeringToServer_Validate")); \
			return; \
		} \
		this->ReplicateSteeringToServer_Implementation(Z_Param_SteeringToReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateHandbrakeToServer) \
	{ \
		P_GET_UBOOL(Z_Param_HandbrakeToReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ReplicateHandbrakeToServer_Validate(Z_Param_HandbrakeToReplicate)) \
		{ \
			RPC_ValidateFailed(TEXT("ReplicateHandbrakeToServer_Validate")); \
			return; \
		} \
		this->ReplicateHandbrakeToServer_Implementation(Z_Param_HandbrakeToReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateThrottleToServer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrottleToReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ReplicateThrottleToServer_Validate(Z_Param_ThrottleToReplicate)) \
		{ \
			RPC_ValidateFailed(TEXT("ReplicateThrottleToServer_Validate")); \
			return; \
		} \
		this->ReplicateThrottleToServer_Implementation(Z_Param_ThrottleToReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteering) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Steering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSteering(Z_Param_Steering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHandbrake) \
	{ \
		P_GET_UBOOL(Z_Param_Handbrake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHandbrake(Z_Param_Handbrake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEngineThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrottleInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEngineThrottle(Z_Param_ThrottleInput); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool UpdateComponents_Validate(ULandVehicle_EngineComponent* , UWheelManager_Component* ); \
	virtual void UpdateComponents_Implementation(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager); \
	virtual void SendMovementDataToAll_Implementation(FInputInfo Data); \
	virtual bool SendMovementDataToServer_Validate(FInputInfo ); \
	virtual void SendMovementDataToServer_Implementation(FInputInfo Data); \
	virtual bool ReplicateSteeringToServer_Validate(float ); \
	virtual void ReplicateSteeringToServer_Implementation(float SteeringToReplicate); \
	virtual bool ReplicateHandbrakeToServer_Validate(bool ); \
	virtual void ReplicateHandbrakeToServer_Implementation(bool HandbrakeToReplicate); \
	virtual bool ReplicateThrottleToServer_Validate(float ); \
	virtual void ReplicateThrottleToServer_Implementation(float ThrottleToReplicate); \
 \
	DECLARE_FUNCTION(execInitializeAllSystems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitializeAllSystems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateComponents) \
	{ \
		P_GET_OBJECT(ULandVehicle_EngineComponent,Z_Param_Engine); \
		P_GET_OBJECT(UWheelManager_Component,Z_Param_Manager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->UpdateComponents_Validate(Z_Param_Engine,Z_Param_Manager)) \
		{ \
			RPC_ValidateFailed(TEXT("UpdateComponents_Validate")); \
			return; \
		} \
		this->UpdateComponents_Implementation(Z_Param_Engine,Z_Param_Manager); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMovementDataToAll) \
	{ \
		P_GET_STRUCT(FInputInfo,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendMovementDataToAll_Implementation(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMovementDataToServer) \
	{ \
		P_GET_STRUCT(FInputInfo,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->SendMovementDataToServer_Validate(Z_Param_Data)) \
		{ \
			RPC_ValidateFailed(TEXT("SendMovementDataToServer_Validate")); \
			return; \
		} \
		this->SendMovementDataToServer_Implementation(Z_Param_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateSteeringToServer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SteeringToReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ReplicateSteeringToServer_Validate(Z_Param_SteeringToReplicate)) \
		{ \
			RPC_ValidateFailed(TEXT("ReplicateSteeringToServer_Validate")); \
			return; \
		} \
		this->ReplicateSteeringToServer_Implementation(Z_Param_SteeringToReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateHandbrakeToServer) \
	{ \
		P_GET_UBOOL(Z_Param_HandbrakeToReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ReplicateHandbrakeToServer_Validate(Z_Param_HandbrakeToReplicate)) \
		{ \
			RPC_ValidateFailed(TEXT("ReplicateHandbrakeToServer_Validate")); \
			return; \
		} \
		this->ReplicateHandbrakeToServer_Implementation(Z_Param_HandbrakeToReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateThrottleToServer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrottleToReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ReplicateThrottleToServer_Validate(Z_Param_ThrottleToReplicate)) \
		{ \
			RPC_ValidateFailed(TEXT("ReplicateThrottleToServer_Validate")); \
			return; \
		} \
		this->ReplicateThrottleToServer_Implementation(Z_Param_ThrottleToReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteering) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Steering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSteering(Z_Param_Steering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHandbrake) \
	{ \
		P_GET_UBOOL(Z_Param_Handbrake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHandbrake(Z_Param_Handbrake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEngineThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrottleInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEngineThrottle(Z_Param_ThrottleInput); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_EVENT_PARMS \
	struct VehiclePhysicsActor_eventReplicateHandbrakeToServer_Parms \
	{ \
		bool HandbrakeToReplicate; \
	}; \
	struct VehiclePhysicsActor_eventReplicateSteeringToServer_Parms \
	{ \
		float SteeringToReplicate; \
	}; \
	struct VehiclePhysicsActor_eventReplicateThrottleToServer_Parms \
	{ \
		float ThrottleToReplicate; \
	}; \
	struct VehiclePhysicsActor_eventSendMovementDataToAll_Parms \
	{ \
		FInputInfo Data; \
	}; \
	struct VehiclePhysicsActor_eventSendMovementDataToServer_Parms \
	{ \
		FInputInfo Data; \
	}; \
	struct VehiclePhysicsActor_eventUpdateComponents_Parms \
	{ \
		ULandVehicle_EngineComponent* Engine; \
		UWheelManager_Component* Manager; \
	};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_CALLBACK_WRAPPERS
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehiclePhysicsActor(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_AVehiclePhysicsActor(); \
public: \
	DECLARE_CLASS(AVehiclePhysicsActor, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(AVehiclePhysicsActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAVehiclePhysicsActor(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_AVehiclePhysicsActor(); \
public: \
	DECLARE_CLASS(AVehiclePhysicsActor, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(AVehiclePhysicsActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehiclePhysicsActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehiclePhysicsActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehiclePhysicsActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehiclePhysicsActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehiclePhysicsActor(AVehiclePhysicsActor&&); \
	NO_API AVehiclePhysicsActor(const AVehiclePhysicsActor&); \
public:


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehiclePhysicsActor(AVehiclePhysicsActor&&); \
	NO_API AVehiclePhysicsActor(const AVehiclePhysicsActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehiclePhysicsActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehiclePhysicsActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehiclePhysicsActor)


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StoredPredictionComponent() { return STRUCT_OFFSET(AVehiclePhysicsActor, StoredPredictionComponent); } \
	FORCEINLINE static uint32 __PPO__StoredDragComponent() { return STRUCT_OFFSET(AVehiclePhysicsActor, StoredDragComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AVehiclePhysicsActor, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__StoredWheelManager() { return STRUCT_OFFSET(AVehiclePhysicsActor, StoredWheelManager); } \
	FORCEINLINE static uint32 __PPO__StoredEngineComponent() { return STRUCT_OFFSET(AVehiclePhysicsActor, StoredEngineComponent); }


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_22_PROLOG \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_EVENT_PARMS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_RPC_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_INCLASS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_VehiclePhysicsActor_h


#define FOREACH_ENUM_EMOVEMENTREPLICATIONMETHOD(op) \
	op(EMovementReplicationMethod::ClientSidePredictionAntiCheat) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
