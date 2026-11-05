#include <cstdint>

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::gmap {

namespace {

class ProcComebackList : public menu::GameMenu {
public:
  ProcComebackList();

  const char* Unknown32() override { return "Layout/Gmap.arc"; }
  const char* Unknown33() override { return "Gmap_ComebackList"; }
  int Unknown61() override { return 3; }
  void Unknown93() override;
  int Unknown100() override { return 0; }
  int InputUnknown01() override { return 8; }
  const char* ImplUnknown03() override { return "MID_SysMenu_LegionComback"; }

  const char* ImplUnknown05() override {
    return "MID_LegionCombackMenu_Help";
  }

  int ImplUnknown01() override { return 1; }
  int InputUnknown12(int direction, bool loop) override;

private:
  uint8_t unknown_428_[0x50];
  bool unknown_478_;
};

[[gnu::used]] ProcComebackList::ProcComebackList() = default;

void ProcComebackList::Unknown93() {
  if (unknown_478_) {
    Unknown16dea40(false, true, false);
    unknown_478_ = false;
  }
}

int ProcComebackList::InputUnknown12(int direction, bool loop) {
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
