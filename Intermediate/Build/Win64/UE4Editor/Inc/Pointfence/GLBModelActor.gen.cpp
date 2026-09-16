// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pointfence/ItemsGLB/GLBModelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLBModelActor() {}
// Cross Module References
	POINTFENCE_API UClass* Z_Construct_UClass_AGLBModelActor_NoRegister();
	POINTFENCE_API UClass* Z_Construct_UClass_AGLBModelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pointfence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGLBModelActor::execOnObjectBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLBModelActor::execClearProceduralMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearProceduralMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLBModelActor::execCreateProceduralMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateProceduralMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLBModelActor::execDeleteModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLBModelActor::execRotateModel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Roll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateModel(Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLBModelActor::execSetModelScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModelScale(Z_Param_NewScale);
		P_NATIVE_END;
	}
	static FName NAME_AGLBModelActor_OnModelLoaded = FName(TEXT("OnModelLoaded"));
	void AGLBModelActor::OnModelLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGLBModelActor_OnModelLoaded),NULL);
	}
	static FName NAME_AGLBModelActor_OnModelLoadFailed = FName(TEXT("OnModelLoadFailed"));
	void AGLBModelActor::OnModelLoadFailed(const FString& Error)
	{
		GLBModelActor_eventOnModelLoadFailed_Parms Parms;
		Parms.Error=Error;
		ProcessEvent(FindFunctionChecked(NAME_AGLBModelActor_OnModelLoadFailed),&Parms);
	}
	void AGLBModelActor::StaticRegisterNativesAGLBModelActor()
	{
		UClass* Class = AGLBModelActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearProceduralMesh", &AGLBModelActor::execClearProceduralMesh },
			{ "CreateProceduralMesh", &AGLBModelActor::execCreateProceduralMesh },
			{ "DeleteModel", &AGLBModelActor::execDeleteModel },
			{ "OnObjectBeginOverlap", &AGLBModelActor::execOnObjectBeginOverlap },
			{ "RotateModel", &AGLBModelActor::execRotateModel },
			{ "SetModelScale", &AGLBModelActor::execSetModelScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "ClearProceduralMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics
	{
		struct GLBModelActor_eventCreateProceduralMesh_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventCreateProceduralMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventCreateProceduralMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventCreateProceduralMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::NewProp_Normals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "CreateProceduralMesh", nullptr, nullptr, sizeof(GLBModelActor_eventCreateProceduralMesh_Parms), Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_DeleteModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_DeleteModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_DeleteModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "DeleteModel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_DeleteModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_DeleteModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_DeleteModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_DeleteModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_OnModelLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnModelLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_OnModelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "OnModelLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnModelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnModelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_OnModelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_OnModelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventOnModelLoadFailed_Parms, Error), METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "OnModelLoadFailed", nullptr, nullptr, sizeof(GLBModelActor_eventOnModelLoadFailed_Parms), Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics
	{
		struct GLBModelActor_eventOnObjectBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventOnObjectBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventOnObjectBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventOnObjectBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventOnObjectBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GLBModelActor_eventOnObjectBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GLBModelActor_eventOnObjectBeginOverlap_Parms), &Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventOnObjectBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "OnObjectBeginOverlap", nullptr, nullptr, sizeof(GLBModelActor_eventOnObjectBeginOverlap_Parms), Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics
	{
		struct GLBModelActor_eventRotateModel_Parms
		{
			float Pitch;
			float Yaw;
			float Roll;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventRotateModel_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventRotateModel_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventRotateModel_Parms, Roll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::NewProp_Roll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "RotateModel", nullptr, nullptr, sizeof(GLBModelActor_eventRotateModel_Parms), Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_RotateModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_RotateModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics
	{
		struct GLBModelActor_eventSetModelScale_Parms
		{
			float NewScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLBModelActor_eventSetModelScale_Parms, NewScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLBModelActor, nullptr, "SetModelScale", nullptr, nullptr, sizeof(GLBModelActor_eventSetModelScale_Parms), Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLBModelActor_SetModelScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLBModelActor_SetModelScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGLBModelActor_NoRegister()
	{
		return AGLBModelActor::StaticClass();
	}
	struct Z_Construct_UClass_AGLBModelActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGLBModelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pointfence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGLBModelActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGLBModelActor_ClearProceduralMesh, "ClearProceduralMesh" }, // 3717451741
		{ &Z_Construct_UFunction_AGLBModelActor_CreateProceduralMesh, "CreateProceduralMesh" }, // 3995678167
		{ &Z_Construct_UFunction_AGLBModelActor_DeleteModel, "DeleteModel" }, // 2269163694
		{ &Z_Construct_UFunction_AGLBModelActor_OnModelLoaded, "OnModelLoaded" }, // 1366426218
		{ &Z_Construct_UFunction_AGLBModelActor_OnModelLoadFailed, "OnModelLoadFailed" }, // 2740885788
		{ &Z_Construct_UFunction_AGLBModelActor_OnObjectBeginOverlap, "OnObjectBeginOverlap" }, // 3802806193
		{ &Z_Construct_UFunction_AGLBModelActor_RotateModel, "RotateModel" }, // 1745223197
		{ &Z_Construct_UFunction_AGLBModelActor_SetModelScale, "SetModelScale" }, // 781455153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLBModelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemsGLB/GLBModelActor.h" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLBModelActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Model" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLBModelActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLBModelActor, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLBModelActor_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLBModelActor_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLBModelActor_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemsGLB/GLBModelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLBModelActor_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLBModelActor, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLBModelActor_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLBModelActor_Statics::NewProp_CollisionBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGLBModelActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLBModelActor_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLBModelActor_Statics::NewProp_CollisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGLBModelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGLBModelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGLBModelActor_Statics::ClassParams = {
		&AGLBModelActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGLBModelActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGLBModelActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGLBModelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGLBModelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGLBModelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGLBModelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGLBModelActor, 1212472228);
	template<> POINTFENCE_API UClass* StaticClass<AGLBModelActor>()
	{
		return AGLBModelActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGLBModelActor(Z_Construct_UClass_AGLBModelActor, &AGLBModelActor::StaticClass, TEXT("/Script/Pointfence"), TEXT("AGLBModelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGLBModelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
