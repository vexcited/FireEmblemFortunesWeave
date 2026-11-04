#include "game/menu/equip_menu_item_animal_pool.hpp"

namespace game::facility {

namespace {

class ReleaseRideMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  ReleaseRideMenuItem();

  int ACall() override;
  bool IsActive() override { return true; }
};

[[gnu::used]] ReleaseRideMenuItem::ReleaseRideMenuItem() = default;

}

}
