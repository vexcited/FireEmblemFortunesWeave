#pragma GCC visibility push(hidden)
#include "game/gameui/menu_animator.hpp"
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

#include <cstring>
#include <typeinfo>

namespace game::menu {

BasicMenu::~BasicMenu() {
  Unknown127();
  Unknown16dcb80();
}

void BasicMenu::Unknown03() {
  Unknown16df380();
  UpdateItems();
}

void BasicMenu::Unknown08() {
  bool enable = true;
  if (ProcInst* proc = GetParent()->GetParentProc()) {
    const char* name = proc->GetName();
    if (name != nullptr && std::strcmp(name, "ProcHelp") == 0) {
      enable = false;
    }
    else if (BasicMenu* menu = dynamic_cast<BasicMenu*>(proc)) {
      enable = !menu->Unknown64();
    }
  }

  Unknown30(enable);
  Unknown31(enable);
  Unknown95();
  if (current_ != nullptr) {
    unknown_194_ = 2;
  }
}

void BasicMenu::Unknown09() {
  if (IsInLabel(6)) {
    return;
  }

  Unknown30(true);
  Unknown31(true);
  Unknown96();
  if (state_ <= 12 && ((1 << state_) & 0x1d00) != 0) {
    state_ = 0;
  }
  unknown_16a_ = 0;
  if (current_ != nullptr) {
    unknown_194_ = 0;
    flags_ &= ~kFlagCursorHidden;
  }
}

void BasicMenu::Unknown12() {
  UpdateMenuTree(this);
  Unknown18();
}

void BasicMenu::Unknown18() {
  for (ProcInst* proc = GetParentProc(); proc != nullptr;
    proc = proc->GetParentProc()) {
    if (MenuProcInst* menu = dynamic_cast<MenuProcInst*>(proc)) {
      menu->Unknown18();
      break;
    }
  }

  Unknown92();
  for (BasicMenuItem* item : items_) {
    item->Unknown23();
  }
  state_ = 0;
  JumpTo(6);
}

void BasicMenu::Unknown20() {
  Unknown99();
  Unknown16dc660(false);
}

bool BasicMenu::Unknown29(int index) {
  if (index < 0) {
    return false;
  }

  int count = 0;
  for (auto it = items_.begin(); it != items_.end(); ++it) {
    ++count;
  }
  if (index >= count) {
    return false;
  }

  BasicMenuItem* item = items_[index];
  return item->IsDecidable() && item->IsEnable() && !item->IsSelected();
}

void BasicMenu::Unknown31(bool enable) {
  tab_.SetEnabled(enable);
  std::weak_ptr<ui::LayoutAccessor> part = Unknown46();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown47();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown48();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown49();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown50();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown51();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown52();
  ui::SetPartEnabled(part, enable, false);
  part = Unknown53();
  ui::SetPartEnabled(part, enable, false);
  part = accessor_.GetPart(Unknown42());
  ui::SetPartEnabled(part, enable, false);
}

void BasicMenu::Unknown44() {
  Unknown16de2e0(true);
  Unknown16de4d0();
}

std::vector<std::string> BasicMenu::Unknown66() {
  std::vector<std::string> names;
  if (const char* name = Unknown65()) {
    names.push_back(name);
  }
  return names;
}

void BasicMenu::Unknown69() {
  if (se_callback_) {
    se_callback_();
    se_callback_ = nullptr;
  }
  else if (current_ != nullptr) {
    current_->PlayDecideSe();
  }
  else {
    sound::PlaySe("SE_SYS_Decide_M");
  }
}

void BasicMenu::Unknown70() {
  if (se_callback_) {
    se_callback_();
    se_callback_ = nullptr;
  }
  else if (current_ != nullptr) {
    current_->PlayDecideStrongSe();
  }
  else {
    sound::PlaySe("SE_SYS_Decide_L");
  }
}

void BasicMenu::Unknown71() {
  if (se_callback_) {
    se_callback_();
    se_callback_ = nullptr;
  }
  else if (current_ != nullptr) {
    current_->PlayFinishSe();
  }
  else {
    sound::PlaySe("SE_SYS_Decide_L");
  }
}

void BasicMenu::Unknown72() {
  if (se_callback_) {
    se_callback_();
    se_callback_ = nullptr;
  }
  else if (current_ != nullptr) {
    current_->PlayCancelSe();
  }
  else {
    sound::PlaySe("SE_SYS_Cancel_M");
  }
}

void BasicMenu::Unknown73() {
  if (current_ != nullptr) {
    current_->PlayNgSe();
    return;
  }
  sound::PlaySe("SE_SYS_NG");
}

void BasicMenu::Unknown74() {}

void BasicMenu::Unknown75() {
  if (current_ != nullptr) {
    current_->PlayChangeSe();
    return;
  }
  sound::PlaySe("SE_SYS_List_Change");
}

void BasicMenu::Unknown76(int result) {
  if (current_ != nullptr) {
    current_->PlayACallSe(result);
    return;
  }
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

void BasicMenu::Unknown77(int result) {
  if (current_ != nullptr) {
    current_->PlayBCallSe(result);
    return;
  }
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

void BasicMenu::Unknown78(int result) {
  if (current_ != nullptr) {
    current_->PlayXCallSe(result);
    return;
  }
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

void BasicMenu::Unknown79(int result) {
  if (current_ != nullptr) {
    current_->PlayYCallSe(result);
    return;
  }
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

void BasicMenu::Unknown80() {
  if (current_ != nullptr) {
    current_->Unknown51();
  }
}

void BasicMenu::Unknown81() {
  if (current_ != nullptr) {
    current_->Unknown52();
  }
}

void BasicMenu::Unknown82() {}

void BasicMenu::Unknown91(int kind) {
  switch (kind) {
    case 10:
      if (current_ != nullptr) {
        current_->ChangeSelect(true);
      }
      [[fallthrough]];
    case 11:
      Unknown70();
      break;
    case 12:
      if (current_ != nullptr) {
        current_->ChangeSelect(true);
      }
      Unknown71();
      break;
    default:
      Unknown69();
      break;
  }
}

void BasicMenu::Unknown96() {
  if (!unknown_16a_) {
    for (BasicMenuItem* item : items_) {
      item->OnClose();
    }
  }
  if (state_ != 9) {
    return;
  }

  unknown_268_ = 0;
  Unknown16dc660(true);
  JumpTo(3);
  SetFinished();
  if (ProcInst* proc = GetParent()->GetUnknown20()) {
    if (MenuProcInst* menu = dynamic_cast<MenuProcInst*>(proc)) {
      if (menu->Unknown21() == 10) {
        menu->Unknown20();
      }
    }
  }
}

void BasicMenu::InputUnknown16() {
  std::weak_ptr<ui::LayoutAccessor> accessor = Unknown46();
  UpdateAccessor(accessor);
}

void BasicMenu::InputUnknown17() {
  std::weak_ptr<ui::LayoutAccessor> accessor = Unknown47();
  UpdateAccessor(accessor);
}

void BasicMenu::InputUnknown14() {
  std::weak_ptr<ui::LayoutAccessor> accessor = Unknown48();
  UpdateAccessor(accessor);
  for (int32_t& value : unknown_328_) {
    value = saved_cursor_->offset;
  }
}

void BasicMenu::InputUnknown15() {
  std::weak_ptr<ui::LayoutAccessor> accessor = Unknown49();
  UpdateAccessor(accessor);
  for (int32_t& value : unknown_328_) {
    value = saved_cursor_->offset;
  }
}

bool BasicMenu::Unknown123() {
  return !IsUnknown8aSet();
}

bool BasicMenu::Unknown124() {
  if (Unknown59()) {
    return false;
  }
  for (int64_t handle : animations_) {
    if (gameui::MenuAnimator::IsPlaying(handle)) {
      return false;
    }
  }
  return true;
}

bool BasicMenu::Unknown125() {
  if (Unknown59()) {
    return false;
  }
  for (int64_t handle : animations_) {
    if (gameui::MenuAnimator::IsPlaying(handle)) {
      return false;
    }
  }
  return true;
}

void BasicMenu::Unknown126() {
  current_ = nullptr;
  for (BasicMenuItem* item : visible_items_) {
    if (item != nullptr) {
      delete item;
    }
  }
  if (unknown_158_ != nullptr) {
    delete unknown_158_;
    unknown_158_ = nullptr;
  }
  visible_items_.clear();
  items_.clear();
  Unknown128();
  Unknown129();
}

void BasicMenu::Unknown127() {
  current_ = nullptr;
  for (BasicMenuItem* item : visible_items_) {
    if (item != nullptr) {
      delete item;
    }
  }
  if (unknown_158_ != nullptr) {
    delete unknown_158_;
    unknown_158_ = nullptr;
  }
  visible_items_.clear();
  items_.clear();
}

void BasicMenu::Unknown132() {
  if (unknown_268_ == 0) {
    unknown_268_ = 1;
    return;
  }
  if (Unknown124()) {
    Finish();
  }
}

void BasicMenu::ResetTabs(int count, int index) {
  tab_.Reset(count - 1, index);
  unknown_310_.clear();
  unknown_328_.clear();
  int size = count > 0 ? count : 1;
  unknown_310_.resize(size, 0);
  unknown_328_.resize(size, 0);
}

}
