#include <string>

#include "game/facility/empty_shop_item_menu_item.hpp"
#include "game/facility/item_shop_menu_item_base.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class BlacksmithMenuItem_Before : public facility::ItemShopMenuItem_Base {
public:
  BlacksmithMenuItem_Before();

  bool IsEnable() override { return true; }
  int ACall() override { return 1; }
  void PlayNgSe() override { sound::PlaySe("SE_SYS_NG_L"); }
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

class BlacksmithMenuItem_Info : public facility::ItemShopMenuItem_Base {
public:
  BlacksmithMenuItem_Info();

  const char* GetMid() override;
  bool IsEnable() override { return false; }
  void Unknown17() override;
  int ACall() override { return 0; }
  void DrawText() override;
  bool IsActive() override { return true; }
  const char* GetStateName() override;
  const char* Unknown70() override { return ""; }

private:
  void* unknown_58_;
  std::string label_;
  std::string value_;
};

[[gnu::used]] BlacksmithMenuItem_Info::BlacksmithMenuItem_Info() = default;

}

}
