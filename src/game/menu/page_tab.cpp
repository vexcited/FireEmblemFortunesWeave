#pragma GCC visibility push(hidden)
#include "game/menu/page_tab.hpp"
#pragma GCC visibility pop

#include <memory>

#include "ui/layout_accessor.hpp"

namespace game::gameui {

// Plays the move animation of the left or right arrow of a page tab part.
void PlayPageTabArrow(ui::LayoutAccessor* part, bool left);

}

namespace game::menu {

namespace {

void PlayArrow(std::weak_ptr<ui::LayoutAccessor> part, bool left) {
  if (std::shared_ptr<ui::LayoutAccessor> locked = part.lock()) {
    gameui::PlayPageTabArrow(locked.get(), left);
  }
}

}

// The original inlines the whole growth path of the vector.
[[gnu::flatten]] void PageTab::Add(int page) {
  order_.push_back(page);
}

bool PageTab::Move(int direction, bool loop) {
  previous_ = index_;
  if (direction == 0) {
    return false;
  }

  int edge = direction < 0 ? 0 : count_;
  if (index_ == edge) {
    if (loop) {
      index_ = direction < 0 ? count_ : 0;
    }
  }
  else {
    index_ += direction;
  }

  if (previous_ == index_) {
    return false;
  }

  if (std::shared_ptr<ui::LayoutAccessor> part = part_.lock()) {
    PlayArrow(part, direction < 0);
  }
  Update();
  return true;
}

void PageTab::SetEnabled(bool enable) {
  if (count_ < 1) {
    return;
  }

  if (std::shared_ptr<ui::LayoutAccessor> part = part_.lock()) {
    std::weak_ptr<ui::LayoutAccessor> left = part->GetPart("L_ArrowL");
    ui::SetPartEnabled(left, enable, false);
    std::weak_ptr<ui::LayoutAccessor> right = part->GetPart("L_ArrowR");
    ui::SetPartEnabled(right, enable, false);
  }
}

}
