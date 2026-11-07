#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class SubMenu : public GameMenu {
public:
  ~SubMenu() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_SubMenu"; }
  bool Unknown60() override { return true; }
  bool Unknown64() override { return true; }
  void Unknown85() override;
  void Unknown96() override;
  int ImplUnknown01() override { return 1; }
  int ImplUnknown09() override { return 0; }
  int ImplUnknown02() override { return 1; }
  virtual void Unknown142() {}
};

class TitleSubMenu : public SubMenu {
public:
  ~TitleSubMenu() override;

  const char* Unknown32() override { return "Layout/Title.arc"; }
  const char* Unknown33() override { return "Title_SubMenu"; }
  int Unknown56() override { return 7; }
  bool Unknown60() override { return false; }
  void Unknown96() override;
  bool Unknown137() override { return true; }
};

namespace {

class AllAutoMenu : public SubMenu {
public:
  AllAutoMenu();

  int Unknown26() override { return 10; }
  void Unknown85() override;
  int Unknown100() override;
};

[[gnu::used]] AllAutoMenu::AllAutoMenu() = default;

}

SubMenu::~SubMenu() = default;
TitleSubMenu::~TitleSubMenu() = default;

}
