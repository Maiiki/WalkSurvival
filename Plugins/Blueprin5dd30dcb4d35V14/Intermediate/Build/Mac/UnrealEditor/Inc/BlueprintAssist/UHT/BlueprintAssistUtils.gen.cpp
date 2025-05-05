// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistUtils() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBABreakMethod();
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Enum EBARoundingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBARoundingMethod;
static UEnum* EBARoundingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBARoundingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBARoundingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBARoundingMethod"));
	}
	return Z_Registration_Info_UEnum_EBARoundingMethod.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBARoundingMethod>()
{
	return EBARoundingMethod_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ceil.DisplayName", "Ceil" },
		{ "Ceil.Name", "EBARoundingMethod::Ceil" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EBARoundingMethod::Floor" },
		{ "ModuleRelativePath", "Public/BlueprintAssistUtils.h" },
		{ "Round.DisplayName", "Round" },
		{ "Round.Name", "EBARoundingMethod::Round" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBARoundingMethod::Round", (int64)EBARoundingMethod::Round },
		{ "EBARoundingMethod::Ceil", (int64)EBARoundingMethod::Ceil },
		{ "EBARoundingMethod::Floor", (int64)EBARoundingMethod::Floor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBARoundingMethod",
	"EBARoundingMethod",
	Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod()
{
	if (!Z_Registration_Info_UEnum_EBARoundingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBARoundingMethod.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBARoundingMethod.InnerSingleton;
}
// End Enum EBARoundingMethod

// Begin Enum EBABreakMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBABreakMethod;
static UEnum* EBABreakMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBABreakMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBABreakMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBABreakMethod, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBABreakMethod"));
	}
	return Z_Registration_Info_UEnum_EBABreakMethod.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBABreakMethod>()
{
	return EBABreakMethod_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "EBABreakMethod::Always" },
		{ "Default.Name", "EBABreakMethod::Default" },
		{ "ModuleRelativePath", "Public/BlueprintAssistUtils.h" },
		{ "Never.Name", "EBABreakMethod::Never" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBABreakMethod::Default", (int64)EBABreakMethod::Default },
		{ "EBABreakMethod::Always", (int64)EBABreakMethod::Always },
		{ "EBABreakMethod::Never", (int64)EBABreakMethod::Never },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBABreakMethod",
	"EBABreakMethod",
	Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBABreakMethod()
{
	if (!Z_Registration_Info_UEnum_EBABreakMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBABreakMethod.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBABreakMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBABreakMethod.InnerSingleton;
}
// End Enum EBABreakMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBARoundingMethod_StaticEnum, TEXT("EBARoundingMethod"), &Z_Registration_Info_UEnum_EBARoundingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2808885234U) },
		{ EBABreakMethod_StaticEnum, TEXT("EBABreakMethod"), &Z_Registration_Info_UEnum_EBABreakMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3290737490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_2547852862(TEXT("/Script/BlueprintAssist"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
