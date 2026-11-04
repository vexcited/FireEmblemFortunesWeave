#include "game/menu/assist_menu_item_next_timeline.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/info_sub_menu_item_dispatch.hpp"
#include "game/menu/info_sub_menu_item_reliance.hpp"
#include "game/menu/info_sub_menu_item_roster.hpp"
#include "game/menu/sub_menu_item.hpp"
#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_info.hpp"
#include "game/menu/system_menu_item_inventory.hpp"
#include "game/menu/system_menu_item_save.hpp"
#include "game/menu/troop_menu_item.hpp"

namespace game::menu {

void OpenRosterTop(BasicMenu* menu);

void OpenSystemMenuItemMouseGuide(menu::BasicMenu* menu, int value);

void OpenFacilityTemple(menu::BasicMenu* menu);

void OpenFacilityBlacksmith(menu::BasicMenu* menu);

void OpenSystemMenuItemTutorial(menu::BasicMenu* menu, int value);

void OpenInfoSubMenuItemGuide(menu::BasicMenu* menu, int value);

const char* SystemMenuItem_Inventory::GetMid() {
  return "MID_SysMenu_Inventory";
}

const char* SystemMenuItem_Info::GetMid() {
  return "MID_SysMenu_Info";
}

const char* TroopMenuItem::GetMid() {
  return "MID_SysMenu_TroopList";
}

const char* InfoSubMenuItem_Roster::GetMid() {
  return "MID_SysMenu_Roster";
}

int InfoSubMenuItem_Roster::ACall() {
  if (!IsActive()) {
    return 1;
  }
  OpenRosterTop(menu_->GetParent());
  return 9;
}

const char* InfoSubMenuItem_Reliance::GetMid() {
  return "MID_SysMenu_Reliance";
}

class InfoSubMenuItem_Material : public SubMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override;
  int ACall() override;
};

const char* InfoSubMenuItem_Material::GetMid() {
  return "MID_SysMenu_Material";
}

class InfoSubMenuItem_Guide : public SubMenuItem {
public:
  const char* GetMid() override;
  void PlayDecideSe() override;
  bool IsDecidable() override;

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenInfoSubMenuItemGuide(menu_->GetParent(), 5);
    return 9;
  }

};

const char* InfoSubMenuItem_Guide::GetMid() {
  return "MID_SysMenu_GuideTop";
}

void InfoSubMenuItem_Guide::PlayDecideSe() {}

const char* InfoSubMenuItem_Dispatch::GetMid() {
  return "MID_SysMenu_LegionComback";
}

class InfoSubMenuItem_Miracle : public SubMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
};

const char* InfoSubMenuItem_Miracle::GetMid() {
  return "MID_TempleMenu_MiracleEquip";
}

class SystemMenuItem_Facility : public SystemMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override;
  bool IsActive() override;
  int ACall() override;

private:
  bool unknown_53_;
  bool unknown_54_;
};

const char* SystemMenuItem_Facility::GetMid() {
  return "MID_SysMenu_Facility";
}

bool SystemMenuItem_Facility::IsDecidable() {
  return unknown_53_ && decidable_;
}

bool SystemMenuItem_Facility::IsActive() {
  return unknown_54_ && active_;
}

AssistMenuItem_NextTimeline::AssistMenuItem_NextTimeline() = default;

const char* SystemMenuItem_Save::GetMid() {
  return "MID_SysMenu_Save";
}

class SystemMenuItem_Tutorial : public SystemMenuItem {
public:
  const char* GetMid() override;

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenSystemMenuItemTutorial(menu_->GetParent(), 0);
    return 9;
  }

};

const char* SystemMenuItem_Tutorial::GetMid() {
  return "MID_SysMenu_Tutorial";
}

class SystemMenuItem_System : public SystemMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
};

const char* SystemMenuItem_System::GetMid() {
  return "MID_SysMenu_System";
}

}

namespace game::menu {

namespace {

class FacilityWeaponMenuItem : public menu::SubMenuItem {
public:
  FacilityWeaponMenuItem();

  const char* GetMid() override;
  int ACall() override;
};

[[gnu::used]] FacilityWeaponMenuItem::FacilityWeaponMenuItem() = default;

class FacilityItemMenuItem : public menu::SubMenuItem {
public:
  FacilityItemMenuItem();

  const char* GetMid() override;
  int ACall() override;
};

[[gnu::used]] FacilityItemMenuItem::FacilityItemMenuItem() = default;

class FacilityBlacksmithMenuItem : public menu::SubMenuItem {
public:
  FacilityBlacksmithMenuItem();

  const char* GetMid() override { return "MID_Shop_Blacksmith"; }

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenFacilityBlacksmith(menu_->GetParent());
    return 9;
  }

};

[[gnu::used]]
FacilityBlacksmithMenuItem::FacilityBlacksmithMenuItem() = default;

class FacilityTempleMenuItem : public menu::SubMenuItem {
public:
  FacilityTempleMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Temple"; }

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenFacilityTemple(menu_->GetParent());
    return 9;
  }

};

[[gnu::used]] FacilityTempleMenuItem::FacilityTempleMenuItem() = default;

class SystemMenuItem_Config : public menu::SubMenuItem {
public:
  SystemMenuItem_Config();

  const char* GetMid() override { return "MID_SysMenu_Config"; }
  int ACall() override;
};

[[gnu::used]] SystemMenuItem_Config::SystemMenuItem_Config() = default;

class SystemMenuItem_MouseGuide : public menu::SubMenuItem {
public:
  SystemMenuItem_MouseGuide();

  const char* GetMid() override { return "MID_SysMenu_MouseGuide"; }

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenSystemMenuItemMouseGuide(menu_->GetParent(), 1);
    return 9;
  }

};

[[gnu::used]] SystemMenuItem_MouseGuide::SystemMenuItem_MouseGuide() = default;

class SystemMenuItem_RestartBeforeBattle : public menu::SubMenuItem {
public:
  SystemMenuItem_RestartBeforeBattle();

  const char* GetMid() override { return "MID_Restart_BeforeBattle"; }
  int ACall() override;
};

[[gnu::used]]
SystemMenuItem_RestartBeforeBattle::
  SystemMenuItem_RestartBeforeBattle() = default;

class SystemMenuItem_ExitTitle : public menu::SubMenuItem {
public:
  SystemMenuItem_ExitTitle();

  const char* GetMid() override { return "MID_Restart_ReturnTitle"; }
  int ACall() override;
};

[[gnu::used]] SystemMenuItem_ExitTitle::SystemMenuItem_ExitTitle() = default;

}

}
