// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
struct FHistoryBufferMinimum;
class UPrimitiveComponent;
#ifdef BLUEMANVEHICLEPHYSICS_ClientSidePrediction_Component_generated_h
#error "ClientSidePrediction_Component.generated.h already included, missing '#pragma once' in ClientSidePrediction_Component.h"
#endif
#define BLUEMANVEHICLEPHYSICS_ClientSidePrediction_Component_generated_h

#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_16_DELEGATE \
struct _Script_BlueManVehiclePhysics_eventClientUpdate_Parms \
{ \
	FVector RedLocation; \
	FVector GreenLocation; \
	FVector BlueLocation; \
	FRotator RedRotation; \
	FRotator GreenRotation; \
	FRotator BlueRotation; \
}; \
static inline void FClientUpdate_DelegateWrapper(const FMulticastScriptDelegate& ClientUpdate, FVector RedLocation, FVector GreenLocation, FVector BlueLocation, FRotator RedRotation, FRotator GreenRotation, FRotator BlueRotation) \
{ \
	_Script_BlueManVehiclePhysics_eventClientUpdate_Parms Parms; \
	Parms.RedLocation=RedLocation; \
	Parms.GreenLocation=GreenLocation; \
	Parms.BlueLocation=BlueLocation; \
	Parms.RedRotation=RedRotation; \
	Parms.GreenRotation=GreenRotation; \
	Parms.BlueRotation=BlueRotation; \
	ClientUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_RPC_WRAPPERS \
	virtual void AllReceiveTimeRequest_Implementation(FHistoryBufferMinimum Correction); \
	virtual void ClientReceiveTimeRequest_Implementation(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction); \
	virtual bool SendServerTimeRequest_Validate(float , UPrimitiveComponent* ); \
	virtual void SendServerTimeRequest_Implementation(float SentTime, UPrimitiveComponent* Comp); \
 \
	DECLARE_FUNCTION(execAllReceiveTimeRequest) \
	{ \
		P_GET_STRUCT(FHistoryBufferMinimum,Z_Param_Correction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AllReceiveTimeRequest_Implementation(Z_Param_Correction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReceiveTimeRequest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ReceivedServerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SentTime); \
		P_GET_STRUCT(FHistoryBufferMinimum,Z_Param_Correction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReceiveTimeRequest_Implementation(Z_Param_ReceivedServerTime,Z_Param_SentTime,Z_Param_Correction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendServerTimeRequest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SentTime); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->SendServerTimeRequest_Validate(Z_Param_SentTime,Z_Param_Comp)) \
		{ \
			RPC_ValidateFailed(TEXT("SendServerTimeRequest_Validate")); \
			return; \
		} \
		this->SendServerTimeRequest_Implementation(Z_Param_SentTime,Z_Param_Comp); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AllReceiveTimeRequest_Implementation(FHistoryBufferMinimum Correction); \
	virtual void ClientReceiveTimeRequest_Implementation(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction); \
	virtual bool SendServerTimeRequest_Validate(float , UPrimitiveComponent* ); \
	virtual void SendServerTimeRequest_Implementation(float SentTime, UPrimitiveComponent* Comp); \
 \
	DECLARE_FUNCTION(execAllReceiveTimeRequest) \
	{ \
		P_GET_STRUCT(FHistoryBufferMinimum,Z_Param_Correction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AllReceiveTimeRequest_Implementation(Z_Param_Correction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientReceiveTimeRequest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ReceivedServerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SentTime); \
		P_GET_STRUCT(FHistoryBufferMinimum,Z_Param_Correction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientReceiveTimeRequest_Implementation(Z_Param_ReceivedServerTime,Z_Param_SentTime,Z_Param_Correction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendServerTimeRequest) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SentTime); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->SendServerTimeRequest_Validate(Z_Param_SentTime,Z_Param_Comp)) \
		{ \
			RPC_ValidateFailed(TEXT("SendServerTimeRequest_Validate")); \
			return; \
		} \
		this->SendServerTimeRequest_Implementation(Z_Param_SentTime,Z_Param_Comp); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_EVENT_PARMS \
	struct ClientSidePrediction_Component_eventAllReceiveTimeRequest_Parms \
	{ \
		FHistoryBufferMinimum Correction; \
	}; \
	struct ClientSidePrediction_Component_eventClientReceiveTimeRequest_Parms \
	{ \
		float ReceivedServerTime; \
		float SentTime; \
		FHistoryBufferMinimum Correction; \
	}; \
	struct ClientSidePrediction_Component_eventSendServerTimeRequest_Parms \
	{ \
		float SentTime; \
		UPrimitiveComponent* Comp; \
	};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_CALLBACK_WRAPPERS
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientSidePrediction_Component(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_UClientSidePrediction_Component(); \
public: \
	DECLARE_CLASS(UClientSidePrediction_Component, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(UClientSidePrediction_Component) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUClientSidePrediction_Component(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_UClientSidePrediction_Component(); \
public: \
	DECLARE_CLASS(UClientSidePrediction_Component, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(UClientSidePrediction_Component) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientSidePrediction_Component(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientSidePrediction_Component) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientSidePrediction_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientSidePrediction_Component); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientSidePrediction_Component(UClientSidePrediction_Component&&); \
	NO_API UClientSidePrediction_Component(const UClientSidePrediction_Component&); \
public:


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientSidePrediction_Component(UClientSidePrediction_Component&&); \
	NO_API UClientSidePrediction_Component(const UClientSidePrediction_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientSidePrediction_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientSidePrediction_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientSidePrediction_Component)


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(UClientSidePrediction_Component, Pawn); } \
	FORCEINLINE static uint32 __PPO__SuspensionTraceWorld() { return STRUCT_OFFSET(UClientSidePrediction_Component, SuspensionTraceWorld); }


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_19_PROLOG \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_EVENT_PARMS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_RPC_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_CALLBACK_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_INCLASS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_CALLBACK_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_ClientSidePrediction_Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
