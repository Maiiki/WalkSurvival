// Copyright fpwong. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BAFilteredList.h"
#include "AssetRegistry/AssetData.h"
#include "Framework/Commands/UIAction.h"
#include "Textures/SlateIcon.h"

class FUICommandInfo;
struct FTabSpawnerEntry;
class ISettingsSection;
class ISettingsCategory;
class ISettingsContainer;
class UToolMenu;
class FTabManager;
struct FToolMenuEntry;
struct FToolMenuSection;

struct FOpenWindowItem_Base : IBAFilteredListItem
{
	virtual void SelectItem() = 0;

	virtual const FSlateBrush* GetIcon();

	virtual const FString* GetDetailsString() { return nullptr; }

	virtual TOptional<FString> GetKeyboardShortcut() { return TOptional<FString>(); }
};

struct FOpenTabItem final : FOpenWindowItem_Base
{
	FName TabName;
	FName TabIconStyle;
	FName TabDisplayName;
	TSharedPtr<FTabManager> AlternateTabManager;

	FSlateIcon Icon;

	FOpenTabItem() = default;

	FOpenTabItem(const FOpenTabItem& Other)
	{
		TabName = Other.TabName;
		TabIconStyle = Other.TabIconStyle;
		TabDisplayName = Other.TabDisplayName;
		AlternateTabManager = Other.AlternateTabManager;
		Icon = Other.Icon;
	};

	FOpenTabItem(FName InTabName, FName InTabIcon, TSharedPtr<FTabManager> InAlternateTabManager);

	FOpenTabItem(FName InTabName, FName InTabIcon, FName InTabDisplayName = "", TSharedPtr<FTabManager> InAlternateTabManager = nullptr);

	FOpenTabItem(FName InTabName, const FSlateIcon& InIcon, FName InTabDisplayName = "", TSharedPtr<FTabManager> InAlternateTabManager = nullptr);

	virtual FString ToString() const override;

	virtual void SelectItem() override;

	virtual const FSlateBrush* GetIcon() override { return Icon.GetIcon(); }
};

#if BA_UE_VERSION_OR_LATER(5, 0)
struct FOpenTabSpawnerItem final : FOpenWindowItem_Base
{
	TSharedPtr<FTabSpawnerEntry> TabSpawnerEntry;
	TSharedPtr<FTabManager> AlternateTabManager;

	explicit FOpenTabSpawnerItem(TSharedPtr<FTabSpawnerEntry> Entry, TSharedPtr<FTabManager> InAlternateTabManager = nullptr)
		: TabSpawnerEntry(Entry)
		, AlternateTabManager(InAlternateTabManager)
	{
	}

	virtual FString ToString() const override;
	virtual void SelectItem() override;
	virtual const FSlateBrush* GetIcon() override;
	FName GetTabName() const;
	virtual const FString* GetDetailsString() override;
};
#endif

struct FToolsMenuItem final : FOpenWindowItem_Base
{
	UToolMenu* Menu = nullptr;
	UToolMenu* ParentContext = nullptr;
	FToolMenuEntry* Entry = nullptr;
	FToolMenuSection* Section = nullptr;

	virtual FString ToString() const override;

	virtual void SelectItem() override;
};

struct FExecuteCommandItem final : FOpenWindowItem_Base
{
public:
	TArray<TSharedPtr<FUICommandList>> AvailableLists;
	TSharedPtr<FUICommandInfo> Command;

	FExecuteCommandItem() = default;

	FExecuteCommandItem(TSharedPtr<FUICommandInfo> InCommand) : Command(InCommand) { }

	virtual FString ToString() const override;

	virtual void SelectItem() override;

	virtual const FSlateBrush* GetIcon() override;

	virtual const FString* GetDetailsString() override;

	virtual TOptional<FString> GetKeyboardShortcut() override;
};

struct FOpenWindowItem_Action final : FOpenWindowItem_Base
{
	FString Name;
	FExecuteAction Action;

	FOpenWindowItem_Action(const FString& InName, FExecuteAction InAction)
		: Name(InName)
		, Action(InAction) {}

	virtual FString ToString() const override { return Name; }
	virtual void SelectItem() override;
};

struct FOpenSettingItem final : FOpenWindowItem_Base
{
	FName ContainerName;
	FName CategoryName;
	FName SectionName;
	FString SectionDisplayName;

	FOpenSettingItem(const FName& InContainer, const FName& InCategory, const FName& InSection)
		: ContainerName(InContainer)
		, CategoryName(InCategory)
		, SectionName(InSection)
	{
		SectionDisplayName = SectionName.ToString();
	}

	FOpenSettingItem(const FName& InContainer, const FName& InCategory, const FName& InSection, const FString& InSectionDisplayName)
		: ContainerName(InContainer)
		, CategoryName(InCategory)
		, SectionName(InSection)
		, SectionDisplayName(InSectionDisplayName)
	{ }

	FOpenSettingItem() = default;

	virtual FString ToString() const override;

	virtual FString GetSearchText() const override;

	FString GetCategoryString() const;

	virtual const FString* GetDetailsString() override
	{
		return new FString(GetCategoryString());
	}

	bool operator==(const FOpenSettingItem& Other);
	bool operator!=(const FOpenSettingItem& Other) { return !(*this == Other); }

	virtual const FSlateBrush* GetIcon() override;
	virtual void SelectItem() override;
};

struct FWidgetItem final : FOpenWindowItem_Base
{
	FWidgetItem(TSharedPtr<SWidget> MenuEntryBlock);

	TSharedPtr<SWidget> Widget;

	FString Name;
	virtual FString ToString() const override;
	virtual void SelectItem() override;
};

struct FEditorUtilityItem final : FOpenWindowItem_Base
{
	FEditorUtilityItem(const FAssetData& InAssetData) : AssetData(InAssetData) {}

	FAssetData AssetData;

	virtual FString ToString() const override;
	virtual void SelectItem() override;
};

class BLUEPRINTASSIST_API SBAOpenWindowMenu final : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SBAOpenWindowMenu) { }
	SLATE_END_ARGS()

	static FVector2D GetWidgetSize() { return FVector2D(500, 400); }

	void Construct(const FArguments& InArgs);

	void InitListItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddOpenTabItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddOpenSettingsItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddEditorUtilityWidgets(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddCommandItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddEditorCommandItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddToolItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddHardCodedTabItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	// tab spawner
#if BA_UE_VERSION_OR_LATER(5, 0)
	void AddWorkspaceMenuStructure(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items, TSet<FName>& ExistingTabNames);

	void AddTabManagerItems(TSharedPtr<FTabManager> TabManager, TSet<FName>& AddedTabs, TArray<TSharedPtr<FOpenWindowItem_Base>>& OutItems);
#endif

	void AddActionItems(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	void AddMenuEntryBlocks(TArray<TSharedPtr<FOpenWindowItem_Base>>& Items);

	TSharedRef<ITableRow> CreateItemWidget(TSharedPtr<FOpenWindowItem_Base> Item, const TSharedRef<STableViewBase>& OwnerTable) const;

	void SelectItem(TSharedPtr<FOpenWindowItem_Base> Item);
};
