#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class EquipMenuInfo_Unselectable : public GameMenuItem {
public:
  bool IsEnable() override { return false; }
  int ACall() override { return 0; }
};

}
