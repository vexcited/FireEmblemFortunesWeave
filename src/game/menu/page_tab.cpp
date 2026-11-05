#pragma GCC visibility push(hidden)
#include "game/menu/page_tab.hpp"
#pragma GCC visibility pop

#include <memory>

#include "game/util/format.hpp"
#include "ui/layout_accessor.hpp"
#include "ui/ui2d.hpp"

namespace game::gameui {

// Plays the move animation of the left or right arrow of a page tab part.
void PlayPageTabArrow(ui::LayoutAccessor* part, bool left);

}

namespace game::menu {

// Rows of the default, current and third animation of a tab per style.
[[gnu::visibility("hidden")]] extern const char* const kTabAnimations[][3];
const char* const kTabAnimations[][3] = {
  {"Default", "Select", "Decide"},
  {"Default_Ex", "Select_Ex", "Decide_Ex"},
  {"Default", "Disable", "Shortage"},
  {"Accent", "Guide", "Bad"},
  {"Normal", "Good", "VeryGood"},
  {"Bad", "VeryGood", "N_Mastery00"},
};

namespace {

void SetTabText(ui::LayoutAccessor& tab, const char16_t* text) {
  if (text == nullptr) {
    return;
  }
  if (nn::ui2d::TextBox* box = tab.FindTextBox("T_Txt")) {
    ui::SetTextBoxString(box, text, false);
  }
}

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

void PageTab::SetupImage(const std::weak_ptr<ui::LayoutAccessor>& part,
  const Image& image, int unknown0, int unknown1, int unknown2) {
  std::shared_ptr<ui::LayoutAccessor> locked = part.lock();
  if (!locked) {
    return;
  }

  mode_ = kModeImage;
  part_ = part;
  for (int i = 0; i <= count_; i++) {
    ui::LayoutAccessor& tab = locked->FindPart(util::Format("L_Tab%02d", i));
    nn::ui2d::Pane* pane = tab.FindPane("Img");
    nn::ui2d::Picture* picture = dynamic_cast<nn::ui2d::Picture*>(pane);
    if (image) {
      image(picture, GetPage(i));
    }
  }
  Refresh(unknown0, unknown1, unknown2);
}

void PageTab::SetupLabel(const std::weak_ptr<ui::LayoutAccessor>& part,
  const Label& label, int unknown0, int unknown1, int unknown2) {
  if (std::shared_ptr<ui::LayoutAccessor> locked = part.lock()) {
    mode_ = kModeLabel;
    part_ = part;
    label_ = label;
    Refresh(unknown0, unknown1, unknown2);
  }
}

void PageTab::SetupText(const std::weak_ptr<ui::LayoutAccessor>& part,
  const Label& label, int unknown0, int unknown1, int unknown2) {
  std::shared_ptr<ui::LayoutAccessor> locked = part.lock();
  if (!locked) {
    return;
  }

  mode_ = kModeText;
  part_ = part;
  for (int i = 0; i <= count_; i++) {
    if (!label) {
      continue;
    }
    ui::LayoutAccessor& tab = locked->FindPart(util::Format("L_Tab%02d", i));
    gameui::Message::StringArg text = label(GetPage(i));
    SetTabText(tab, text.Get());
  }
  Refresh(unknown0, unknown1, unknown2);
}

void PageTab::Update() {
  std::shared_ptr<ui::LayoutAccessor> part = part_.lock();
  if (!part) {
    return;
  }

  for (int i = 0; i <= count_; i++) {
    bool current = i == index_;
    std::shared_ptr<ui::LayoutAccessor> tab =
      part->GetPart(util::Format("L_Tab%02d", i)).lock();
    if (tab) {
      tab->PlayAnimation(kTabAnimations[kind_][current], 1.0f);
    }
    if (mode_ == kModeLabel && current && label_) {
      gameui::Message::StringArg text = label_(GetPage(i));
      SetTabText(*part, text.Get());
    }
  }
}

}
