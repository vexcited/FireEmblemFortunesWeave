#include "game/menu/game_menu.hpp"

namespace game::facility {

namespace {

class ProcObeliskMemorySoundMenu : public menu::GameMenu {
public:
  ProcObeliskMemorySoundMenu();

  void Unknown02() override;
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Memory_SoundMenu"; }
  int Unknown40() override { return 200; }
  void Unknown46() override;
  void Unknown47() override;
  bool Unknown64() override { return true; }
  void Unknown84() override;
  void Unknown88() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135() override;
  int InputUnknown01() override { return 16; }

  const char* ImplUnknown03() override {
    return "MID_ObeliskMenu_Memory_Sound";
  }

  const char* ImplUnknown05() override { return "MID_MemorySoundMenu_Help"; }
  uint8_t ImplUnknown07() override { return 1; }
  int ImplUnknown10() override;
  void InputUnknown07() override;
  void InputUnknown08() override;
  void InputUnknown18() override;
  void InputUnknown21() override;
  void InputUnknown22() override;
};

[[gnu::used]]
ProcObeliskMemorySoundMenu::ProcObeliskMemorySoundMenu() = default;

}

}
