#pragma once

#include <cstdint>

#include "game/menu/game_menu.hpp"

namespace game::menu {

// Base of the hub, world map, command battle and battle map system menus.
class SystemMenu : public GameMenu {
public:
  int Unknown22() override { return 1; }
  void Unknown84() override;
  int Unknown101() override;
  int ImplUnknown00() override = 0;
  uint8_t ImplUnknown08() override { return 7; }
  void InputUnknown19() override;
  void InputUnknown20() override;
  int ImplUnknown10() override = 0;
  const char* ImplUnknown03() override = 0;

protected:
  bool unknown_428_;
};

}
