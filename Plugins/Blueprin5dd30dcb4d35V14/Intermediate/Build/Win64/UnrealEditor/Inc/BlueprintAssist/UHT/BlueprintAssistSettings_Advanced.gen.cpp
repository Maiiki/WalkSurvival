// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistSettings_Advanced.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSettings_Advanced() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_Advanced();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_Advanced_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettingsBase();
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Enum EBACacheSaveLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBACacheSaveLocation;
static UEnum* EBACacheSaveLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBACacheSaveLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBACacheSaveLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBACacheSaveLocation"));
	}
	return Z_Registration_Info_UEnum_EBACacheSaveLocation.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBACacheSaveLocation>()
{
	return EBACacheSaveLocation_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "Plugin.Comment", "/** Save to PluginFolder/NodeSizeCache/PROJECT_ID.json */" },
		{ "Plugin.DisplayName", "Plugin" },
		{ "Plugin.Name", "EBACacheSaveLocation::Plugin" },
		{ "Plugin.ToolTip", "Save to PluginFolder/NodeSizeCache/PROJECT_ID.json" },
		{ "Project.Comment", "/** Save to ProjectFolder/Saved/BlueprintAssist/BlueprintAssistCache.json */" },
		{ "Project.DisplayName", "Project" },
		{ "Project.Name", "EBACacheSaveLocation::Project" },
		{ "Project.ToolTip", "Save to ProjectFolder/Saved/BlueprintAssist/BlueprintAssistCache.json" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBACacheSaveLocation::Plugin", (int64)EBACacheSaveLocation::Plugin },
		{ "EBACacheSaveLocation::Project", (int64)EBACacheSaveLocation::Project },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBACacheSaveLocation",
	"EBACacheSaveLocation",
	Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation()
{
	if (!Z_Registration_Info_UEnum_EBACacheSaveLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBACacheSaveLocation.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBACacheSaveLocation.InnerSingleton;
}
// End Enum EBACacheSaveLocation

// Begin Class UBASettings_Advanced
void UBASettings_Advanced::StaticRegisterNativesUBASettings_Advanced()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBASettings_Advanced);
UClass* Z_Construct_UClass_UBASettings_Advanced_NoRegister()
{
	return UBASettings_Advanced::StaticClass();
}
struct Z_Construct_UClass_UBASettings_Advanced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistSettings_Advanced.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheSaveLocation_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "////////////////////////////////////////////////////////////\n/// Cache\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveBlueprintAssistCacheToFile_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/* Save the node size cache to a file (located in the the plugin folder) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Save the node size cache to a file (located in the the plugin folder)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSlowButAccurateSizeCaching_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/* Enable slower but more accurate node size caching */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Enable slower but more accurate node size caching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveLoopingCausedBySwapping_MetaData[] = {
		{ "Category", "Commands|Swap Nodes" },
		{ "Comment", "/* If swapping produced any looping wires, remove them */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "If swapping produced any looping wires, remove them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledCommands_MetaData[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMaterialGraphPinHoverFix_MetaData[] = {
		{ "Category", "Material Graph|Experimental" },
		{ "Comment", "/* Potential issue where pins can get stuck in a hovered state on the material graph */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Potential issue where pins can get stuck in a hovered state on the material graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateUniqueGUIDForMaterialExpressions_MetaData[] = {
		{ "Category", "Material Graph|Experimental" },
		{ "Comment", "/* Fix for issue where copy-pasting material nodes will result in their material expressions having the same GUID */" },
		{ "DisplayName", "Generate Unique GUID For Material Expressions" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Fix for issue where copy-pasting material nodes will result in their material expressions having the same GUID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStoreCacheDataInPackageMetaData_MetaData[] = {
		{ "Category", "Cache|Experimental" },
		{ "Comment", "/* Instead of making a json file to store cache data, store it in the blueprint's package meta data */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Instead of making a json file to store cache data, store it in the blueprint's package meta data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrettyPrintCacheJSON_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/* Save cache file JSON in a more human-readable format. Useful for debugging, but increases size of cache files.  */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Save cache file JSON in a more human-readable format. Useful for debugging, but increases size of cache files." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomBlueprintActionMenu_MetaData[] = {
		{ "Category", "Misc|Experimental" },
		{ "Comment", "/* Use a custom blueprint action menu for creating nodes (very prototype, not supported in 5.0 or earlier) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Use a custom blueprint action menu for creating nodes (very prototype, not supported in 5.0 or earlier)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceRefreshGraphAfterFormatting_MetaData[] = {
		{ "Category", "Misc|Experimental" },
		{ "Comment", "/* Hacky workaround to ensure that default comment nodes will be correctly resized after formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Hacky workaround to ensure that default comment nodes will be correctly resized after formatting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableBlueprintAssistPlugin_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Disable the plugin (requires restarting engine) */" },
		{ "ConfigRestartRequired", "true" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Disable the plugin (requires restarting engine)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintAssistDebug_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Ignore this (setting for custom debugging) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Ignore this (setting for custom debugging)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightBadComments_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Draw a red border around bad comment nodes after formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ToolTip", "Draw a red border around bad comment nodes after formatting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheSaveLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheSaveLocation;
	static void NewProp_bSaveBlueprintAssistCacheToFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveBlueprintAssistCacheToFile;
	static void NewProp_bSlowButAccurateSizeCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlowButAccurateSizeCaching;
	static void NewProp_bRemoveLoopingCausedBySwapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveLoopingCausedBySwapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisabledCommands_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DisabledCommands;
	static void NewProp_bEnableMaterialGraphPinHoverFix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaterialGraphPinHoverFix;
	static void NewProp_bGenerateUniqueGUIDForMaterialExpressions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateUniqueGUIDForMaterialExpressions;
	static void NewProp_bStoreCacheDataInPackageMetaData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreCacheDataInPackageMetaData;
	static void NewProp_bPrettyPrintCacheJSON_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrintCacheJSON;
	static void NewProp_bUseCustomBlueprintActionMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomBlueprintActionMenu;
	static void NewProp_bForceRefreshGraphAfterFormatting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRefreshGraphAfterFormatting;
	static void NewProp_bDisableBlueprintAssistPlugin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableBlueprintAssistPlugin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintAssistDebug_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueprintAssistDebug;
	static void NewProp_bHighlightBadComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightBadComments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettings_Advanced>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_CacheSaveLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_CacheSaveLocation = { "CacheSaveLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_Advanced, CacheSaveLocation), Z_Construct_UEnum_BlueprintAssist_EBACacheSaveLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheSaveLocation_MetaData), NewProp_CacheSaveLocation_MetaData) }; // 1255867448
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSaveBlueprintAssistCacheToFile_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bSaveBlueprintAssistCacheToFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSaveBlueprintAssistCacheToFile = { "bSaveBlueprintAssistCacheToFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSaveBlueprintAssistCacheToFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveBlueprintAssistCacheToFile_MetaData), NewProp_bSaveBlueprintAssistCacheToFile_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSlowButAccurateSizeCaching_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bSlowButAccurateSizeCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSlowButAccurateSizeCaching = { "bSlowButAccurateSizeCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSlowButAccurateSizeCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSlowButAccurateSizeCaching_MetaData), NewProp_bSlowButAccurateSizeCaching_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bRemoveLoopingCausedBySwapping_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bRemoveLoopingCausedBySwapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bRemoveLoopingCausedBySwapping = { "bRemoveLoopingCausedBySwapping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bRemoveLoopingCausedBySwapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveLoopingCausedBySwapping_MetaData), NewProp_bRemoveLoopingCausedBySwapping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands_ElementProp = { "DisabledCommands", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands = { "DisabledCommands", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_Advanced, DisabledCommands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledCommands_MetaData), NewProp_DisabledCommands_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bEnableMaterialGraphPinHoverFix_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bEnableMaterialGraphPinHoverFix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bEnableMaterialGraphPinHoverFix = { "bEnableMaterialGraphPinHoverFix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bEnableMaterialGraphPinHoverFix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMaterialGraphPinHoverFix_MetaData), NewProp_bEnableMaterialGraphPinHoverFix_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bGenerateUniqueGUIDForMaterialExpressions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions = { "bGenerateUniqueGUIDForMaterialExpressions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateUniqueGUIDForMaterialExpressions_MetaData), NewProp_bGenerateUniqueGUIDForMaterialExpressions_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bStoreCacheDataInPackageMetaData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData = { "bStoreCacheDataInPackageMetaData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStoreCacheDataInPackageMetaData_MetaData), NewProp_bStoreCacheDataInPackageMetaData_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bPrettyPrintCacheJSON_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bPrettyPrintCacheJSON = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bPrettyPrintCacheJSON = { "bPrettyPrintCacheJSON", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bPrettyPrintCacheJSON_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrettyPrintCacheJSON_MetaData), NewProp_bPrettyPrintCacheJSON_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bUseCustomBlueprintActionMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu = { "bUseCustomBlueprintActionMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomBlueprintActionMenu_MetaData), NewProp_bUseCustomBlueprintActionMenu_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bForceRefreshGraphAfterFormatting_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bForceRefreshGraphAfterFormatting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bForceRefreshGraphAfterFormatting = { "bForceRefreshGraphAfterFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bForceRefreshGraphAfterFormatting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceRefreshGraphAfterFormatting_MetaData), NewProp_bForceRefreshGraphAfterFormatting_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bDisableBlueprintAssistPlugin_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bDisableBlueprintAssistPlugin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bDisableBlueprintAssistPlugin = { "bDisableBlueprintAssistPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bDisableBlueprintAssistPlugin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableBlueprintAssistPlugin_MetaData), NewProp_bDisableBlueprintAssistPlugin_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_BlueprintAssistDebug_Inner = { "BlueprintAssistDebug", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_BlueprintAssistDebug = { "BlueprintAssistDebug", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_Advanced, BlueprintAssistDebug), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintAssistDebug_MetaData), NewProp_BlueprintAssistDebug_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bHighlightBadComments_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bHighlightBadComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bHighlightBadComments = { "bHighlightBadComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bHighlightBadComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlightBadComments_MetaData), NewProp_bHighlightBadComments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_CacheSaveLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_CacheSaveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSaveBlueprintAssistCacheToFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bSlowButAccurateSizeCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bRemoveLoopingCausedBySwapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bEnableMaterialGraphPinHoverFix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bPrettyPrintCacheJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bForceRefreshGraphAfterFormatting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bDisableBlueprintAssistPlugin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_BlueprintAssistDebug_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_BlueprintAssistDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bHighlightBadComments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBASettings_Advanced_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBASettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASettings_Advanced_Statics::ClassParams = {
	&UBASettings_Advanced::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UBASettings_Advanced_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBASettings_Advanced()
{
	if (!Z_Registration_Info_UClass_UBASettings_Advanced.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASettings_Advanced.OuterSingleton, Z_Construct_UClass_UBASettings_Advanced_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBASettings_Advanced.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBASettings_Advanced>()
{
	return UBASettings_Advanced::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBASettings_Advanced);
UBASettings_Advanced::~UBASettings_Advanced() {}
// End Class UBASettings_Advanced

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBACacheSaveLocation_StaticEnum, TEXT("EBACacheSaveLocation"), &Z_Registration_Info_UEnum_EBACacheSaveLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1255867448U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBASettings_Advanced, UBASettings_Advanced::StaticClass, TEXT("UBASettings_Advanced"), &Z_Registration_Info_UClass_UBASettings_Advanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASettings_Advanced), 2397287451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_1360899916(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
