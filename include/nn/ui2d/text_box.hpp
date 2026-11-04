#pragma once

#include <cstdint>

namespace nn::ui2d {

class TextBox {
public:
  void SetString(const char16_t* text, uint16_t index = 0);
};

}
