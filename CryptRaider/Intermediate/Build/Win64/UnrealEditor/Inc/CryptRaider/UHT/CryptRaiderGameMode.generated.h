// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptRaiderGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRYPTRAIDER_CryptRaiderGameMode_generated_h
#error "CryptRaiderGameMode.generated.h already included, missing '#pragma once' in CryptRaiderGameMode.h"
#endif
#define CRYPTRAIDER_CryptRaiderGameMode_generated_h

#define FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptRaiderGameMode(); \
	friend struct Z_Construct_UClass_ACryptRaiderGameMode_Statics; \
public: \
	DECLARE_CLASS(ACryptRaiderGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), CRYPTRAIDER_API) \
	DECLARE_SERIALIZER(ACryptRaiderGameMode)


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACryptRaiderGameMode(ACryptRaiderGameMode&&); \
	ACryptRaiderGameMode(const ACryptRaiderGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRYPTRAIDER_API, ACryptRaiderGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaiderGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptRaiderGameMode) \
	CRYPTRAIDER_API virtual ~ACryptRaiderGameMode();


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_9_PROLOG
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAIDER_API UClass* StaticClass<class ACryptRaiderGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
