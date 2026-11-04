#include "game/menu/game_menu_item.hpp"

#include "game/menu/basic_menu.hpp"
#include "game/util/format.hpp"

namespace game::menu {

void GameMenuItem::SetSelected(bool selected) {
  selected_ = selected;
  if (selected) {
    PlaySelectedAnimation();
  }
  else if (menu_->GetCurrentItem() != this) {
    PlayIdleAnimation();
  }
  else {
    PlayCursorAnimation();
  }
}

void GameMenuItem::Draw() {
  BasicMenuItem::Draw();
  if (!GetAccessor().IsValid()) {
    return;
  }
  if (selected_) {
    PlaySelectedAnimation();
  }
  else if (menu_->GetCurrentItem() != this) {
    PlayIdleAnimation();
  }
  else {
    PlayCursorAnimation();
  }
  DrawText();
}

void GameMenuItem::DrawText() {
  if (GetText() == nullptr) {
    return;
  }
  GetAccessor().SetText("T_Txt", GetText());
}

void GameMenuItem::PlayIdleAnimation() {
  std::string name = GetIdleAnimationName();
  GetAccessor().PlayAnimation(name.c_str(), 1.0f);
  UpdateStateAnimation();
}

void GameMenuItem::PlayCursorAnimation() {
  std::string name = GetCursorAnimationName();
  GetAccessor().PlayAnimation(name.c_str(), 1.0f);
  UpdateStateAnimation();
}

void GameMenuItem::PlaySelectedAnimation() {
  std::string name = GetSelectedAnimationName();
  GetAccessor().PlayAnimation(name.c_str(), 1.0f);
  UpdateStateAnimation();
}

std::string GameMenuItem::GetIdleAnimationName() {
  std::string name = util::Format("%sDefault", GetStateName());
  if (!GetAccessor().HasAnimation(name.c_str())) {
    name = "Default";
  }
  return name;
}

std::string GameMenuItem::GetCursorAnimationName() {
  std::string name = util::Format("%sSelect", GetStateName());
  if (!GetAccessor().HasAnimation(name.c_str())) {
    name = "Select";
  }
  return name;
}

std::string GameMenuItem::GetSelectedAnimationName() {
  std::string name = util::Format("%sDecide", GetStateName());
  if (!GetAccessor().HasAnimation(name.c_str())) {
    name = "Decide";
  }
  return name;
}

const char* GameMenuItem::GetStateName() {
  if (IsEquip()) {
    if (IsEmpty()) {
      return "EquipEmpty";
    }
    return IsActive() ? "Equip" : "EquipDisable";
  }
  if (IsFixed()) {
    return IsActive() ? "Fixed" : "FixedDisable";
  }
  if (IsEmpty()) {
    return "Empty";
  }
  return IsActive() ? "" : "Disable";
}

}
