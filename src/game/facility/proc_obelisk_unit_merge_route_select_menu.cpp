#include <functional>
#include <memory>
#include <vector>

#include "game/menu/unit_grid_select_menu.hpp"
#include "game/menu/unit_list.hpp"

namespace game::facility {

namespace {

class ProcObeliskUnitMergeRouteSelectMenu : public menu::UnitGridSelectMenu {
public:
  ProcObeliskUnitMergeRouteSelectMenu();

  ~ProcObeliskUnitMergeRouteSelectMenu() override {
    ResetMenuUnits();
  }

  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_RouteSelect_UnitMerge"; }
  const char* Unknown67() override { return "ユニットマージ"; }
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  const char* ImplUnknown03() override { return "MID_ObeliskMenu_UnitMarge"; }

  const char* ImplUnknown05() override {
    return "MID_UnitMergeMenu_RouteSelect_Help";
  }

  uint8_t ImplUnknown08() override { return 8; }
  uint8_t ImplUnknown07() override { return 1; }

private:
  std::vector<void*> unknown_4a0_;
  uint8_t unknown_4b8_[0x18];
  std::vector<void*> unknown_4d0_;
  std::function<void()> unknown_4f0_;
  std::weak_ptr<void> unknown_520_;
};

[[gnu::used]]
ProcObeliskUnitMergeRouteSelectMenu::ProcObeliskUnitMergeRouteSelectMenu() =
  default;

}

}
