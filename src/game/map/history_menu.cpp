#include <memory>

#include "game/sound/se.hpp"
#include "ui/layout_accessor.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::map {

namespace {

// The rewind menu listing the history of the battle map.
class HistoryMenu : public menu::GameMenu {
public:
  HistoryMenu();

  int Unknown24() override { return 5; }
  const char* Unknown32() override { return "Layout/Battle.arc"; }
  const char* Unknown33() override { return "Battle_SystemMenu_Rewind"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown48() override {
    return accessor_.GetPart("L_KeyUD/L_Arrow_U");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown49() override {
    return accessor_.GetPart("L_KeyUD/L_Arrow_D");
  }

  bool Unknown64() override { return true; }

  void Unknown85() override {
    UpdateList();
    if (std::shared_ptr<ui::LayoutAccessor> keys =
          accessor_.GetPart("L_KeyUD").lock()) {
      keys->SetVisible(false);
    }
  }

  const char* ImplUnknown03() override { return "MSID_Fotona"; }
  const char* ImplUnknown05() override { return "MID_RewindMenu_Help"; }
  uint8_t ImplUnknown08() override { return 4; }
  int InputUnknown01() override { return 9; }
  void InputUnknown21() override { sound::PlayCursorHorizontalSe(); }
  void InputUnknown22() override { sound::PlayCursorHorizontalSe(); }

private:
  void UpdateList();
};

[[gnu::used]] HistoryMenu::HistoryMenu() = default;

}

}
