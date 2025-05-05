// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistSettings_EditorFeatures.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTASSIST_BlueprintAssistSettings_EditorFeatures_generated_h
#error "BlueprintAssistSettings_EditorFeatures.generated.h already included, missing '#pragma once' in BlueprintAssistSettings_EditorFeatures.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistSettings_EditorFeatures_generated_h

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBASettings_EditorFeatures(); \
	friend struct Z_Construct_UClass_UBASettings_EditorFeatures_Statics; \
public: \
	DECLARE_CLASS(UBASettings_EditorFeatures, UBASettingsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), NO_API) \
	DECLARE_SERIALIZER(UBASettings_EditorFeatures) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBASettings_EditorFeatures(UBASettings_EditorFeatures&&); \
	UBASettings_EditorFeatures(const UBASettings_EditorFeatures&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings_EditorFeatures); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings_EditorFeatures); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings_EditorFeatures) \
	NO_API virtual ~UBASettings_EditorFeatures();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_38_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_41_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTASSIST_API UClass* StaticClass<class UBASettings_EditorFeatures>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h


#define FOREACH_ENUM_EBAFUNCTIONACCESSSPECIFIER(op) \
	op(EBAFunctionAccessSpecifier::Public) \
	op(EBAFunctionAccessSpecifier::Protected) \
	op(EBAFunctionAccessSpecifier::Private) 

enum class EBAFunctionAccessSpecifier : uint8;
template<> struct TIsUEnumClass<EBAFunctionAccessSpecifier> { enum { Value = true }; };
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFunctionAccessSpecifier>();

#define FOREACH_ENUM_EBAAUTOZOOMTONODE(op) \
	op(EBAAutoZoomToNode::Never) \
	op(EBAAutoZoomToNode::Always) \
	op(EBAAutoZoomToNode::Outside_Viewport) 

enum class EBAAutoZoomToNode : uint8;
template<> struct TIsUEnumClass<EBAAutoZoomToNode> { enum { Value = true }; };
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoZoomToNode>();

#define FOREACH_ENUM_EBAPINSELECTIONMETHOD(op) \
	op(EBAPinSelectionMethod::Execution) \
	op(EBAPinSelectionMethod::Value) 

enum class EBAPinSelectionMethod : uint8;
template<> struct TIsUEnumClass<EBAPinSelectionMethod> { enum { Value = true }; };
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAPinSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
