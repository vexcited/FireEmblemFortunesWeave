#pragma once

#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

class TroopMenuItem : public SubMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
};

}
