// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistObjects/BAAssetEditorHandlerObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAAssetEditorHandlerObject() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Class UBAAssetEditorHandlerObject
void UBAAssetEditorHandlerObject::StaticRegisterNativesUBAAssetEditorHandlerObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBAAssetEditorHandlerObject);
UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister()
{
	return UBAAssetEditorHandlerObject::StaticClass();
}
struct Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistObjects/BAAssetEditorHandlerObject.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BAAssetEditorHandlerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintHandlers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BAAssetEditorHandlerObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintHandlers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintHandlers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BlueprintHandlers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBAAssetEditorHandlerObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_ValueProp = { "BlueprintHandlers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_Key_KeyProp = { "BlueprintHandlers_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers = { "BlueprintHandlers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBAAssetEditorHandlerObject, BlueprintHandlers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintHandlers_MetaData), NewProp_BlueprintHandlers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::ClassParams = {
	&UBAAssetEditorHandlerObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject()
{
	if (!Z_Registration_Info_UClass_UBAAssetEditorHandlerObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBAAssetEditorHandlerObject.OuterSingleton, Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBAAssetEditorHandlerObject.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBAAssetEditorHandlerObject>()
{
	return UBAAssetEditorHandlerObject::StaticClass();
}
UBAAssetEditorHandlerObject::UBAAssetEditorHandlerObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBAAssetEditorHandlerObject);
// End Class UBAAssetEditorHandlerObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBAAssetEditorHandlerObject, UBAAssetEditorHandlerObject::StaticClass, TEXT("UBAAssetEditorHandlerObject"), &Z_Registration_Info_UClass_UBAAssetEditorHandlerObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBAAssetEditorHandlerObject), 3705507151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_3313117442(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
