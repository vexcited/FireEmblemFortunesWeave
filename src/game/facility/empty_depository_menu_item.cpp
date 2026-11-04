#include "game/facility/empty_shop_item_menu_item.hpp"

namespace game::facility {

class EmptyDepositoryMenuItem : public EmptyShopItemMenuItem {
public:
  EmptyDepositoryMenuItem();

  void DrawText() override;
};

EmptyDepositoryMenuItem::EmptyDepositoryMenuItem() = default;

}
