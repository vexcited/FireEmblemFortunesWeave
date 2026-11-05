#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>
#include <vector>

#include "ui/layout_accessor.hpp"

namespace game::menu {

// Page tabs switched with the shoulder buttons, with their arrow parts.
class PageTab {
public:
  void SetEnabled(bool enable);
  bool Move(int direction, bool loop);
  void Add(int page);

  int GetCount() const {
    return count_;
  }

  // The page shown at the current tab.
  int GetCurrent() const {
    if (static_cast<size_t>(index_) < order_.size()) {
      return order_[index_];
    }
    return index_;
  }

private:
  int32_t count_;
  int32_t index_;
  int32_t previous_;
  std::vector<int32_t> order_;
  uint8_t unknown_28_[0x38];
  std::weak_ptr<ui::LayoutAccessor> arrows_;
  uint8_t unknown_70_[0x10];
};

static_assert(sizeof(PageTab) == 0x80);

}
