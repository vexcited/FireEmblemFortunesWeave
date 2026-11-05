#include <functional>
#include <vector>

#include "game/facility/shop_select_menu.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ProcTradeItemSelectMenu : public IShopSelectMenu {
public:
  ProcTradeItemSelectMenu();

  int Unknown24() override { return selecting_ ? 3 : 2; }
  const char* Unknown33() override { return "Hub_ItemShop_Trade"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowR");
  }

  bool Unknown64() override { return selecting_; }
  const char* Unknown67() override;

  void Unknown69() override {
    if (!selecting_) {
      IShopSelectMenu::Unknown69();
    }
  }

  void Unknown76(int result) override {
    if (selecting_) {
      sound::PlayCursorHorizontalLeftSe();
      return;
    }
    IShopSelectMenu::Unknown76(result);
  }

  void Unknown77(int result) override {
    if (selecting_) {
      sound::PlayCursorHorizontalRightSe();
      return;
    }
    IShopSelectMenu::Unknown77(result);
  }

  void Unknown78(int result) override {
    if (selecting_) {
      Unknown76(result);
      return;
    }
    IShopSelectMenu::Unknown78(result);
  }

  void Unknown79(int result) override {
    if (selecting_) {
      Unknown77(result);
      return;
    }
    IShopSelectMenu::Unknown79(result);
  }

  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;

  int Unknown104(bool loop) override {
    if (selecting_ && count_changed_ && count_changed_(-1, loop)) {
      return 2;
    }
    return 0;
  }

  int Unknown106(bool loop) override {
    if (selecting_ && count_changed_ && count_changed_(1, loop)) {
      return 2;
    }
    return 0;
  }

  int Unknown108(bool loop) override { return Unknown104(loop); }
  int Unknown110(bool loop) override { return Unknown106(loop); }
  int Unknown117() override { return selecting_; }
  int Unknown118() override { return Unknown117(); }
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  void Unknown140() override { Unknown88(); }
  void Unknown142() override { Unknown16dd9a0(); }
  int InputUnknown01() override { return 11; }
  const char* ImplUnknown03() override { return "MID_Shop_Trade"; }
  const char* ImplUnknown05() override { return "MID_ShopMenu_Help"; }
  int ImplUnknown00() override { return 0; }
  int ImplUnknown02() override { return selecting_; }
  int InputUnknown12(int direction, bool loop) override;

private:
  // The start of the TradeItemShopMenuInfo base.
  uint64_t unknown_428_;
  std::vector<void*> unknown_430_;
  uint64_t unknown_448_;
  // Changes the traded count, returns whether it changed.
  std::function<bool(int, bool)> count_changed_;
  // Set while the count of the selected item is chosen.
  bool selecting_;
};

[[gnu::used]] ProcTradeItemSelectMenu::ProcTradeItemSelectMenu() = default;

}

}
