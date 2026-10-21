// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTFENCE_UConnectionStatusWidget_generated_h
#error "UConnectionStatusWidget.generated.h already included, missing '#pragma once' in UConnectionStatusWidget.h"
#endif
#define POINTFENCE_UConnectionStatusWidget_generated_h

#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_SPARSE_DATA
#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowConnecting); \
	DECLARE_FUNCTION(execShowWarning); \
	DECLARE_FUNCTION(execShowError); \
	DECLARE_FUNCTION(execShowConnected);


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowConnecting); \
	DECLARE_FUNCTION(execShowWarning); \
	DECLARE_FUNCTION(execShowError); \
	DECLARE_FUNCTION(execShowConnected);


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUConnectionStatusWidget(); \
	friend struct Z_Construct_UClass_UUConnectionStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UUConnectionStatusWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(UUConnectionStatusWidget)


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUConnectionStatusWidget(); \
	friend struct Z_Construct_UClass_UUConnectionStatusWidget_Statics; \
public: \
	DECLARE_CLASS(UUConnectionStatusWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pointfence"), NO_API) \
	DECLARE_SERIALIZER(UUConnectionStatusWidget)


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUConnectionStatusWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUConnectionStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUConnectionStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUConnectionStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUConnectionStatusWidget(UUConnectionStatusWidget&&); \
	NO_API UUConnectionStatusWidget(const UUConnectionStatusWidget&); \
public:


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUConnectionStatusWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUConnectionStatusWidget(UUConnectionStatusWidget&&); \
	NO_API UUConnectionStatusWidget(const UUConnectionStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUConnectionStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUConnectionStatusWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUConnectionStatusWidget)


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Connected() { return STRUCT_OFFSET(UUConnectionStatusWidget, Connected); } \
	FORCEINLINE static uint32 __PPO__Error() { return STRUCT_OFFSET(UUConnectionStatusWidget, Error); } \
	FORCEINLINE static uint32 __PPO__Warning() { return STRUCT_OFFSET(UUConnectionStatusWidget, Warning); } \
	FORCEINLINE static uint32 __PPO__Connecting() { return STRUCT_OFFSET(UUConnectionStatusWidget, Connecting); }


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_13_PROLOG
#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_SPARSE_DATA \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_RPC_WRAPPERS \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_INCLASS \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_SPARSE_DATA \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_INCLASS_NO_PURE_DECLS \
	Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTFENCE_API UClass* StaticClass<class UUConnectionStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pointfence_Source_Pointfence_Widgets_UConnectionStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
