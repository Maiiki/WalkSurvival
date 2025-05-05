// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistSettings_Advanced.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTASSIST_BlueprintAssistSettings_Advanced_generated_h
#error "BlueprintAssistSettings_Advanced.generated.h already included, missing '#pragma once' in BlueprintAssistSettings_Advanced.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistSettings_Advanced_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBASettings_Advanced(); \
	friend struct Z_Construct_UClass_UBASettings_Advanced_Statics; \
public: \
	DECLARE_CLASS(UBASettings_Advanced, UBASettingsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), NO_API) \
	DECLARE_SERIALIZER(UBASettings_Advanced) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBASettings_Advanced(UBASettings_Advanced&&); \
	UBASettings_Advanced(const UBASettings_Advanced&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings_Advanced); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings_Advanced); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings_Advanced) \
	NO_API virtual ~UBASettings_Advanced();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_23_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_26_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTASSIST_API UClass* StaticClass<class UBASettings_Advanced>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h


#define FOREACH_ENUM_EBACACHESAVELOCATION(op) \
	op(EBACacheSaveLocation::Plugin) \
	op(EBACacheSaveLocation::Project) 

enum class EBACacheSaveLocation : uint8;
template<> struct TIsUEnumClass<EBACacheSaveLocation> { enum { Value = true }; };
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBACacheSaveLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
