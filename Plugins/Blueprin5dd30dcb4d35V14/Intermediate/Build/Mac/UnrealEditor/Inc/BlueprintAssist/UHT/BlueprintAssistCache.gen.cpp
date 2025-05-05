// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistCache() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBACacheData();
BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAGraphData();
BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBANodeData();
BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAPackageData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin ScriptStruct FBANodeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BANodeData;
class UScriptStruct* FBANodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BANodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BANodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBANodeData, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BANodeData"));
	}
	return Z_Registration_Info_UScriptStruct_BANodeData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBANodeData>()
{
	return FBANodeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBANodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BSize_MetaData[] = {
		{ "Comment", "// node size\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
		{ "ToolTip", "node size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Comment", "// pin guid -> pin offset\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
		{ "ToolTip", "pin guid -> pin offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedPins_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPins_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedPins;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBANodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBANodeData, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_BSize = { "BSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBANodeData, BSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BSize_MetaData), NewProp_BSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_ValueProp = { "CachedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_Key_KeyProp = { "CachedPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins = { "CachedPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBANodeData, CachedPins), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPins_MetaData), NewProp_CachedPins_MetaData) };
void Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FBANodeData*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBANodeData), &Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_NodeGroup = { "NodeGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBANodeData, NodeGroup), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroup_MetaData), NewProp_NodeGroup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_NodeGroups_Inner = { "NodeGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_NodeGroups = { "NodeGroups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBANodeData, NodeGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroups_MetaData), NewProp_NodeGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_BSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_NodeGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_NodeGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_NodeGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBANodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	&NewStructOps,
	"BANodeData",
	Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers),
	sizeof(FBANodeData),
	alignof(FBANodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBANodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBANodeData()
{
	if (!Z_Registration_Info_UScriptStruct_BANodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BANodeData.InnerSingleton, Z_Construct_UScriptStruct_FBANodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BANodeData.InnerSingleton;
}
// End ScriptStruct FBANodeData

// Begin ScriptStruct FBAGraphData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BAGraphData;
class UScriptStruct* FBAGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BAGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BAGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAGraphData, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_BAGraphData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAGraphData>()
{
	return FBAGraphData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBAGraphData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAGraphData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_ValueProp = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBANodeData, METADATA_PARAMS(0, nullptr) }; // 754067594
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_Key_KeyProp = { "NodeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBAGraphData, NodeData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) }; // 754067594
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAGraphData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	&NewStructOps,
	"BAGraphData",
	Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers),
	sizeof(FBAGraphData),
	alignof(FBAGraphData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBAGraphData()
{
	if (!Z_Registration_Info_UScriptStruct_BAGraphData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BAGraphData.InnerSingleton, Z_Construct_UScriptStruct_FBAGraphData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BAGraphData.InnerSingleton;
}
// End ScriptStruct FBAGraphData

// Begin ScriptStruct FBAPackageData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BAPackageData;
class UScriptStruct* FBAPackageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BAPackageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BAPackageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAPackageData, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAPackageData"));
	}
	return Z_Registration_Info_UScriptStruct_BAPackageData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAPackageData>()
{
	return FBAPackageData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBAPackageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GraphData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAPackageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_ValueProp = { "GraphData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBAGraphData, METADATA_PARAMS(0, nullptr) }; // 292349589
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_Key_KeyProp = { "GraphData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData = { "GraphData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBAPackageData, GraphData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphData_MetaData), NewProp_GraphData_MetaData) }; // 292349589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAPackageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	&NewStructOps,
	"BAPackageData",
	Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers),
	sizeof(FBAPackageData),
	alignof(FBAPackageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBAPackageData()
{
	if (!Z_Registration_Info_UScriptStruct_BAPackageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BAPackageData.InnerSingleton, Z_Construct_UScriptStruct_FBAPackageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BAPackageData.InnerSingleton;
}
// End ScriptStruct FBAPackageData

// Begin ScriptStruct FBACacheData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BACacheData;
class UScriptStruct* FBACacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BACacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BACacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBACacheData, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BACacheData"));
	}
	return Z_Registration_Info_UScriptStruct_BACacheData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBACacheData>()
{
	return FBACacheData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBACacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkedFolders_MetaData[] = {
		{ "Comment", "// package name -> package data\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
		{ "ToolTip", "package name -> package data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackageData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PackageData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BookmarkedFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BookmarkedFolders;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CacheVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBACacheData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_ValueProp = { "PackageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBAPackageData, METADATA_PARAMS(0, nullptr) }; // 3842023019
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_Key_KeyProp = { "PackageData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData = { "PackageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBACacheData, PackageData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageData_MetaData), NewProp_PackageData_MetaData) }; // 3842023019
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_Inner = { "BookmarkedFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders = { "BookmarkedFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBACacheData, BookmarkedFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BookmarkedFolders_MetaData), NewProp_BookmarkedFolders_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion = { "CacheVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBACacheData, CacheVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheVersion_MetaData), NewProp_CacheVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBACacheData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	&NewStructOps,
	"BACacheData",
	Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers),
	sizeof(FBACacheData),
	alignof(FBACacheData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBACacheData()
{
	if (!Z_Registration_Info_UScriptStruct_BACacheData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BACacheData.InnerSingleton, Z_Construct_UScriptStruct_FBACacheData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BACacheData.InnerSingleton;
}
// End ScriptStruct FBACacheData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBANodeData::StaticStruct, Z_Construct_UScriptStruct_FBANodeData_Statics::NewStructOps, TEXT("BANodeData"), &Z_Registration_Info_UScriptStruct_BANodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBANodeData), 754067594U) },
		{ FBAGraphData::StaticStruct, Z_Construct_UScriptStruct_FBAGraphData_Statics::NewStructOps, TEXT("BAGraphData"), &Z_Registration_Info_UScriptStruct_BAGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBAGraphData), 292349589U) },
		{ FBAPackageData::StaticStruct, Z_Construct_UScriptStruct_FBAPackageData_Statics::NewStructOps, TEXT("BAPackageData"), &Z_Registration_Info_UScriptStruct_BAPackageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBAPackageData), 3842023019U) },
		{ FBACacheData::StaticStruct, Z_Construct_UScriptStruct_FBACacheData_Statics::NewStructOps, TEXT("BACacheData"), &Z_Registration_Info_UScriptStruct_BACacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBACacheData), 3695615368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_1483288667(TEXT("/Script/BlueprintAssist"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
