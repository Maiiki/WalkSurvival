// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistMisc/BASettingsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBASettingsBase() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettingsBase();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettingsBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Class UBASettingsBase
void UBASettingsBase::StaticRegisterNativesUBASettingsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBASettingsBase);
UClass* Z_Construct_UClass_UBASettingsBase_NoRegister()
{
	return UBASettingsBase::StaticClass();
}
struct Z_Construct_UClass_UBASettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistMisc/BASettingsBase.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistMisc/BASettingsBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBASettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASettingsBase_Statics::ClassParams = {
	&UBASettingsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBASettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBASettingsBase()
{
	if (!Z_Registration_Info_UClass_UBASettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASettingsBase.OuterSingleton, Z_Construct_UClass_UBASettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBASettingsBase.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBASettingsBase>()
{
	return UBASettingsBase::StaticClass();
}
UBASettingsBase::UBASettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBASettingsBase);
UBASettingsBase::~UBASettingsBase() {}
// End Class UBASettingsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistMisc_BASettingsBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBASettingsBase, UBASettingsBase::StaticClass, TEXT("UBASettingsBase"), &Z_Registration_Info_UClass_UBASettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASettingsBase), 4112388192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistMisc_BASettingsBase_h_3261780967(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistMisc_BASettingsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistMisc_BASettingsBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
