// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef POINTFENCE_AlexCharacter_generated_h
#error "AlexCharacter.generated.h already included, missing '#pragma once' in AlexCharacter.h"
#endif
#define POINTFENCE_AlexCharacter_generated_h

#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_SPARSE_DATA
#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execOnObjectBeginOverlap);


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execOnObjectBeginOverlap);


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlexCharacter(); \
	friend struct Z_Construct_UClass_AAlexCharacter_Statics; \
public: \
	DECLARE_CLASS(AAlexCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(AAlexCharacter)


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAAlexCharacter(); \
	friend struct Z_Construct_UClass_AAlexCharacter_Statics; \
public: \
	DECLARE_CLASS(AAlexCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(AAlexCharacter)


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlexCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlexCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlexCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlexCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlexCharacter(AAlexCharacter&&); \
	NO_API AAlexCharacter(const AAlexCharacter&); \
public:


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlexCharacter(AAlexCharacter&&); \
	NO_API AAlexCharacter(const AAlexCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlexCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlexCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAlexCharacter)


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_17_PROLOG
#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_SPARSE_DATA \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_RPC_WRAPPERS \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_INCLASS \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_SPARSE_DATA \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTFENCE_API UClass* StaticClass<class AAlexCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pointfence_Source_Pointfence_Characters_Alex_AlexCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
