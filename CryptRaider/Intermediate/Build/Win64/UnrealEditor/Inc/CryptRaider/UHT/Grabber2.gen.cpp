// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/Grabber2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber2() {}

// Begin Cross Module References
CRYPTRAIDER_API UClass* Z_Construct_UClass_UGrabber2();
CRYPTRAIDER_API UClass* Z_Construct_UClass_UGrabber2_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References

// Begin Class UGrabber2
void UGrabber2::StaticRegisterNativesUGrabber2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabber2);
UClass* Z_Construct_UClass_UGrabber2_NoRegister()
{
	return UGrabber2::StaticClass();
}
struct Z_Construct_UClass_UGrabber2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber2.h" },
		{ "ModuleRelativePath", "Grabber2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGrabber2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber2_Statics::ClassParams = {
	&UGrabber2::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabber2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrabber2()
{
	if (!Z_Registration_Info_UClass_UGrabber2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabber2.OuterSingleton, Z_Construct_UClass_UGrabber2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrabber2.OuterSingleton;
}
template<> CRYPTRAIDER_API UClass* StaticClass<UGrabber2>()
{
	return UGrabber2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber2);
UGrabber2::~UGrabber2() {}
// End Class UGrabber2

// Begin Registration
struct Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Grabber2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrabber2, UGrabber2::StaticClass, TEXT("UGrabber2"), &Z_Registration_Info_UClass_UGrabber2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber2), 2405390400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Grabber2_h_364152832(TEXT("/Script/CryptRaider"),
	Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Grabber2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_Grabber2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
