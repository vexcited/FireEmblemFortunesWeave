#include "game/menu/equip_menu_item_empty.hpp"

namespace game::menu {

class EquipMenuItem_ItemEmpty : public EquipMenuItem_Empty {
public:
  bool IsEnable() override;
};

bool EquipMenuItem_ItemEmpty::IsEnable() {
  return false;
}

}
