#include "game/menu/equip_menu_item_animal_pool.hpp"
#include "game/menu/equip_unit_select_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ObeliskDepositoryRideMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  ObeliskDepositoryRideMenuItem();

  int ACall() override;
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_M"); }
  void DrawText() override;
  bool IsActive() override { return active_; }
};

[[gnu::used]]
ObeliskDepositoryRideMenuItem::ObeliskDepositoryRideMenuItem() = default;

class ObeliskUnitMergeMenuItem : public menu::EquipUnitSelectMenuItem {
public:
  ObeliskUnitMergeMenuItem();

  int ACall() override;
  bool Unknown78() override { return unknown_60_; }
};

[[gnu::used]] ObeliskUnitMergeMenuItem::ObeliskUnitMergeMenuItem() = default;

}

}
