#pragma once

#include <cstdint>
#include <algorithm>
#include <functional>
#include <vector>

#include "game/menu/game_menu.hpp"
#include "game/menu/unit_menu_item.hpp"

namespace game {

class Unit;

}

namespace game::menu {

class UnitGridSelectMenu : public GameMenu {
public:
  // The menu leaves the list it joined while being built.
  ~UnitGridSelectMenu() override {
    auto it = std::find(listeners_.begin(), listeners_.end(), &unknown_430_);
    if (it != listeners_.end()) {
      listeners_.erase(it);
    }
  }

  int Unknown22() override { return 1; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_UnitSelect_Equip"; }
  const char* Unknown35() override { return "L_UnitList"; }
  bool Unknown37() override { return true; }
  int Unknown40() override { return 200; }
  int Unknown55() override { return 1; }
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown75() override;
  void Unknown84() override;
  void Unknown88() override;
  void Unknown96() override {
    BasicMenu::Unknown96();
    int state = Unknown21();
    if (state < 2 || state > 7) {
      ImplUnknown12();
    }
    ApplyChangeUnit();
    Unknown88();
    unknown_490_ = false;
  }

  void Unknown99() override;
  int Unknown102() override;
  int ImplUnknown10() override;
  int InputUnknown00() override { return 1; }
  int InputUnknown02() override { return 9; }
  int InputUnknown01() override { return 2; }
  void InputUnknown18() override;
  // The unit information part.
  virtual ui::LayoutAccessor& Unknown144();
  virtual bool Unknown145() { return false; }
  // The unit of the nth item, null unless it can be chosen.
  virtual Unit* Unknown146(int index, bool any);
  virtual Unit* Unknown147();
  virtual Unit* Unknown148();

protected:
  UnitMenuItem* FindUnitItem(const std::function<bool(UnitMenuItem*)>& match);
  void ApplyChangeUnit();
  void SortUnitItemList();
  // Opens the status of the current unit.
  int XCall();

  [[gnu::visibility("hidden")]]
  static std::vector<std::function<void()>*> listeners_;

  uint64_t unknown_428_;
  std::function<void()> unknown_430_;
  std::function<void()> unknown_460_;
  bool unknown_490_;
  // The unit whose item becomes current on the next refresh.
  Unit* change_unit_;
};

}
