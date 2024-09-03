// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tower.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_Tower_generated_h
#error "Tower.generated.h already included, missing '#pragma once' in Tower.h"
#endif
#define TOONTANKS_Tower_generated_h

#define FID_ToonTanks_Source_ToonTanks_Tower_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATower)


#define FID_ToonTanks_Source_ToonTanks_Tower_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATower(ATower&&); \
	ATower(const ATower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower) \
	NO_API virtual ~ATower();


#define FID_ToonTanks_Source_ToonTanks_Tower_h_12_PROLOG
#define FID_ToonTanks_Source_ToonTanks_Tower_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToonTanks_Source_ToonTanks_Tower_h_15_INCLASS_NO_PURE_DECLS \
	FID_ToonTanks_Source_ToonTanks_Tower_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToonTanks_Source_ToonTanks_Tower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
