#pragma once

#include <algorithm>
#include <cstdint>
#include <list>

#include "ui/event_listener.hpp"

namespace ui {

#pragma GCC visibility push(hidden)

class Manager {
public:
  static Manager* instance_;

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
};

#pragma GCC visibility pop

}
