// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash/Public/Moah/moah.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemoah() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
SLASH_API UClass* Z_Construct_UClass_Amoah();
SLASH_API UClass* Z_Construct_UClass_Amoah_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash();
// End Cross Module References

// Begin Class Amoah Function AddDebugContent
struct Z_Construct_UFunction_Amoah_AddDebugContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Moah/moah.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Amoah_AddDebugContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Amoah, nullptr, "AddDebugContent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Amoah_AddDebugContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_Amoah_AddDebugContent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_Amoah_AddDebugContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Amoah_AddDebugContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Amoah::execAddDebugContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDebugContent();
	P_NATIVE_END;
}
// End Class Amoah Function AddDebugContent

// Begin Class Amoah
void Amoah::StaticRegisterNativesAmoah()
{
	UClass* Class = Amoah::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDebugContent", &Amoah::execAddDebugContent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Amoah);
UClass* Z_Construct_UClass_Amoah_NoRegister()
{
	return Amoah::StaticClass();
}
struct Z_Construct_UClass_Amoah_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Moah/moah.h" },
		{ "ModuleRelativePath", "Public/Moah/moah.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Moah/moah.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Base C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Moah/moah.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Amoah_AddDebugContent, "AddDebugContent" }, // 2945061154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amoah>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Amoah_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Amoah, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Amoah_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Amoah, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Amoah_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amoah_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Amoah_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amoah_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Amoah_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amoah_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Amoah_Statics::ClassParams = {
	&Amoah::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_Amoah_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_Amoah_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Amoah_Statics::Class_MetaDataParams), Z_Construct_UClass_Amoah_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Amoah()
{
	if (!Z_Registration_Info_UClass_Amoah.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Amoah.OuterSingleton, Z_Construct_UClass_Amoah_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Amoah.OuterSingleton;
}
template<> SLASH_API UClass* StaticClass<Amoah>()
{
	return Amoah::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Amoah);
Amoah::~Amoah() {}
// End Class Amoah

// Begin Registration
struct Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_moah_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Amoah, Amoah::StaticClass, TEXT("Amoah"), &Z_Registration_Info_UClass_Amoah, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Amoah), 2187094776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_moah_h_920333774(TEXT("/Script/Slash"),
	Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_moah_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_moah_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
