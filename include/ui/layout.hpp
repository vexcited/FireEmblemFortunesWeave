#pragma once

#include <cstdint>
#include <memory>

#include "ui/ui2d.hpp"

namespace ui {

class Layout : public std::enable_shared_from_this<Layout> {
public:
  virtual ~Layout();

  nn::ui2d::Layout* GetLayout() {
    return loaded_ ? &layout_ : nullptr;
  }

private:
  bool loaded_;
  uint8_t unknown_19_[0x7f];
  nn::ui2d::Layout layout_;
};

}
