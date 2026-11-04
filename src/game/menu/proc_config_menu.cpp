#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcConfigMenu : public menu::GameMenu {
public:
  ProcConfigMenu();

  int Unknown24() override { return 3; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Setting"; }
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown79(int result) override;
  void Unknown84() override;
  void Unknown88() override;
  void Unknown94() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  void Unknown114() override;
  int Unknown117() override { return 1; }
  int Unknown118() override { return 1; }
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown01() override { return 14; }
  const char* ImplUnknown03() override { return "MID_SysMenu_Config"; }
  const char* ImplUnknown05() override { return nullptr; }
  int ImplUnknown10() override;
};

[[gnu::used]] ProcConfigMenu::ProcConfigMenu() = default;

class ProcBmapConfigMenu : public ProcConfigMenu {
public:
  ProcBmapConfigMenu();

  int Unknown24() override { return 5; }
  const char* Unknown32() override { return "Layout/Battle.arc"; }
  const char* Unknown33() override { return "Battle_Setting"; }
  bool Unknown64() override { return true; }
  void Unknown79(int result) override;
  void Unknown84() override {}
  void Unknown88() override {}
  void Unknown94() override;
  void Unknown96() override;
  int Unknown101() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  int Unknown112() override;
  void Unknown114() override;
  void Unknown129() override {}
  int InputUnknown01() override { return 13; }
  const char* ImplUnknown03() override { return nullptr; }
  const char* ImplUnknown05() override { return nullptr; }
  int ImplUnknown10() override;
};

[[gnu::used]] ProcBmapConfigMenu::ProcBmapConfigMenu() = default;

}

}
