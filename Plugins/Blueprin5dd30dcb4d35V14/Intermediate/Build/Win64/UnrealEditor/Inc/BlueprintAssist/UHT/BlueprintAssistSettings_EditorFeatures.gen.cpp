// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistSettings_EditorFeatures.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSettings_EditorFeatures() {}

// Begin Cross Module References
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_EditorFeatures();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_EditorFeatures_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettingsBase();
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode();
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier();
BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References

// Begin Enum EBAFunctionAccessSpecifier
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier;
static UEnum* EBAFunctionAccessSpecifier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAFunctionAccessSpecifier"));
	}
	return Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFunctionAccessSpecifier>()
{
	return EBAFunctionAccessSpecifier_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "Private.DisplayName", "Private" },
		{ "Private.Name", "EBAFunctionAccessSpecifier::Private" },
		{ "Protected.DisplayName", "Protected" },
		{ "Protected.Name", "EBAFunctionAccessSpecifier::Protected" },
		{ "Public.DisplayName", "Public" },
		{ "Public.Name", "EBAFunctionAccessSpecifier::Public" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBAFunctionAccessSpecifier::Public", (int64)EBAFunctionAccessSpecifier::Public },
		{ "EBAFunctionAccessSpecifier::Protected", (int64)EBAFunctionAccessSpecifier::Protected },
		{ "EBAFunctionAccessSpecifier::Private", (int64)EBAFunctionAccessSpecifier::Private },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBAFunctionAccessSpecifier",
	"EBAFunctionAccessSpecifier",
	Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier()
{
	if (!Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.InnerSingleton;
}
// End Enum EBAFunctionAccessSpecifier

// Begin Enum EBAAutoZoomToNode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAAutoZoomToNode;
static UEnum* EBAAutoZoomToNode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBAAutoZoomToNode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBAAutoZoomToNode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAAutoZoomToNode"));
	}
	return Z_Registration_Info_UEnum_EBAAutoZoomToNode.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoZoomToNode>()
{
	return EBAAutoZoomToNode_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EBAAutoZoomToNode::Always" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EBAAutoZoomToNode::Never" },
		{ "Outside_Viewport.DisplayName", "Outside viewport" },
		{ "Outside_Viewport.Name", "EBAAutoZoomToNode::Outside_Viewport" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBAAutoZoomToNode::Never", (int64)EBAAutoZoomToNode::Never },
		{ "EBAAutoZoomToNode::Always", (int64)EBAAutoZoomToNode::Always },
		{ "EBAAutoZoomToNode::Outside_Viewport", (int64)EBAAutoZoomToNode::Outside_Viewport },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBAAutoZoomToNode",
	"EBAAutoZoomToNode",
	Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode()
{
	if (!Z_Registration_Info_UEnum_EBAAutoZoomToNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAAutoZoomToNode.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBAAutoZoomToNode.InnerSingleton;
}
// End Enum EBAAutoZoomToNode

// Begin Enum EBAPinSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAPinSelectionMethod;
static UEnum* EBAPinSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBAPinSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBAPinSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod, (UObject*)Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAPinSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_EBAPinSelectionMethod.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAPinSelectionMethod>()
{
	return EBAPinSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Execution.Comment", "/* Select the right execution pin */" },
		{ "Execution.DisplayName", "Execution" },
		{ "Execution.Name", "EBAPinSelectionMethod::Execution" },
		{ "Execution.ToolTip", "Select the right execution pin" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "Value.Comment", "/* Select the first value (unlinked parameter) pin, otherwise select the right execution pin */" },
		{ "Value.DisplayName", "Value" },
		{ "Value.Name", "EBAPinSelectionMethod::Value" },
		{ "Value.ToolTip", "Select the first value (unlinked parameter) pin, otherwise select the right execution pin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBAPinSelectionMethod::Execution", (int64)EBAPinSelectionMethod::Execution },
		{ "EBAPinSelectionMethod::Value", (int64)EBAPinSelectionMethod::Value },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
	nullptr,
	"EBAPinSelectionMethod",
	"EBAPinSelectionMethod",
	Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_EBAPinSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAPinSelectionMethod.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBAPinSelectionMethod.InnerSingleton;
}
// End Enum EBAPinSelectionMethod

// Begin Class UBASettings_EditorFeatures
void UBASettings_EditorFeatures::StaticRegisterNativesUBASettings_EditorFeatures()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBASettings_EditorFeatures);
UClass* Z_Construct_UClass_UBASettings_EditorFeatures_NoRegister()
{
	return UBASettings_EditorFeatures::StaticClass();
}
struct Z_Construct_UClass_UBASettings_EditorFeatures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistSettings_EditorFeatures.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetReplicationFlagsAfterRenaming_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "Comment", "/* Set the according replication flags after renaming a custom event by matching the prefixes below */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Set the according replication flags after renaming a custom event by matching the prefixes below" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "Comment", "/* When enabled, renaming a custom event with no matching prefix will apply \"NotReplicated\" */" },
		{ "EditCondition", "bSetReplicationFlagsAfterRenaming" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "When enabled, renaming a custom event with no matching prefix will apply \"NotReplicated\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddReplicationPrefixToCustomEventTitle_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "Comment", "/* Add the according prefix to the title after changing replication flags */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Add the according prefix to the title after changing replication flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MulticastPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNodeGroupOutline_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Draw an outline to visualise each node group on the graph */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Draw an outline to visualise each node group on the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyDrawGroupOutlineWhenSelected_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Only draw the group outline when selected */" },
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Only draw the group outline when selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupOutlineColor_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Change the color of the border around the selected pin */" },
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Change the color of the border around the selected pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupOutlineWidth_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Change the color of the border around the selected pin */" },
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Change the color of the border around the selected pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupOutlineMargin_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Outline margin around each node */" },
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Outline margin around each node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNodeGroupFill_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Draw a fill to show the node groups for selected nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Draw a fill to show the node groups for selected nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupFillColor_MetaData[] = {
		{ "Category", "NodeGroup" },
		{ "Comment", "/* Change the color of the border around the selected pin */" },
		{ "EditCondition", "bDrawNodeGroupFill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Change the color of the border around the selected pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftCameraDistance_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "/* Distance the viewport moves when running the Shift Camera command. Scaled by zoom distance. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Distance the viewport moves when running the Shift Camera command. Scaled by zoom distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAddParentNode_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "/* Automatically add parent nodes to event nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Automatically add parent nodes to event nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPinHighlightColor_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "/* Change the color of the border around the selected pin */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Change the color of the border around the selected pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSelectionMethod_Execution_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "/* Determines which pin should be selected when you click on an execution node */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Determines which pin should be selected when you click on an execution node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSelectionMethod_Parameter_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "/* Determines which pin should be selected when you click on a parameter node */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Determines which pin should be selected when you click on a parameter node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGlobalCommentBubblePinned_MetaData[] = {
		{ "Category", "Graph|Comments" },
		{ "Comment", "/* Sets the 'Comment Bubble Pinned' bool for all nodes on the graph (Auto Size Comment plugin handles this value for comments) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Sets the 'Comment Bubble Pinned' bool for all nodes on the graph (Auto Size Comment plugin handles this value for comments)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalCommentBubblePinnedValue_MetaData[] = {
		{ "Category", "Graph|Comments" },
		{ "Comment", "/* The global 'Comment Bubble Pinned' value */" },
		{ "EditCondition", "bEnableGlobalCommentBubblePinned" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "The global 'Comment Bubble Pinned' value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoZoomToNodeBehavior_MetaData[] = {
		{ "Category", "Graph|New Node Behaviour" },
		{ "Comment", "/* Determines if we should auto zoom to a newly created node */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Determines if we should auto zoom to a newly created node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertNewNodeKeyChord_MetaData[] = {
		{ "Category", "Graph|New Node Behaviour" },
		{ "Comment", "/* Try to insert the node between any current wires when holding down this key */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Try to insert the node between any current wires when holding down this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysConnectExecutionFromParameter_MetaData[] = {
		{ "Category", "Graph|New Node Behaviour" },
		{ "Comment", "/* When creating a new node from a parameter pin, always try to connect the execution. Holding InsertNewNodeChord will disable this. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "When creating a new node from a parameter pin, always try to connect the execution. Holding InsertNewNodeChord will disable this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInsertFromParameter_MetaData[] = {
		{ "Category", "Graph|New Node Behaviour" },
		{ "Comment", "/* When creating a new node from a parameter pin, always try to insert between wires. Holding InsertNewNodeChord will disable this. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "When creating a new node from a parameter pin, always try to insert between wires. Holding InsertNewNodeChord will disable this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInsertFromExecution_MetaData[] = {
		{ "Category", "Graph|New Node Behaviour" },
		{ "Comment", "/* When creating a new node from an execution pin, always try to insert between wires. Holding InsertNewNodeChord will disable this. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "When creating a new node from an execution pin, always try to insert between wires. Holding InsertNewNodeChord will disable this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectValuePinWhenCreatingNewNodes_MetaData[] = {
		{ "Category", "Graph|New Node Behaviour" },
		{ "Comment", "/* Select the first editable parameter pin when a node is created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Select the first editable parameter pin when a node is created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddToolbarWidget_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Add the BlueprintAssist widget to the toolbar */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Add the BlueprintAssist widget to the toolbar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRenameGettersAndSetters_MetaData[] = {
		{ "Category", "General|Getters and Setters" },
		{ "Comment", "/* Automatically rename Function getters and setters when the Function is renamed */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Automatically rename Function getters and setters when the Function is renamed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeGenerateGetterAndSetterButton_MetaData[] = {
		{ "Category", "General|Getters and Setters" },
		{ "Comment", "/* Merge the generate getter and setter into one button */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Merge the generate getter and setter into one button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVariableDefaults_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Set default properties on variables when they are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Set default properties on variables when they are created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyVariableDefaultsToEventDispatchers_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableInstanceEditable_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Instance Editable */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Instance Editable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableBlueprintReadOnly_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Blueprint Read Only */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Blueprint Read Only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableExposeOnSpawn_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Expose on Spawn */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Expose on Spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariablePrivate_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Private */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Private" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableExposeToCinematics_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Expose to Cinematics */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Expose to Cinematics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableName_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default name */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableTooltip_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Tooltip */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Tooltip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableCategory_MetaData[] = {
		{ "Category", "VariableDefaults" },
		{ "Comment", "/* Variable default Category */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Variable default Category" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFunctionDefaults_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Set default properties on functions when they are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Set default properties on functions when they are created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionAccessSpecifier_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default AccessSpecifier */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default AccessSpecifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFunctionPure_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default Pure */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default Pure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFunctionConst_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default Const */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default Const" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFunctionExec_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default Exec */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default Exec" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionTooltip_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default Tooltip */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default Tooltip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionKeywords_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default Keywords */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default Keywords" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionCategory_MetaData[] = {
		{ "Category", "FunctionDefaults" },
		{ "Comment", "/* Function default Category */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Function default Category" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEventDefaults_MetaData[] = {
		{ "Category", "CustomEventDefaults" },
		{ "Comment", "/* Set default properties on custom events when they are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Set default properties on custom events when they are created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEventAccessSpecifier_MetaData[] = {
		{ "Category", "CustomEventDefaults" },
		{ "Comment", "/* Event default AccessSpecifier */" },
		{ "EditCondition", "bEnableEventDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Event default AccessSpecifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultEventNetReliable_MetaData[] = {
		{ "Category", "CustomEventDefaults" },
		{ "Comment", "/* Event default Net Reliable (for RPC calls) */" },
		{ "EditCondition", "bEnableEventDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Event default Net Reliable (for RPC calls)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyPinValueChord_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/* Copy the pin value to the clipboard */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Copy the pin value to the clipboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PastePinValueChord_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/* Paste the hovered value to the clipboard */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Paste the hovered value to the clipboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusInDetailsPanelChord_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/* Focus the hovered node in the details panel */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Focus the hovered node in the details panel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDragNodesChords_MetaData[] = {
		{ "Category", "Input|Mouse Features" },
		{ "Comment", "/** Extra input chords to for dragging selected nodes with cursor (same as left-click-dragging) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Extra input chords to for dragging selected nodes with cursor (same as left-click-dragging)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupMovementChords_MetaData[] = {
		{ "Category", "Input|Mouse Features" },
		{ "Comment", "/** Input chords for group dragging (move all linked nodes) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Input chords for group dragging (move all linked nodes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSubTreeMovementChords_MetaData[] = {
		{ "Category", "Input|Mouse Features" },
		{ "Comment", "/** Input chords for group dragging (move left linked nodes) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Input chords for group dragging (move left linked nodes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSubTreeMovementChords_MetaData[] = {
		{ "Category", "Input|Mouse Features" },
		{ "Comment", "/** Input chords for group dragging (move right linked nodes) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Input chords for group dragging (move right linked nodes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAllHotkeys_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* By default the Blueprint Assist Hotkey Menu only displays this plugin's hotkeys. Enable this to display all hotkeys for the editor. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "By default the Blueprint Assist Hotkey Menu only displays this plugin's hotkeys. Enable this to display all hotkeys for the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWelcomeScreenOnLaunch_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Show the welcome screen when the engine launches */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Show the welcome screen when the engine launches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDoubleClickGoToDefinition_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Double click on a node to go to definition. Currently only implemented for Cast blueprint node. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Double click on a node to go to definition. Currently only implemented for Cast blueprint node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInvisibleKnotNodes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Knot nodes will be hidden (requires graphs to be re-opened) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Knot nodes will be hidden (requires graphs to be re-opened)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayLiveCompileSound_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Play sound on successful compile */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Play sound on successful compile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderBookmarks_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Input for folder bookmarks */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Input for folder bookmarks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickTime_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Duration to differentiate between a click and a drag */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "Duration to differentiate between a click and a drag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGeneratedGettersCategory_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* What category to assign to generated getter functions. Overrides DefaultFunctionCategory. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "What category to assign to generated getter functions. Overrides DefaultFunctionCategory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGeneratedSettersCategory_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* What category to assign to generated setter functions. Overrides DefaultFunctionCategory. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ToolTip", "What category to assign to generated setter functions. Overrides DefaultFunctionCategory." },
	};
#endif // WITH_METADATA
	static void NewProp_bSetReplicationFlagsAfterRenaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetReplicationFlagsAfterRenaming;
	static void NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix;
	static void NewProp_bAddReplicationPrefixToCustomEventTitle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddReplicationPrefixToCustomEventTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MulticastPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientPrefix;
	static void NewProp_bDrawNodeGroupOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNodeGroupOutline;
	static void NewProp_bOnlyDrawGroupOutlineWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDrawGroupOutlineWhenSelected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroupOutlineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeGroupOutlineWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroupOutlineMargin;
	static void NewProp_bDrawNodeGroupFill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNodeGroupFill;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroupFillColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShiftCameraDistance;
	static void NewProp_bAutoAddParentNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAddParentNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPinHighlightColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinSelectionMethod_Execution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PinSelectionMethod_Execution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinSelectionMethod_Parameter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PinSelectionMethod_Parameter;
	static void NewProp_bEnableGlobalCommentBubblePinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGlobalCommentBubblePinned;
	static void NewProp_bGlobalCommentBubblePinnedValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalCommentBubblePinnedValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoZoomToNodeBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoZoomToNodeBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsertNewNodeKeyChord;
	static void NewProp_bAlwaysConnectExecutionFromParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysConnectExecutionFromParameter;
	static void NewProp_bAlwaysInsertFromParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInsertFromParameter;
	static void NewProp_bAlwaysInsertFromExecution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInsertFromExecution;
	static void NewProp_bSelectValuePinWhenCreatingNewNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectValuePinWhenCreatingNewNodes;
	static void NewProp_bAddToolbarWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToolbarWidget;
	static void NewProp_bAutoRenameGettersAndSetters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRenameGettersAndSetters;
	static void NewProp_bMergeGenerateGetterAndSetterButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeGenerateGetterAndSetterButton;
	static void NewProp_bEnableVariableDefaults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVariableDefaults;
	static void NewProp_bApplyVariableDefaultsToEventDispatchers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyVariableDefaultsToEventDispatchers;
	static void NewProp_bDefaultVariableInstanceEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableInstanceEditable;
	static void NewProp_bDefaultVariableBlueprintReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableBlueprintReadOnly;
	static void NewProp_bDefaultVariableExposeOnSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableExposeOnSpawn;
	static void NewProp_bDefaultVariablePrivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariablePrivate;
	static void NewProp_bDefaultVariableExposeToCinematics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableExposeToCinematics;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultVariableName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultVariableTooltip;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultVariableCategory;
	static void NewProp_bEnableFunctionDefaults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFunctionDefaults;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFunctionAccessSpecifier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFunctionAccessSpecifier;
	static void NewProp_bDefaultFunctionPure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFunctionPure;
	static void NewProp_bDefaultFunctionConst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFunctionConst;
	static void NewProp_bDefaultFunctionExec_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFunctionExec;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultFunctionTooltip;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultFunctionKeywords;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultFunctionCategory;
	static void NewProp_bEnableEventDefaults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEventDefaults;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultEventAccessSpecifier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultEventAccessSpecifier;
	static void NewProp_bDefaultEventNetReliable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultEventNetReliable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CopyPinValueChord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PastePinValueChord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusInDetailsPanelChord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalDragNodesChords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDragNodesChords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMovementChords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupMovementChords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftSubTreeMovementChords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftSubTreeMovementChords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightSubTreeMovementChords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RightSubTreeMovementChords;
	static void NewProp_bDisplayAllHotkeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAllHotkeys;
	static void NewProp_bShowWelcomeScreenOnLaunch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWelcomeScreenOnLaunch;
	static void NewProp_bEnableDoubleClickGoToDefinition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDoubleClickGoToDefinition;
	static void NewProp_bEnableInvisibleKnotNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInvisibleKnotNodes;
	static void NewProp_bPlayLiveCompileSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayLiveCompileSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FolderBookmarks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FolderBookmarks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClickTime;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultGeneratedGettersCategory;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultGeneratedSettersCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettings_EditorFeatures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bSetReplicationFlagsAfterRenaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming = { "bSetReplicationFlagsAfterRenaming", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetReplicationFlagsAfterRenaming_MetaData), NewProp_bSetReplicationFlagsAfterRenaming_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bClearReplicationFlagsWhenRenamingWithNoPrefix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix = { "bClearReplicationFlagsWhenRenamingWithNoPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_MetaData), NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAddReplicationPrefixToCustomEventTitle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle = { "bAddReplicationPrefixToCustomEventTitle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddReplicationPrefixToCustomEventTitle_MetaData), NewProp_bAddReplicationPrefixToCustomEventTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_MulticastPrefix = { "MulticastPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, MulticastPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MulticastPrefix_MetaData), NewProp_MulticastPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ServerPrefix = { "ServerPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, ServerPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPrefix_MetaData), NewProp_ServerPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ClientPrefix = { "ClientPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, ClientPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientPrefix_MetaData), NewProp_ClientPrefix_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDrawNodeGroupOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline = { "bDrawNodeGroupOutline", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawNodeGroupOutline_MetaData), NewProp_bDrawNodeGroupOutline_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bOnlyDrawGroupOutlineWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected = { "bOnlyDrawGroupOutlineWhenSelected", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyDrawGroupOutlineWhenSelected_MetaData), NewProp_bOnlyDrawGroupOutlineWhenSelected_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineColor = { "NodeGroupOutlineColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupOutlineColor_MetaData), NewProp_NodeGroupOutlineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineWidth = { "NodeGroupOutlineWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupOutlineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupOutlineWidth_MetaData), NewProp_NodeGroupOutlineWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineMargin = { "NodeGroupOutlineMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupOutlineMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupOutlineMargin_MetaData), NewProp_NodeGroupOutlineMargin_MetaData) }; // 2986890016
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDrawNodeGroupFill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill = { "bDrawNodeGroupFill", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawNodeGroupFill_MetaData), NewProp_bDrawNodeGroupFill_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupFillColor = { "NodeGroupFillColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupFillColor_MetaData), NewProp_NodeGroupFillColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ShiftCameraDistance = { "ShiftCameraDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, ShiftCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftCameraDistance_MetaData), NewProp_ShiftCameraDistance_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoAddParentNode_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAutoAddParentNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoAddParentNode = { "bAutoAddParentNode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoAddParentNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAddParentNode_MetaData), NewProp_bAutoAddParentNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_SelectedPinHighlightColor = { "SelectedPinHighlightColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, SelectedPinHighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPinHighlightColor_MetaData), NewProp_SelectedPinHighlightColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Execution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Execution = { "PinSelectionMethod_Execution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, PinSelectionMethod_Execution), Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSelectionMethod_Execution_MetaData), NewProp_PinSelectionMethod_Execution_MetaData) }; // 1184386686
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Parameter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Parameter = { "PinSelectionMethod_Parameter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, PinSelectionMethod_Parameter), Z_Construct_UEnum_BlueprintAssist_EBAPinSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSelectionMethod_Parameter_MetaData), NewProp_PinSelectionMethod_Parameter_MetaData) }; // 1184386686
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableGlobalCommentBubblePinned_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bEnableGlobalCommentBubblePinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableGlobalCommentBubblePinned = { "bEnableGlobalCommentBubblePinned", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableGlobalCommentBubblePinned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGlobalCommentBubblePinned_MetaData), NewProp_bEnableGlobalCommentBubblePinned_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bGlobalCommentBubblePinnedValue_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bGlobalCommentBubblePinnedValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bGlobalCommentBubblePinnedValue = { "bGlobalCommentBubblePinnedValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bGlobalCommentBubblePinnedValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGlobalCommentBubblePinnedValue_MetaData), NewProp_bGlobalCommentBubblePinnedValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AutoZoomToNodeBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AutoZoomToNodeBehavior = { "AutoZoomToNodeBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, AutoZoomToNodeBehavior), Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoZoomToNodeBehavior_MetaData), NewProp_AutoZoomToNodeBehavior_MetaData) }; // 784254443
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_InsertNewNodeKeyChord = { "InsertNewNodeKeyChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, InsertNewNodeKeyChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertNewNodeKeyChord_MetaData), NewProp_InsertNewNodeKeyChord_MetaData) }; // 4109060215
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysConnectExecutionFromParameter_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAlwaysConnectExecutionFromParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysConnectExecutionFromParameter = { "bAlwaysConnectExecutionFromParameter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysConnectExecutionFromParameter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysConnectExecutionFromParameter_MetaData), NewProp_bAlwaysConnectExecutionFromParameter_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromParameter_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAlwaysInsertFromParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromParameter = { "bAlwaysInsertFromParameter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromParameter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysInsertFromParameter_MetaData), NewProp_bAlwaysInsertFromParameter_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromExecution_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAlwaysInsertFromExecution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromExecution = { "bAlwaysInsertFromExecution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromExecution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysInsertFromExecution_MetaData), NewProp_bAlwaysInsertFromExecution_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSelectValuePinWhenCreatingNewNodes_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bSelectValuePinWhenCreatingNewNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSelectValuePinWhenCreatingNewNodes = { "bSelectValuePinWhenCreatingNewNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSelectValuePinWhenCreatingNewNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectValuePinWhenCreatingNewNodes_MetaData), NewProp_bSelectValuePinWhenCreatingNewNodes_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddToolbarWidget_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAddToolbarWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddToolbarWidget = { "bAddToolbarWidget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddToolbarWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddToolbarWidget_MetaData), NewProp_bAddToolbarWidget_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoRenameGettersAndSetters_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAutoRenameGettersAndSetters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoRenameGettersAndSetters = { "bAutoRenameGettersAndSetters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoRenameGettersAndSetters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRenameGettersAndSetters_MetaData), NewProp_bAutoRenameGettersAndSetters_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bMergeGenerateGetterAndSetterButton_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bMergeGenerateGetterAndSetterButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bMergeGenerateGetterAndSetterButton = { "bMergeGenerateGetterAndSetterButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bMergeGenerateGetterAndSetterButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeGenerateGetterAndSetterButton_MetaData), NewProp_bMergeGenerateGetterAndSetterButton_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableVariableDefaults_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bEnableVariableDefaults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableVariableDefaults = { "bEnableVariableDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableVariableDefaults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVariableDefaults_MetaData), NewProp_bEnableVariableDefaults_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bApplyVariableDefaultsToEventDispatchers_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bApplyVariableDefaultsToEventDispatchers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bApplyVariableDefaultsToEventDispatchers = { "bApplyVariableDefaultsToEventDispatchers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bApplyVariableDefaultsToEventDispatchers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyVariableDefaultsToEventDispatchers_MetaData), NewProp_bApplyVariableDefaultsToEventDispatchers_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableInstanceEditable_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultVariableInstanceEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableInstanceEditable = { "bDefaultVariableInstanceEditable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableInstanceEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultVariableInstanceEditable_MetaData), NewProp_bDefaultVariableInstanceEditable_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableBlueprintReadOnly_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultVariableBlueprintReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableBlueprintReadOnly = { "bDefaultVariableBlueprintReadOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableBlueprintReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultVariableBlueprintReadOnly_MetaData), NewProp_bDefaultVariableBlueprintReadOnly_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeOnSpawn_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultVariableExposeOnSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeOnSpawn = { "bDefaultVariableExposeOnSpawn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeOnSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultVariableExposeOnSpawn_MetaData), NewProp_bDefaultVariableExposeOnSpawn_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariablePrivate_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultVariablePrivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariablePrivate = { "bDefaultVariablePrivate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariablePrivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultVariablePrivate_MetaData), NewProp_bDefaultVariablePrivate_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeToCinematics_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultVariableExposeToCinematics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeToCinematics = { "bDefaultVariableExposeToCinematics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeToCinematics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultVariableExposeToCinematics_MetaData), NewProp_bDefaultVariableExposeToCinematics_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultVariableName = { "DefaultVariableName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVariableName_MetaData), NewProp_DefaultVariableName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultVariableTooltip = { "DefaultVariableTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultVariableTooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVariableTooltip_MetaData), NewProp_DefaultVariableTooltip_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultVariableCategory = { "DefaultVariableCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultVariableCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVariableCategory_MetaData), NewProp_DefaultVariableCategory_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableFunctionDefaults_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bEnableFunctionDefaults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableFunctionDefaults = { "bEnableFunctionDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableFunctionDefaults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFunctionDefaults_MetaData), NewProp_bEnableFunctionDefaults_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionAccessSpecifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionAccessSpecifier = { "DefaultFunctionAccessSpecifier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultFunctionAccessSpecifier), Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFunctionAccessSpecifier_MetaData), NewProp_DefaultFunctionAccessSpecifier_MetaData) }; // 9396909
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionPure_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultFunctionPure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionPure = { "bDefaultFunctionPure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionPure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFunctionPure_MetaData), NewProp_bDefaultFunctionPure_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionConst_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultFunctionConst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionConst = { "bDefaultFunctionConst", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionConst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFunctionConst_MetaData), NewProp_bDefaultFunctionConst_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionExec_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultFunctionExec = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionExec = { "bDefaultFunctionExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionExec_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFunctionExec_MetaData), NewProp_bDefaultFunctionExec_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionTooltip = { "DefaultFunctionTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultFunctionTooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFunctionTooltip_MetaData), NewProp_DefaultFunctionTooltip_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionKeywords = { "DefaultFunctionKeywords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultFunctionKeywords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFunctionKeywords_MetaData), NewProp_DefaultFunctionKeywords_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionCategory = { "DefaultFunctionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultFunctionCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFunctionCategory_MetaData), NewProp_DefaultFunctionCategory_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableEventDefaults_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bEnableEventDefaults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableEventDefaults = { "bEnableEventDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableEventDefaults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEventDefaults_MetaData), NewProp_bEnableEventDefaults_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultEventAccessSpecifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultEventAccessSpecifier = { "DefaultEventAccessSpecifier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultEventAccessSpecifier), Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEventAccessSpecifier_MetaData), NewProp_DefaultEventAccessSpecifier_MetaData) }; // 9396909
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultEventNetReliable_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDefaultEventNetReliable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultEventNetReliable = { "bDefaultEventNetReliable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultEventNetReliable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultEventNetReliable_MetaData), NewProp_bDefaultEventNetReliable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_CopyPinValueChord = { "CopyPinValueChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, CopyPinValueChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyPinValueChord_MetaData), NewProp_CopyPinValueChord_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PastePinValueChord = { "PastePinValueChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, PastePinValueChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PastePinValueChord_MetaData), NewProp_PastePinValueChord_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_FocusInDetailsPanelChord = { "FocusInDetailsPanelChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, FocusInDetailsPanelChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusInDetailsPanelChord_MetaData), NewProp_FocusInDetailsPanelChord_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AdditionalDragNodesChords_Inner = { "AdditionalDragNodesChords", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AdditionalDragNodesChords = { "AdditionalDragNodesChords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, AdditionalDragNodesChords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalDragNodesChords_MetaData), NewProp_AdditionalDragNodesChords_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_GroupMovementChords_Inner = { "GroupMovementChords", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_GroupMovementChords = { "GroupMovementChords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, GroupMovementChords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupMovementChords_MetaData), NewProp_GroupMovementChords_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_LeftSubTreeMovementChords_Inner = { "LeftSubTreeMovementChords", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_LeftSubTreeMovementChords = { "LeftSubTreeMovementChords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, LeftSubTreeMovementChords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSubTreeMovementChords_MetaData), NewProp_LeftSubTreeMovementChords_MetaData) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_RightSubTreeMovementChords_Inner = { "RightSubTreeMovementChords", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_RightSubTreeMovementChords = { "RightSubTreeMovementChords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, RightSubTreeMovementChords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSubTreeMovementChords_MetaData), NewProp_RightSubTreeMovementChords_MetaData) }; // 4109060215
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDisplayAllHotkeys_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDisplayAllHotkeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDisplayAllHotkeys = { "bDisplayAllHotkeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDisplayAllHotkeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayAllHotkeys_MetaData), NewProp_bDisplayAllHotkeys_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bShowWelcomeScreenOnLaunch_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bShowWelcomeScreenOnLaunch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bShowWelcomeScreenOnLaunch = { "bShowWelcomeScreenOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bShowWelcomeScreenOnLaunch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWelcomeScreenOnLaunch_MetaData), NewProp_bShowWelcomeScreenOnLaunch_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableDoubleClickGoToDefinition_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bEnableDoubleClickGoToDefinition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableDoubleClickGoToDefinition = { "bEnableDoubleClickGoToDefinition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableDoubleClickGoToDefinition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDoubleClickGoToDefinition_MetaData), NewProp_bEnableDoubleClickGoToDefinition_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableInvisibleKnotNodes_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bEnableInvisibleKnotNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableInvisibleKnotNodes = { "bEnableInvisibleKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableInvisibleKnotNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableInvisibleKnotNodes_MetaData), NewProp_bEnableInvisibleKnotNodes_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bPlayLiveCompileSound_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bPlayLiveCompileSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bPlayLiveCompileSound = { "bPlayLiveCompileSound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bPlayLiveCompileSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayLiveCompileSound_MetaData), NewProp_bPlayLiveCompileSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_FolderBookmarks_Inner = { "FolderBookmarks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_FolderBookmarks = { "FolderBookmarks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, FolderBookmarks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderBookmarks_MetaData), NewProp_FolderBookmarks_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ClickTime = { "ClickTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, ClickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickTime_MetaData), NewProp_ClickTime_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultGeneratedGettersCategory = { "DefaultGeneratedGettersCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultGeneratedGettersCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGeneratedGettersCategory_MetaData), NewProp_DefaultGeneratedGettersCategory_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultGeneratedSettersCategory = { "DefaultGeneratedSettersCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, DefaultGeneratedSettersCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGeneratedSettersCategory_MetaData), NewProp_DefaultGeneratedSettersCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_MulticastPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ServerPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ClientPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ShiftCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoAddParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_SelectedPinHighlightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Execution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Execution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Parameter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PinSelectionMethod_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableGlobalCommentBubblePinned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bGlobalCommentBubblePinnedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AutoZoomToNodeBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AutoZoomToNodeBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_InsertNewNodeKeyChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysConnectExecutionFromParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAlwaysInsertFromExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSelectValuePinWhenCreatingNewNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddToolbarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAutoRenameGettersAndSetters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bMergeGenerateGetterAndSetterButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableVariableDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bApplyVariableDefaultsToEventDispatchers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableInstanceEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableBlueprintReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeOnSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariablePrivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultVariableExposeToCinematics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultVariableTooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultVariableCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableFunctionDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionAccessSpecifier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionAccessSpecifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionPure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionConst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultFunctionExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionTooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionKeywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultFunctionCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableEventDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultEventAccessSpecifier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultEventAccessSpecifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDefaultEventNetReliable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_CopyPinValueChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_PastePinValueChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_FocusInDetailsPanelChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AdditionalDragNodesChords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_AdditionalDragNodesChords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_GroupMovementChords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_GroupMovementChords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_LeftSubTreeMovementChords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_LeftSubTreeMovementChords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_RightSubTreeMovementChords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_RightSubTreeMovementChords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDisplayAllHotkeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bShowWelcomeScreenOnLaunch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableDoubleClickGoToDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bEnableInvisibleKnotNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bPlayLiveCompileSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_FolderBookmarks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_FolderBookmarks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ClickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultGeneratedGettersCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_DefaultGeneratedSettersCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBASettings_EditorFeatures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBASettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::ClassParams = {
	&UBASettings_EditorFeatures::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::Class_MetaDataParams), Z_Construct_UClass_UBASettings_EditorFeatures_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBASettings_EditorFeatures()
{
	if (!Z_Registration_Info_UClass_UBASettings_EditorFeatures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASettings_EditorFeatures.OuterSingleton, Z_Construct_UClass_UBASettings_EditorFeatures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBASettings_EditorFeatures.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UClass* StaticClass<UBASettings_EditorFeatures>()
{
	return UBASettings_EditorFeatures::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBASettings_EditorFeatures);
UBASettings_EditorFeatures::~UBASettings_EditorFeatures() {}
// End Class UBASettings_EditorFeatures

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBAFunctionAccessSpecifier_StaticEnum, TEXT("EBAFunctionAccessSpecifier"), &Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 9396909U) },
		{ EBAAutoZoomToNode_StaticEnum, TEXT("EBAAutoZoomToNode"), &Z_Registration_Info_UEnum_EBAAutoZoomToNode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 784254443U) },
		{ EBAPinSelectionMethod_StaticEnum, TEXT("EBAPinSelectionMethod"), &Z_Registration_Info_UEnum_EBAPinSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1184386686U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBASettings_EditorFeatures, UBASettings_EditorFeatures::StaticClass, TEXT("UBASettings_EditorFeatures"), &Z_Registration_Info_UClass_UBASettings_EditorFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASettings_EditorFeatures), 930829421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_768310070(TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
