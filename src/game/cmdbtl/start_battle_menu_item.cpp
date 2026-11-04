#include "game/menu/basic_menu.hpp"
#include "game/menu/info_sub_menu_item_reliance.hpp"
#include "game/menu/info_sub_menu_item_roster.hpp"
#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_class_change.hpp"
#include "game/menu/system_menu_item_info.hpp"
#include "game/menu/system_menu_item_inventory.hpp"
#include "game/menu/system_menu_item_retired.hpp"
#include "game/menu/system_menu_item_save.hpp"
#include "game/menu/troop_menu_item.hpp"
#include "game/menu/unit_list_param.hpp"

namespace game::cmdbtl {

namespace {

class StartBattleMenuItem : public menu::SystemMenuItem {
public:
  StartBattleMenuItem();

  const char* GetMid() override { return "MID_SysMenu_StartBattle"; }
  int ACall() override;
};

[[gnu::used]] StartBattleMenuItem::StartBattleMenuItem() = default;

class UnitSelectMenuItem : public menu::SystemMenuItem {
public:
  UnitSelectMenuItem();

  const char* GetMid() override { return "MID_SysMenu_UnitSelect"; }
  bool IsDecidable() override;
  int ACall() override;
};

[[gnu::used]] UnitSelectMenuItem::UnitSelectMenuItem() = default;

class InventoryMenuItem : public menu::SystemMenuItem_Inventory {
public:
  InventoryMenuItem();

  int ACall() override;
};

[[gnu::used]] InventoryMenuItem::InventoryMenuItem() = default;

class ClassChengeItem : public menu::SystemMenuItem_ClassChange {
public:
  ClassChengeItem();

  int ACall() override;
};

[[gnu::used]] ClassChengeItem::ClassChengeItem() = default;

class InfoMenuItem : public menu::SystemMenuItem_Info {
public:
  InfoMenuItem();

  int ACall() override;
};

[[gnu::used]] InfoMenuItem::InfoMenuItem() = default;

class RetiredMenuItem : public menu::SystemMenuItem_Retired {
public:
  RetiredMenuItem();

  void Unknown71() override;
};

[[gnu::used]] RetiredMenuItem::RetiredMenuItem() = default;

class StartExploredMenuItem : public menu::SystemMenuItem {
public:
  StartExploredMenuItem();

  const char* GetMid() override { return "MID_SysMenu_StartExplore"; }
  int ACall() override;
};

[[gnu::used]] StartExploredMenuItem::StartExploredMenuItem() = default;

class DungeonSaveMenuItem : public menu::SystemMenuItem_Save {
public:
  DungeonSaveMenuItem();
};

[[gnu::used]] DungeonSaveMenuItem::DungeonSaveMenuItem() = default;

class InfoSubMenuItem_Troop : public menu::TroopMenuItem {
public:
  InfoSubMenuItem_Troop();

  int ACall() override;

private:
  menu::UnitListParam param_;
};

[[gnu::used]] InfoSubMenuItem_Troop::InfoSubMenuItem_Troop() = default;

class InfoSubMenuItem_Roster : public menu::InfoSubMenuItem_Roster {
public:
  InfoSubMenuItem_Roster();

  int ACall() override {
    if (!active_) {
      return 1;
    }
    menu::OpenRoster(menu_->GetParent(), param_);
    return 9;
  }

private:
  menu::UnitListParam param_;
};

[[gnu::used]] InfoSubMenuItem_Roster::InfoSubMenuItem_Roster() = default;

class InfoSubMenuItem_Reliance : public menu::InfoSubMenuItem_Reliance {
public:
  InfoSubMenuItem_Reliance();

  int ACall() override;

private:
  menu::UnitListParam param_;
};

[[gnu::used]] InfoSubMenuItem_Reliance::InfoSubMenuItem_Reliance() = default;

}

}
