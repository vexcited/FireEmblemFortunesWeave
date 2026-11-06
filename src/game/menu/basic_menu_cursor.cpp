#pragma GCC visibility push(hidden)
#include "game/gameui/menu_animator.hpp"
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

#include <algorithm>

#include "game/util/format.hpp"

namespace game::menu {

BasicMenuItem* BasicMenu::SavedCursor::GetItem() const {
  int index = menu->unknown_228_ + offset;
  int count = 0;
  for (BasicMenuItem* item : menu->items_) {
    count += item->IsDecidable();
  }
  index = std::min(index, count - 1);

  BasicMenuItem* target = nullptr;
  if (index >= 0) {
    int n = 0;
    for (BasicMenuItem* item : menu->items_) {
      if (item->IsDecidable()) {
        if (index == n) {
          target = item;
          break;
        }
        ++n;
      }
    }
  }

  int position = 0;
  auto it = menu->items_.begin();
  for (; it != menu->items_.end(); ++it, ++position) {
    if (*it == target) {
      break;
    }
  }
  if (it == menu->items_.end()) {
    return nullptr;
  }

  int start = std::min(position, menu->GetItemCount() - 1);
  return menu->GetItem(menu->FindSelectable(start));
}

void BasicMenu::Unknown16dd9a0() {
  int first = 0;
  if (GetItemCount() >= 2 && row_height_ != 0.0f) {
    int rows = static_cast<int>(unknown_22c_ / row_height_);
    first = InputUnknown02() * rows;
  }

  int index = 0;
  for (size_t i = 0; i < items_.size(); ++i) {
    if (items_[i]->IsDecidable()) {
      if (first <= index && index < first + unknown_248_) {
        items_[i]->Draw();
      }
      ++index;
    }
  }
}

void BasicMenu::Unknown16de2e0(bool force) {
  for (size_t i = 0; i < items_.size(); ++i) {
    if (IsSelectable(i)) {
      SetCurrent(GetItem(i), force);
      return;
    }
  }
}

void BasicMenu::Unknown16de4d0() {
  Unknown129();
  if (!unknown_328_.empty()) {
    unknown_328_[tab_.GetPrevious()] = unknown_328_[tab_.GetIndex()];
    saved_cursor_->offset = unknown_328_[tab_.GetIndex()];
  }
  if (!unknown_310_.empty()) {
    unknown_310_[tab_.GetPrevious()] = unknown_228_;
    unknown_228_ = unknown_310_[tab_.GetIndex()];
  }
  SetCurrent(saved_cursor_ ? saved_cursor_->GetItem() : nullptr, true);
  Unknown16dc3e0();
}

void BasicMenu::Unknown16defa0() {
  accessor_3b8_.SetPaneTranslate("L_MenuItem00", origin_);
  accessor_3b8_.SetPaneTranslate("L_MenuItem01",
    {origin_.x + column_width_, origin_.y, 0.0f});
  accessor_3b8_.SetPaneTranslate(
    util::Format("L_MenuItem%02d", InputUnknown02()),
    {origin_.x, origin_.y + row_height_, 0.0f});

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
  current_ = nullptr;
  visible_items_.clear();
  items_.clear();
  Unknown128();
  Unknown129();

  SetCurrent(saved_cursor_ ? saved_cursor_->GetItem() : nullptr, true);
  Unknown16dbb80();
  Unknown16dc3e0();
  Unknown16df380();
  UpdateItems();
}

void BasicMenu::Unknown57(std::vector<int64_t>& handles) {
  int64_t handle = gameui::MenuAnimator::PlayIn(Unknown56(), accessor_,
    nullptr);
  if (handle != -1) {
    handles.push_back(handle);
  }
  if (handles.empty()) {
    handle = gameui::MenuAnimator::PlayIn(Unknown56(), accessor_3b8_, nullptr);
    if (handle != -1) {
      handles.push_back(handle);
    }
  }
}

void BasicMenu::Unknown58(std::vector<int64_t>& handles) {
  int64_t handle = gameui::MenuAnimator::PlayOut(Unknown56(), accessor_,
    nullptr);
  if (handle != -1) {
    handles.push_back(handle);
  }
  if (handles.empty()) {
    handle = gameui::MenuAnimator::PlayOut(Unknown56(), accessor_3b8_,
      nullptr);
    if (handle != -1) {
      handles.push_back(handle);
    }
  }
}

}
