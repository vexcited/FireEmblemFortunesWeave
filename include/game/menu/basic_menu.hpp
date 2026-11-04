#pragma once

#include <cstdint>
#include <vector>

namespace game::menu {

class BasicMenuItem;

class BasicMenu {
public:
  BasicMenu* GetParent() { return parent_ != nullptr ? parent_ : this; }
  BasicMenuItem* GetCurrentItem() { return current_; }

  void AddItem(BasicMenuItem* item);

  enum : uint32_t {
    kFlagCursorHidden = 1 << 2,
  };

  void SetCursorHidden(bool hidden) {
    flags_ = (flags_ & ~kFlagCursorHidden) | (hidden ? kFlagCursorHidden : 0);
  }

private:
  uint8_t unknown_00_[0x98];
  BasicMenu* parent_;
  uint8_t unknown_a0_[0x48];
  std::vector<BasicMenuItem*> items_;
  std::vector<BasicMenuItem*> visible_items_;
  uint8_t unknown_118_[0x38];
  BasicMenuItem* current_;
  uint8_t unknown_158_[0xc];
  uint32_t flags_;
};

}
