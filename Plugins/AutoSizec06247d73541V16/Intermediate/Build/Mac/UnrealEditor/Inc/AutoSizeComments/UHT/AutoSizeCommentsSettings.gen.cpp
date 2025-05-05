// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeComments/Public/AutoSizeCommentsSettings.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSizeCommentsSettings() {}

// Begin Cross Module References
AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings();
AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister();
AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment();
AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation();
AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod();
AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod();
AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCResizingMode();
AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod();
AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCGraphSettings();
AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
// End Cross Module References

// Begin Enum EASCCacheSaveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCCacheSaveMethod;
static UEnum* EASCCacheSaveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EASCCacheSaveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EASCCacheSaveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCCacheSaveMethod"));
	}
	return Z_Registration_Info_UEnum_EASCCacheSaveMethod.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCCacheSaveMethod>()
{
	return EASCCacheSaveMethod_StaticEnum();
}
struct Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "File.Comment", "/** Save the cache to an external json file */" },
		{ "File.DisplayName", "File" },
		{ "File.Name", "EASCCacheSaveMethod::File" },
		{ "File.ToolTip", "Save the cache to an external json file" },
		{ "MetaData.Comment", "/** Save to cache in the package's meta data (the .uasset) */" },
		{ "MetaData.DisplayName", "Package Meta Data" },
		{ "MetaData.Name", "EASCCacheSaveMethod::MetaData" },
		{ "MetaData.ToolTip", "Save to cache in the package's meta data (the .uasset)" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EASCCacheSaveMethod::File", (int64)EASCCacheSaveMethod::File },
		{ "EASCCacheSaveMethod::MetaData", (int64)EASCCacheSaveMethod::MetaData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	"EASCCacheSaveMethod",
	"EASCCacheSaveMethod",
	Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod()
{
	if (!Z_Registration_Info_UEnum_EASCCacheSaveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCCacheSaveMethod.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EASCCacheSaveMethod.InnerSingleton;
}
// End Enum EASCCacheSaveMethod

// Begin Enum EASCCacheSaveLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCCacheSaveLocation;
static UEnum* EASCCacheSaveLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EASCCacheSaveLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EASCCacheSaveLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCCacheSaveLocation"));
	}
	return Z_Registration_Info_UEnum_EASCCacheSaveLocation.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCCacheSaveLocation>()
{
	return EASCCacheSaveLocation_StaticEnum();
}
struct Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Plugin.Comment", "/** Save to PluginFolder/ASCCache/PROJECT_ID.json */" },
		{ "Plugin.DisplayName", "Plugin" },
		{ "Plugin.Name", "EASCCacheSaveLocation::Plugin" },
		{ "Plugin.ToolTip", "Save to PluginFolder/ASCCache/PROJECT_ID.json" },
		{ "Project.Comment", "/** Save to ProjectFolder/Saved/AutoSizeComments/AutoSizeCommentsCache.json */" },
		{ "Project.DisplayName", "Project" },
		{ "Project.Name", "EASCCacheSaveLocation::Project" },
		{ "Project.ToolTip", "Save to ProjectFolder/Saved/AutoSizeComments/AutoSizeCommentsCache.json" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EASCCacheSaveLocation::Plugin", (int64)EASCCacheSaveLocation::Plugin },
		{ "EASCCacheSaveLocation::Project", (int64)EASCCacheSaveLocation::Project },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	"EASCCacheSaveLocation",
	"EASCCacheSaveLocation",
	Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation()
{
	if (!Z_Registration_Info_UEnum_EASCCacheSaveLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCCacheSaveLocation.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EASCCacheSaveLocation.InnerSingleton;
}
// End Enum EASCCacheSaveLocation

// Begin Enum EASCResizingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCResizingMode;
static UEnum* EASCResizingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EASCResizingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EASCResizingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCResizingMode"));
	}
	return Z_Registration_Info_UEnum_EASCResizingMode.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCResizingMode>()
{
	return EASCResizingMode_StaticEnum();
}
struct Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Resize to containing nodes on tick */" },
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EASCResizingMode::Always" },
		{ "Always.ToolTip", "Resize to containing nodes on tick" },
		{ "Disabled.Comment", "/** Never resize */" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EASCResizingMode::Disabled" },
		{ "Disabled.ToolTip", "Never resize" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Reactive.Comment", "/** Resize when we detect a containing node moves or changes size */" },
		{ "Reactive.DisplayName", "Reactive" },
		{ "Reactive.Name", "EASCResizingMode::Reactive" },
		{ "Reactive.ToolTip", "Resize when we detect a containing node moves or changes size" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EASCResizingMode::Always", (int64)EASCResizingMode::Always },
		{ "EASCResizingMode::Reactive", (int64)EASCResizingMode::Reactive },
		{ "EASCResizingMode::Disabled", (int64)EASCResizingMode::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	"EASCResizingMode",
	"EASCResizingMode",
	Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSizeComments_EASCResizingMode()
{
	if (!Z_Registration_Info_UEnum_EASCResizingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCResizingMode.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EASCResizingMode.InnerSingleton;
}
// End Enum EASCResizingMode

// Begin Enum ECommentCollisionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommentCollisionMethod;
static UEnum* ECommentCollisionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECommentCollisionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECommentCollisionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ECommentCollisionMethod"));
	}
	return Z_Registration_Info_UEnum_ECommentCollisionMethod.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<ECommentCollisionMethod>()
{
	return ECommentCollisionMethod_StaticEnum();
}
struct Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Contained.Comment", "/** Add the node if it is fully contained in the comment */" },
		{ "Contained.DisplayName", "Contained" },
		{ "Contained.Name", "ECommentCollisionMethod::Contained" },
		{ "Contained.ToolTip", "Add the node if it is fully contained in the comment" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ECommentCollisionMethod::Disabled" },
		{ "Intersect.Comment", "/** Add the node if it is intersecting the comment */" },
		{ "Intersect.DisplayName", "Overlap" },
		{ "Intersect.Name", "ECommentCollisionMethod::Intersect" },
		{ "Intersect.ToolTip", "Add the node if it is intersecting the comment" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Point.Comment", "/** Add the node if the top-left corner is inside the comment */" },
		{ "Point.DisplayName", "Point" },
		{ "Point.Name", "ECommentCollisionMethod::Point" },
		{ "Point.ToolTip", "Add the node if the top-left corner is inside the comment" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECommentCollisionMethod::Point", (int64)ECommentCollisionMethod::Point },
		{ "ECommentCollisionMethod::Intersect", (int64)ECommentCollisionMethod::Intersect },
		{ "ECommentCollisionMethod::Contained", (int64)ECommentCollisionMethod::Contained },
		{ "ECommentCollisionMethod::Disabled", (int64)ECommentCollisionMethod::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	"ECommentCollisionMethod",
	"ECommentCollisionMethod",
	Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod()
{
	if (!Z_Registration_Info_UEnum_ECommentCollisionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommentCollisionMethod.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECommentCollisionMethod.InnerSingleton;
}
// End Enum ECommentCollisionMethod

// Begin Enum EASCAutoInsertComment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCAutoInsertComment;
static UEnum* EASCAutoInsertComment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EASCAutoInsertComment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EASCAutoInsertComment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCAutoInsertComment"));
	}
	return Z_Registration_Info_UEnum_EASCAutoInsertComment.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCAutoInsertComment>()
{
	return EASCAutoInsertComment_StaticEnum();
}
struct Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Insert new nodes when a node is created from a pin */" },
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EASCAutoInsertComment::Always" },
		{ "Always.ToolTip", "Insert new nodes when a node is created from a pin" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Never.Comment", "/** Never insert new nodes into comments */" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EASCAutoInsertComment::Never" },
		{ "Never.ToolTip", "Never insert new nodes into comments" },
		{ "Surrounded.Comment", "/** Insert new nodes when a node is created from a pin (and is surrounded by multiple nodes inside the comment) */" },
		{ "Surrounded.DisplayName", "Surrounded" },
		{ "Surrounded.Name", "EASCAutoInsertComment::Surrounded" },
		{ "Surrounded.ToolTip", "Insert new nodes when a node is created from a pin (and is surrounded by multiple nodes inside the comment)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EASCAutoInsertComment::Never", (int64)EASCAutoInsertComment::Never },
		{ "EASCAutoInsertComment::Always", (int64)EASCAutoInsertComment::Always },
		{ "EASCAutoInsertComment::Surrounded", (int64)EASCAutoInsertComment::Surrounded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	"EASCAutoInsertComment",
	"EASCAutoInsertComment",
	Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment()
{
	if (!Z_Registration_Info_UEnum_EASCAutoInsertComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCAutoInsertComment.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EASCAutoInsertComment.InnerSingleton;
}
// End Enum EASCAutoInsertComment

// Begin Enum EASCDefaultCommentColorMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod;
static UEnum* EASCDefaultCommentColorMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCDefaultCommentColorMethod"));
	}
	return Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCDefaultCommentColorMethod>()
{
	return EASCDefaultCommentColorMethod_StaticEnum();
}
struct Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Apply the default color defined in the settings here */" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EASCDefaultCommentColorMethod::Default" },
		{ "Default.ToolTip", "Apply the default color defined in the settings here" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "None.Comment", "/** Do not change the color */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EASCDefaultCommentColorMethod::None" },
		{ "None.ToolTip", "Do not change the color" },
		{ "Random.Comment", "/** Use a random color when spawning the comment */" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EASCDefaultCommentColorMethod::Random" },
		{ "Random.ToolTip", "Use a random color when spawning the comment" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EASCDefaultCommentColorMethod::None", (int64)EASCDefaultCommentColorMethod::None },
		{ "EASCDefaultCommentColorMethod::Random", (int64)EASCDefaultCommentColorMethod::Random },
		{ "EASCDefaultCommentColorMethod::Default", (int64)EASCDefaultCommentColorMethod::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	"EASCDefaultCommentColorMethod",
	"EASCDefaultCommentColorMethod",
	Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod()
{
	if (!Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod.InnerSingleton;
}
// End Enum EASCDefaultCommentColorMethod

// Begin ScriptStruct FPresetCommentStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PresetCommentStyle;
class UScriptStruct* FPresetCommentStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PresetCommentStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PresetCommentStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetCommentStyle, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("PresetCommentStyle"));
	}
	return Z_Registration_Info_UScriptStruct_PresetCommentStyle.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FPresetCommentStyle>()
{
	return FPresetCommentStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetHeader_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
	static void NewProp_bSetHeader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetHeader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetCommentStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPresetCommentStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPresetCommentStyle, FontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) };
void Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_bSetHeader_SetBit(void* Obj)
{
	((FPresetCommentStyle*)Obj)->bSetHeader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_bSetHeader = { "bSetHeader", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPresetCommentStyle), &Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_bSetHeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetHeader_MetaData), NewProp_bSetHeader_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_bSetHeader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	&NewStructOps,
	"PresetCommentStyle",
	Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers),
	sizeof(FPresetCommentStyle),
	alignof(FPresetCommentStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle()
{
	if (!Z_Registration_Info_UScriptStruct_PresetCommentStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PresetCommentStyle.InnerSingleton, Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PresetCommentStyle.InnerSingleton;
}
// End ScriptStruct FPresetCommentStyle

// Begin ScriptStruct FASCGraphSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASCGraphSettings;
class UScriptStruct* FASCGraphSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASCGraphSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASCGraphSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCGraphSettings, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCGraphSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ASCGraphSettings.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCGraphSettings>()
{
	return FASCGraphSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FASCGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizingMode_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResizingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResizingMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCGraphSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FASCGraphSettings_Statics::NewProp_ResizingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FASCGraphSettings_Statics::NewProp_ResizingMode = { "ResizingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCGraphSettings, ResizingMode), Z_Construct_UEnum_AutoSizeComments_EASCResizingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizingMode_MetaData), NewProp_ResizingMode_MetaData) }; // 324739301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphSettings_Statics::NewProp_ResizingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphSettings_Statics::NewProp_ResizingMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCGraphSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	&NewStructOps,
	"ASCGraphSettings",
	Z_Construct_UScriptStruct_FASCGraphSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphSettings_Statics::PropPointers),
	sizeof(FASCGraphSettings),
	alignof(FASCGraphSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASCGraphSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FASCGraphSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ASCGraphSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASCGraphSettings.InnerSingleton, Z_Construct_UScriptStruct_FASCGraphSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ASCGraphSettings.InnerSingleton;
}
// End ScriptStruct FASCGraphSettings

// Begin Class UAutoSizeCommentsSettings
void UAutoSizeCommentsSettings::StaticRegisterNativesUAutoSizeCommentsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSizeCommentsSettings);
UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister()
{
	return UAutoSizeCommentsSettings::StaticClass();
}
struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutoSizeCommentsSettings.h" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontSize_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** The default font size for comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The default font size for comment boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFontSize_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCommentColorMethod_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** How to color the comment when creating the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "How to color the comment when creating the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderColorMethod_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** How to color the comment when pressing the `Toggle Header` button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "How to color the comment when pressing the `Toggle Header` button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCommentColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If Use Random Color is not enabled, comment boxes will spawn with this default color */" },
		{ "EditCondition", "DefaultCommentColorMethod==EASCDefaultCommentColorMethod::Default" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If Use Random Color is not enabled, comment boxes will spawn with this default color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggressivelyUseDefaultColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Set all comments on the graph to the default color */" },
		{ "EditCondition", "DefaultCommentColorMethod==EASCDefaultCommentColorMethod::Default" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Set all comments on the graph to the default color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomColorOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Opacity used for the random color */" },
		{ "EditCondition", "DefaultCommentColorMethod==EASCDefaultCommentColorMethod::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Opacity used for the random color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomColorFromList_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If enabled, select a random color from predefined list */" },
		{ "EditCondition", "DefaultCommentColorMethod==EASCDefaultCommentColorMethod::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, select a random color from predefined list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedRandomColorList_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If UseRandomColorFromList is enabled, new comments will select a color from one of these */" },
		{ "EditCondition", "bUseRandomColorFromList && DefaultCommentColorMethod==EASCDefaultCommentColorMethod::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If UseRandomColorFromList is enabled, new comments will select a color from one of these" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumControlOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Minimum opacity for comment box controls when not hovered */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Minimum opacity for comment box controls when not hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Style for header comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Style for header comment boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetStyles_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Preset styles (each style will have its own button on the comment box) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Preset styles (each style will have its own button on the comment box)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggedPresets_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Preset style that will apply if the title starts with the according prefix */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Preset style that will apply if the title starts with the according prefix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinimalTitlebarStyle_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** The title bar uses a minimal style when being edited (requires UE5 or later) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The title bar uses a minimal style when being edited (requires UE5 or later)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCommentBubble_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Always hide the comment bubble */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Always hide the comment bubble" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCommentBubbleDefaults_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Set default values for comment bubble */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Set default values for comment bubble" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultColorCommentBubble_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Default value for \"Color Bubble\" */" },
		{ "EditCondition", "bEnableCommentBubbleDefaults" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Default value for \"Color Bubble\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultShowBubbleWhenZoomed_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Default value for \"Show Bubble When Zoomed\" */" },
		{ "EditCondition", "bEnableCommentBubbleDefaults" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Default value for \"Show Bubble When Zoomed\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizingMode_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The auto resizing behavior for comments (always: on tick | reactive: upon detecting node movement) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The auto resizing behavior for comments (always: on tick | reactive: upon detecting node movement)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeToFitWhenDisabled_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Should the comment resize to fit after running user commands in disabled mode */" },
		{ "EditCondition", "ResizingMode == EASCResizingMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Should the comment resize to fit after running user commands in disabled mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTwoPassResize_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** In reactive mode, run a 2nd resize so that the title is correctly calculated */" },
		{ "EditCondition", "ResizingMode == EASCResizingMode::Reactive" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "In reactive mode, run a 2nd resize so that the title is correctly calculated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoInsertComment_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Determines when to insert newly created nodes into existing comments */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Determines when to insert newly created nodes into existing comments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRenameNewComments_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** When a user places a comment, give keyboard focus to the title bar so it can be easily renamed */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "When a user places a comment, give keyboard focus to the title bar so it can be easily renamed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectNodeWhenClickingOnPin_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** When you click a node's pin, also select the node (required for AutoInsertComment to function correctly) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "When you click a node's pin, also select the node (required for AutoInsertComment to function correctly)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Amount of padding for around the contents of a comment node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Amount of padding for around the contents of a comment node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentTextPadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Amount of padding around the comment title text */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Amount of padding around the comment title text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumVerticalPadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Minimum vertical padding above and below the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Minimum vertical padding above and below the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentTextAlignment_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Comment text alignment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Comment text alignment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCommentBubbleBounds_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If enabled, add any containing node's comment bubble to the comment bounds */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, add any containing node's comment bubble to the comment bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveEmptyCommentBoxes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If enabled, empty comment boxes will move out of the way of other comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, empty comment boxes will move out of the way of other comment boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyCommentBoxSpeed_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The speed at which empty comment boxes move */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The speed at which empty comment boxes move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheSaveMethod_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** Choose cache save method: as an external file or inside the package's metadata */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Choose cache save method: as an external file or inside the package's metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheSaveLocation_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** Choose where to save the json file: project or plugin folder */" },
		{ "EditCondition", "CacheSaveMethod == EASCCacheSaveMethod::File" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Choose where to save the json file: project or plugin folder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCommentDataOnSavingGraph_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** If enabled, nodes will be saved to file when the graph is saved */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, nodes will be saved to file when the graph is saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCommentDataOnExit_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** If enabled, nodes will be saved to file when the program is exited */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, nodes will be saved to file when the program is exited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrettyPrintCommentCacheJSON_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** If enabled, cache file JSON text will be made more human-readable, but increases file size */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, cache file JSON text will be made more human-readable, but increases file size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyColorToExistingNodes_MetaData[] = {
		{ "Category", "Initialization" },
		{ "Comment", "/** When opening a new graph, existing comments will apply default color settings (suggest disabled) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "When opening a new graph, existing comments will apply default color settings (suggest disabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResizeExistingNodes_MetaData[] = {
		{ "Category", "Initialization" },
		{ "Comment", "/** When opening a new graph, existing comments will try to fit to their overlapping nodes (suggest disabled) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "When opening a new graph, existing comments will try to fit to their overlapping nodes (suggest disabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNodesContainedForNewComments_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Commments will detect and add nodes are underneath on creation */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Commments will detect and add nodes are underneath on creation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeChord_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Mouse input chord to resize a node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Mouse input chord to resize a node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCommentControlsKey_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Input key to enable comment controls */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Input key to enable comment controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeCollisionMethod_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Collision method to use when resizing comment nodes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Collision method to use when resizing comment nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltCollisionMethod_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Collision method to use when releasing alt */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Collision method to use when releasing alt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToGridWhileResizing_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Snap to the grid when resizing the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Snap to the grid when resizing the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodesWhenResizing_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelectedNodesOnCreation_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't snap to selected nodes on creation */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't snap to selected nodes on creation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshContainingNodesOnMove_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Refresh the nodes inside the comment when you start moving the comment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Refresh the nodes inside the comment when you start moving the comment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTooltip_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Disable the tooltip when hovering the titlebar */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Disable the tooltip when hovering the titlebar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightContainingNodesOnSelection_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Highlight the contained node for a comment when you select it */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Highlight the contained node for a comment when you select it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDetailNodes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Force the graph panel to use the 1:1 LOD for nodes (UE 5.0+) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Force the graph panel to use the 1:1 LOD for nodes (UE 5.0+)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredGraphs_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Do not use ASC node for these graphs, turn on DebugClass_ASC and open graph to find graph class name */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Do not use ASC node for these graphs, turn on DebugClass_ASC and open graph to find graph class name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphSettingsOverride_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Override settings (resizing mode) for these graph types */" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Override settings (resizing mode) for these graph types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSuggestedSettings_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Hide prompt for suggested settings with Blueprint Assist plugin */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide prompt for suggested settings with Blueprint Assist plugin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSourceControlNotification_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Hide prompt for suggested settings when source control is enabled*/" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide prompt for suggested settings when source control is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeCornerAnchorSize_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Size of the corner resizing anchors */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Size of the corner resizing anchors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResizeSidePadding_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Padding to activate resizing on the side of a comment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Padding to activate resizing on the side of a comment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideResizeButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the resize button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the resize button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideHeaderButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the header button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the header button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidePresets_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the preset buttons */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the preset buttons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideRandomizeButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the randomize color button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the randomize color button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCommentBoxControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide controls at the bottom of the comment box */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide controls at the bottom of the comment box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCornerPoints_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the corner points (resize still enabled) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the corner points (resize still enabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFixForSortDepthIssue_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Experimental fix for sort depth issue in UE5 (unable to move nested nodes until you compile the blueprint) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Experimental fix for sort depth issue in UE5 (unable to move nested nodes until you compile the blueprint)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugGraph_ASC_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Print info about the graph when opening a graph */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Print info about the graph when opening a graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePackageCleanup_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableASCGraphNode_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Use the default Unreal comment node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Use the default Unreal comment node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultFontSize;
	static void NewProp_bUseDefaultFontSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFontSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCommentColorMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultCommentColorMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeaderColorMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeaderColorMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCommentColor;
	static void NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggressivelyUseDefaultColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomColorOpacity;
	static void NewProp_bUseRandomColorFromList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomColorFromList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedRandomColorList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PredefinedRandomColorList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumControlOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresetStyles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PresetStyles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedPresets_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaggedPresets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TaggedPresets;
	static void NewProp_bUseMinimalTitlebarStyle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinimalTitlebarStyle;
	static void NewProp_bHideCommentBubble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCommentBubble;
	static void NewProp_bEnableCommentBubbleDefaults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCommentBubbleDefaults;
	static void NewProp_bDefaultColorCommentBubble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultColorCommentBubble;
	static void NewProp_bDefaultShowBubbleWhenZoomed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultShowBubbleWhenZoomed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResizingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResizingMode;
	static void NewProp_ResizeToFitWhenDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResizeToFitWhenDisabled;
	static void NewProp_bUseTwoPassResize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTwoPassResize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoInsertComment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoInsertComment;
	static void NewProp_bAutoRenameNewComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRenameNewComments;
	static void NewProp_bSelectNodeWhenClickingOnPin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNodeWhenClickingOnPin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentTextPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumVerticalPadding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommentTextAlignment;
	static void NewProp_bUseCommentBubbleBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCommentBubbleBounds;
	static void NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveEmptyCommentBoxes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmptyCommentBoxSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheSaveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheSaveMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheSaveLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheSaveLocation;
	static void NewProp_bSaveCommentDataOnSavingGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCommentDataOnSavingGraph;
	static void NewProp_bSaveCommentDataOnExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCommentDataOnExit;
	static void NewProp_bPrettyPrintCommentCacheJSON_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrettyPrintCommentCacheJSON;
	static void NewProp_bApplyColorToExistingNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyColorToExistingNodes;
	static void NewProp_bResizeExistingNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResizeExistingNodes;
	static void NewProp_bDetectNodesContainedForNewComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNodesContainedForNewComments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeChord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnableCommentControlsKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResizeCollisionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResizeCollisionMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AltCollisionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AltCollisionMethod;
	static void NewProp_bSnapToGridWhileResizing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGridWhileResizing;
	static void NewProp_bIgnoreKnotNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodes;
	static void NewProp_bIgnoreKnotNodesWhenPressingAlt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodesWhenPressingAlt;
	static void NewProp_bIgnoreKnotNodesWhenResizing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodesWhenResizing;
	static void NewProp_bIgnoreSelectedNodesOnCreation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelectedNodesOnCreation;
	static void NewProp_bRefreshContainingNodesOnMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshContainingNodesOnMove;
	static void NewProp_bDisableTooltip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTooltip;
	static void NewProp_bHighlightContainingNodesOnSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightContainingNodesOnSelection;
	static void NewProp_bUseMaxDetailNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDetailNodes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoredGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredGraphs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphSettingsOverride_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphSettingsOverride_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GraphSettingsOverride;
	static void NewProp_bSuppressSuggestedSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSuggestedSettings;
	static void NewProp_bSuppressSourceControlNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSourceControlNotification;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResizeCornerAnchorSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResizeSidePadding;
	static void NewProp_bHideResizeButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideResizeButton;
	static void NewProp_bHideHeaderButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideHeaderButton;
	static void NewProp_bHidePresets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePresets;
	static void NewProp_bHideRandomizeButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideRandomizeButton;
	static void NewProp_bHideCommentBoxControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCommentBoxControls;
	static void NewProp_bHideCornerPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCornerPoints;
	static void NewProp_bEnableFixForSortDepthIssue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFixForSortDepthIssue;
	static void NewProp_bDebugGraph_ASC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugGraph_ASC;
	static void NewProp_bDisablePackageCleanup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePackageCleanup;
	static void NewProp_bDisableASCGraphNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableASCGraphNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSizeCommentsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize = { "DefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFontSize_MetaData), NewProp_DefaultFontSize_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bUseDefaultFontSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize = { "bUseDefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultFontSize_MetaData), NewProp_bUseDefaultFontSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColorMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColorMethod = { "DefaultCommentColorMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultCommentColorMethod), Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCommentColorMethod_MetaData), NewProp_DefaultCommentColorMethod_MetaData) }; // 4285493346
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderColorMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderColorMethod = { "HeaderColorMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, HeaderColorMethod), Z_Construct_UEnum_AutoSizeComments_EASCDefaultCommentColorMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderColorMethod_MetaData), NewProp_HeaderColorMethod_MetaData) }; // 4285493346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor = { "DefaultCommentColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultCommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCommentColor_MetaData), NewProp_DefaultCommentColor_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bAggressivelyUseDefaultColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor = { "bAggressivelyUseDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggressivelyUseDefaultColor_MetaData), NewProp_bAggressivelyUseDefaultColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity = { "RandomColorOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, RandomColorOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomColorOpacity_MetaData), NewProp_RandomColorOpacity_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bUseRandomColorFromList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList = { "bUseRandomColorFromList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomColorFromList_MetaData), NewProp_bUseRandomColorFromList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_Inner = { "PredefinedRandomColorList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList = { "PredefinedRandomColorList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, PredefinedRandomColorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredefinedRandomColorList_MetaData), NewProp_PredefinedRandomColorList_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity = { "MinimumControlOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, MinimumControlOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumControlOpacity_MetaData), NewProp_MinimumControlOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle = { "HeaderStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, HeaderStyle), Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderStyle_MetaData), NewProp_HeaderStyle_MetaData) }; // 3537797801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_Inner = { "PresetStyles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(0, nullptr) }; // 3537797801
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles = { "PresetStyles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, PresetStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetStyles_MetaData), NewProp_PresetStyles_MetaData) }; // 3537797801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_TaggedPresets_ValueProp = { "TaggedPresets", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(0, nullptr) }; // 3537797801
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_TaggedPresets_Key_KeyProp = { "TaggedPresets_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_TaggedPresets = { "TaggedPresets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, TaggedPresets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggedPresets_MetaData), NewProp_TaggedPresets_MetaData) }; // 3537797801
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMinimalTitlebarStyle_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bUseMinimalTitlebarStyle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMinimalTitlebarStyle = { "bUseMinimalTitlebarStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMinimalTitlebarStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinimalTitlebarStyle_MetaData), NewProp_bUseMinimalTitlebarStyle_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHideCommentBubble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble = { "bHideCommentBubble", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCommentBubble_MetaData), NewProp_bHideCommentBubble_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bEnableCommentBubbleDefaults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults = { "bEnableCommentBubbleDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCommentBubbleDefaults_MetaData), NewProp_bEnableCommentBubbleDefaults_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDefaultColorCommentBubble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble = { "bDefaultColorCommentBubble", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultColorCommentBubble_MetaData), NewProp_bDefaultColorCommentBubble_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDefaultShowBubbleWhenZoomed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed = { "bDefaultShowBubbleWhenZoomed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultShowBubbleWhenZoomed_MetaData), NewProp_bDefaultShowBubbleWhenZoomed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode = { "ResizingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizingMode), Z_Construct_UEnum_AutoSizeComments_EASCResizingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizingMode_MetaData), NewProp_ResizingMode_MetaData) }; // 324739301
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeToFitWhenDisabled_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->ResizeToFitWhenDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeToFitWhenDisabled = { "ResizeToFitWhenDisabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeToFitWhenDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeToFitWhenDisabled_MetaData), NewProp_ResizeToFitWhenDisabled_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseTwoPassResize_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bUseTwoPassResize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseTwoPassResize = { "bUseTwoPassResize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseTwoPassResize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTwoPassResize_MetaData), NewProp_bUseTwoPassResize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment = { "AutoInsertComment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, AutoInsertComment), Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoInsertComment_MetaData), NewProp_AutoInsertComment_MetaData) }; // 1151696303
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAutoRenameNewComments_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bAutoRenameNewComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAutoRenameNewComments = { "bAutoRenameNewComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAutoRenameNewComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRenameNewComments_MetaData), NewProp_bAutoRenameNewComments_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bSelectNodeWhenClickingOnPin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin = { "bSelectNodeWhenClickingOnPin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectNodeWhenClickingOnPin_MetaData), NewProp_bSelectNodeWhenClickingOnPin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentNodePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentNodePadding_MetaData), NewProp_CommentNodePadding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding = { "CommentTextPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentTextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentTextPadding_MetaData), NewProp_CommentTextPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding = { "MinimumVerticalPadding", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, MinimumVerticalPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumVerticalPadding_MetaData), NewProp_MinimumVerticalPadding_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment = { "CommentTextAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentTextAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentTextAlignment_MetaData), NewProp_CommentTextAlignment_MetaData) }; // 3082493381
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseCommentBubbleBounds_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bUseCommentBubbleBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseCommentBubbleBounds = { "bUseCommentBubbleBounds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseCommentBubbleBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCommentBubbleBounds_MetaData), NewProp_bUseCommentBubbleBounds_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bMoveEmptyCommentBoxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes = { "bMoveEmptyCommentBoxes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveEmptyCommentBoxes_MetaData), NewProp_bMoveEmptyCommentBoxes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed = { "EmptyCommentBoxSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, EmptyCommentBoxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyCommentBoxSpeed_MetaData), NewProp_EmptyCommentBoxSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveMethod = { "CacheSaveMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CacheSaveMethod), Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheSaveMethod_MetaData), NewProp_CacheSaveMethod_MetaData) }; // 1189259036
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveLocation = { "CacheSaveLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CacheSaveLocation), Z_Construct_UEnum_AutoSizeComments_EASCCacheSaveLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheSaveLocation_MetaData), NewProp_CacheSaveLocation_MetaData) }; // 3114537670
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bSaveCommentDataOnSavingGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph = { "bSaveCommentDataOnSavingGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveCommentDataOnSavingGraph_MetaData), NewProp_bSaveCommentDataOnSavingGraph_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bSaveCommentDataOnExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit = { "bSaveCommentDataOnExit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveCommentDataOnExit_MetaData), NewProp_bSaveCommentDataOnExit_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bPrettyPrintCommentCacheJSON_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bPrettyPrintCommentCacheJSON = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bPrettyPrintCommentCacheJSON = { "bPrettyPrintCommentCacheJSON", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bPrettyPrintCommentCacheJSON_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrettyPrintCommentCacheJSON_MetaData), NewProp_bPrettyPrintCommentCacheJSON_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bApplyColorToExistingNodes_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bApplyColorToExistingNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bApplyColorToExistingNodes = { "bApplyColorToExistingNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bApplyColorToExistingNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyColorToExistingNodes_MetaData), NewProp_bApplyColorToExistingNodes_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bResizeExistingNodes_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bResizeExistingNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bResizeExistingNodes = { "bResizeExistingNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bResizeExistingNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResizeExistingNodes_MetaData), NewProp_bResizeExistingNodes_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDetectNodesContainedForNewComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments = { "bDetectNodesContainedForNewComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectNodesContainedForNewComments_MetaData), NewProp_bDetectNodesContainedForNewComments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord = { "ResizeChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeChord_MetaData), NewProp_ResizeChord_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EnableCommentControlsKey = { "EnableCommentControlsKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, EnableCommentControlsKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCommentControlsKey_MetaData), NewProp_EnableCommentControlsKey_MetaData) }; // 4109060215
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod = { "ResizeCollisionMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeCollisionMethod), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeCollisionMethod_MetaData), NewProp_ResizeCollisionMethod_MetaData) }; // 114651174
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod = { "AltCollisionMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, AltCollisionMethod), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltCollisionMethod_MetaData), NewProp_AltCollisionMethod_MetaData) }; // 114651174
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bSnapToGridWhileResizing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing = { "bSnapToGridWhileResizing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToGridWhileResizing_MetaData), NewProp_bSnapToGridWhileResizing_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes = { "bIgnoreKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreKnotNodes_MetaData), NewProp_bIgnoreKnotNodes_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodesWhenPressingAlt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt = { "bIgnoreKnotNodesWhenPressingAlt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData), NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodesWhenResizing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing = { "bIgnoreKnotNodesWhenResizing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreKnotNodesWhenResizing_MetaData), NewProp_bIgnoreKnotNodesWhenResizing_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bIgnoreSelectedNodesOnCreation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation = { "bIgnoreSelectedNodesOnCreation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelectedNodesOnCreation_MetaData), NewProp_bIgnoreSelectedNodesOnCreation_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bRefreshContainingNodesOnMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove = { "bRefreshContainingNodesOnMove", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefreshContainingNodesOnMove_MetaData), NewProp_bRefreshContainingNodesOnMove_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDisableTooltip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip = { "bDisableTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableTooltip_MetaData), NewProp_bDisableTooltip_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHighlightContainingNodesOnSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection = { "bHighlightContainingNodesOnSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlightContainingNodesOnSelection_MetaData), NewProp_bHighlightContainingNodesOnSelection_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMaxDetailNodes_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bUseMaxDetailNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMaxDetailNodes = { "bUseMaxDetailNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMaxDetailNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxDetailNodes_MetaData), NewProp_bUseMaxDetailNodes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_Inner = { "IgnoredGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs = { "IgnoredGraphs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, IgnoredGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredGraphs_MetaData), NewProp_IgnoredGraphs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_GraphSettingsOverride_ValueProp = { "GraphSettingsOverride", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FASCGraphSettings, METADATA_PARAMS(0, nullptr) }; // 937590685
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_GraphSettingsOverride_Key_KeyProp = { "GraphSettingsOverride_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_GraphSettingsOverride = { "GraphSettingsOverride", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, GraphSettingsOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphSettingsOverride_MetaData), NewProp_GraphSettingsOverride_MetaData) }; // 937590685
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bSuppressSuggestedSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings = { "bSuppressSuggestedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressSuggestedSettings_MetaData), NewProp_bSuppressSuggestedSettings_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bSuppressSourceControlNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification = { "bSuppressSourceControlNotification", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressSourceControlNotification_MetaData), NewProp_bSuppressSourceControlNotification_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCornerAnchorSize = { "ResizeCornerAnchorSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeCornerAnchorSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeCornerAnchorSize_MetaData), NewProp_ResizeCornerAnchorSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeSidePadding = { "ResizeSidePadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeSidePadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResizeSidePadding_MetaData), NewProp_ResizeSidePadding_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHideResizeButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton = { "bHideResizeButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideResizeButton_MetaData), NewProp_bHideResizeButton_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHideHeaderButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton = { "bHideHeaderButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideHeaderButton_MetaData), NewProp_bHideHeaderButton_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHidePresets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets = { "bHidePresets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidePresets_MetaData), NewProp_bHidePresets_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHideRandomizeButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton = { "bHideRandomizeButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideRandomizeButton_MetaData), NewProp_bHideRandomizeButton_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHideCommentBoxControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls = { "bHideCommentBoxControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCommentBoxControls_MetaData), NewProp_bHideCommentBoxControls_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bHideCornerPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints = { "bHideCornerPoints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCornerPoints_MetaData), NewProp_bHideCornerPoints_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bEnableFixForSortDepthIssue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue = { "bEnableFixForSortDepthIssue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFixForSortDepthIssue_MetaData), NewProp_bEnableFixForSortDepthIssue_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDebugGraph_ASC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC = { "bDebugGraph_ASC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugGraph_ASC_MetaData), NewProp_bDebugGraph_ASC_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDisablePackageCleanup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup = { "bDisablePackageCleanup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisablePackageCleanup_MetaData), NewProp_bDisablePackageCleanup_MetaData) };
void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableASCGraphNode_SetBit(void* Obj)
{
	((UAutoSizeCommentsSettings*)Obj)->bDisableASCGraphNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableASCGraphNode = { "bDisableASCGraphNode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableASCGraphNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableASCGraphNode_MetaData), NewProp_bDisableASCGraphNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColorMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColorMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderColorMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderColorMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_TaggedPresets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_TaggedPresets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_TaggedPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMinimalTitlebarStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeToFitWhenDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseTwoPassResize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAutoRenameNewComments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseCommentBubbleBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CacheSaveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bPrettyPrintCommentCacheJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bApplyColorToExistingNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bResizeExistingNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EnableCommentControlsKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseMaxDetailNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_GraphSettingsOverride_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_GraphSettingsOverride_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_GraphSettingsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCornerAnchorSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeSidePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableASCGraphNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::ClassParams = {
	&UAutoSizeCommentsSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSizeCommentsSettings()
{
	if (!Z_Registration_Info_UClass_UAutoSizeCommentsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSizeCommentsSettings.OuterSingleton, Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSizeCommentsSettings.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UClass* StaticClass<UAutoSizeCommentsSettings>()
{
	return UAutoSizeCommentsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSizeCommentsSettings);
UAutoSizeCommentsSettings::~UAutoSizeCommentsSettings() {}
// End Class UAutoSizeCommentsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EASCCacheSaveMethod_StaticEnum, TEXT("EASCCacheSaveMethod"), &Z_Registration_Info_UEnum_EASCCacheSaveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1189259036U) },
		{ EASCCacheSaveLocation_StaticEnum, TEXT("EASCCacheSaveLocation"), &Z_Registration_Info_UEnum_EASCCacheSaveLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3114537670U) },
		{ EASCResizingMode_StaticEnum, TEXT("EASCResizingMode"), &Z_Registration_Info_UEnum_EASCResizingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 324739301U) },
		{ ECommentCollisionMethod_StaticEnum, TEXT("ECommentCollisionMethod"), &Z_Registration_Info_UEnum_ECommentCollisionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 114651174U) },
		{ EASCAutoInsertComment_StaticEnum, TEXT("EASCAutoInsertComment"), &Z_Registration_Info_UEnum_EASCAutoInsertComment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1151696303U) },
		{ EASCDefaultCommentColorMethod_StaticEnum, TEXT("EASCDefaultCommentColorMethod"), &Z_Registration_Info_UEnum_EASCDefaultCommentColorMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4285493346U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPresetCommentStyle::StaticStruct, Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewStructOps, TEXT("PresetCommentStyle"), &Z_Registration_Info_UScriptStruct_PresetCommentStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPresetCommentStyle), 3537797801U) },
		{ FASCGraphSettings::StaticStruct, Z_Construct_UScriptStruct_FASCGraphSettings_Statics::NewStructOps, TEXT("ASCGraphSettings"), &Z_Registration_Info_UScriptStruct_ASCGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCGraphSettings), 937590685U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSizeCommentsSettings, UAutoSizeCommentsSettings::StaticClass, TEXT("UAutoSizeCommentsSettings"), &Z_Registration_Info_UClass_UAutoSizeCommentsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSizeCommentsSettings), 2715715941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_4225848331(TEXT("/Script/AutoSizeComments"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
