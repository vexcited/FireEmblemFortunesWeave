#include "game/facility/shop_unit_select_menu_item.hpp"
#include "game/menu/basic_menu.hpp"

namespace game::facility {

void OpenUnitSelectMaterial(menu::BasicMenu* menu);

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

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenUnitSelectMaterial(menu_->GetParent());
    return 9;
  }

  bool Unknown84() override { return true; }
};

[[gnu::used]]
UnitSelectMaterialMenuItem::UnitSelectMaterialMenuItem() = default;

}

}
