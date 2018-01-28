// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueManVehiclePhysics_init() {}
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeStarted__DelegateSignature();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeCompleted__DelegateSignature();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_ClientUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueManVehiclePhysics_GearChangeCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueManVehiclePhysics_ClientUpdate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueManVehiclePhysics",
				PKG_CompiledIn | 0x00000000,
				0x2D8FDAAE,
				0x9C91EC04,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
