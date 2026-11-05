#pragma once

#include <stdint.h>

#include "nn/os/event.hpp"
#include "nn/os/system_event.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

template <int EventCountMax, os::EventClearMode ClearMode>
class EventManager {
public:
  Result AcquireEvent(os::EventType* event);
  Result ReleaseEvent(os::EventType* event);

private:
  uint64_t m_Storage[EventCountMax + 2];
};

template <int EventCountMax, os::EventClearMode ClearMode,
  bool IsInterProcess>
class SystemEventManager {
public:
  Result AcquireSystemEvent(os::SystemEventType* event);
  Result ReleaseSystemEvent(os::SystemEventType* event);

private:
  uint64_t m_Storage[EventCountMax + 2];
};

}
