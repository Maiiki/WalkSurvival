// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Private/BlueprintAssistEditorFeatures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistEditorFeatures() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Class UBAEditorFeatures
void UBAEditorFeatures::StaticRegisterNativesUBAEditorFeatures()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBAEditorFeatures);
UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister()
{
	return UBAEditorFeatures::StaticClass();
}
struct Z_Construct_UClass_UBAEditorFeatures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistEditorFeatures.h" },
		{ "ModuleRelativePath", "Private/BlueprintAssistEditorFeatures.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBAEditorFeatures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBAEditorFeatures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBAEditorFeatures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBAEditorFeatures_Statics::ClassParams = {
	&UBAEditorFeatures::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBAEditorFeatures_Statics::Class_MetaDataParams), Z_Construct_UClass_UBAEditorFeatures_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBAEditorFeatures()
{
	if (!Z_Registration_Info_UClass_UBAEditorFeatures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBAEditorFeatures.OuterSingleton, Z_Construct_UClass_UBAEditorFeatures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBAEditorFeatures.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBAEditorFeatures>()
{
	return UBAEditorFeatures::StaticClass();
}
UBAEditorFeatures::UBAEditorFeatures(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBAEditorFeatures);
// End Class UBAEditorFeatures

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBAEditorFeatures, UBAEditorFeatures::StaticClass, TEXT("UBAEditorFeatures"), &Z_Registration_Info_UClass_UBAEditorFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBAEditorFeatures), 3816855615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_1779551066(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
