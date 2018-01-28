// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEMANVEHICLEPHYSICS_LandVehicle_EngineComponent_generated_h
#error "LandVehicle_EngineComponent.generated.h already included, missing '#pragma once' in LandVehicle_EngineComponent.h"
#endif
#define BLUEMANVEHICLEPHYSICS_LandVehicle_EngineComponent_generated_h

#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_16_GENERATED_BODY \
	friend BLUEMANVEHICLEPHYSICS_API class UScriptStruct* Z_Construct_UScriptStruct_FGears(); \
	BLUEMANVEHICLEPHYSICS_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_11_DELEGATE \
static inline void FGearChangeCompleted_DelegateWrapper(const FMulticastScriptDelegate& GearChangeCompleted) \
{ \
	GearChangeCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_10_DELEGATE \
static inline void FGearChangeStarted_DelegateWrapper(const FMulticastScriptDelegate& GearChangeStarted) \
{ \
	GearChangeStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGearDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GearDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGearNumber) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GearNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGearNumber(Z_Param_GearNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGearUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GearUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEngineThrottleInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrottleInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEngineThrottleInput(Z_Param_ThrottleInput); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGearDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GearDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGearNumber) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GearNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGearNumber(Z_Param_GearNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGearUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GearUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEngineThrottleInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ThrottleInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEngineThrottleInput(Z_Param_ThrottleInput); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandVehicle_EngineComponent(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_ULandVehicle_EngineComponent(); \
public: \
	DECLARE_CLASS(ULandVehicle_EngineComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(ULandVehicle_EngineComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_INCLASS \
private: \
	static void StaticRegisterNativesULandVehicle_EngineComponent(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_ULandVehicle_EngineComponent(); \
public: \
	DECLARE_CLASS(ULandVehicle_EngineComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(ULandVehicle_EngineComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandVehicle_EngineComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandVehicle_EngineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandVehicle_EngineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandVehicle_EngineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandVehicle_EngineComponent(ULandVehicle_EngineComponent&&); \
	NO_API ULandVehicle_EngineComponent(const ULandVehicle_EngineComponent&); \
public:


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandVehicle_EngineComponent(ULandVehicle_EngineComponent&&); \
	NO_API ULandVehicle_EngineComponent(const ULandVehicle_EngineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandVehicle_EngineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandVehicle_EngineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULandVehicle_EngineComponent)


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_92_PROLOG
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_RPC_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_INCLASS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_LandVehicle_EngineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
