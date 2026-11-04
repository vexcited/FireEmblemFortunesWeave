#include "game/menu/equip_menu_item_animal_pool.hpp"

namespace game::menu {

namespace {

class DeleteAnimalMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  DeleteAnimalMenuItem();

  int ACall() override;
  bool IsActive() override { return true; }
};

[[gnu::used]] DeleteAnimalMenuItem::DeleteAnimalMenuItem() = default;

class ReleaseAnimalMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  ReleaseAnimalMenuItem();

  int ACall() override;
  bool IsActive() override { return true; }
  void Unknown70() override;
};

[[gnu::used]] ReleaseAnimalMenuItem::ReleaseAnimalMenuItem() = default;

}

}
