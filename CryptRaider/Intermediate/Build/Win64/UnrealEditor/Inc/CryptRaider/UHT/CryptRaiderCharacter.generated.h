// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptRaiderCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRYPTRAIDER_CryptRaiderCharacter_generated_h
#error "CryptRaiderCharacter.generated.h already included, missing '#pragma once' in CryptRaiderCharacter.h"
#endif
#define CRYPTRAIDER_CryptRaiderCharacter_generated_h

#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptRaiderCharacter(); \
	friend struct Z_Construct_UClass_ACryptRaiderCharacter_Statics; \
public: \
	DECLARE_CLASS(ACryptRaiderCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaiderCharacter)


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACryptRaiderCharacter(ACryptRaiderCharacter&&); \
	ACryptRaiderCharacter(const ACryptRaiderCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaiderCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaiderCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptRaiderCharacter) \
	NO_API virtual ~ACryptRaiderCharacter();


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_19_PROLOG
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAIDER_API UClass* StaticClass<class ACryptRaiderCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
