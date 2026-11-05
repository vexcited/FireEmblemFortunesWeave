#pragma once

#include "game/menu/equip_unit_select_menu.hpp"

namespace game::facility {

// The unit lists of the temple and stable facilities.
class FacilityEquipUnitSelectMenu : public menu::EquipUnitSelectMenu {
public:
  void Unknown88() override;
};

}
