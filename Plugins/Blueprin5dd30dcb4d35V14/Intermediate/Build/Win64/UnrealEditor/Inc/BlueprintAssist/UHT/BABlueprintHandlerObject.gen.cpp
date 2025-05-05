// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistObjects/BABlueprintHandlerObject.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBABlueprintHandlerObject() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Class UBABlueprintHandlerObject
void UBABlueprintHandlerObject::StaticRegisterNativesUBABlueprintHandlerObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBABlueprintHandlerObject);
UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister()
{
	return UBABlueprintHandlerObject::StaticClass();
}
struct Z_Construct_UClass_UBABlueprintHandlerObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBABlueprintHandlerObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner = { "LastVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(0, nullptr) }; // 25162506
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables = { "LastVariables", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, LastVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVariables_MetaData), NewProp_LastVariables_MetaData) }; // 25162506
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams = {
	&UBABlueprintHandlerObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBABlueprintHandlerObject()
{
	if (!Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton, Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBABlueprintHandlerObject>()
{
	return UBABlueprintHandlerObject::StaticClass();
}
UBABlueprintHandlerObject::UBABlueprintHandlerObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBABlueprintHandlerObject);
// End Class UBABlueprintHandlerObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBABlueprintHandlerObject, UBABlueprintHandlerObject::StaticClass, TEXT("UBABlueprintHandlerObject"), &Z_Registration_Info_UClass_UBABlueprintHandlerObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBABlueprintHandlerObject), 1345662111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BABlueprintHandlerObject_h_3389496085(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
