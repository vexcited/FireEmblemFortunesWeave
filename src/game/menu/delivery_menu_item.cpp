#include "game/menu/equip_menu_item_animal_pool.hpp"
#include "game/menu/transport_menu_item.hpp"

namespace game::menu {

namespace {

class DeliveryMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  DeliveryMenuItem();

  void PlayDecideSe() override;
  bool IsActive() override { return true; }
  void PlayIdleAnimation() override;
  void PlayCursorAnimation() override;
};

[[gnu::used]] DeliveryMenuItem::DeliveryMenuItem() = default;

class DeliveryTransportMenuItem : public menu::TransportMenuItem {
public:
  DeliveryTransportMenuItem();

  bool IsActive() override { return true; }
  void PlayIdleAnimation() override;
  void PlayCursorAnimation() override;
};

[[gnu::used]] DeliveryTransportMenuItem::DeliveryTransportMenuItem() = default;

}

}
