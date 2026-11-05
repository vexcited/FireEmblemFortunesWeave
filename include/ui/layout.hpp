#pragma once

#include <cstdint>
#include <memory>

#include "ui/ui2d.hpp"

namespace ui {

class LayoutResource;

class Layout : public std::enable_shared_from_this<Layout> {
public:
  virtual ~Layout();

  // Loads the layout of an archive.
  static std::shared_ptr<Layout> Load(const char* archive, const char* name);

  // Shared by the accessors of one layout, keyed by the layout name.
  std::shared_ptr<LayoutResource> GetResource(nn::ui2d::Layout* layout);
  void Arrange();

  nn::ui2d::Layout* GetLayout() {
    return loaded_ ? &layout_ : nullptr;
  }

  bool IsVisible() const {
    return visible_;
  }

  void SetVisible(bool visible) {
    visible_ = visible;
  }

  void SetPriority(int priority) {
    priority_ = priority;
  }

  // Set when the process showing the layout goes away.
  void SetReleased() {
    released_ = true;
  }

private:
  bool loaded_;
  uint8_t unknown_19_[0x7f];
  nn::ui2d::Layout layout_;
  uint8_t unknown_d0_[0x870];
  bool visible_;
  int priority_;
  bool released_;
};

}
