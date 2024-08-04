// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/CryptRaiderPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptRaiderPlayerController() {}

// Begin Cross Module References
CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderPlayerController();
CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References

// Begin Class ACryptRaiderPlayerController
void ACryptRaiderPlayerController::StaticRegisterNativesACryptRaiderPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptRaiderPlayerController);
UClass* Z_Construct_UClass_ACryptRaiderPlayerController_NoRegister()
{
	return ACryptRaiderPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACryptRaiderPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CryptRaiderPlayerController.h" },
		{ "ModuleRelativePath", "CryptRaiderPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "CryptRaiderPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptRaiderPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACryptRaiderPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACryptRaiderPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACryptRaiderPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACryptRaiderPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACryptRaiderPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptRaiderPlayerController_Statics::ClassParams = {
	&ACryptRaiderPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACryptRaiderPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACryptRaiderPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACryptRaiderPlayerController()
{
	if (!Z_Registration_Info_UClass_ACryptRaiderPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptRaiderPlayerController.OuterSingleton, Z_Construct_UClass_ACryptRaiderPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACryptRaiderPlayerController.OuterSingleton;
}
template<> CRYPTRAIDER_API UClass* StaticClass<ACryptRaiderPlayerController>()
{
	return ACryptRaiderPlayerController::StaticClass();
}
ACryptRaiderPlayerController::ACryptRaiderPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptRaiderPlayerController);
ACryptRaiderPlayerController::~ACryptRaiderPlayerController() {}
// End Class ACryptRaiderPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACryptRaiderPlayerController, ACryptRaiderPlayerController::StaticClass, TEXT("ACryptRaiderPlayerController"), &Z_Registration_Info_UClass_ACryptRaiderPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptRaiderPlayerController), 1303272810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_814783546(TEXT("/Script/CryptRaider"),
	Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_CryptRaider_Source_CryptRaider_CryptRaiderPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
