#pragma GCC visibility push(hidden)
#include "game/gameui/menu_animator.hpp"
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

#include "game/sound/se.hpp"

namespace game::menu {

namespace {

bool IsSlideKind(int kind) {
  return kind >= 0 && kind <= 3;
}

void PlayIn(std::vector<int64_t>& handles, GameMenu* menu, int kind,
  ui::LayoutAccessor& accessor, const char* pane) {
  int64_t handle = gameui::MenuAnimator::PlayIn(kind, accessor, pane);
  if (handle == -1) {
    return;
  }
  handles.push_back(handle);
  if (IsSlideKind(kind) && !menu->ImplUnknown15()) {
    sound::PlaySe("SE_SYS_Window_Open");
  }
}

void PlayOut(std::vector<int64_t>& handles, GameMenu* menu, int kind,
  ui::LayoutAccessor& accessor, const char* pane) {
  int64_t handle = gameui::MenuAnimator::PlayOut(kind, accessor, pane);
  if (handle == -1) {
    return;
  }
  handles.push_back(handle);
  if (IsSlideKind(kind) && !menu->ImplUnknown16()) {
    sound::PlaySe("SE_SYS_Window_Close");
  }
}

}

void GameMenu::Unknown135(std::vector<int64_t>& handles) {
  int64_t handle = gameui::MenuAnimator::PlayDirection(4, 0, accessor_,
    "Alpha", "Alpha", "In");
  if (handle != -1) {
    handles.push_back(handle);
  }
  PlayIn(handles, this, 0, accessor_, "Up");
  PlayIn(handles, this, 1, accessor_, "Down");
  PlayIn(handles, this, 3, accessor_, "Right");
  PlayIn(handles, this, 2, accessor_, "Left");
  if (handles.empty()) {
    PlayIn(handles, this, Unknown56(), accessor_, nullptr);
    if (handles.empty()) {
      PlayIn(handles, this, Unknown56(), accessor_3b8_, nullptr);
    }
  }
}

void GameMenu::Unknown136(std::vector<int64_t>& handles) {
  int64_t handle = gameui::MenuAnimator::PlayDirection(4, 1, accessor_,
    "Alpha", "Alpha", "Out");
  if (handle != -1) {
    handles.push_back(handle);
  }
  PlayOut(handles, this, 0, accessor_, "Up");
  PlayOut(handles, this, 1, accessor_, "Down");
  PlayOut(handles, this, 3, accessor_, "Right");
  PlayOut(handles, this, 2, accessor_, "Left");
  if (handles.empty()) {
    PlayOut(handles, this, Unknown56(), accessor_, nullptr);
    if (handles.empty()) {
      PlayOut(handles, this, Unknown56(), accessor_3b8_, nullptr);
    }
  }
}

}
