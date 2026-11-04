#pragma once

#include "game/menu/equip_unit_select_menu_item.hpp"

namespace game::facility {

class FacilityEquipUnitMenuItem : public menu::EquipUnitSelectMenuItem {
public:
  bool IsActive() override;
  bool Unknown82() override { return true; }
  bool Unknown83() override;
};

}
