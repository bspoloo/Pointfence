// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pointfence/Widgets/UConnectionStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUConnectionStatusWidget() {}
// Cross Module References
	POINTFENCE_API UClass* Z_Construct_UClass_UUConnectionStatusWidget_NoRegister();
	POINTFENCE_API UClass* Z_Construct_UClass_UUConnectionStatusWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Pointfence();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUConnectionStatusWidget::execShowConnecting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowConnecting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUConnectionStatusWidget::execShowWarning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowWarning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUConnectionStatusWidget::execShowError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUConnectionStatusWidget::execShowConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowConnected();
		P_NATIVE_END;
	}
	void UUConnectionStatusWidget::StaticRegisterNativesUUConnectionStatusWidget()
	{
		UClass* Class = UUConnectionStatusWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowConnected", &UUConnectionStatusWidget::execShowConnected },
			{ "ShowConnecting", &UUConnectionStatusWidget::execShowConnecting },
			{ "ShowError", &UUConnectionStatusWidget::execShowError },
			{ "ShowWarning", &UUConnectionStatusWidget::execShowWarning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection Status" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUConnectionStatusWidget, nullptr, "ShowConnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection Status" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUConnectionStatusWidget, nullptr, "ShowConnecting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUConnectionStatusWidget_ShowError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUConnectionStatusWidget_ShowError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection Status" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUConnectionStatusWidget_ShowError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUConnectionStatusWidget, nullptr, "ShowError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUConnectionStatusWidget_ShowError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUConnectionStatusWidget_ShowError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUConnectionStatusWidget_ShowError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUConnectionStatusWidget_ShowError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connection Status" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUConnectionStatusWidget, nullptr, "ShowWarning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUConnectionStatusWidget_NoRegister()
	{
		return UUConnectionStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUConnectionStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Warning_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Warning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connecting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connecting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUConnectionStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Pointfence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUConnectionStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnected, "ShowConnected" }, // 334317554
		{ &Z_Construct_UFunction_UUConnectionStatusWidget_ShowConnecting, "ShowConnecting" }, // 3872629664
		{ &Z_Construct_UFunction_UUConnectionStatusWidget_ShowError, "ShowError" }, // 3134028524
		{ &Z_Construct_UFunction_UUConnectionStatusWidget_ShowWarning, "ShowWarning" }, // 599633758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUConnectionStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/UConnectionStatusWidget.h" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connected_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUConnectionStatusWidget, Connected), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Error_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUConnectionStatusWidget, Error), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Warning_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Warning = { "Warning", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUConnectionStatusWidget, Warning), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Warning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Warning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connecting_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Widgets/UConnectionStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connecting = { "Connecting", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUConnectionStatusWidget, Connecting), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connecting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUConnectionStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Warning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUConnectionStatusWidget_Statics::NewProp_Connecting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUConnectionStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUConnectionStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUConnectionStatusWidget_Statics::ClassParams = {
		&UUConnectionStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUConnectionStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUConnectionStatusWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUConnectionStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUConnectionStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUConnectionStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUConnectionStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUConnectionStatusWidget, 3807057254);
	template<> POINTFENCE_API UClass* StaticClass<UUConnectionStatusWidget>()
	{
		return UUConnectionStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUConnectionStatusWidget(Z_Construct_UClass_UUConnectionStatusWidget, &UUConnectionStatusWidget::StaticClass, TEXT("/Script/Pointfence"), TEXT("UUConnectionStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUConnectionStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
