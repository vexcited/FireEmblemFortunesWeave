#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcTempleMiracleMenu : public menu::GameMenu {
public:
  ProcTempleMiracleMenu();

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_MiracleMenu"; }
  bool Unknown39() override { return true; }
  const char* Unknown65() override;
  const char* Unknown67() override;
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;
  int Unknown101() override { return 3; }
};

[[gnu::used]] ProcTempleMiracleMenu::ProcTempleMiracleMenu() = default;

}

}
