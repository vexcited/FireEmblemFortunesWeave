#include <vector>

#include "game/game_mode_data.hpp"
#include "game/menu/equip_unit_select_menu.hpp"
#include "game/menu/equip_unit_select_menu_item.hpp"

namespace game::menu {

// Whether a page of the command battle equipment allows its item actions.
bool IsCmdBtlEquipPage(int kind);

// Opens the automatic equipment menu under the given menu.
void CreateAllAutoMenu(BasicMenu* parent, const std::function<void()>& done);

namespace {

constexpr const char* kRestriction = "拠点_セオドラ篇1部4章_行動制限1";

class InventoryUnitMenuItem : public EquipUnitSelectMenuItem {
public:
  bool IsActive() override;
  bool Unknown76() override { return true; }
};

class ProcEquipUnitSelectMenu : public EquipUnitSelectMenu {
public:
  ProcEquipUnitSelectMenu();

  void Unknown30(bool enable) override;
  const char* Unknown65() override { return "身支度"; }
  void Unknown88() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown107() override { return ZLCall(); }
  int Unknown109() override;
  int Unknown112() override;
  int Unknown114() override;
  void Unknown128() override;
  void Unknown129() override;
  int ImplUnknown10() override;
  bool Unknown145() override;
  bool Unknown149() override { return true; }
  bool Unknown150() override {
    return !GameModeData::IsVariableSet(kRestriction);
  }
  void Unknown152(std::vector<KeyHelpEntry>& keys, int kind) override;
  const char* ImplUnknown03() override { return "MID_SysMenu_Inventory"; }
  const char* ImplUnknown05() override { return "MID_Menu_UnitSelect_Help"; }
  // Opens the troop sequence of the current unit.
  virtual ProcInst* Unknown155();

private:
  BasicMenuItem& GetCurrent() { return *current_; }

  int ZLCall() {
    if (GameModeData::IsVariableSet(kRestriction) || mode_ == 1) {
      return 0;
    }
    CreateAllAutoMenu(this, [this] {
      page_ = GetValidPage(page_);
      Unknown88();
      Unknown16dd9a0();
    });
    return 11;
  }

  Unit* unknown_568_;
};

[[gnu::used]] ProcEquipUnitSelectMenu::ProcEquipUnitSelectMenu() = default;

void ProcEquipUnitSelectMenu::Unknown30(bool enable) {
  EquipUnitSelectMenu::Unknown30(enable);
  uint8_t alpha = 40;
  if (enable && Unknown150()) {
    alpha = mode_ == 1 ? 40 : 255;
  }
  if (nn::ui2d::Pane* pane =
      accessor_.FindPane("L_UnitInfoDetail/A_KeyHelp")) {
    pane->SetAlpha(alpha);
  }
}

void ProcEquipUnitSelectMenu::Unknown88() {
  EquipUnitSelectMenu::Unknown88();
  std::vector<KeyHelpEntry> keys;
  Unknown152(keys, page_);
  UpdateKeyHelp(keys);
}

int ProcEquipUnitSelectMenu::Unknown104(bool loop) {
  InventoryUnitMenuItem* item =
    dynamic_cast<InventoryUnitMenuItem*>(&GetCurrent());
  if (item->IsEmpty()) {
    return 1;
  }
  return MovePage(-1, loop) ? 13 : 0;
}

int ProcEquipUnitSelectMenu::Unknown106(bool loop) {
  InventoryUnitMenuItem* item =
    dynamic_cast<InventoryUnitMenuItem*>(&GetCurrent());
  if (item->IsEmpty()) {
    return 1;
  }
  return MovePage(1, loop) ? 13 : 0;
}

int ProcEquipUnitSelectMenu::Unknown109() {
  if (GameModeData::IsVariableSet(kRestriction) || mode_ == 1) {
    return 0;
  }
  return Unknown155() != nullptr ? 8 : 0;
}

bool ProcEquipUnitSelectMenu::Unknown145() {
  if (GameModeData::IsVariableSet(kRestriction) || unknown_568_ != nullptr) {
    return false;
  }
  InventoryUnitMenuItem* item =
    dynamic_cast<InventoryUnitMenuItem*>(&GetCurrent());
  return !item->IsEmpty();
}

class ProcCmdBtlEquipUnitSelectMenu : public ProcEquipUnitSelectMenu {
public:
  ProcCmdBtlEquipUnitSelectMenu();
  ~ProcCmdBtlEquipUnitSelectMenu() override;

  int Unknown112() override;
  int Unknown114() override;
  void Unknown128() override;
  ProcInst* Unknown155() override;

private:
  uint8_t unknown_570_[0x8];
  uint8_t unknown_578_[0x8];
  std::vector<int32_t> unknown_580_;
};

[[gnu::used]]
ProcCmdBtlEquipUnitSelectMenu::ProcCmdBtlEquipUnitSelectMenu() = default;

ProcCmdBtlEquipUnitSelectMenu::~ProcCmdBtlEquipUnitSelectMenu() = default;

int ProcCmdBtlEquipUnitSelectMenu::Unknown112() {
  if (!IsCmdBtlEquipPage(page_)) {
    return 0;
  }
  return ProcEquipUnitSelectMenu::Unknown112();
}

int ProcCmdBtlEquipUnitSelectMenu::Unknown114() {
  if (!IsCmdBtlEquipPage(page_)) {
    return 0;
  }
  return ProcEquipUnitSelectMenu::Unknown114();
}

class ProcSupplyPart2Menu : public ProcEquipUnitSelectMenu {
public:
  ProcSupplyPart2Menu();

  const char* Unknown65() override { return nullptr; }
  int Unknown101() override;
  int Unknown107() override { return 0; }
  int Unknown109() override { return 0; }
  int Unknown112() override { return 0; }
  int ImplUnknown10() override;
  bool Unknown145() override { return false; }
  bool Unknown149() override { return false; }
};

[[gnu::used]] ProcSupplyPart2Menu::ProcSupplyPart2Menu() = default;

}

}
