// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistObjects/BARootObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBARootObject() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Class UBARootObject
void UBARootObject::StaticRegisterNativesUBARootObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBARootObject);
UClass* Z_Construct_UClass_UBARootObject_NoRegister()
{
	return UBARootObject::StaticClass();
}
struct Z_Construct_UClass_UBARootObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistObjects/BARootObject.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BARootObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BARootObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorFeatures_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BARootObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorFeatures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBARootObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler = { "AssetHandler", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBARootObject, AssetHandler), Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetHandler_MetaData), NewProp_AssetHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBARootObject_Statics::NewProp_EditorFeatures = { "EditorFeatures", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBARootObject, EditorFeatures), Z_Construct_UClass_UBAEditorFeatures_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorFeatures_MetaData), NewProp_EditorFeatures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBARootObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBARootObject_Statics::NewProp_EditorFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBARootObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBARootObject_Statics::ClassParams = {
	&UBARootObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBARootObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBARootObject()
{
	if (!Z_Registration_Info_UClass_UBARootObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBARootObject.OuterSingleton, Z_Construct_UClass_UBARootObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBARootObject.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBARootObject>()
{
	return UBARootObject::StaticClass();
}
UBARootObject::UBARootObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBARootObject);
UBARootObject::~UBARootObject() {}
// End Class UBARootObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BARootObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBARootObject, UBARootObject::StaticClass, TEXT("UBARootObject"), &Z_Registration_Info_UClass_UBARootObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBARootObject), 2469077453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BARootObject_h_1079124377(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BARootObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BARootObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
