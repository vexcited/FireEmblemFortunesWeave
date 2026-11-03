#include "nn/os/system_event.hpp"

#include <stddef.h>

namespace nn::os::detail {

[[noreturn]] void AbortSystemEvent() asm("_ZN2nn4diag6detail9AbortImplEv");
extern const uintptr_t InterProcessEventVtable[] asm(
  "_ZTVN2nn2os6detail34MultiWaitHolderOfInterProcessEventE");

}

namespace nn::os {

static_assert(sizeof(SystemEventType) == 48);
static_assert(offsetof(SystemEventType, state) == 40);

static EventType* LocalEvent(SystemEventType* event) {
  return reinterpret_cast<EventType*>(event->storage);
}

static detail::InterProcessEventType* NativeEvent(SystemEventType* event) {
  return reinterpret_cast<detail::InterProcessEventType*>(event->storage);
}

static const detail::InterProcessEventType*
NativeEvent(const SystemEventType* event) {
  return reinterpret_cast<const detail::InterProcessEventType*>(event->storage);
}

Result CreateSystemEvent(SystemEventType* event, EventClearMode mode,
                         bool interprocess) {
  if (interprocess) {
    Result result = detail::CreateInterProcessEvent(NativeEvent(event), mode);

    if (result.value) {
      return result;
    }

    event->state = 2;
  }
  else {
    InitializeEvent(LocalEvent(event), false, mode);
    event->state = 1;
  }

  return {0};
}

void AttachSystemEvent(SystemEventType* event, uint32_t readable,
                       bool owns_readable, uint32_t writable,
                       bool owns_writable, EventClearMode mode) {
  detail::AttachInterProcessEvent(NativeEvent(event), readable, owns_readable,
                                  writable, owns_writable, mode);
  event->state = 2;
}

void AttachReadableHandleToSystemEvent(SystemEventType* event,
                                       uint32_t readable, bool owns_readable,
                                       EventClearMode mode) {
  AttachSystemEvent(event, readable, owns_readable, 0, false, mode);
}

void AttachWritableHandleToSystemEvent(SystemEventType* event,
                                       uint32_t writable, bool owns_writable,
                                       EventClearMode mode) {
  AttachSystemEvent(event, 0, false, writable, owns_writable, mode);
}

uint32_t DetachReadableHandleOfSystemEvent(SystemEventType* event) {
  return detail::DetachReadableHandleOfInterProcessEvent(NativeEvent(event));
}

uint32_t DetachWritableHandleOfSystemEvent(SystemEventType* event) {
  return detail::DetachWritableHandleOfInterProcessEvent(NativeEvent(event));
}

uint32_t GetReadableHandleOfSystemEvent(const SystemEventType* event) {
  return detail::GetReadableHandleOfInterProcessEvent(NativeEvent(event));
}

uint32_t GetWritableHandleOfSystemEvent(const SystemEventType* event) {
  return detail::GetWritableHandleOfInterProcessEvent(NativeEvent(event));
}

void DestroySystemEvent(SystemEventType* event) {
  uint8_t state = event->state;
  event->state = 0;

  switch (state) {
    case 1:
      FinalizeEvent(LocalEvent(event));
      return;
    case 2:
      detail::DestroyInterProcessEvent(NativeEvent(event));
      return;
    default:
      detail::AbortSystemEvent();
  }
}

void WaitSystemEvent(SystemEventType* event) {
  switch (event->state) {
    case 1:
      WaitEvent(LocalEvent(event));
      return;
    case 2:
      detail::WaitInterProcessEvent(NativeEvent(event));
      return;
    default:
      detail::AbortSystemEvent();
  }
}

bool TryWaitSystemEvent(SystemEventType* event) {
  switch (event->state) {
    case 1:
      return TryWaitEvent(LocalEvent(event));
    case 2:
      return detail::TryWaitInterProcessEvent(NativeEvent(event));
    default:
      detail::AbortSystemEvent();
  }
}

bool TimedWaitSystemEvent(SystemEventType* event, TimeSpan time) {
  switch (event->state) {
    case 1:
      return TimedWaitEvent(LocalEvent(event), time);
    case 2:
      return detail::TimedWaitInterProcessEvent(NativeEvent(event), time);
    default:
      detail::AbortSystemEvent();
  }
}

void SignalSystemEvent(SystemEventType* event) {
  switch (event->state) {
    case 1:
      SignalEvent(LocalEvent(event));
      return;
    case 2:
      detail::SignalInterProcessEvent(NativeEvent(event));
      return;
    default:
      detail::AbortSystemEvent();
  }
}

void ClearSystemEvent(SystemEventType* event) {
  switch (event->state) {
    case 1:
      ClearEvent(LocalEvent(event));
      return;
    case 2:
      detail::ClearInterProcessEvent(NativeEvent(event));
      return;
    default:
      detail::AbortSystemEvent();
  }
}

void InitializeMultiWaitHolder(MultiWaitHolderType* holder,
                               SystemEventType* event) {
  if (event->state == 1) {
    InitializeMultiWaitHolder(holder, LocalEvent(event));
  }
  else if (event->state == 2) {
    auto* native =
      reinterpret_cast<detail::MultiWaitHolderOfInterProcessEvent*>(holder);
    native->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
      detail::InterProcessEventVtable + 2);
    native->multi_wait_node.next = &native->multi_wait_node;
    native->multi_wait_node.previous = &native->multi_wait_node;
    native->object_node.next = &native->object_node;
    native->object_node.previous = &native->object_node;
    native->owner = nullptr;
    native->event = NativeEvent(event);
    native->user_data = 0;
  }
  else {
    detail::AbortSystemEvent();
  }
}

}
