#include <vector>

#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_select_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

namespace {

class ProcObeliskDepositoryMaterialMenu : public MaterialShopSelectMenu,
  public MultipleDepositoryItemShopMenu {
public:
  ProcObeliskDepositoryMaterialMenu();

  const char* Unknown33() override { return "Hub_MaterialShop"; }
  const char* Unknown42() override { return "L_PageTab/L_KeySort"; }

  const char* Unknown43(uint8_t kind) override {
    const char* mid = "MID_Menu_Default";
    if (kind == 1) {
      mid = "MID_Menu_Lv_Rare";
    }
    return kind == 2 ? "MID_Sys_Fragment" : mid;
  }

  bool Unknown64() override { return true; }
  const char* Unknown67() override { return "方尖塔倉庫"; }
  uint8_t ImplUnknown08() override { return 8; }

  void Unknown140() override {
    Unknown88();
    UpdateInfo();
  }

  void Unknown142() override { Unknown16dd9a0(); }
  const char* ImplUnknown03() override { return "MID_SysMenu_Material"; }

  const char* ImplUnknown05() override {
    return "MID_DepositoryMenu_Item_Help";
  }

  int InputUnknown01() override { return 11; }
  uint8_t ImplUnknown07() override { return 1; }

  int InputUnknown12(int direction, bool loop) override {
    if (!tab_.Move(direction, loop)) {
      return 0;
    }

    Unknown16de4d0();
    return 13;
  }

private:
  void UpdateInfo();
};

[[gnu::used]]
ProcObeliskDepositoryMaterialMenu::ProcObeliskDepositoryMaterialMenu() =
  default;

}

}
