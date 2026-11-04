#pragma once

#include "game/menu/equip_menu_item_animal_pool_base.hpp"

namespace game::menu {

class EquipMenuItem_AnimalPool : public EquipMenuItem_AnimalPool_Base {
public:
  EquipMenuItem_AnimalPool();

  int ACall() override;
  void PlayDecideSe() override;
  void DrawText() override;
  bool IsActive() override;
};

}
