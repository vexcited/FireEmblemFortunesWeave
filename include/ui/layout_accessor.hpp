#pragma once

#include <memory>

#include "nn/ui2d/text_box.hpp"
#include "ui/layout.hpp"

namespace ui {

class LayoutAccessor {
public:
  static LayoutAccessor empty_;

  nn::ui2d::TextBox* FindTextBox(const char* name);
  void SetVisible(bool visible);
  void PlayAnimation(const char* name, float speed);
  bool HasAnimation(const char* name);
  void SetPaneVisible(const char* name, bool visible);

  void SetText(const char* name, const char16_t* text) {
    if (text == nullptr) {
      return;
    }
    if (nn::ui2d::TextBox* box = FindTextBox(name)) {
      box->SetString(text);
    }
  }

  bool IsValid() const {
    if (layout_ == nullptr) {
      return false;
    }
    if (std::shared_ptr<Layout> owner = owner_.lock()) {
      if (owner->GetLayout() == layout_) {
        return true;
      }
    }
    return !owner_.expired();
  }

  // Release builds keep the validity assertion as an optimization hint.
  nn::ui2d::Pane* GetRootPane() const {
    if (!IsValid()) {
      __builtin_unreachable();
    }
    return layout_->GetRootPane();
  }

private:
  std::weak_ptr<Layout> owner_;
  nn::ui2d::Layout* layout_ = nullptr;
};

}
