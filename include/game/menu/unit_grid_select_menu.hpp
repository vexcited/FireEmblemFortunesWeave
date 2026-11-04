#pragma once

#include <cstdint>
#include <algorithm>
#include <functional>
#include <vector>

#include "game/menu/game_menu.hpp"

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
  void Unknown96() override;
  void Unknown99() override;
  int Unknown102() override;
  int ImplUnknown10() override;
  int InputUnknown00() override { return 1; }
  int InputUnknown02() override { return 9; }
  int InputUnknown01() override { return 2; }
  void InputUnknown18() override;
  virtual void Unknown144();
  virtual int Unknown145() { return 0; }
  virtual void Unknown146();
  virtual void Unknown147();
  virtual void Unknown148();

protected:
  [[gnu::visibility("hidden")]]
  static std::vector<std::function<void()>*> listeners_;

  uint64_t unknown_428_;
  std::function<void()> unknown_430_;
  std::function<void()> unknown_460_;
  uint8_t unknown_490_[0x10];
};

}
