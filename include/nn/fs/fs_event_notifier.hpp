#pragma once

#include "nn/fs/fs_result.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/timer_event.hpp"

namespace nn::fs {

class IEventNotifier {
public:
  virtual ~IEventNotifier() {}

  Result BindEvent(os::SystemEventType* event, os::EventClearMode clearMode) {
    return DoBindEvent(event, clearMode);
  }

private:
  virtual Result DoBindEvent(os::SystemEventType* event,
    os::EventClearMode clearMode) = 0;
};

}
