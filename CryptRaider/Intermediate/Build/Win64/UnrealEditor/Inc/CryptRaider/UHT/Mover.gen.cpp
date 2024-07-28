// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/Mover.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMover() {}

// Begin Cross Module References
CRYPTRAIDER_API UClass* Z_Construct_UClass_UMover();
CRYPTRAIDER_API UClass* Z_Construct_UClass_UMover_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References

// Begin Class UMover
void UMover::StaticRegisterNativesUMover()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMover);
UClass* Z_Construct_UClass_UMover_NoRegister()
{
	return UMover::StaticClass();
}
struct Z_Construct_UClass_UMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Mover.h" },
		{ "ModuleRelativePath", "Mover.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMover_Statics::ClassParams = {
	&UMover::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::Class_MetaDataParams), Z_Construct_UClass_UMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMover()
{
	if (!Z_Registration_Info_UClass_UMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMover.OuterSingleton, Z_Construct_UClass_UMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMover.OuterSingleton;
}
template<> CRYPTRAIDER_API UClass* StaticClass<UMover>()
{
	return UMover::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMover);
UMover::~UMover() {}
// End Class UMover

// Begin Registration
struct Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Mover_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMover, UMover::StaticClass, TEXT("UMover"), &Z_Registration_Info_UClass_UMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMover), 2695135018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Mover_h_2102168009(TEXT("/Script/CryptRaider"),
	Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Mover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Mover_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
