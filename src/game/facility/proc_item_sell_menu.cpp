#include <memory>
#include <vector>

#include "game/sound/se.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_select_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

// Opens the material sell menu under the given process.
void OpenMaterialSellSelectMenu(ProcInst* parent);

namespace {

class ProcItemSellMenu final : public ItemShopSelectMenu,
  public MultipleSellItemShopMenu {
public:
  ProcItemSellMenu();

  const char* Unknown33() override { return "Hub_ItemShop_Sell"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowR");
  }

  void Unknown69() override {}
  void Unknown84() override;

  void Unknown85() override {
    Unknown1873eb0();
    Unknown141();
  }

  int Unknown109() override {
    if (!sell_.ToggleCurrent()) {
      return 1;
    }

    Unknown141();
    Unknown16dd9a0();
    return 13;
  }

  void Unknown128() override;

  void Unknown140() override {
    UpdateInfo();
    Unknown88();
  }

  void Unknown141() override;
  bool Unknown144() override { return true; }
  bool Unknown145() override { return true; }

  void Unknown148() override {
    OpenMaterialSellSelectMenu(GetParent()->GetUnknown20());
  }

  bool Unknown150() override { return true; }
  int Unknown151() override { return 8; }
  bool Unknown152() override { return unit_ == nullptr; }
  bool Unknown153(ItemShopMenuItem_Base* left,
    ItemShopMenuItem_Base* right) override;
  void Unknown154(Unit* unit) override;
  uint8_t Unknown155(int page) override { return page <= 7 ? page : 0; }
  bool Unknown158() override { return false; }
  int InputUnknown01() override { return 11; }
  const char* ImplUnknown03() override { return "MID_Shop_Sell"; }
  const char* ImplUnknown05() override { return "MID_ShopMenu_Help"; }

private:
  void UpdateInfo();
};

[[gnu::used]] ProcItemSellMenu::ProcItemSellMenu() = default;

void ProcItemSellMenu::Unknown84() {
  ItemShopSelectMenu::Unknown84();
  SetMessageText(accessor_3b8_, "Menu_T_Gold", "MID_Shop_Price");
  UpdateInfo();

  Unit* unit = unit_;
  int count = sell_.GetItems().size();
  accessor_.FindPart("L_UnitInfo").StartAnimation(
    unit == nullptr && count < 1 ? "Simple00" : "Info00");
}

}

}
