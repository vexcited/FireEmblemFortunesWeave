#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcUnitInfoFull : public menu::GameMenu {
public:
  ProcUnitInfoFull();

  void Unknown30(bool enable) override;
  const char* Unknown32() override { return "Layout/Common.arc"; }
  const char* Unknown33() override { return "Common_UnitInfoFull"; }
  int Unknown40() override { return 650; }
  int Unknown41() override { return 6; }
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown72() override;
  void Unknown75() override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown84() override;
  void Unknown89() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown101() override { return 3; }
  int Unknown102() override;
  int Unknown103() override;
  int Unknown105() override;
  int Unknown107() override;
  void Unknown131() override;
};

[[gnu::used]] ProcUnitInfoFull::ProcUnitInfoFull() = default;

}

}
