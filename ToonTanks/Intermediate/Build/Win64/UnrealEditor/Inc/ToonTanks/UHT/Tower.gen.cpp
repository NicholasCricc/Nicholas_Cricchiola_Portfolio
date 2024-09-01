// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Tower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower() {}

// Begin Cross Module References
TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn();
TOONTANKS_API UClass* Z_Construct_UClass_ATower();
TOONTANKS_API UClass* Z_Construct_UClass_ATower_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class ATower
void ATower::StaticRegisterNativesATower()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATower);
UClass* Z_Construct_UClass_ATower_NoRegister()
{
	return ATower::StaticClass();
}
struct Z_Construct_UClass_ATower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tower.h" },
		{ "ModuleRelativePath", "Tower.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABasePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATower_Statics::ClassParams = {
	&ATower::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Statics::Class_MetaDataParams), Z_Construct_UClass_ATower_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATower()
{
	if (!Z_Registration_Info_UClass_ATower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATower.OuterSingleton, Z_Construct_UClass_ATower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATower.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<ATower>()
{
	return ATower::StaticClass();
}
ATower::ATower() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATower);
ATower::~ATower() {}
// End Class ATower

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_Tower_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATower, ATower::StaticClass, TEXT("ATower"), &Z_Registration_Info_UClass_ATower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATower), 3835742649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_Tower_h_633717150(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_Tower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_Tower_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
