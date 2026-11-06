#include "game/menu/basic_menu.hpp"
#include "game/menu/game_menu_item.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

void OpenLegionShopSell(menu::BasicMenu* menu, void* context);

namespace {

class LegionShopMenuItem_Base : public menu::GameMenuItem {
public:
  virtual const char* Unknown70() = 0;
};

class LegionShopMenuItem_Empty : public LegionShopMenuItem_Base {
public:
  LegionShopMenuItem_Empty();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  int ACall() override { return 1; }
  bool IsActive() override { return false; }
  bool IsEmpty() override { return true; }
  const char* Unknown70() override { return ""; }
};

[[gnu::used]] LegionShopMenuItem_Empty::LegionShopMenuItem_Empty() = default;

class LegionShopSell : public menu::TopMenuItem {
public:
  LegionShopSell();

  const char* GetMid() override { return "MID_LegionShop_Sell"; }
  const char* GetHelpMid() override { return "軍団兵舎"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenLegionShopSell(menu_->GetParent(), nullptr);
    return 9;
  }

  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] LegionShopSell::LegionShopSell() = default;

}

}
