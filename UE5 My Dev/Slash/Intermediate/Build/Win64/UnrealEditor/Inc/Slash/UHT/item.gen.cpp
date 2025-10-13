// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash/Public/Item/item.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeitem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SLASH_API UClass* Z_Construct_UClass_Aitem();
SLASH_API UClass* Z_Construct_UClass_Aitem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash();
// End Cross Module References

// Begin Class Aitem Function AddDebugContent
struct Z_Construct_UFunction_Aitem_AddDebugContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aitem_AddDebugContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aitem, nullptr, "AddDebugContent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_AddDebugContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_Aitem_AddDebugContent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_Aitem_AddDebugContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aitem_AddDebugContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Aitem::execAddDebugContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDebugContent();
	P_NATIVE_END;
}
// End Class Aitem Function AddDebugContent

// Begin Class Aitem Function OnShereBeginOverlap
struct Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics
{
	struct item_eventOnShereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((item_eventOnShereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(item_eventOnShereBeginOverlap_Parms), &Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aitem, nullptr, "OnShereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::item_eventOnShereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::item_eventOnShereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Aitem_OnShereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aitem_OnShereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Aitem::execOnShereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class Aitem Function OnShereBeginOverlap

// Begin Class Aitem Function OnShereEndOverlap
struct Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics
{
	struct item_eventOnShereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(item_eventOnShereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aitem, nullptr, "OnShereEndOverlap", nullptr, nullptr, Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::item_eventOnShereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::item_eventOnShereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Aitem_OnShereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aitem_OnShereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Aitem::execOnShereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShereEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class Aitem Function OnShereEndOverlap

// Begin Class Aitem
void Aitem::StaticRegisterNativesAitem()
{
	UClass* Class = Aitem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDebugContent", &Aitem::execAddDebugContent },
		{ "OnShereBeginOverlap", &Aitem::execOnShereBeginOverlap },
		{ "OnShereEndOverlap", &Aitem::execOnShereEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aitem);
UClass* Z_Construct_UClass_Aitem_NoRegister()
{
	return Aitem::StaticClass();
}
struct Z_Construct_UClass_Aitem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Item/item.h" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XShift_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YShift_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZShift_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wx_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wy_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wz_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Item/item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZSpeed;
	static void NewProp_XShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_XShift;
	static void NewProp_YShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_YShift;
	static void NewProp_ZShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ZShift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Aitem_AddDebugContent, "AddDebugContent" }, // 2237346062
		{ &Z_Construct_UFunction_Aitem_OnShereBeginOverlap, "OnShereBeginOverlap" }, // 1551790881
		{ &Z_Construct_UFunction_Aitem_OnShereEndOverlap, "OnShereEndOverlap" }, // 814681709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aitem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_XSpeed = { "XSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, XSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XSpeed_MetaData), NewProp_XSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_YSpeed = { "YSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, YSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YSpeed_MetaData), NewProp_YSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_ZSpeed = { "ZSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, ZSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZSpeed_MetaData), NewProp_ZSpeed_MetaData) };
void Z_Construct_UClass_Aitem_Statics::NewProp_XShift_SetBit(void* Obj)
{
	((Aitem*)Obj)->XShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_XShift = { "XShift", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Aitem), &Z_Construct_UClass_Aitem_Statics::NewProp_XShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XShift_MetaData), NewProp_XShift_MetaData) };
void Z_Construct_UClass_Aitem_Statics::NewProp_YShift_SetBit(void* Obj)
{
	((Aitem*)Obj)->YShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_YShift = { "YShift", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Aitem), &Z_Construct_UClass_Aitem_Statics::NewProp_YShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YShift_MetaData), NewProp_YShift_MetaData) };
void Z_Construct_UClass_Aitem_Statics::NewProp_ZShift_SetBit(void* Obj)
{
	((Aitem*)Obj)->ZShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_ZShift = { "ZShift", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Aitem), &Z_Construct_UClass_Aitem_Statics::NewProp_ZShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZShift_MetaData), NewProp_ZShift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_Wx = { "Wx", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, Wx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wx_MetaData), NewProp_Wx_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_Wy = { "Wy", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, Wy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wy_MetaData), NewProp_Wy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_Wz = { "Wz", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, Wz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wz_MetaData), NewProp_Wz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_PitchSpeed = { "PitchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, PitchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchSpeed_MetaData), NewProp_PitchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawSpeed_MetaData), NewProp_YawSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aitem_Statics::NewProp_RollSpeed = { "RollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aitem, RollSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollSpeed_MetaData), NewProp_RollSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aitem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_Sphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_XSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_YSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_ZSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_XShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_YShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_ZShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_Wx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_Wy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_Wz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_PitchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_YawSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aitem_Statics::NewProp_RollSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aitem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Aitem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aitem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aitem_Statics::ClassParams = {
	&Aitem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_Aitem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_Aitem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aitem_Statics::Class_MetaDataParams), Z_Construct_UClass_Aitem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aitem()
{
	if (!Z_Registration_Info_UClass_Aitem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aitem.OuterSingleton, Z_Construct_UClass_Aitem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aitem.OuterSingleton;
}
template<> SLASH_API UClass* StaticClass<Aitem>()
{
	return Aitem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aitem);
Aitem::~Aitem() {}
// End Class Aitem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Item_item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aitem, Aitem::StaticClass, TEXT("Aitem"), &Z_Registration_Info_UClass_Aitem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aitem), 3116792981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Item_item_h_156447226(TEXT("/Script/Slash"),
	Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Item_item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Item_item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
