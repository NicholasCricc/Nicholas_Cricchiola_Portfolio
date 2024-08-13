// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMover;
#ifdef CRYPTRAIDER_TriggerComponent_generated_h
#error "TriggerComponent.generated.h already included, missing '#pragma once' in TriggerComponent.h"
#endif
#define CRYPTRAIDER_TriggerComponent_generated_h

#define FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMover);


#define FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerComponent(); \
	friend struct Z_Construct_UClass_UTriggerComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(UTriggerComponent)


#define FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTriggerComponent(UTriggerComponent&&); \
	UTriggerComponent(const UTriggerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerComponent) \
	NO_API virtual ~UTriggerComponent();


#define FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_13_PROLOG
#define FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAIDER_API UClass* StaticClass<class UTriggerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptRaider_Source_CryptRaider_TriggerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
