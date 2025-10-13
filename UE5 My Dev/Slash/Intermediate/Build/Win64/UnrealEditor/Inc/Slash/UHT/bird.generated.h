// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bird/bird.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASH_bird_generated_h
#error "bird.generated.h already included, missing '#pragma once' in bird.h"
#endif
#define SLASH_bird_generated_h

#define FID_Slash_Source_Slash_Public_Bird_bird_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDebugContent);


#define FID_Slash_Source_Slash_Public_Bird_bird_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbird(); \
	friend struct Z_Construct_UClass_Abird_Statics; \
public: \
	DECLARE_CLASS(Abird, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slash"), NO_API) \
	DECLARE_SERIALIZER(Abird)


#define FID_Slash_Source_Slash_Public_Bird_bird_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Abird(Abird&&); \
	Abird(const Abird&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abird); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abird); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Abird) \
	NO_API virtual ~Abird();


#define FID_Slash_Source_Slash_Public_Bird_bird_h_16_PROLOG
#define FID_Slash_Source_Slash_Public_Bird_bird_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slash_Source_Slash_Public_Bird_bird_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Bird_bird_h_19_INCLASS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Bird_bird_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_API UClass* StaticClass<class Abird>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slash_Source_Slash_Public_Bird_bird_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
