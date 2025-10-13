// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Moah/moah.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASH_moah_generated_h
#error "moah.generated.h already included, missing '#pragma once' in moah.h"
#endif
#define SLASH_moah_generated_h

#define FID_Slash_Source_Slash_Public_Moah_moah_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDebugContent);


#define FID_Slash_Source_Slash_Public_Moah_moah_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmoah(); \
	friend struct Z_Construct_UClass_Amoah_Statics; \
public: \
	DECLARE_CLASS(Amoah, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slash"), NO_API) \
	DECLARE_SERIALIZER(Amoah)


#define FID_Slash_Source_Slash_Public_Moah_moah_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Amoah(Amoah&&); \
	Amoah(const Amoah&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Amoah); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amoah); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Amoah) \
	NO_API virtual ~Amoah();


#define FID_Slash_Source_Slash_Public_Moah_moah_h_13_PROLOG
#define FID_Slash_Source_Slash_Public_Moah_moah_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slash_Source_Slash_Public_Moah_moah_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Moah_moah_h_16_INCLASS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Moah_moah_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_API UClass* StaticClass<class Amoah>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slash_Source_Slash_Public_Moah_moah_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
