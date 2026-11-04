#include <functional>
#include <vector>

#include "game/facility/shop_select_menu.hpp"

namespace game::facility {

namespace {

class ProcMaterialSellSelectMenu : public MaterialShopSelectMenu {
public:
  ProcMaterialSellSelectMenu();

  const char* Unknown33() override { return "Hub_MaterialShop"; }
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown69() override {}
  void Unknown75() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  int Unknown102() override { return 14; }
  int Unknown103() override;
  int Unknown105() override;
  int Unknown109() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  int Unknown143() override { return 1; }
  const char* ImplUnknown03() override { return "MID_Shop_Sell"; }
  const char* ImplUnknown05() override { return "MID_ShopMenu_Help"; }
  int InputUnknown01() override { return 11; }
  virtual void Unknown147();
  int ImplUnknown10() override;

private:
  std::vector<void*> unknown_430_;
};

[[gnu::used]]
ProcMaterialSellSelectMenu::ProcMaterialSellSelectMenu() = default;

}

}
