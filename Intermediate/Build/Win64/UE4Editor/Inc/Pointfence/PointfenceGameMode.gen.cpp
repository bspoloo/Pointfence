// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pointfence/PointfenceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointfenceGameMode() {}
// Cross Module References
	POINTFENCE_API UClass* Z_Construct_UClass_APointfenceGameMode_NoRegister();
	POINTFENCE_API UClass* Z_Construct_UClass_APointfenceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pointfence();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void APointfenceGameMode::StaticRegisterNativesAPointfenceGameMode()
	{
	}
	UClass* Z_Construct_UClass_APointfenceGameMode_NoRegister()
	{
		return APointfenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APointfenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointfenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pointfence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointfenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PointfenceGameMode.h" },
		{ "ModuleRelativePath", "PointfenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointfenceGameMode_Statics::NewProp_BackgroundMusic_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "PointfenceGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointfenceGameMode_Statics::NewProp_BackgroundMusic = { "BackgroundMusic", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointfenceGameMode, BackgroundMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointfenceGameMode_Statics::NewProp_BackgroundMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointfenceGameMode_Statics::NewProp_BackgroundMusic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointfenceGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointfenceGameMode_Statics::NewProp_BackgroundMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointfenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointfenceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APointfenceGameMode_Statics::ClassParams = {
		&APointfenceGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointfenceGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointfenceGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APointfenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointfenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointfenceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APointfenceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APointfenceGameMode, 1163187991);
	template<> POINTFENCE_API UClass* StaticClass<APointfenceGameMode>()
	{
		return APointfenceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APointfenceGameMode(Z_Construct_UClass_APointfenceGameMode, &APointfenceGameMode::StaticClass, TEXT("/Script/Pointfence"), TEXT("APointfenceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointfenceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
