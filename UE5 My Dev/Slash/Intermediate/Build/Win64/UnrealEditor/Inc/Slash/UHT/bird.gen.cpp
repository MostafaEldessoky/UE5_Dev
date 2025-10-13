// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash/Public/Bird/bird.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebird() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
SLASH_API UClass* Z_Construct_UClass_Abird();
SLASH_API UClass* Z_Construct_UClass_Abird_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash();
// End Cross Module References

// Begin Class Abird Function AddDebugContent
struct Z_Construct_UFunction_Abird_AddDebugContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Abird_AddDebugContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Abird, nullptr, "AddDebugContent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Abird_AddDebugContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_Abird_AddDebugContent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_Abird_AddDebugContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Abird_AddDebugContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Abird::execAddDebugContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDebugContent();
	P_NATIVE_END;
}
// End Class Abird Function AddDebugContent

// Begin Class Abird
void Abird::StaticRegisterNativesAbird()
{
	UClass* Class = Abird::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDebugContent", &Abird::execAddDebugContent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Abird);
UClass* Z_Construct_UClass_Abird_NoRegister()
{
	return Abird::StaticClass();
}
struct Z_Construct_UClass_Abird_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bird/bird.h" },
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeletal_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Bird/bird.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeletal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Abird_AddDebugContent, "AddDebugContent" }, // 3019367899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abird>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abird_Statics::NewProp_Skeletal = { "Skeletal", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abird, Skeletal), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeletal_MetaData), NewProp_Skeletal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abird_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abird, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsule_MetaData), NewProp_Capsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abird_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abird, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abird_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abird, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abird_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abird, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abird_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abird_Statics::NewProp_Skeletal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abird_Statics::NewProp_Capsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abird_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abird_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abird_Statics::NewProp_Movement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abird_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Abird_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abird_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Abird_Statics::ClassParams = {
	&Abird::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_Abird_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_Abird_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abird_Statics::Class_MetaDataParams), Z_Construct_UClass_Abird_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Abird()
{
	if (!Z_Registration_Info_UClass_Abird.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Abird.OuterSingleton, Z_Construct_UClass_Abird_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Abird.OuterSingleton;
}
template<> SLASH_API UClass* StaticClass<Abird>()
{
	return Abird::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Abird);
Abird::~Abird() {}
// End Class Abird

// Begin Registration
struct Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Bird_bird_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Abird, Abird::StaticClass, TEXT("Abird"), &Z_Registration_Info_UClass_Abird, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Abird), 4022011748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Bird_bird_h_987831157(TEXT("/Script/Slash"),
	Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Bird_bird_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Bird_bird_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
