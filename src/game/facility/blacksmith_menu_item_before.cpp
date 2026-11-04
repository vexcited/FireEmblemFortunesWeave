#include "game/facility/empty_shop_item_menu_item.hpp"
#include "game/facility/item_shop_menu_item_base.hpp"

namespace game::facility {

namespace {

class BlacksmithMenuItem_Before : public facility::ItemShopMenuItem_Base {
public:
  BlacksmithMenuItem_Before();

  bool IsEnable() override { return true; }
  int ACall() override { return 1; }
  void PlayNgSe() override;
  void DrawText() override;
  bool IsActive() override { return true; }
  const char* Unknown70() override;
};

[[gnu::used]] BlacksmithMenuItem_Before::BlacksmithMenuItem_Before() = default;

class BlacksmithMenuItem_Empty : public facility::EmptyShopItemMenuItem {
public:
  BlacksmithMenuItem_Empty();
};

[[gnu::used]] BlacksmithMenuItem_Empty::BlacksmithMenuItem_Empty() = default;

}

}
