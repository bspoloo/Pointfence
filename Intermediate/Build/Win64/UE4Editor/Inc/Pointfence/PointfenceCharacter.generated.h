// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTFENCE_PointfenceCharacter_generated_h
#error "PointfenceCharacter.generated.h already included, missing '#pragma once' in PointfenceCharacter.h"
#endif
#define POINTFENCE_PointfenceCharacter_generated_h

#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_SPARSE_DATA
#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_RPC_WRAPPERS
#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointfenceCharacter(); \
	friend struct Z_Construct_UClass_APointfenceCharacter_Statics; \
public: \
	DECLARE_CLASS(APointfenceCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(APointfenceCharacter)


#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPointfenceCharacter(); \
	friend struct Z_Construct_UClass_APointfenceCharacter_Statics; \
public: \
	DECLARE_CLASS(APointfenceCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(APointfenceCharacter)


#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APointfenceCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointfenceCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointfenceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointfenceCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointfenceCharacter(APointfenceCharacter&&); \
	NO_API APointfenceCharacter(const APointfenceCharacter&); \
public:


#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APointfenceCharacter(APointfenceCharacter&&); \
	NO_API APointfenceCharacter(const APointfenceCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointfenceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointfenceCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APointfenceCharacter)


#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APointfenceCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APointfenceCharacter, FollowCamera); }


#define Pointfence_Source_Pointfence_PointfenceCharacter_h_9_PROLOG
#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_SPARSE_DATA \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_RPC_WRAPPERS \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_INCLASS \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pointfence_Source_Pointfence_PointfenceCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_SPARSE_DATA \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_PointfenceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTFENCE_API UClass* StaticClass<class APointfenceCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pointfence_Source_Pointfence_PointfenceCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
