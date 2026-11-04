#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#include "msg/message_manager.hpp"
#pragma GCC visibility pop

namespace game::menu {

const char16_t* GameMenuImpl::ImplUnknown04() {
  const char* mid = ImplUnknown03();
  const char16_t* text = mid != nullptr && *mid != '\0' ?
    msg::GetText(mid) : msg::MessageManager::empty_text_;
  return text != msg::MessageManager::empty_text_ ? text : nullptr;
}

const char16_t* GameMenuImpl::ImplUnknown06() {
  const char* mid = ImplUnknown05();
  const char16_t* text = mid != nullptr && *mid != '\0' ?
    msg::GetText(mid) : msg::MessageManager::empty_text_;
  return text != msg::MessageManager::empty_text_ ? text : nullptr;
}

GameMenu::~GameMenu() = default;

void GameMenu::Unknown57(std::vector<int64_t>& handles) {
  ImplUnknown12();
  Unknown135(handles);
}

void GameMenu::Unknown58(std::vector<int64_t>& handles) {
  int state = Unknown21();
  if (state != 9) {
    if ((state & ~2) == 4 || GetRootMenu() == this) {
      ImplUnknown13();
    }
  }
  if (Unknown137()) {
    Unknown136(handles);
  }
}

void GameMenu::Unknown92() {
  if (GetRootMenu() == this) {
    ImplUnknown13();
  }
}

void GameMenu::Unknown96() {
  BasicMenu::Unknown96();
  int state = Unknown21();
  if (state < 2 || state > 7) {
    ImplUnknown12();
  }
}

int GameMenu::Unknown137() {
  int state = Unknown21();
  if (state == 9) {
    return false;
  }
  if ((state & ~2) == 4) {
    return true;
  }
  return GetRootMenu() == this;
}

}
