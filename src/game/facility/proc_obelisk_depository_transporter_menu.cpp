#include <memory>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_select_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

namespace {

class ProcObeliskDepositoryTransporterMenu : public ItemShopSelectMenu,
  public MultipleDepositoryItemShopMenu {
public:
  ProcObeliskDepositoryTransporterMenu();

  const char* Unknown33() override { return "Hub_ItemShop_Buy"; }
  const char* Unknown42() override { return "L_PageTab/L_KeySort"; }

  const char* Unknown43(uint8_t kind) override {
    return kind == 1 ? "MID_Sys_Fragment" : "MID_Menu_Default";
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowR");
  }

  bool Unknown64() override { return true; }
  const char* Unknown67() override { return "方尖塔倉庫"; }
  void Unknown84() override;

  void Unknown85() override {
    Unknown1873eb0();
    accessor_.SetPaneVisible("T_Stock", false);
    SetMessageText(accessor_, "T_Gold", "MID_Sys_Fragment");
    Unknown141();
  }

  void Unknown88() override;
  int Unknown109() override;
  void Unknown128() override;
  uint8_t ImplUnknown08() override { return 8; }

  void Unknown140() override {
    Unknown88();
    UpdateInfo();
  }

  void Unknown141() override;
  void Unknown142() override { Unknown16dd9a0(); }
  bool Unknown150() override { return !pages_.empty(); }
  int Unknown151() override { return pages_.size(); }
  bool Unknown152() override { return true; }
  bool Unknown153(ItemShopMenuItem_Base* left,
    ItemShopMenuItem_Base* right) override;

  void Unknown154(Unit* unit) override {
    unit_ = unit;
    Unknown16defa0();
  }

  uint8_t Unknown155(int page) override {
    return page < Unknown151() ? pages_[page] : 0;
  }

  bool Unknown158() override { return true; }
  const char* ImplUnknown03() override { return "MID_BtlMenu_Transport"; }

  const char* ImplUnknown05() override {
    return "MID_DepositoryMenu_Item_Help";
  }

  int InputUnknown01() override { return 11; }
  uint8_t ImplUnknown07() override { return 1; }

private:
  void UpdateInfo();

  // The item kind shown by each page of the tab.
  std::vector<int32_t> pages_;
};

[[gnu::used]]
ProcObeliskDepositoryTransporterMenu::ProcObeliskDepositoryTransporterMenu() =
  default;

void ProcObeliskDepositoryTransporterMenu::Unknown84() {
  ItemShopSelectMenu::Unknown84();
  SetMessageText(accessor_3b8_, "Menu_T_Gold", "MID_Shop_Price");
  accessor_.StartAnimation("Stock_On");
  UpdateInfo();

  int count = deposit_items_.size();
  accessor_.FindPart("L_UnitInfo").StartAnimation(
    count < 1 ? "Simple00" : "Info00");
}

}

}
