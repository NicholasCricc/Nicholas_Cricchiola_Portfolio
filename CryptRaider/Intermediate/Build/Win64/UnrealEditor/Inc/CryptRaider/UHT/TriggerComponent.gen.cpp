// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/TriggerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}

// Begin Cross Module References
CRYPTRAIDER_API UClass* Z_Construct_UClass_UTriggerComponent();
CRYPTRAIDER_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References

// Begin Class UTriggerComponent
void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerComponent);
UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
{
	return UTriggerComponent::StaticClass();
}
struct Z_Construct_UClass_UTriggerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
	&UTriggerComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriggerComponent()
{
	if (!Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton;
}
template<> CRYPTRAIDER_API UClass* StaticClass<UTriggerComponent>()
{
	return UTriggerComponent::StaticClass();
}
UTriggerComponent::UTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
UTriggerComponent::~UTriggerComponent() {}
// End Class UTriggerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerComponent, UTriggerComponent::StaticClass, TEXT("UTriggerComponent"), &Z_Registration_Info_UClass_UTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerComponent), 2442952927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_526678326(TEXT("/Script/CryptRaider"),
	Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_TriggerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
