#pragma once

#include <cstdint>

#include "game/menu/game_menu.hpp"

namespace game::menu {

// Material pool menu, the base of the gift and perch food menus.
class MaterialMenu : public GameMenu {
public:
  ~MaterialMenu() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_MaterialMenu"; }
  const char* Unknown35() override { return "L_Pool"; }
  const char* Unknown42() override { return "L_Pool/L_PageTab/L_KeySort"; }

  const char* Unknown43(uint8_t kind) override {
    const char* mid = kind == 1 ? "MID_Menu_Lv_Rare" : "MID_Menu_Default";
    return kind == 2 ? "MID_Menu_Stock" : mid;
  }

  bool Unknown60() override { return true; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown128() override;
  void Unknown129() override;
  virtual const char* GetInfoPartName() { return "L_InfoDetail"; }
  int InputUnknown01() override { return 11; }
  const char* ImplUnknown03() override;
  const char* ImplUnknown05() override;
  int ImplUnknown10() override;
  int InputUnknown12(int direction, bool loop) override;
};

}
