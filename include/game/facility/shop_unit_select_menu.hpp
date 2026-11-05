#pragma once

#include <cstdint>

#include "game/menu/equip_unit_select_menu.hpp"

namespace game::facility {

// The unit lists of the shops.
class ShopUnitSelectMenu : public menu::EquipUnitSelectMenu {
public:
  void Unknown96() override;
  void Unknown99() override;
  void Unknown128() override;
  bool Unknown145() override { return true; }
  int Unknown151() override { return 0; }
  // Builds the items of the units.
  virtual void Unknown153();
  // The item shown when no unit can be chosen.
  virtual menu::BasicMenuItem* Unknown154() { return nullptr; }
  const char* ImplUnknown05() override = 0;
  uint8_t ImplUnknown08() override { return 2; }
  const char* ImplUnknown03() override = 0;

protected:
  uint8_t unknown_568_[0x8];
  int32_t unknown_570_;
  uint8_t unknown_574_[0x4];
};

}
