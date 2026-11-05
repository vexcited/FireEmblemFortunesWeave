#pragma once

#include <algorithm>
#include <cstdint>
#include <list>

#include "ui/event_listener.hpp"

namespace nn::ui2d {

class Pane;

}

namespace ui {

#pragma GCC visibility push(hidden)

struct IconSize {
  IconSize(const IconSize& other)
    : width(other.width), height(other.height) {}

  uint16_t width;
  uint16_t height;
};

class IconTexture {
public:
  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual IconSize GetSize() const;
};

class IconTextures {
public:
  void Apply(nn::ui2d::Pane* pane, int index, int kind, const char* name);
  const IconTexture* Find(int kind, const char* name);
};

class Manager {
public:
  static Manager* instance_;

  IconTextures& GetIcons() {
    return icons_;
  }

  // Called by the embedded images once they are created.
  void Unknown1367b60();

  void RemoveEventListener(IEventListener* listener) {
    auto found = std::find(event_listeners_.begin(), event_listeners_.end(),
      listener);
    if (found != event_listeners_.end()) {
      event_listeners_.erase(found);
    }
  }

private:
  uint8_t unknown_0_[0x4d8];
  std::list<IEventListener*> event_listeners_;
  IconTextures icons_;
};

#pragma GCC visibility pop

}
