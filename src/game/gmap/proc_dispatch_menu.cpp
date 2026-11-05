#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::gmap {

namespace {

class ProcDispatchMenu : public menu::GameMenu {
public:
  ProcDispatchMenu();

  int Unknown24() override { return 23; }
  const char* Unknown32() override { return "Layout/Gmap.arc"; }
  const char* Unknown33() override { return "Gmap_DispatchList"; }
  int Unknown56() override { return 3; }
  bool Unknown60() override { return true; }
  bool Unknown64() override { return true; }
  int InputUnknown01() override { return 13; }
  int ImplUnknown01() override { return 1; }
  int InputUnknown12(int direction, bool loop) override;
};

[[gnu::used]] ProcDispatchMenu::ProcDispatchMenu() = default;

int ProcDispatchMenu::InputUnknown12(int direction, bool loop) {
  if (tab_.GetCount() < 1) {
    return 0;
  }
  if (!tab_.Move(direction, loop)) {
    return 14;
  }
  Unknown16de4d0();
  return 13;
}

}

}
