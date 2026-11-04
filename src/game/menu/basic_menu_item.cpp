#include "game/menu/basic_menu_item.hpp"

#include "game/menu/basic_menu.hpp"
#include "game/sound/se.hpp"
#include "msg/message_manager.hpp"

namespace game::menu {

const char16_t* BasicMenuItem::GetText() {
  const char* mid = GetMid();
  if (mid == nullptr) {
    return nullptr;
  }
  return msg::GetText(mid);
}

void BasicMenuItem::Draw() {
  if (GetText() == nullptr) {
    return;
  }
  GetAccessor().SetText("T_Txt", GetText());
}

void BasicMenuItem::Update() {
  if (!created_) {
    return;
  }
  if (!GetAccessor().IsValid()) {
    return;
  }
  GetAccessor().SetVisible(true);
  if (!Unknown14()) {
    GetAccessor().GetRootPane()->SetTranslate(position_);
  }
  if (dirty_) {
    Draw();
    dirty_ = false;
  }
}

void BasicMenuItem::ChangeSelect(bool selected) {
  SetSelected(selected);
  menu_->SetCursorHidden(selected);
  dirty_ = true;
}

float BasicMenuItem::GetWidth() {
  if (!GetAccessor().IsValid()) {
    return 0.0f;
  }
  return GetAccessor().GetRootPane()->GetSize().width;
}

float BasicMenuItem::GetHeight() {
  if (!GetAccessor().IsValid()) {
    return 0.0f;
  }
  return GetAccessor().GetRootPane()->GetSize().height;
}

void BasicMenuItem::PlayDecideSe() {
  sound::PlaySe("SE_SYS_Decide_M");
}

void BasicMenuItem::PlayDecideStrongSe() {
  sound::PlaySe("SE_SYS_Decide_L");
}

void BasicMenuItem::PlayFinishSe() {
  sound::PlaySe("SE_SYS_Decide_L");
}

void BasicMenuItem::PlayCancelSe() {
  sound::PlaySe("SE_SYS_Cancel_M");
}

void BasicMenuItem::PlayNgSe() {
  sound::PlaySe("SE_SYS_NG");
}

void BasicMenuItem::PlayChangeSe() {
  sound::PlaySe("SE_SYS_List_Change");
}

void BasicMenuItem::PlayACallSe(int result) {
  switch (result) {
    case 1:
    case 14:
      sound::PlaySe("SE_SYS_NG");
      break;
    case 2:
    case 13:
      sound::PlayCursorLeftSe();
      break;
  }
}

void BasicMenuItem::PlayBCallSe(int result) {
  switch (result) {
    case 1:
    case 14:
      sound::PlaySe("SE_SYS_NG");
      break;
    case 2:
    case 13:
      sound::PlayCursorRightSe();
      break;
  }
}

void BasicMenuItem::PlayXCallSe(int result) {
  switch (result) {
    case 1:
    case 14:
      sound::PlaySe("SE_SYS_NG");
      break;
    case 2:
    case 13:
      sound::PlayCursorLeftSe();
      break;
  }
}

void BasicMenuItem::PlayYCallSe(int result) {
  switch (result) {
    case 1:
    case 14:
      sound::PlaySe("SE_SYS_NG");
      break;
    case 2:
    case 13:
      sound::PlayCursorRightSe();
      break;
  }
}

void BasicMenuItem::Unknown51() {}

void BasicMenuItem::Unknown52() {}

void BasicMenuItem::PlayCursorSe() {
  sound::PlayCursorLeftSe();
}

void BasicMenuItem::PlayPageSe() {
  sound::PlayCursorRightSe();
}

}
