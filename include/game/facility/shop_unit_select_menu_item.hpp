#pragma once

#include <cstdint>

#include "game/menu/equip_unit_select_menu_item.hpp"

namespace game::facility {

class ShopUnitSelectMenuItem : public menu::EquipUnitSelectMenuItem {
public:
  bool IsActive() override;
  bool Unknown88() override { return true; }

protected:
  uint8_t unknown_62_[0x6];
  bool unknown_68_;
};

}
