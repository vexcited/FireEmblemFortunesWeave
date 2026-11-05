#include <cstdint>

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::hub {

namespace {

class ProcFastTravelMenu : public menu::GameMenu {
public:
  ProcFastTravelMenu();

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_FastTravel"; }
  const char* Unknown35() override { return "L_List"; }
  const char* Unknown42() override { return "L_List/L_PageTab/L_KeySort"; }

  const char* Unknown43(uint8_t kind) override {
    return kind == 1 ? "MID_FastTravelMenu_NameOrder" : "MID_Menu_Default";
  }

  bool Unknown45() override {
    return tab_.GetCurrent() == 2 && unknown_14_ > 1;
  }

  int Unknown61() override { return 3; }
  const char* Unknown65() override { return "拠点地図"; }
  const char* Unknown67() override { return "拠点地図"; }
  void Unknown79(int result) override {}
  const char* ImplUnknown03() override { return "MID_HubMenu_FastTravel"; }
  const char* ImplUnknown05() override { return nullptr; }
  int ImplUnknown10() override;
  int InputUnknown01() override { return 7; }
  int InputUnknown12(int direction, bool loop) override;
  int ImplUnknown00() override { return 1; }
};

[[gnu::used]] ProcFastTravelMenu::ProcFastTravelMenu() = default;

}

}
