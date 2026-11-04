#pragma once

#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

class SkillMenuItemBase : public menu::GameMenuItem {
public:
  bool IsActive() override { return unknown_64_ == 0; }

protected:
  uint8_t unknown_53_[0x11];
  uint32_t unknown_64_;
};

}
