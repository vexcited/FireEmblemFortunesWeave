#include "game/menu/dialog_menu_item.hpp"

namespace game::menu {

int DialogMenuItem::ACall() {
  if (on_decide_) {
    return on_decide_(this);
  }
  return 2;
}

int DialogMenuItem::BCall() {
  if (on_cancel_) {
    return on_cancel_(this);
  }
  return 3;
}

void DialogMenuItem::DrawText() {
  GameMenuItem::DrawText();
  GetAccessor().SetPaneVisible("IconState", icon_state_);
}

}
