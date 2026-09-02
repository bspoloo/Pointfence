// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef POINTFENCE_GLBModelActor_generated_h
#error "GLBModelActor.generated.h already included, missing '#pragma once' in GLBModelActor.h"
#endif
#define POINTFENCE_GLBModelActor_generated_h

#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_SPARSE_DATA
#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearProceduralMesh); \
	DECLARE_FUNCTION(execCreateProceduralMesh); \
	DECLARE_FUNCTION(execDeleteModel); \
	DECLARE_FUNCTION(execRotateModel); \
	DECLARE_FUNCTION(execSetModelScale);


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearProceduralMesh); \
	DECLARE_FUNCTION(execCreateProceduralMesh); \
	DECLARE_FUNCTION(execDeleteModel); \
	DECLARE_FUNCTION(execRotateModel); \
	DECLARE_FUNCTION(execSetModelScale);


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_EVENT_PARMS \
	struct GLBModelActor_eventOnModelLoadFailed_Parms \
	{ \
		FString Error; \
	};


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_CALLBACK_WRAPPERS
#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGLBModelActor(); \
	friend struct Z_Construct_UClass_AGLBModelActor_Statics; \
public: \
	DECLARE_CLASS(AGLBModelActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(AGLBModelActor)


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGLBModelActor(); \
	friend struct Z_Construct_UClass_AGLBModelActor_Statics; \
public: \
	DECLARE_CLASS(AGLBModelActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(AGLBModelActor)


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGLBModelActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGLBModelActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGLBModelActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGLBModelActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGLBModelActor(AGLBModelActor&&); \
	NO_API AGLBModelActor(const AGLBModelActor&); \
public:


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGLBModelActor(AGLBModelActor&&); \
	NO_API AGLBModelActor(const AGLBModelActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGLBModelActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGLBModelActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGLBModelActor)


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_PRIVATE_PROPERTY_OFFSET
#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_11_PROLOG \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_EVENT_PARMS


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_SPARSE_DATA \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_RPC_WRAPPERS \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_CALLBACK_WRAPPERS \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_INCLASS \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_SPARSE_DATA \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_CALLBACK_WRAPPERS \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_INCLASS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTFENCE_API UClass* StaticClass<class AGLBModelActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pointfence_Source_Pointfence_ItemsGLB_GLBModelActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
