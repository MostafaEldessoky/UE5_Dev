// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash/Public/Moah/MoahAnimation.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoahAnimation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
SLASH_API UClass* Z_Construct_UClass_Amoah_NoRegister();
SLASH_API UClass* Z_Construct_UClass_UMoahAnimation();
SLASH_API UClass* Z_Construct_UClass_UMoahAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash();
// End Cross Module References

// Begin Class UMoahAnimation
void UMoahAnimation::StaticRegisterNativesUMoahAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoahAnimation);
UClass* Z_Construct_UClass_UMoahAnimation_NoRegister()
{
	return UMoahAnimation::StaticClass();
}
struct Z_Construct_UClass_UMoahAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Moah/MoahAnimation.h" },
		{ "ModuleRelativePath", "Public/Moah/MoahAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Moah_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Moah/MoahAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Moah/MoahAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Moah/MoahAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
		{ "Category", "Base C++ Properties" },
		{ "ModuleRelativePath", "Public/Moah/MoahAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Moah;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_IsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoahAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoahAnimation_Statics::NewProp_Moah = { "Moah", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoahAnimation, Moah), Z_Construct_UClass_Amoah_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Moah_MetaData), NewProp_Moah_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoahAnimation_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoahAnimation, MovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoahAnimation_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoahAnimation, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UMoahAnimation_Statics::NewProp_IsFalling_SetBit(void* Obj)
{
	((UMoahAnimation*)Obj)->IsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoahAnimation_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoahAnimation), &Z_Construct_UClass_UMoahAnimation_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFalling_MetaData), NewProp_IsFalling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoahAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoahAnimation_Statics::NewProp_Moah,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoahAnimation_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoahAnimation_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoahAnimation_Statics::NewProp_IsFalling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoahAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoahAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoahAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoahAnimation_Statics::ClassParams = {
	&UMoahAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoahAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoahAnimation_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoahAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoahAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoahAnimation()
{
	if (!Z_Registration_Info_UClass_UMoahAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoahAnimation.OuterSingleton, Z_Construct_UClass_UMoahAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoahAnimation.OuterSingleton;
}
template<> SLASH_API UClass* StaticClass<UMoahAnimation>()
{
	return UMoahAnimation::StaticClass();
}
UMoahAnimation::UMoahAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoahAnimation);
UMoahAnimation::~UMoahAnimation() {}
// End Class UMoahAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_MoahAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoahAnimation, UMoahAnimation::StaticClass, TEXT("UMoahAnimation"), &Z_Registration_Info_UClass_UMoahAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoahAnimation), 3515010401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_MoahAnimation_h_3359137259(TEXT("/Script/Slash"),
	Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_MoahAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Slash_Source_Slash_Public_Moah_MoahAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
