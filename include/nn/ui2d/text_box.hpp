#pragma once

#include <cstdint>

#include "ui/ui2d.hpp"

namespace nn::font {

class Font;

}

namespace nn::ui2d {

class TextBox : public Pane {
public:
  ~TextBox() override;

  void SetString(const char16_t* text, uint16_t index = 0);

  const font::Font* GetFont() const {
    return font_;
  }

private:
  uint8_t unknown_c9_[0xf];
  const font::Font* font_;
};

}
