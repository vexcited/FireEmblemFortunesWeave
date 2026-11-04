#include "game/facility/facility_unit_menu_item.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/top_menu_item.hpp"
#include "game/menu/unit_menu_item.hpp"

namespace game::facility {

void OpenObeliskCausation(menu::BasicMenu* menu);

void OpenObeliskDestiny(menu::BasicMenu* menu);

void FacilityUnitMenuItem::DrawText() {
  UnitMenuItem::DrawText();
}

bool FacilityUnitMenuItem::Unknown82() {
  return false;
}

}

namespace game::facility {

namespace {

class PerchMenuItemBase : public menu::TopMenuItem {
public:
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
  virtual const char* Unknown74() = 0;
  virtual void Unknown75() = 0;
  virtual bool Unknown76() = 0;
};

class PerchMenuItem : public PerchMenuItemBase {
public:
  PerchMenuItem();

  const char* GetMid() override;
  const char* GetHelpMid() override { return "白鴉の止まり木"; }
  const char* Unknown74() override { return "MID_PerchMenu_Perch_Help"; }
  void Unknown75() override;
  bool Unknown76() override { return false; }
};

[[gnu::used]] PerchMenuItem::PerchMenuItem() = default;

class PerchOnlyGazeMenuItem : public PerchMenuItemBase {
public:
  PerchOnlyGazeMenuItem();

  const char* GetMid() override;
  const char* Unknown74() override { return "MID_PerchMenu_Perch_Part3_Help"; }
  void Unknown75() override;
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
