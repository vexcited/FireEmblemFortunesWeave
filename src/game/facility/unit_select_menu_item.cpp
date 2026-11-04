#include "game/facility/shop_unit_select_menu_item.hpp"

namespace game::facility {

namespace {

class UnitSelectMenuItem : public facility::ShopUnitSelectMenuItem {
public:
  UnitSelectMenuItem();

  int ACall() override;
};

[[gnu::used]] UnitSelectMenuItem::UnitSelectMenuItem() = default;

class CmdBtlUnitSelectMenuItem : public UnitSelectMenuItem {
public:
  CmdBtlUnitSelectMenuItem();

  bool Unknown72() override { return unknown_68_; }
};

[[gnu::used]] CmdBtlUnitSelectMenuItem::CmdBtlUnitSelectMenuItem() = default;

class UnitSelectMaterialMenuItem : public facility::ShopUnitSelectMenuItem {
public:
  UnitSelectMaterialMenuItem();

  int ACall() override;
  bool Unknown84() override { return true; }
};

[[gnu::used]]
UnitSelectMaterialMenuItem::UnitSelectMaterialMenuItem() = default;

}

}
