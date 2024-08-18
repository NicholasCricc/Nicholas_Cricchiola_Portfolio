// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/BasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn();
TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class ABasePawn
void ABasePawn::StaticRegisterNativesABasePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePawn);
UClass* Z_Construct_UClass_ABasePawn_NoRegister()
{
	return ABasePawn::StaticClass();
}
struct Z_Construct_UClass_ABasePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePawn.h" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhereInt_MetaData[] = {
		{ "Category", "BasePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//VisibleInstanceOnly\n" },
#endif
		{ "ModuleRelativePath", "BasePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VisibleInstanceOnly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnlyInt_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleAnywhereInt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleInstanceOnlyInt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt = { "VisibleAnywhereInt", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, VisibleAnywhereInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleAnywhereInt_MetaData), NewProp_VisibleAnywhereInt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt = { "VisibleInstanceOnlyInt", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, VisibleInstanceOnlyInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleInstanceOnlyInt_MetaData), NewProp_VisibleInstanceOnlyInt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_TurretMesh = { "TurretMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretMesh_MetaData), NewProp_TurretMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnPoint_MetaData), NewProp_ProjectileSpawnPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleAnywhereInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_VisibleInstanceOnlyInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_TurretMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileSpawnPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePawn_Statics::ClassParams = {
	&ABasePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePawn()
{
	if (!Z_Registration_Info_UClass_ABasePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePawn.OuterSingleton, Z_Construct_UClass_ABasePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePawn.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<ABasePawn>()
{
	return ABasePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePawn);
ABasePawn::~ABasePawn() {}
// End Class ABasePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_BasePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePawn, ABasePawn::StaticClass, TEXT("ABasePawn"), &Z_Registration_Info_UClass_ABasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePawn), 3131664338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_BasePawn_h_1648237042(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nicho_OneDrive_portofolio_Nicholas_Cricchiola_Portfolio_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
