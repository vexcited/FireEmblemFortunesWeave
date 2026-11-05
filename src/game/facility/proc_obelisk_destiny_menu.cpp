#include "game/menu/game_menu.hpp"

namespace game::facility {

namespace {

class ProcObeliskDestinyMenu : public menu::GameMenu {
public:
  ProcObeliskDestinyMenu();

  int Unknown22() override { return 1; }
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Trophy"; }
  bool Unknown64() override { return ImplUnknown07() == 1; }
  const char* Unknown65() override { return "運命の記録・因果の扉"; }
  const char* Unknown67() override { return "運命の記録・因果の扉"; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown91() override;
  void Unknown93() override;
  void Unknown94() override;
  int Unknown107() override;
  void Unknown128() override;
  void Unknown129() override;
  const char* ImplUnknown03() override { return "MID_ObeliskMenu_Destiny"; }
  const char* ImplUnknown05() override { return "MID_AchieveMenu_Help"; }
  int InputUnknown01() override { return 8; }
  uint8_t ImplUnknown07() override { return unknown_429_; }
  int ImplUnknown10() override;
  uint8_t ImplUnknown08() override { return 8; }
  int InputUnknown12(int direction, bool loop) override;

private:
  uint8_t unknown_428_;
  uint8_t unknown_429_;
};

[[gnu::used]] ProcObeliskDestinyMenu::ProcObeliskDestinyMenu() = default;

// Kept out of its thunk, facility-menu-obelisk-2 pairs the thunk with a plain
// tail call.
[[gnu::noinline]]
int ProcObeliskDestinyMenu::InputUnknown12(int direction, bool loop) {
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
