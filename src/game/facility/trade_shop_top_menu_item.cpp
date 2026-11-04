#include "game/facility/shop_top_menu_item.hpp"

namespace game::facility {

namespace {

class TradeShopTopMenuItem : public facility::ShopTopMenuItem {
public:
  TradeShopTopMenuItem();

  const char* GetMid() override { return "MID_Shop_Trade"; }
  const char* GetHelpMid() override;
  int ACall() override;
  void DrawText() override;
  const char* Unknown75() override { return "MID_Shop_Trade_Help"; }
};

[[gnu::used]] TradeShopTopMenuItem::TradeShopTopMenuItem() = default;

}

}
