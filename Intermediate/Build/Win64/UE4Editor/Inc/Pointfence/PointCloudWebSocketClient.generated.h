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

#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_SPARSE_DATA
#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnectFromServer); \
	DECLARE_FUNCTION(execConnectToServer);


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnectFromServer); \
	DECLARE_FUNCTION(execConnectToServer);


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointCloudWebSocketClient(); \
	friend struct Z_Construct_UClass_APointCloudWebSocketClient_Statics; \
public: \
	DECLARE_CLASS(APointCloudWebSocketClient, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(APointCloudWebSocketClient)


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPointCloudWebSocketClient(); \
	friend struct Z_Construct_UClass_APointCloudWebSocketClient_Statics; \
public: \
	DECLARE_CLASS(APointCloudWebSocketClient, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(APointCloudWebSocketClient)


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_STANDARD_CONSTRUCTORS \
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


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointCloudWebSocketClient(APointCloudWebSocketClient&&); \
	NO_API APointCloudWebSocketClient(const APointCloudWebSocketClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointCloudWebSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointCloudWebSocketClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APointCloudWebSocketClient)


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(APointCloudWebSocketClient, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__PressParticle() { return STRUCT_OFFSET(APointCloudWebSocketClient, PressParticle); } \
	FORCEINLINE static uint32 __PPO__ParticleComponent() { return STRUCT_OFFSET(APointCloudWebSocketClient, ParticleComponent); }


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_20_PROLOG
#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_SPARSE_DATA \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_RPC_WRAPPERS \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_INCLASS \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_SPARSE_DATA \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_INCLASS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTFENCE_API UClass* StaticClass<class APointCloudWebSocketClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pointfence_Source_Pointfence_Server_PointCloudWebSocketClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
