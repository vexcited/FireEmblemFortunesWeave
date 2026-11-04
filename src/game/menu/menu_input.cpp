#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

int MenuInput::InputUnknown05(int count, bool loop) {
  return InputUnknown11(-1, count, loop);
}

int MenuInput::InputUnknown06(int count, bool loop) {
  return InputUnknown11(1, count, loop);
}

int MenuInput::InputUnknown09(int count) {
  return InputUnknown13(-1, count);
}

int MenuInput::InputUnknown10(int count) {
  return InputUnknown13(1, count);
}

void MenuInput::InputUnknown18() {
  sound::PlayCursorSe();
}

void MenuInput::InputUnknown19() {
  InputUnknown18();
}

void MenuInput::InputUnknown20() {
  InputUnknown18();
}

void MenuInput::InputUnknown21() {
  if (InputUnknown00() != 0) {
    InputUnknown18();
    return;
  }
  if (BasicMenuItem* item = menu_->current_) {
    item->PlayCursorSe();
    return;
  }
  sound::PlayCursorLeftSe();
}

void MenuInput::InputUnknown22() {
  if (InputUnknown00() != 0) {
    InputUnknown18();
    return;
  }
  if (BasicMenuItem* item = menu_->current_) {
    item->PlayPageSe();
    return;
  }
  sound::PlayCursorRightSe();
}

void MenuInput::InputUnknown23() {
  sound::PlaySe("SE_SYS_Cursor_Stop");
}

}
