// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
struct FWheelDataStruct;
#ifdef BLUEMANVEHICLEPHYSICS_SuspensionPhysics_Component_generated_h
#error "SuspensionPhysics_Component.generated.h already included, missing '#pragma once' in SuspensionPhysics_Component.h"
#endif
#define BLUEMANVEHICLEPHYSICS_SuspensionPhysics_Component_generated_h

#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_16_GENERATED_BODY \
	friend BLUEMANVEHICLEPHYSICS_API class UScriptStruct* Z_Construct_UScriptStruct_FFrictionData(); \
	BLUEMANVEHICLEPHYSICS_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDriveForce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDriveForce(Z_Param_ForceInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrakingForce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrakingForce(Z_Param_ForceInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetWheelLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelSuspensionOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetWheelSuspensionOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetWheelMesh(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetWheelData) \
	{ \
		P_GET_STRUCT(FWheelDataStruct,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWheelData(Z_Param_Data); \
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
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMesh(Z_Param_Mesh_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FWheelDataStruct*)Z_Param__Result=this->GetWheelData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateConstraint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreateConstraint(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDriveForce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDriveForce(Z_Param_ForceInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrakingForce) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBrakingForce(Z_Param_ForceInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetWheelLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelSuspensionOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetWheelSuspensionOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetWheelMesh(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetWheelData) \
	{ \
		P_GET_STRUCT(FWheelDataStruct,Z_Param_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWheelData(Z_Param_Data); \
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
	DECLARE_FUNCTION(execSetMesh) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMesh(Z_Param_Mesh_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyWheel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyWheel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWheelData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FWheelDataStruct*)Z_Param__Result=this->GetWheelData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateConstraint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreateConstraint(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSuspensionPhysics_Component(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_USuspensionPhysics_Component(); \
public: \
	DECLARE_CLASS(USuspensionPhysics_Component, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(USuspensionPhysics_Component) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUSuspensionPhysics_Component(); \
	friend BLUEMANVEHICLEPHYSICS_API class UClass* Z_Construct_UClass_USuspensionPhysics_Component(); \
public: \
	DECLARE_CLASS(USuspensionPhysics_Component, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BlueManVehiclePhysics"), NO_API) \
	DECLARE_SERIALIZER(USuspensionPhysics_Component) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USuspensionPhysics_Component(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuspensionPhysics_Component) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuspensionPhysics_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuspensionPhysics_Component); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USuspensionPhysics_Component(USuspensionPhysics_Component&&); \
	NO_API USuspensionPhysics_Component(const USuspensionPhysics_Component&); \
public:


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USuspensionPhysics_Component(USuspensionPhysics_Component&&); \
	NO_API USuspensionPhysics_Component(const USuspensionPhysics_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuspensionPhysics_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuspensionPhysics_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USuspensionPhysics_Component)


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_49_PROLOG
#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_RPC_WRAPPERS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_INCLASS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueManVehiclePhysics_Source_BlueManVehiclePhysics_Public_SuspensionPhysics_Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
