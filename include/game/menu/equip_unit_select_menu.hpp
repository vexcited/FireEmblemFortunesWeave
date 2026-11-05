#pragma once

#include <cstdint>
#include <vector>

#include "game/menu/key_help_entry.hpp"
#include "game/menu/page_tab.hpp"
#include "game/menu/unit_grid_select_menu.hpp"
#include "ui/ui2d.hpp"

namespace game {

class Unit;

}

namespace game::menu {

class EquipUnitSelectMenu : public UnitGridSelectMenu {
public:
  ~EquipUnitSelectMenu() override;

  void Unknown30(bool enable) override {
    tab_.SetEnabled(enable);
    if (nn::ui2d::Pane* pane =
        accessor_.FindPane("L_UnitInfoDetail/A_KeyHelp")) {
      pane->SetAlpha(enable ? 255 : 40);
    }
  }

  void Unknown84() override;
  void Unknown88() override;

  void Unknown96() override {
    UnitGridSelectMenu::Unknown96();
    Unknown16dd9a0();
  }

  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  void Unknown129() override { SortUnitItemList(); }
  // Whether the pages of the equipment can be switched.
  virtual bool Unknown149() { return false; }
  virtual bool Unknown150() { return false; }
  // The kind of the first page.
  virtual int Unknown151() { return 0; }
  virtual void Unknown152(std::vector<KeyHelpEntry>& keys, int kind) {}

protected:
  bool MovePage(int direction, bool loop);
  void UpdateEquipList(const Unit* unit, bool detail);
  int GetValidPage(int kind);
  void UpdateKeyHelp(const std::vector<KeyHelpEntry>& keys);

  int32_t mode_;
  uint8_t unknown_4a4_[0xc];
  PageTab tab_;
  // The kind of the page shown at each tab.
  std::vector<int32_t> pages_;
  int32_t page_;
  int32_t unknown_54c_;
  std::vector<int32_t> unknown_550_;
};

// The derived menus put their members in the tail padding at 0x568.
static_assert(sizeof(EquipUnitSelectMenu) == 0x570);

}
