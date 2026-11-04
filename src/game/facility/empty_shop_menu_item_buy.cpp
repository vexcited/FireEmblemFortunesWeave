#include "game/facility/empty_shop_item_menu_item.hpp"

namespace game::facility {

class EmptyShopMenuItem_Buy : public EmptyShopItemMenuItem {
public:
  EmptyShopMenuItem_Buy();

  int BCall() override;
};

EmptyShopMenuItem_Buy::EmptyShopMenuItem_Buy() = default;

}
