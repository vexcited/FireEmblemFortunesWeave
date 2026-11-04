#pragma once

#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

class ItemShopMenuItem_Base : public menu::GameMenuItem {
public:
  const char* GetStateName() override;
  virtual const char* Unknown70() = 0;
  virtual bool Unknown71() { return false; }

protected:
  uint64_t unknown_58_;
};

}
