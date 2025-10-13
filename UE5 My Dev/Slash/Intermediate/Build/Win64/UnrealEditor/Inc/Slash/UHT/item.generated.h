// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SLASH_item_generated_h
#error "item.generated.h already included, missing '#pragma once' in item.h"
#endif
#define SLASH_item_generated_h

#define FID_Slash_Source_Slash_Public_Item_item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDebugContent); \
	DECLARE_FUNCTION(execOnShereEndOverlap); \
	DECLARE_FUNCTION(execOnShereBeginOverlap);


#define FID_Slash_Source_Slash_Public_Item_item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAitem(); \
	friend struct Z_Construct_UClass_Aitem_Statics; \
public: \
	DECLARE_CLASS(Aitem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slash"), NO_API) \
	DECLARE_SERIALIZER(Aitem)


#define FID_Slash_Source_Slash_Public_Item_item_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Aitem(Aitem&&); \
	Aitem(const Aitem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aitem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aitem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aitem) \
	NO_API virtual ~Aitem();


#define FID_Slash_Source_Slash_Public_Item_item_h_12_PROLOG
#define FID_Slash_Source_Slash_Public_Item_item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slash_Source_Slash_Public_Item_item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Item_item_h_15_INCLASS_NO_PURE_DECLS \
	FID_Slash_Source_Slash_Public_Item_item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_API UClass* StaticClass<class Aitem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slash_Source_Slash_Public_Item_item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
