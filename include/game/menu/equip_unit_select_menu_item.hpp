#pragma once

#include "game/menu/unit_menu_item.hpp"

namespace game::menu {

class EquipUnitSelectMenuItem : public UnitMenuItem {
public:
  bool Unknown88() override;
  bool IsActive() override { return active_; }

protected:
  bool unknown_60_;
  bool unknown_61_;
};

}
