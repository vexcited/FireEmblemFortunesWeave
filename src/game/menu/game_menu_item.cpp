#include "game/menu/game_menu_item.hpp"

#include "game/menu/basic_menu.hpp"

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

void GameMenuItem::OnSelect() {
  if (selected_) {
    PlaySelectedAnimation();
  }
  else {
    PlayCursorAnimation();
  }
}

void GameMenuItem::OnDeselect() {
  if (selected_) {
    PlaySelectedAnimation();
  }
  else {
    PlayIdleAnimation();
  }
}

void GameMenuItem::OnClose() {
  if (menu_->GetCurrentItem() == this) {
    ChangeSelect(false);
  }
}

void GameMenuItem::DrawText() {
  if (GetText() == nullptr) {
    return;
  }
  GetAccessor().SetText("T_Txt", GetText());
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
