#include <functional>
#include <vector>

#include "game/facility/shop_select_menu.hpp"

namespace game::facility {

namespace {

class ProcMaterialItemSelectMenu : public MaterialShopSelectMenu {
public:
  ProcMaterialItemSelectMenu();

  int Unknown24() override;
  const char* Unknown33() override { return "Hub_MaterialShop"; }
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  bool Unknown64() override;
  void Unknown69() override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown79(int result) override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  int Unknown117() override;
  int Unknown118() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  void Unknown140() override;
  void Unknown141() override;
  void Unknown142() override;
  int InputUnknown01() override { return 11; }
  const char* ImplUnknown03() override { return "MID_Shop_Buy"; }
  const char* ImplUnknown05() override { return "MID_ShopMenu_Help"; }
  int ImplUnknown00() override { return 0; }
  int ImplUnknown02() override;
  virtual int Unknown149();
  int ImplUnknown10() override;

private:
  std::vector<void*> unknown_430_;
  uint64_t unknown_448_;
  std::vector<void*> unknown_450_;
  std::function<void()> unknown_470_;
};

[[gnu::used]]
ProcMaterialItemSelectMenu::ProcMaterialItemSelectMenu() = default;

}

}
