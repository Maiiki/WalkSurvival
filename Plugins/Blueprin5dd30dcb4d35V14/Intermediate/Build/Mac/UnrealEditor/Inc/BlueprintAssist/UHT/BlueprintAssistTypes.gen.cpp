// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistTypes() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBADragMethod();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Enum EBADragMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBADragMethod;
static UEnum* EBADragMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBADragMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBADragMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBADragMethod, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBADragMethod"));
	}
	return Z_Registration_Info_UEnum_EBADragMethod.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBADragMethod>()
{
	return EBADragMethod_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdditionalDragChord.DisplayName", "AdditionalDragChord" },
		{ "AdditionalDragChord.Name", "EBADragMethod::AdditionalDragChord" },
		{ "LMB.DisplayName", "LMB" },
		{ "LMB.Name", "EBADragMethod::LMB" },
		{ "ModuleRelativePath", "Public/BlueprintAssistTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBADragMethod::LMB", (int64)EBADragMethod::LMB },
		{ "EBADragMethod::AdditionalDragChord", (int64)EBADragMethod::AdditionalDragChord },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBADragMethod",
	"EBADragMethod",
	Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBADragMethod()
{
	if (!Z_Registration_Info_UEnum_EBADragMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBADragMethod.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBADragMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBADragMethod.InnerSingleton;
}
// End Enum EBADragMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBADragMethod_StaticEnum, TEXT("EBADragMethod"), &Z_Registration_Info_UEnum_EBADragMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3608638641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistTypes_h_764319505(TEXT("/Script/BlueprintAssist"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
