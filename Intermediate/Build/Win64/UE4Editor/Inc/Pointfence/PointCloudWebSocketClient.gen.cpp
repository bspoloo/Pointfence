// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pointfence/Server/PointCloudWebSocketClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudWebSocketClient() {}
// Cross Module References
	POINTFENCE_API UClass* Z_Construct_UClass_APointCloudWebSocketClient_NoRegister();
	POINTFENCE_API UClass* Z_Construct_UClass_APointCloudWebSocketClient();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pointfence();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APointCloudWebSocketClient::execSaveGLBToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveGLBToFile(Z_Param_FilePath,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APointCloudWebSocketClient::execRequestGLBFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGLBFile(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APointCloudWebSocketClient::execDisconnectFromServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectFromServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APointCloudWebSocketClient::execConnectToServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToServer(Z_Param_ServerUrl);
		P_NATIVE_END;
	}
	static FName NAME_APointCloudWebSocketClient_OnGLBFileReceived = FName(TEXT("OnGLBFileReceived"));
	void APointCloudWebSocketClient::OnGLBFileReceived(const FString& FilePath)
	{
		PointCloudWebSocketClient_eventOnGLBFileReceived_Parms Parms;
		Parms.FilePath=FilePath;
		ProcessEvent(FindFunctionChecked(NAME_APointCloudWebSocketClient_OnGLBFileReceived),&Parms);
	}
	static FName NAME_APointCloudWebSocketClient_OnReceiveProgress = FName(TEXT("OnReceiveProgress"));
	void APointCloudWebSocketClient::OnReceiveProgress(int32 ByteReceived, int32 TotalBytes)
	{
		PointCloudWebSocketClient_eventOnReceiveProgress_Parms Parms;
		Parms.ByteReceived=ByteReceived;
		Parms.TotalBytes=TotalBytes;
		ProcessEvent(FindFunctionChecked(NAME_APointCloudWebSocketClient_OnReceiveProgress),&Parms);
	}
	void APointCloudWebSocketClient::StaticRegisterNativesAPointCloudWebSocketClient()
	{
		UClass* Class = APointCloudWebSocketClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToServer", &APointCloudWebSocketClient::execConnectToServer },
			{ "DisconnectFromServer", &APointCloudWebSocketClient::execDisconnectFromServer },
			{ "RequestGLBFile", &APointCloudWebSocketClient::execRequestGLBFile },
			{ "SaveGLBToFile", &APointCloudWebSocketClient::execSaveGLBToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics
	{
		struct PointCloudWebSocketClient_eventConnectToServer_Parms
		{
			FString ServerUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::NewProp_ServerUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::NewProp_ServerUrl = { "ServerUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventConnectToServer_Parms, ServerUrl), METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::NewProp_ServerUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::NewProp_ServerUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::NewProp_ServerUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Websocket" },
		{ "Comment", "// Called every frame\n" },
		{ "CPP_Default_ServerUrl", "ws://192.168.100.73:8000/api/v1/scanning/ws/unreal" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointCloudWebSocketClient, nullptr, "ConnectToServer", nullptr, nullptr, sizeof(PointCloudWebSocketClient_eventConnectToServer_Parms), Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Websocket" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointCloudWebSocketClient, nullptr, "DisconnectFromServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventOnGLBFileReceived_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Websocket" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointCloudWebSocketClient, nullptr, "OnGLBFileReceived", nullptr, nullptr, sizeof(PointCloudWebSocketClient_eventOnGLBFileReceived_Parms), Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ByteReceived;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::NewProp_ByteReceived = { "ByteReceived", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventOnReceiveProgress_Parms, ByteReceived), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventOnReceiveProgress_Parms, TotalBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::NewProp_ByteReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::NewProp_TotalBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Websocket" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointCloudWebSocketClient, nullptr, "OnReceiveProgress", nullptr, nullptr, sizeof(PointCloudWebSocketClient_eventOnReceiveProgress_Parms), Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics
	{
		struct PointCloudWebSocketClient_eventRequestGLBFile_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventRequestGLBFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Websocket" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointCloudWebSocketClient, nullptr, "RequestGLBFile", nullptr, nullptr, sizeof(PointCloudWebSocketClient_eventRequestGLBFile_Parms), Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics
	{
		struct PointCloudWebSocketClient_eventSaveGLBToFile_Parms
		{
			FString FilePath;
			TArray<uint8> Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventSaveGLBToFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointCloudWebSocketClient_eventSaveGLBToFile_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudWebSocketClient_eventSaveGLBToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PointCloudWebSocketClient_eventSaveGLBToFile_Parms), &Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Websocket" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointCloudWebSocketClient, nullptr, "SaveGLBToFile", nullptr, nullptr, sizeof(PointCloudWebSocketClient_eventSaveGLBToFile_Parms), Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APointCloudWebSocketClient_NoRegister()
	{
		return APointCloudWebSocketClient::StaticClass();
	}
	struct Z_Construct_UClass_APointCloudWebSocketClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointCloudWebSocketClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pointfence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APointCloudWebSocketClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer, "ConnectToServer" }, // 997908389
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer, "DisconnectFromServer" }, // 1768775706
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_OnGLBFileReceived, "OnGLBFileReceived" }, // 2954341500
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_OnReceiveProgress, "OnReceiveProgress" }, // 1434062925
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_RequestGLBFile, "RequestGLBFile" }, // 78080510
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_SaveGLBToFile, "SaveGLBToFile" }, // 4231064435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Server/PointCloudWebSocketClient.h" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "PointCloudWebSocketClient" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudWebSocketClient, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointCloudWebSocketClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointCloudWebSocketClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointCloudWebSocketClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::ClassParams = {
		&APointCloudWebSocketClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APointCloudWebSocketClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointCloudWebSocketClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APointCloudWebSocketClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APointCloudWebSocketClient, 1122263826);
	template<> POINTFENCE_API UClass* StaticClass<APointCloudWebSocketClient>()
	{
		return APointCloudWebSocketClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APointCloudWebSocketClient(Z_Construct_UClass_APointCloudWebSocketClient, &APointCloudWebSocketClient::StaticClass, TEXT("/Script/Pointfence"), TEXT("APointCloudWebSocketClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointCloudWebSocketClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
