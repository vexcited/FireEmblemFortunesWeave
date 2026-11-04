#pragma once

#include "game/menu/material_menu_item_base.hpp"

namespace game::menu {

class MaterialMenuItem : public MaterialMenuItem_Base {
public:
  int ACall() override;
  const char* Unknown70() override;
};

}
