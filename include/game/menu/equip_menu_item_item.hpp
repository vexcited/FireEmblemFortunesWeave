#pragma once

#include "game/menu/equip_menu_item_base.hpp"

namespace game::menu {

class EquipMenuItem_Item : public EquipMenuItemBase {
public:
  bool IsEmpty() override;
};

}
