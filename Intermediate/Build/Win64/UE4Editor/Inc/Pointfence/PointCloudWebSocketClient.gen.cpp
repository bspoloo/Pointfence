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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	POINTFENCE_API UClass* Z_Construct_UClass_UUConnectionStatusWidget_NoRegister();
// End Cross Module References
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
	void APointCloudWebSocketClient::StaticRegisterNativesAPointCloudWebSocketClient()
	{
		UClass* Class = APointCloudWebSocketClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToServer", &APointCloudWebSocketClient::execConnectToServer },
			{ "DisconnectFromServer", &APointCloudWebSocketClient::execDisconnectFromServer },
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
		{ "CPP_Default_ServerUrl", "ws://192.168.100.73:8000/api/v1/scanning/ws/unreal" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionStatusWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConnectionStatusWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionStatusWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionStatusWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointCloudWebSocketClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pointfence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APointCloudWebSocketClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_ConnectToServer, "ConnectToServer" }, // 2523309809
		{ &Z_Construct_UFunction_APointCloudWebSocketClient_DisconnectFromServer, "DisconnectFromServer" }, // 1768775706
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Server/PointCloudWebSocketClient.h" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudWebSocketClient, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_PressParticle_MetaData[] = {
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_PressParticle = { "PressParticle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudWebSocketClient, PressParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_PressParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_PressParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ParticleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ParticleComponent = { "ParticleComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudWebSocketClient, ParticleComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ParticleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ParticleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidgetClass = { "ConnectionStatusWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudWebSocketClient, ConnectionStatusWidgetClass), Z_Construct_UClass_UUConnectionStatusWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Server/PointCloudWebSocketClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidget = { "ConnectionStatusWidget", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointCloudWebSocketClient, ConnectionStatusWidget), Z_Construct_UClass_UUConnectionStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointCloudWebSocketClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_PressParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ParticleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointCloudWebSocketClient_Statics::NewProp_ConnectionStatusWidget,
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
	IMPLEMENT_CLASS(APointCloudWebSocketClient, 791000382);
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
