#include "game/game_hub_data.hpp"
#include "game/game_mode_data.hpp"
#include "game/hub/manager.hpp"
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

namespace game::gmap {

bool CanOpenMapFromHub();

void OpenMapFromHub(menu::BasicMenu* menu);

void OpenSpotList(menu::BasicMenu* menu, int unknown_1, int unknown_2);

}

namespace game::hub {

void OpenEscape(menu::BasicMenu* menu);

namespace {

// Names of game variables.
constexpr const char kVariableObeliskRoom[] =
  "\xe6\x8b\xa0\xe7\x82\xb9_\xe6\x89\x80\xe5\x9c\xa8_"
  "\xe6\x96\xb9\xe5\xb0\x96\xe5\xa1\x94\xe3\x81\xae\xe9\x96\x93";
constexpr const char kVariableMapAllowed[] =
  "\xe6\x8b\xa0\xe7\x82\xb9_\xe9\x80\xb2\xe8\xa1\x8c_"
  "\xe6\x8b\xa0\xe7\x82\xb9\xe5\x9c\xb0\xe5\x9b\xb3"
  "\xe8\xa1\xa8\xe7\xa4\xba\xe8\xa8\xb1\xe5\x8f\xaf";

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

const char* SystemMenuItem_Map_Hub::GetMid() {
  if (const Manager* manager = Manager::GetInstance()) {
    if (manager->IsActive()) {
      if (manager->GetKind() == Manager::kKindHub) {
        return "MID_SysMenu_Map";
      }
      if (manager->GetKind() == Manager::kKindDungeon) {
        return "MID_SysMenu_GmapMap";
      }
    }
  }
  return BasicMenuItem::GetMid();
}

bool SystemMenuItem_Map_Hub::IsDecidable() {
  if (GameModeData::IsVariableSet(kVariableObeliskRoom)) {
    return false;
  }

  const Manager* manager = Manager::GetInstance();
  if (manager == nullptr || !manager->IsActive()) {
    return false;
  }
  if (manager->GetKind() == Manager::kKindHub) {
    return GameModeData::IsVariableSet(kVariableMapAllowed) && decidable_;
  }
  if (manager->GetKind() != Manager::kKindDungeon) {
    return false;
  }

  const GameModeData* data = GameModeData::GetInstance();
  if (data == nullptr || !data->IsMapAvailable()) {
    return false;
  }
  return decidable_;
}

int SystemMenuItem_Map_Hub::ACall() {
  if (gmap::CanOpenMapFromHub()) {
    if (!active_) {
      return 1;
    }
  }
  else {
    const Manager* manager = Manager::GetInstance();
    if (manager == nullptr || !manager->IsActive()) {
      return 1;
    }
    if (manager->GetKind() != Manager::kKindDungeon || !active_) {
      return 1;
    }
  }

  if (gmap::CanOpenMapFromHub()) {
    gmap::OpenMapFromHub(menu_->GetParent());
  }
  else {
    const Manager* manager = Manager::GetInstance();
    if (manager == nullptr || !manager->IsActiveKind(Manager::kKindDungeon)) {
      return 1;
    }
    gmap::OpenSpotList(menu_->GetParent(), 0, 0);
  }
  return 9;
}

bool SystemMenuItem_Map_Hub::IsActive() {
  if (!gmap::CanOpenMapFromHub()) {
    const Manager* manager = Manager::GetInstance();
    if (manager == nullptr || !manager->IsActiveKind(Manager::kKindDungeon)) {
      return false;
    }
  }
  return active_;
}

bool HubMenuItem_Escape::IsDecidable() {
  const GameModeData* data = GameModeData::GetInstance();
  if (data == nullptr) {
    return false;
  }

  const int mode = data->GetMode();
  if (mode == GameModeData::kModeNone) {
    return false;
  }
  if (mode == GameModeData::kModeChapter && data->GetChapterKind() == 2 &&
      data->GetProgress() < 2) {
    return false;
  }
  return decidable_;
}

int HubMenuItem_Escape::ACall() {
  if (!GameHubData::GetInstance()->CanEscape()) {
    return 1;
  }
  OpenEscape(menu_->GetParent());
  return 4;
}

bool HubMenuItem_Escape::IsActive() {
  return GameHubData::GetInstance()->CanEscape();
}

}
