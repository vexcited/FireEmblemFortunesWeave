#pragma once

#include "game/menu/equip_menu_item_base.hpp"

namespace game::menu {

class EquipMenuItem_AnimalPool_Base : public EquipMenuItemBase {
public:
  // The animal of the item.
  virtual const void* Unknown70();
  virtual bool Unknown71();
};

}
