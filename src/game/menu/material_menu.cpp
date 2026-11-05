#pragma GCC visibility push(hidden)
#include "game/menu/material_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcTalkSelectGiftMenu : public MaterialMenu {
public:
  ProcTalkSelectGiftMenu();

  int Unknown61() override { return 2; }
  const char* Unknown67() override { return "贈り物"; }
  int Unknown101() override;
  void Unknown128() override;
  int Unknown137() override;
};

[[gnu::used]] ProcTalkSelectGiftMenu::ProcTalkSelectGiftMenu() = default;

}

MaterialMenu::~MaterialMenu() = default;

int MaterialMenu::InputUnknown12(int direction, bool loop) {
  if (!tab_.Move(direction, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

}
