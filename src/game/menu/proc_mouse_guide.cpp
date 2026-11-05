#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcMouseGuide : public menu::GameMenu {
public:
  ProcMouseGuide();

  int Unknown24() override { return 9; }
  int Unknown26() override;
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_MouseGuide"; }
  int Unknown56() override { return 4; }
  int Unknown61() override;
  int Unknown68() override { return 1; }
  void Unknown84() override;
  void Unknown92() override;
  void Unknown95() override;
  void Unknown96() override;
  int Unknown100() override { return 0; }
  int Unknown101() override { return 3; }
  int Unknown102() override;
  int Unknown112() override;
  void Unknown113() override;
  int InputUnknown12(int direction, bool loop) override;

private:
  void ShowPage(int page);
};

[[gnu::used]] ProcMouseGuide::ProcMouseGuide() = default;

int ProcMouseGuide::InputUnknown12(int direction, bool loop) {
  if (tab_.GetCount() < 1) {
    return 0;
  }
  if (!tab_.Move(direction, loop)) {
    return 14;
  }
  ShowPage(tab_.GetCurrent());
  return 13;
}

}

}
