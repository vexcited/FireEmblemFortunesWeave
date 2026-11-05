#include <functional>
#include <vector>

#include "game/facility/shop_select_menu.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ProcMaterialSellSelectMenu : public MaterialShopSelectMenu {
public:
  ProcMaterialSellSelectMenu();

  const char* Unknown33() override { return "Hub_MaterialShop"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowR");
  }

  void Unknown57(std::vector<int64_t>& handles) override {
    ImplUnknown12();
    Unknown135(handles);
    Unknown88();
  }

  void Unknown69() override {}
  void Unknown75() override { sound::PlaySe("SE_SYS_NG"); }
  void Unknown84() override;
  void Unknown85() override { Unknown1874730(tab_.GetCurrent()); }
  void Unknown88() override;
  int Unknown102() override { return 14; }
  int Unknown103() override;
  int Unknown105() override;
  int Unknown109() override;
  void Unknown128() override;
  void Unknown129() override;

  void Unknown135(std::vector<int64_t>& handles) override {
    accessor_.StartAnimation("Pos_Sell");
    MaterialShopSelectMenu::Unknown135(handles);
  }

  int Unknown143() override { return 1; }
  const char* ImplUnknown03() override { return "MID_Shop_Sell"; }
  const char* ImplUnknown05() override { return "MID_ShopMenu_Help"; }
  int InputUnknown01() override { return 11; }
  int InputUnknown12(int direction, bool loop) override;
  int ImplUnknown10() override;

private:
  // The start of the MultipleSellItemShopMenu base.
  uint64_t unknown_428_;
  std::vector<void*> unknown_430_;
};

[[gnu::used]]
ProcMaterialSellSelectMenu::ProcMaterialSellSelectMenu() = default;

int ProcMaterialSellSelectMenu::InputUnknown12(int direction, bool loop) {
  if (!tab_.Move(direction, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

}

}
