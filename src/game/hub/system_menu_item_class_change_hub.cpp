#include "game/menu/assist_menu_item_next_timeline.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/info_sub_menu_item_dispatch.hpp"
#include "game/menu/info_sub_menu_item_reliance.hpp"
#include "game/menu/info_sub_menu_item_roster.hpp"
#include "game/menu/sub_menu_item.hpp"
#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_assist.hpp"
#include "game/menu/system_menu_item_class_change.hpp"
#include "game/menu/system_menu_item_info.hpp"
#include "game/menu/system_menu_item_inventory.hpp"
#include "game/menu/system_menu_item_save.hpp"
#include "game/menu/troop_menu_item.hpp"
#include "game/menu/unit_list_param.hpp"
#include "game/sound/se.hpp"

namespace game::hub {

namespace {

class SystemMenuItem_ClassChange_Hub : public menu::SystemMenuItem_ClassChange {
public:
  SystemMenuItem_ClassChange_Hub();
};

[[gnu::used]]
SystemMenuItem_ClassChange_Hub::SystemMenuItem_ClassChange_Hub() = default;

class SystemMenuItem_Map_Hub : public menu::SystemMenuItem {
public:
  SystemMenuItem_Map_Hub();

  const char* GetMid() override;
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] SystemMenuItem_Map_Hub::SystemMenuItem_Map_Hub() = default;

class SystemMenuItem_Assist_Hub : public menu::SystemMenuItem_Assist {
public:
  SystemMenuItem_Assist_Hub();

  int ACall() override;
};

[[gnu::used]] SystemMenuItem_Assist_Hub::SystemMenuItem_Assist_Hub() = default;

class HubMenuItem_ExitGmap : public menu::SubMenuItem {
public:
  HubMenuItem_ExitGmap();

  const char* GetMid() override { return "MID_SysMenu_Gmap"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] HubMenuItem_ExitGmap::HubMenuItem_ExitGmap() = default;

class HubMenuItem_Escape : public menu::SubMenuItem {
public:
  HubMenuItem_Escape();

  const char* GetMid() override { return "MID_SysMenu_Escape"; }
  bool IsDecidable() override;
  int ACall() override;
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_H_Light"); }
  bool IsActive() override;
};

[[gnu::used]] HubMenuItem_Escape::HubMenuItem_Escape() = default;

class HubMenuItem_NextTimeline : public menu::AssistMenuItem_NextTimeline {
public:
  HubMenuItem_NextTimeline();
};

[[gnu::used]] HubMenuItem_NextTimeline::HubMenuItem_NextTimeline() = default;

class SystemMenuItem_Save_Hub : public menu::SystemMenuItem_Save {
public:
  SystemMenuItem_Save_Hub();
};

[[gnu::used]] SystemMenuItem_Save_Hub::SystemMenuItem_Save_Hub() = default;

class HubMenuItem_Info_Dispatch : public menu::InfoSubMenuItem_Dispatch {
public:
  HubMenuItem_Info_Dispatch();
};

[[gnu::used]] HubMenuItem_Info_Dispatch::HubMenuItem_Info_Dispatch() = default;

class DungeonMenuItem_Info_Troop : public menu::TroopMenuItem {
public:
  DungeonMenuItem_Info_Troop();

  int ACall() override;

private:
  menu::UnitListParam param_;
};

[[gnu::used]]
DungeonMenuItem_Info_Troop::DungeonMenuItem_Info_Troop() = default;

class DungeonMenuItem_Info_Roster : public menu::InfoSubMenuItem_Roster {
public:
  DungeonMenuItem_Info_Roster();

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

[[gnu::used]]
DungeonMenuItem_Info_Roster::DungeonMenuItem_Info_Roster() = default;

class DungeonMenuItem_Info_Reliance : public menu::InfoSubMenuItem_Reliance {
public:
  DungeonMenuItem_Info_Reliance();

  int ACall() override;

private:
  menu::UnitListParam param_;
};

[[gnu::used]]
DungeonMenuItem_Info_Reliance::DungeonMenuItem_Info_Reliance() = default;

class SystemMenuItem_Info_Hub : public menu::SystemMenuItem_Info {
public:
  SystemMenuItem_Info_Hub();

  int ACall() override;

private:
  menu::UnitListParam param_;
};

[[gnu::used]] SystemMenuItem_Info_Hub::SystemMenuItem_Info_Hub() = default;

class SystemMenuItem_Inventory_Dungeon : public menu::SystemMenuItem_Inventory {
public:
  SystemMenuItem_Inventory_Dungeon();

  int ACall() override;

private:
  menu::UnitListParam param_;
};

[[gnu::used]]
SystemMenuItem_Inventory_Dungeon::SystemMenuItem_Inventory_Dungeon() = default;

}

}
