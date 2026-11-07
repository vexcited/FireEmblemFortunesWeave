#include "game/menu/game_menu.hpp"

namespace game::facility {

namespace {

class RelianceMemoryChildMenu : public menu::GameMenu {
public:
  RelianceMemoryChildMenu();

  int Unknown24() override { return 4; }
  void Unknown30(bool enable) override;
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Memory_RelianceMenu"; }
  const char* Unknown42() override { return "L_UnitInfo/L_KeySort"; }
  const char* Unknown43(uint8_t kind) override;
  std::weak_ptr<ui::LayoutAccessor> Unknown46() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown47() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown52() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown53() override;
  bool Unknown64() override { return true; }
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  int Unknown100() override;
  int Unknown103() override;
  int Unknown105() override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  int Unknown117() override { return 1; }
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown01() override { return 12; }

  const char* ImplUnknown03() override {
    return "MID_ObeliskMenu_Memory_Reliance";
  }

  const char* ImplUnknown05() override { return "MID_RelianceMenu_Hotel_Help"; }
  uint8_t ImplUnknown07() override { return 1; }
  int InputUnknown07(bool loop) override;
  int InputUnknown08(bool loop) override;

private:
  uint8_t unknown_428_[0x28];
  uint8_t unknown_450_;
  uint8_t unknown_451_;
  bool unknown_452_;
};

[[gnu::used]] RelianceMemoryChildMenu::RelianceMemoryChildMenu() = default;

const char* RelianceMemoryChildMenu::Unknown43(uint8_t kind) {
  return kind == 2 ? "MID_HotelMenu_Reliance"
    : kind == 1 ? "MID_Sys_RelianceLv" : "MID_Menu_Default";
}

void RelianceMemoryChildMenu::Unknown85() {
  if (!unknown_452_) {
    unknown_451_ = unknown_450_;
    unknown_452_ = true;
  }
}

}

}
