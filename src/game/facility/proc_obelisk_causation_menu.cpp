#include "game/menu/game_menu.hpp"

namespace game::facility {

namespace {

class ProcObeliskCausationMenu : public menu::GameMenu {
public:
  ProcObeliskCausationMenu();

  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_TrophyReward"; }
  bool Unknown64() override { return ImplUnknown07() == 1; }
  const char* Unknown65() override { return "運命の記録・因果の扉"; }
  const char* Unknown67() override { return "運命の記録・因果の扉"; }
  void Unknown84() override;
  void Unknown88() override;
  void Unknown96() override;
  int InputUnknown01() override { return 12; }
  const char* ImplUnknown03() override { return "MID_ObeliskMenu_Causation"; }
  const char* ImplUnknown05() override { return "MID_CausationMenu_Help"; }
  uint8_t ImplUnknown08() override { return 8; }
  uint8_t ImplUnknown07() override { return unknown_428_; }

private:
  uint8_t unknown_428_;
};

[[gnu::used]] ProcObeliskCausationMenu::ProcObeliskCausationMenu() = default;

// Takes the mode of the menu that opened this one.
void ProcObeliskCausationMenu::Unknown84() {
  Unknown16de4d0();
  BasicMenu* opener = nullptr;
  if (ProcInst* proc = GetParent()->GetUnknown20()) {
    if (auto* menu = dynamic_cast<menu::MenuProcInst*>(proc)) {
      opener = dynamic_cast<BasicMenu*>(menu);
    }
  }
  BasicMenu* source = opener != nullptr ? opener : this;
  auto* game = dynamic_cast<GameMenu*>(source);
  unknown_428_ = game != nullptr ? game->ImplUnknown07() : 0;
}

void ProcObeliskCausationMenu::Unknown96() {
  BasicMenu::Unknown96();
  const int state = Unknown21();
  if (state < 2 || state > 7) {
    ImplUnknown12();
  }
  Unknown16dd9a0();
  Unknown88();
}

}

}
