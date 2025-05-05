// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistUtils.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTASSIST_BlueprintAssistUtils_generated_h
#error "BlueprintAssistUtils.generated.h already included, missing '#pragma once' in BlueprintAssistUtils.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h


#define FOREACH_ENUM_EBAROUNDINGMETHOD(op) \
	op(EBARoundingMethod::Round) \
	op(EBARoundingMethod::Ceil) \
	op(EBARoundingMethod::Floor) 

enum class EBARoundingMethod : uint8;
template<> struct TIsUEnumClass<EBARoundingMethod> { enum { Value = true }; };
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBARoundingMethod>();

#define FOREACH_ENUM_EBABREAKMETHOD(op) \
	op(EBABreakMethod::Default) \
	op(EBABreakMethod::Always) \
	op(EBABreakMethod::Never) 

enum class EBABreakMethod : uint8;
template<> struct TIsUEnumClass<EBABreakMethod> { enum { Value = true }; };
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBABreakMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
