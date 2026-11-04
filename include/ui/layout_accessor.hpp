#pragma once

#include <memory>

#include "nn/ui2d/text_box.hpp"

namespace ui {

class Layout;

class LayoutAccessor {
public:
  static LayoutAccessor empty_;

  nn::ui2d::TextBox* FindTextBox(const char* name);

  void SetText(const char* name, const char16_t* text) {
    if (text == nullptr) {
      return;
    }
    if (nn::ui2d::TextBox* box = FindTextBox(name)) {
      box->SetString(text);
    }
  }

private:
  std::weak_ptr<Layout> layout_;
  void* pane_ = nullptr;
};

}
