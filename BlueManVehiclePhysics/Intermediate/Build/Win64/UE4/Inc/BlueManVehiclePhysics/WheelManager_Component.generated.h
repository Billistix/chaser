// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWheelDataStruct;
class USuspensionPhysics_Component;
#ifdef BLUEMANVEHICLEPHYSICS_WheelManager_Component_generated_h
#error "WheelManager_Component.generated.h already included, missing '#pragma once' in WheelManager_Component.h"
#endif
#define BLUEMANVEHICLEPHYSICS_WheelManager_Component_generated_h

#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHandbrake) \
	{ \
		P_GET_UBOOL(Z_Param_HandbrakeInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHandbrake(Z_Param_HandbrakeInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteering) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SteeringInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSteering(Z_Param_SteeringInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWheel) \
	{ \
		P_GET_STRUCT(FWheelDataStruct,Z_Param_WheelData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USuspensionPhysics_Component**)Z_Param__Result=this->AddWheel(Z_Param_WheelData); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHandbrake) \
	{ \
		P_GET_UBOOL(Z_Param_HandbrakeInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHandbrake(Z_Param_HandbrakeInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteering) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SteeringInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSteering(Z_Param_SteeringInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWheel) \
	{ \
		P_GET_STRUCT(FWheelDataStruct,Z_Param_WheelData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USuspensionPhysics_Component**)Z_Param__Result=this->AddWheel(Z_Param_WheelData); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWheelManager_Component(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_UWheelManager_Component(); \
public: \
	DECLARE_CLASS(UWheelManager_Component, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(UWheelManager_Component) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWheelManager_Component(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_UWheelManager_Component(); \
public: \
	DECLARE_CLASS(UWheelManager_Component, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(UWheelManager_Component) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWheelManager_Component(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWheelManager_Component) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWheelManager_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWheelManager_Component); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWheelManager_Component(UWheelManager_Component&&); \
	NO_API UWheelManager_Component(const UWheelManager_Component&); \
public:


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWheelManager_Component(UWheelManager_Component&&); \
	NO_API UWheelManager_Component(const UWheelManager_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWheelManager_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWheelManager_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWheelManager_Component)


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(UWheelManager_Component, Mesh); } \
	FORCEINLINE static uint32 __PPO__LeftSide() { return STRUCT_OFFSET(UWheelManager_Component, LeftSide); } \
	FORCEINLINE static uint32 __PPO__RightSide() { return STRUCT_OFFSET(UWheelManager_Component, RightSide); }


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_13_PROLOG
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_RPC_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_INCLASS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_WheelManager_Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
