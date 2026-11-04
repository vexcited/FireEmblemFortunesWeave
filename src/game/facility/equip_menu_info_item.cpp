#include "game/menu/equip_menu_item_item.hpp"

namespace game::facility {

namespace {

class EquipMenuInfo_Item : public menu::EquipMenuItem_Item {
public:
  EquipMenuInfo_Item();

  void DrawText() override;
  bool IsActive() override;
};

[[gnu::used]] EquipMenuInfo_Item::EquipMenuInfo_Item() = default;

}

}
