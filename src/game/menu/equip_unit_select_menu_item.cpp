#include "game/menu/equip_menu_info_unselectable.hpp"
#include "game/menu/equip_unit_select_menu_item.hpp"
#include "game/menu/unit_menu_item.hpp"

namespace game::menu {

bool EquipUnitSelectMenuItem::Unknown88() {
  return true;
}

class EquipInfoItem_Empty : public EquipMenuInfo_Unselectable {
public:
  const char* GetMid() override;
  bool IsEmpty() override;
  void Unknown16() override;
};

const char* EquipInfoItem_Empty::GetMid() {
  return "MID_Sys_Empty";
}

bool EquipInfoItem_Empty::IsEmpty() {
  return true;
}

}
