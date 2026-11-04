#include "game/menu/game_menu.hpp"

namespace game::facility {

namespace {

class ProcObeliskResumeMenu : public menu::GameMenu {
public:
  ProcObeliskResumeMenu();

  void Unknown02() override;
  int Unknown26() override { return 10; }
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Resume"; }
  int Unknown39() override { return 1; }
  int Unknown61() override { return 3; }
  void Unknown70() override {}
  void Unknown75() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown89() override;
  void Unknown93() override;
  int Unknown100() override;
  int Unknown101() override { return 3; }
  int Unknown102() override;

  const char* ImplUnknown03() override {
    return part_ == 3 ? "MID_HeroMenu_Restart_Part3" : "MID_HeroMenu_Restart";
  }

  const char* ImplUnknown05() override {
    return part_ == 3 ? "MID_ResumeMenu_Part3_Help" : "MID_ResumeMenu_Help";
  }

  uint8_t ImplUnknown07() override { return 1; }
  int InputUnknown12(int direction, bool loop) override;

private:
  uint8_t unknown_428_[0x8c];
  int32_t part_;
};

[[gnu::used]] ProcObeliskResumeMenu::ProcObeliskResumeMenu() = default;

}

}
