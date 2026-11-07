#include <functional>
#include <vector>

#include "game/facility/shop_select_menu.hpp"
#include "game/sound/se.hpp"

namespace game {

class Unit;

}

namespace game::gameui {

// Shows the unit information, or the stock when there is no unit.
void SetUnitInfo(ui::LayoutAccessor& part, Unit* unit, bool unknown0,
  bool unknown1);

}

namespace game::facility {

namespace {

class ProcMaterialItemSelectMenu : public MaterialShopSelectMenu {
public:
  ProcMaterialItemSelectMenu();

  int Unknown24() override { return selecting_ ? 3 : 2; }
  const char* Unknown33() override { return "Hub_MaterialShop"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowR");
  }

  bool Unknown64() override { return selecting_; }

  void Unknown69() override {
    if (!selecting_) {
      MaterialShopSelectMenu::Unknown69();
    }
  }

  // The left and right buttons play the horizontal cursor sounds.
  void Unknown76(int result) override {
    if (selecting_) {
      sound::PlayCursorHorizontalLeftSe();
      return;
    }
    MaterialShopSelectMenu::Unknown78(result);
  }

  void Unknown77(int result) override {
    if (selecting_) {
      sound::PlayCursorHorizontalRightSe();
      return;
    }
    MaterialShopSelectMenu::Unknown79(result);
  }

  void Unknown78(int result) override {
    if (selecting_) {
      Unknown76(result);
      return;
    }
    MaterialShopSelectMenu::Unknown78(result);
  }

  void Unknown79(int result) override {
    if (selecting_) {
      Unknown77(result);
      return;
    }
    MaterialShopSelectMenu::Unknown79(result);
  }

  void Unknown84() override;

  void Unknown85() override {
    Unknown1874730(pages_[tab_.GetCurrent()]);
    Unknown141();
  }

  void Unknown88() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  int Unknown117() override { return selecting_; }
  int Unknown118() override { return Unknown117(); }
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135(std::vector<int64_t>& handles) override;

  void Unknown140() override {
    Unknown88();
    gameui::SetUnitInfo(accessor_.FindPart("L_UnitInfo"), nullptr, true,
      true);
  }

  void Unknown141() override;
  void Unknown142() override { Unknown16dd9a0(); }
  int InputUnknown01() override { return 11; }
  const char* ImplUnknown03() override { return "MID_Shop_Buy"; }
  const char* ImplUnknown05() override { return "MID_ShopMenu_Help"; }
  int ImplUnknown00() override { return 0; }
  int ImplUnknown02() override { return selecting_; }
  int InputUnknown12(int direction, bool loop) override;
  int ImplUnknown10() override;

private:
  // The start of the MaterialItemShopMenuInfo base.
  uint64_t unknown_428_;
  // The item kind shown by each page of the tab.
  std::vector<int32_t> pages_;
  uint64_t unknown_448_;
  std::vector<void*> unknown_450_;
  // Set while the count of the selected material is chosen.
  bool selecting_;
  // Steps the chosen count, true once it changed.
  std::function<bool(int, bool)> step_count_;
};

[[gnu::used]]
ProcMaterialItemSelectMenu::ProcMaterialItemSelectMenu() = default;

int ProcMaterialItemSelectMenu::Unknown104(bool loop) {
  if (selecting_) {
    return step_count_ && step_count_(-1, loop) ? 2 : 0;
  }
  return loop ? BasicMenu::Unknown103() : 0;
}

int ProcMaterialItemSelectMenu::Unknown106(bool loop) {
  if (selecting_) {
    return step_count_ && step_count_(1, loop) ? 2 : 0;
  }
  return loop ? BasicMenu::Unknown105() : 0;
}

int ProcMaterialItemSelectMenu::Unknown108(bool loop) {
  if (selecting_) {
    return Unknown104(loop);
  }
  return loop ? BasicMenu::Unknown107() : 0;
}

int ProcMaterialItemSelectMenu::InputUnknown12(int direction, bool loop) {
  if (!tab_.Move(direction, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

}

}
