// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTFENCE_PointCloudWebSocketClient_generated_h
#error "PointCloudWebSocketClient.generated.h already included, missing '#pragma once' in PointCloudWebSocketClient.h"
#endif
#define POINTFENCE_PointCloudWebSocketClient_generated_h

#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_SPARSE_DATA
#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveGLBToFile); \
	DECLARE_FUNCTION(execRequestGLBFile); \
	DECLARE_FUNCTION(execDisconnectFromServer); \
	DECLARE_FUNCTION(execConnectToServer);


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveGLBToFile); \
	DECLARE_FUNCTION(execRequestGLBFile); \
	DECLARE_FUNCTION(execDisconnectFromServer); \
	DECLARE_FUNCTION(execConnectToServer);


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_EVENT_PARMS \
	struct PointCloudWebSocketClient_eventOnGLBFileReceived_Parms \
	{ \
		FString FilePath; \
	}; \
	struct PointCloudWebSocketClient_eventOnReceiveProgress_Parms \
	{ \
		int32 ByteReceived; \
		int32 TotalBytes; \
	};


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_CALLBACK_WRAPPERS
#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointCloudWebSocketClient(); \
	friend struct Z_Construct_UClass_APointCloudWebSocketClient_Statics; \
public: \
	DECLARE_CLASS(APointCloudWebSocketClient, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(APointCloudWebSocketClient)


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPointCloudWebSocketClient(); \
	friend struct Z_Construct_UClass_APointCloudWebSocketClient_Statics; \
public: \
	DECLARE_CLASS(APointCloudWebSocketClient, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(APointCloudWebSocketClient)


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APointCloudWebSocketClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointCloudWebSocketClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointCloudWebSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointCloudWebSocketClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointCloudWebSocketClient(APointCloudWebSocketClient&&); \
	NO_API APointCloudWebSocketClient(const APointCloudWebSocketClient&); \
public:


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointCloudWebSocketClient(APointCloudWebSocketClient&&); \
	NO_API APointCloudWebSocketClient(const APointCloudWebSocketClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointCloudWebSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointCloudWebSocketClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APointCloudWebSocketClient)


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(APointCloudWebSocketClient, MeshComponent); }


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_21_PROLOG \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_EVENT_PARMS


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_PRIVATE_PROPERTY_OFFSET \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_SPARSE_DATA \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_RPC_WRAPPERS \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_CALLBACK_WRAPPERS \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_INCLASS \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_PRIVATE_PROPERTY_OFFSET \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_SPARSE_DATA \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_CALLBACK_WRAPPERS \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_INCLASS_NO_PURE_DECLS \
	pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTFENCE_API UClass* StaticClass<class APointCloudWebSocketClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
