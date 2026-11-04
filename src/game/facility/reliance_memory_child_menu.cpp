#include "game/menu/game_menu.hpp"

namespace game::facility {

namespace {

class RelianceMemoryChildMenu : public menu::GameMenu {
public:
  RelianceMemoryChildMenu();

  int Unknown24() override { return 4; }
  void Unknown30() override;
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Memory_RelianceMenu"; }
  const char* Unknown42() override { return "L_UnitInfo/L_KeySort"; }
  const char* Unknown43(uint8_t kind) override;
  void Unknown46() override;
  void Unknown47() override;
  void Unknown50() override;
  void Unknown51() override;
  void Unknown52() override;
  void Unknown53() override;
  bool Unknown64() override { return true; }
  void Unknown76() override;
  void Unknown77() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  int Unknown100() override;
  int Unknown103() override;
  int Unknown105() override;
  void Unknown108() override;
  void Unknown110() override;
  int Unknown117() override { return 1; }
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown01() override { return 12; }

  const char* ImplUnknown03() override {
    return "MID_ObeliskMenu_Memory_Reliance";
  }

  const char* ImplUnknown05() override { return "MID_RelianceMenu_Hotel_Help"; }
  uint8_t ImplUnknown07() override { return 1; }
  void InputUnknown07() override;
  void InputUnknown08() override;
};

[[gnu::used]] RelianceMemoryChildMenu::RelianceMemoryChildMenu() = default;

}

}
