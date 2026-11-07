#include "game/facility/facility_unit_menu.hpp"
#include "game/facility/facility_unit_menu_item.hpp"
#include "game/game_mode_data.hpp"
#include "game/unit_pool.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/top_menu_item.hpp"
#include "game/menu/unit_menu_item.hpp"
#include "game/unit.hpp"

namespace game::facility {

void OpenObeliskCausation(menu::BasicMenu* menu);

void OpenObeliskDestiny(menu::BasicMenu* menu);

void FacilityUnitMenuItem::DrawText() {
  UnitMenuItem::DrawText();
}

bool FacilityUnitMenuItem::Unknown82() {
  return false;
}

bool FacilityUnitMenuItem::Unknown74() {
  return unit_ != nullptr && unit_->GetForceType() == 8;
}

int FacilityUnitMenuItem::Unknown81() {
  if (!selected_) {
    return 0;
  }
  if (!dynamic_cast<FacilityUnitMenu*>(menu_)->Unknown151()) {
    return 0;
  }
  return index_;
}

bool FacilityUnitMenuItem::Unknown88() {
  return !Unknown72();
}

namespace {

// Whether the facility lists the leader and the unit is the leader.
bool IsListedLeader(menu::BasicMenu* menu, const Unit* unit) {
  if (!dynamic_cast<FacilityUnitMenu*>(menu)->Unknown149()) {
    return false;
  }
  const GameModeData* data = GameModeData::GetInstance();
  const PersonData* leader = data != nullptr ? data->GetLeader() : nullptr;
  const ForceMask mask = {0xf1};
  return unit == UnitPool::Find(leader, mask);
}

}

void FacilityUnitMenuItem::Unknown17() {
  if (IsListedLeader(menu_, unit_)) {
    SetSelected(true);
  }
}

bool FacilityUnitMenuItem::Unknown72() {
  if (IsListedLeader(menu_, unit_)) {
    return true;
  }
  return unit_ != nullptr && unit_->HasState(0x80);
}

bool FacilityUnitMenuItem::Unknown77() {
  return ((GetListFlags() & 1) == 0) & unknown_61_;
}

bool FacilityUnitMenuItem::Unknown83() {
  if (Unknown72()) {
    return false;
  }
  return (GetListFlags() & 0x3b) != 0;
}

bool FacilityUnitMenuItem::Unknown85() {
  return GetListFlags() & 1;
}

bool FacilityUnitMenuItem::Unknown86() {
  return (GetListFlags() & 0x1a) != 0;
}

}

namespace game::facility {

namespace {

class PerchMenuItemBase : public menu::TopMenuItem {
public:
  bool IsDecidable() override { return !(Unknown75() & 0x400000); }
  int ACall() override;
  bool IsActive() override { return Unknown75() == 0; }
  void Unknown73() override;
  virtual const char* Unknown74() = 0;
  // Returns flags explaining why the perch cannot be used.
  virtual uint32_t Unknown75() = 0;
  virtual bool Unknown76() = 0;
};

class PerchMenuItem : public PerchMenuItemBase {
public:
  PerchMenuItem();

  const char* GetMid() override {
    GameModeData* data = GameModeData::GetInstance();
    return data != nullptr && data->GetMode() == GameModeData::kModeClear
      ? "MID_PerchMenu_Perch_Part3"
      : "MID_PerchMenu_Perch";
  }

  const char* GetHelpMid() override { return "白鴉の止まり木"; }
  const char* Unknown74() override { return "MID_PerchMenu_Perch_Help"; }
  uint32_t Unknown75() override;
  bool Unknown76() override { return false; }
};

[[gnu::used]] PerchMenuItem::PerchMenuItem() = default;

class PerchOnlyGazeMenuItem : public PerchMenuItemBase {
public:
  PerchOnlyGazeMenuItem();

  const char* GetMid() override {
    GameModeData* data = GameModeData::GetInstance();
    return data != nullptr && data->GetMode() == GameModeData::kModeClear
      ? "MID_PerchMenu_Perch_Part3"
      : "MID_PerchMenu_Perch";
  }

  const char* Unknown74() override { return "MID_PerchMenu_Perch_Part3_Help"; }
  uint32_t Unknown75() override;
  bool Unknown76() override { return true; }
};

[[gnu::used]] PerchOnlyGazeMenuItem::PerchOnlyGazeMenuItem() = default;

class HintMenuItem : public menu::TopMenuItem {
public:
  HintMenuItem();

  const char* GetMid() override { return "MID_PerchMenu_BattleHint"; }
  const char* GetHelpMid() override { return "戦いの助言"; }
  bool IsDecidable() override { return (unknown_54_ & 0x400000) == 0; }
  int ACall() override;
  void DrawText() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown73() override;
};

[[gnu::used]] HintMenuItem::HintMenuItem() = default;

class ReturnMenuItem : public menu::TopMenuItem {
public:
  ReturnMenuItem();

  const char* GetMid() override { return "MID_PerchMenu_Obelisk"; }
  int ACall() override;
  void Unknown73() override;
};

[[gnu::used]] ReturnMenuItem::ReturnMenuItem() = default;

class DestinyMenuItem : public menu::TopMenuItem {
public:
  DestinyMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Destiny"; }
  const char* GetHelpMid() override { return "運命の記録・因果の扉"; }

  int ACall() override {
    OpenObeliskDestiny(menu_->GetParent());
    return 9;
  }

  void Unknown73() override;
};

[[gnu::used]] DestinyMenuItem::DestinyMenuItem() = default;

class CausationMenuItem : public menu::TopMenuItem {
public:
  CausationMenuItem();

  const char* GetMid() override { return "MID_ObeliskMenu_Causation"; }
  const char* GetHelpMid() override { return "運命の記録・因果の扉"; }

  int ACall() override {
    OpenObeliskCausation(menu_->GetParent());
    return 9;
  }

  void Unknown73() override;
};

[[gnu::used]] CausationMenuItem::CausationMenuItem() = default;

}

}
