// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClientSidePrediction_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientSidePrediction_Component() {}
// Cross Module References
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_ClientUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueManVehiclePhysics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UClientSidePrediction_Component_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UClientSidePrediction_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_UClientSidePrediction_Component_AllReceiveTimeRequest();
	BLUEMANVEHICLEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FHistoryBufferMinimum();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_UClientSidePrediction_Component_ClientReceiveTimeRequest();
	BLUEMANVEHICLEPHYSICS_API UFunction* Z_Construct_UFunction_UClientSidePrediction_Component_SendServerTimeRequest();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_USuspensionPhysics_Component_NoRegister();
	BLUEMANVEHICLEPHYSICS_API UClass* Z_Construct_UClass_UWheelManager_Component_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_BlueManVehiclePhysics_ClientUpdate__DelegateSignature()
	{
		struct _Script_BlueManVehiclePhysics_eventClientUpdate_Parms
		{
			FVector RedLocation;
			FVector GreenLocation;
			FVector BlueLocation;
			FRotator RedRotation;
			FRotator GreenRotation;
			FRotator BlueRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms, BlueRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "GreenRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms, GreenRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RedRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms, RedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms, BlueLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GreenLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms, GreenLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RedLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms, RedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GreenRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RedRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GreenLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RedLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics, "ClientUpdate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BlueManVehiclePhysics_eventClientUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UClientSidePrediction_Component_AllReceiveTimeRequest = FName(TEXT("AllReceiveTimeRequest"));
	void UClientSidePrediction_Component::AllReceiveTimeRequest(FHistoryBufferMinimum Correction)
	{
		ClientSidePrediction_Component_eventAllReceiveTimeRequest_Parms Parms;
		Parms.Correction=Correction;
		ProcessEvent(FindFunctionChecked(NAME_UClientSidePrediction_Component_AllReceiveTimeRequest),&Parms);
	}
	static FName NAME_UClientSidePrediction_Component_ClientReceiveTimeRequest = FName(TEXT("ClientReceiveTimeRequest"));
	void UClientSidePrediction_Component::ClientReceiveTimeRequest(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction)
	{
		ClientSidePrediction_Component_eventClientReceiveTimeRequest_Parms Parms;
		Parms.ReceivedServerTime=ReceivedServerTime;
		Parms.SentTime=SentTime;
		Parms.Correction=Correction;
		ProcessEvent(FindFunctionChecked(NAME_UClientSidePrediction_Component_ClientReceiveTimeRequest),&Parms);
	}
	static FName NAME_UClientSidePrediction_Component_SendServerTimeRequest = FName(TEXT("SendServerTimeRequest"));
	void UClientSidePrediction_Component::SendServerTimeRequest(float SentTime, UPrimitiveComponent* Comp)
	{
		ClientSidePrediction_Component_eventSendServerTimeRequest_Parms Parms;
		Parms.SentTime=SentTime;
		Parms.Comp=Comp;
		ProcessEvent(FindFunctionChecked(NAME_UClientSidePrediction_Component_SendServerTimeRequest),&Parms);
	}
	void UClientSidePrediction_Component::StaticRegisterNativesUClientSidePrediction_Component()
	{
		UClass* Class = UClientSidePrediction_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllReceiveTimeRequest", (Native)&UClientSidePrediction_Component::execAllReceiveTimeRequest },
			{ "ClientReceiveTimeRequest", (Native)&UClientSidePrediction_Component::execClientReceiveTimeRequest },
			{ "SendServerTimeRequest", (Native)&UClientSidePrediction_Component::execSendServerTimeRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UClientSidePrediction_Component_AllReceiveTimeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Correction = { UE4CodeGen_Private::EPropertyClass::Struct, "Correction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClientSidePrediction_Component_eventAllReceiveTimeRequest_Parms, Correction), Z_Construct_UScriptStruct_FHistoryBufferMinimum, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Correction,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientSidePrediction_Component, "AllReceiveTimeRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(ClientSidePrediction_Component_eventAllReceiveTimeRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClientSidePrediction_Component_ClientReceiveTimeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Correction = { UE4CodeGen_Private::EPropertyClass::Struct, "Correction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClientSidePrediction_Component_eventClientReceiveTimeRequest_Parms, Correction), Z_Construct_UScriptStruct_FHistoryBufferMinimum, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SentTime = { UE4CodeGen_Private::EPropertyClass::Float, "SentTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClientSidePrediction_Component_eventClientReceiveTimeRequest_Parms, SentTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReceivedServerTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReceivedServerTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClientSidePrediction_Component_eventClientReceiveTimeRequest_Parms, ReceivedServerTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Correction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SentTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceivedServerTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientSidePrediction_Component, "ClientReceiveTimeRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, sizeof(ClientSidePrediction_Component_eventClientReceiveTimeRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClientSidePrediction_Component_SendServerTimeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Comp = { UE4CodeGen_Private::EPropertyClass::Object, "Comp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ClientSidePrediction_Component_eventSendServerTimeRequest_Parms, Comp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Comp_MetaData, ARRAY_COUNT(NewProp_Comp_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SentTime = { UE4CodeGen_Private::EPropertyClass::Float, "SentTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ClientSidePrediction_Component_eventSendServerTimeRequest_Parms, SentTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Comp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SentTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UClientSidePrediction_Component, "SendServerTimeRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(ClientSidePrediction_Component_eventSendServerTimeRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClientSidePrediction_Component_NoRegister()
	{
		return UClientSidePrediction_Component::StaticClass();
	}
	UClass* Z_Construct_UClass_UClientSidePrediction_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BlueManVehiclePhysics,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UClientSidePrediction_Component_AllReceiveTimeRequest, "AllReceiveTimeRequest" }, // 4116667258
				{ &Z_Construct_UFunction_UClientSidePrediction_Component_ClientReceiveTimeRequest, "ClientReceiveTimeRequest" }, // 3503482507
				{ &Z_Construct_UFunction_UClientSidePrediction_Component_SendServerTimeRequest, "SendServerTimeRequest" }, // 1665245245
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "ClientSidePrediction_Component.h" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
				{ "ToolTip", "This component provides custom physics replication." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionTraceWorld_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuspensionTraceWorld = { UE4CodeGen_Private::EPropertyClass::Object, "SuspensionTraceWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, SuspensionTraceWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_SuspensionTraceWorld_MetaData, ARRAY_COUNT(NewProp_SuspensionTraceWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_Pawn_MetaData, ARRAY_COUNT(NewProp_Pawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientUpdate_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientUpdate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ClientUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, ClientUpdate), Z_Construct_UDelegateFunction_BlueManVehiclePhysics_ClientUpdate__DelegateSignature, METADATA_PARAMS(NewProp_ClientUpdate_MetaData, ARRAY_COUNT(NewProp_ClientUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Blue_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Blue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Blue = { UE4CodeGen_Private::EPropertyClass::Bool, "Blue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Blue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Blue_MetaData, ARRAY_COUNT(NewProp_Blue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Green_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Green = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Green = { UE4CodeGen_Private::EPropertyClass::Bool, "Green", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Green_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Green_MetaData, ARRAY_COUNT(NewProp_Green_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Red_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Red = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Red = { UE4CodeGen_Private::EPropertyClass::Bool, "Red", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Red_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Red_MetaData, ARRAY_COUNT(NewProp_Red_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Persistent_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Persistent_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Persistent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Persistent = { UE4CodeGen_Private::EPropertyClass::Bool, "Persistent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Persistent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Persistent_MetaData, ARRAY_COUNT(NewProp_Persistent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Draw_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Draw_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Draw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Draw = { UE4CodeGen_Private::EPropertyClass::Bool, "Draw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Draw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Draw_MetaData, ARRAY_COUNT(NewProp_Draw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Debug_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Debug = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Debug = { UE4CodeGen_Private::EPropertyClass::Bool, "Debug", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Debug_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Debug_MetaData, ARRAY_COUNT(NewProp_Debug_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wait_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			auto NewProp_Wait_SetBit = [](void* Obj){ ((UClientSidePrediction_Component*)Obj)->Wait = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Wait = { UE4CodeGen_Private::EPropertyClass::Bool, "Wait", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClientSidePrediction_Component), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Wait_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Wait_MetaData, ARRAY_COUNT(NewProp_Wait_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCorrectionHigh_Rotation_MetaData[] = {
				{ "Category", "Settings|Rotation" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorCorrectionHigh_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorCorrectionHigh_Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, ErrorCorrectionHigh_Rotation), METADATA_PARAMS(NewProp_ErrorCorrectionHigh_Rotation_MetaData, ARRAY_COUNT(NewProp_ErrorCorrectionHigh_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCorrection_Rotation_MetaData[] = {
				{ "Category", "Settings|Rotation" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorCorrection_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorCorrection_Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, ErrorCorrection_Rotation), METADATA_PARAMS(NewProp_ErrorCorrection_Rotation_MetaData, ARRAY_COUNT(NewProp_ErrorCorrection_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedError_Rotation_MetaData[] = {
				{ "Category", "Settings|Rotation" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedError_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "AllowedError_Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, AllowedError_Rotation), METADATA_PARAMS(NewProp_AllowedError_Rotation_MetaData, ARRAY_COUNT(NewProp_AllowedError_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCorrectionHigh_MetaData[] = {
				{ "Category", "Settings|Position" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorCorrectionHigh = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorCorrectionHigh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, ErrorCorrectionHigh), METADATA_PARAMS(NewProp_ErrorCorrectionHigh_MetaData, ARRAY_COUNT(NewProp_ErrorCorrectionHigh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCorrection_MetaData[] = {
				{ "Category", "Settings|Position" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorCorrection = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorCorrection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, ErrorCorrection), METADATA_PARAMS(NewProp_ErrorCorrection_MetaData, ARRAY_COUNT(NewProp_ErrorCorrection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedError_MetaData[] = {
				{ "Category", "Settings|Position" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedError = { UE4CodeGen_Private::EPropertyClass::Float, "AllowedError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, AllowedError), METADATA_PARAMS(NewProp_AllowedError_MetaData, ARRAY_COUNT(NewProp_AllowedError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundTripMultiplier_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundTripMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RoundTripMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, RoundTripMultiplier), METADATA_PARAMS(NewProp_RoundTripMultiplier_MetaData, ARRAY_COUNT(NewProp_RoundTripMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetUpdates_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetUpdates = { UE4CodeGen_Private::EPropertyClass::Float, "NetUpdates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, NetUpdates), METADATA_PARAMS(NewProp_NetUpdates_MetaData, ARRAY_COUNT(NewProp_NetUpdates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorLimit_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorLimit = { UE4CodeGen_Private::EPropertyClass::Int, "ErrorLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, ErrorLimit), METADATA_PARAMS(NewProp_ErrorLimit_MetaData, ARRAY_COUNT(NewProp_ErrorLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageErrorTolerance_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AverageErrorTolerance = { UE4CodeGen_Private::EPropertyClass::Int, "AverageErrorTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, AverageErrorTolerance), METADATA_PARAMS(NewProp_AverageErrorTolerance_MetaData, ARRAY_COUNT(NewProp_AverageErrorTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageContainerSize_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AverageContainerSize = { UE4CodeGen_Private::EPropertyClass::Int, "AverageContainerSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, AverageContainerSize), METADATA_PARAMS(NewProp_AverageContainerSize_MetaData, ARRAY_COUNT(NewProp_AverageContainerSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineComponent_MetaData[] = {
				{ "Category", "Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "EngineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, EngineComponent), Z_Construct_UClass_ULandVehicle_EngineComponent_NoRegister, METADATA_PARAMS(NewProp_EngineComponent_MetaData, ARRAY_COUNT(NewProp_EngineComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Allwheels_MetaData[] = {
				{ "Category", "Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Allwheels = { UE4CodeGen_Private::EPropertyClass::Array, "Allwheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000800000000d, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, Allwheels), METADATA_PARAMS(NewProp_Allwheels_MetaData, ARRAY_COUNT(NewProp_Allwheels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Allwheels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Allwheels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USuspensionPhysics_Component_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelManager_MetaData[] = {
				{ "Category", "Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WheelManager = { UE4CodeGen_Private::EPropertyClass::Object, "WheelManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, WheelManager), Z_Construct_UClass_UWheelManager_Component_NoRegister, METADATA_PARAMS(NewProp_WheelManager_MetaData, ARRAY_COUNT(NewProp_WheelManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPMesh_MetaData[] = {
				{ "Category", "Settings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ClientSidePrediction_Component.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BPMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BPMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UClientSidePrediction_Component, BPMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_BPMesh_MetaData, ARRAY_COUNT(NewProp_BPMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuspensionTraceWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Green,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Red,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Persistent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Draw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Debug,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wait,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorCorrectionHigh_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorCorrection_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedError_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorCorrectionHigh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorCorrection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundTripMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetUpdates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AverageErrorTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AverageContainerSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Allwheels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Allwheels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WheelManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BPMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClientSidePrediction_Component>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClientSidePrediction_Component::StaticClass,
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
	IMPLEMENT_CLASS(UClientSidePrediction_Component, 3454277956);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientSidePrediction_Component(Z_Construct_UClass_UClientSidePrediction_Component, &UClientSidePrediction_Component::StaticClass, TEXT("/Script/BlueManVehiclePhysics"), TEXT("UClientSidePrediction_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientSidePrediction_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
