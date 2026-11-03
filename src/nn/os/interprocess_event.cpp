#include "nn/os/system_event.hpp"

#include <stddef.h>

extern "C" uint32_t svcCreateEvent(uint32_t* writable, uint32_t* readable);
extern "C" uint32_t svcCloseHandle(uint32_t handle);
extern "C" uint32_t svcSignalEvent(uint32_t handle);
extern "C" uint32_t svcClearEvent(uint32_t handle);
extern "C" uint32_t svcResetSignal(uint32_t handle);
extern "C" uint32_t svcWaitSynchronization(int* output, const uint32_t* handles,
                                           int count, int64_t timeout);

namespace nn::os::detail {

[[noreturn]] void AbortEventResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static_assert(sizeof(InterProcessEventType) == 32);
static_assert(offsetof(InterProcessEventType, auto_clear) == 16);
static_assert(offsetof(InterProcessEventType, readable) == 20);
static_assert(offsetof(InterProcessEventType, writable) == 24);
static_assert(sizeof(MultiWaitHolderOfInterProcessEvent) == 64);

Result CreateInterProcessEventHandles(uint32_t* writable, uint32_t* readable) {
  uint32_t first = 0;
  uint32_t second = 0;
  uint32_t result = svcCreateEvent(&first, &second);

  if (result) {
    uint32_t description = result & 0x3fffff;

    if (description == 0xce01) {
      return {0x1203};
    }

    if (description == 0x10801) {
      result = 0x1a03;
    }

    AbortEventResult(&result);
  }

  *writable = first;
  *readable = second;
  return {result};
}

Result CreateInterProcessEvent(InterProcessEventType* event,
                               EventClearMode mode) {
  uint32_t writable = 0;
  uint32_t readable = 0;
  Result result = CreateInterProcessEventHandles(&writable, &readable);

  if (result.value) {
    return result;
  }

  event->waiters.next = &event->waiters;
  event->waiters.previous = &event->waiters;
  event->readable = readable;
  event->writable = writable;
  event->owns_writable = 1;
  event->auto_clear = mode == EventClearMode_AutoClear;
  event->initialized = 1;
  event->owns_readable = 1;
  return result;
}

void AttachInterProcessEvent(InterProcessEventType* event, uint32_t readable,
                             bool owns_readable, uint32_t writable,
                             bool owns_writable, EventClearMode mode) {
  event->owns_readable = owns_readable;
  event->readable = readable;
  event->writable = writable;
  event->owns_writable = owns_writable;
  event->waiters.next = &event->waiters;
  event->waiters.previous = &event->waiters;
  event->auto_clear = mode == EventClearMode_AutoClear;
  event->initialized = 1;
}

void DestroyInterProcessEvent(InterProcessEventType* event) {
  event->initialized = 0;

  if (event->owns_readable == 1) {
    if (event->readable) {
      InterProcessEventImplByHorizon::Close(event->readable);
      event->readable = 0;
    }

    event->owns_readable = 0;
  }

  if (event->owns_writable == 1) {
    if (event->writable) {
      InterProcessEventImplByHorizon::Close(event->writable);
      event->writable = 0;
    }

    event->owns_writable = 0;
  }
}

uint32_t DetachReadableHandleOfInterProcessEvent(InterProcessEventType* event) {
  uint32_t handle = event->readable;
  event->readable = 0;
  event->owns_readable = 0;
  return handle;
}

uint32_t DetachWritableHandleOfInterProcessEvent(InterProcessEventType* event) {
  uint32_t handle = event->writable;
  event->writable = 0;
  event->owns_writable = 0;
  return handle;
}

uint32_t
GetReadableHandleOfInterProcessEvent(const InterProcessEventType* event) {
  return event->readable;
}

uint32_t
GetWritableHandleOfInterProcessEvent(const InterProcessEventType* event) {
  return event->writable;
}

void WaitInterProcessEvent(InterProcessEventType* event) {
  InterProcessEventImplByHorizon::Wait(event->readable, event->auto_clear & 1);
}

bool TryWaitInterProcessEvent(InterProcessEventType* event) {
  return InterProcessEventImplByHorizon::TryWait(event->readable,
                                                 event->auto_clear & 1);
}

bool TimedWaitInterProcessEvent(InterProcessEventType* event, TimeSpan time) {
  return InterProcessEventImplByHorizon::TimedWait(event->readable,
                                                   event->auto_clear & 1, time);
}

void SignalInterProcessEvent(InterProcessEventType* event) {
  InterProcessEventImplByHorizon::Signal(event->writable);
}

void ClearInterProcessEvent(InterProcessEventType* event) {
  InterProcessEventImplByHorizon::Clear(event->readable ? event->readable
                                                        : event->writable);
}

void InterProcessEventImplByHorizon::Close(uint32_t handle) {
  if (handle) {
    uint32_t result = svcCloseHandle(handle);

    if (result) {
      AbortEventResult(&result);
    }
  }
}

void InterProcessEventImplByHorizon::Signal(uint32_t handle) {
  uint32_t result = svcSignalEvent(handle);

  if (result) {
    AbortEventResult(&result);
  }
}

void InterProcessEventImplByHorizon::Clear(uint32_t handle) {
  uint32_t result = svcClearEvent(handle);

  if (result) {
    AbortEventResult(&result);
  }
}

void InterProcessEventImplByHorizon::Wait(uint32_t handle, bool auto_clear) {
  for (;;) {
    int index = 0;

    if (svcWaitSynchronization(&index, &handle, 1, -1)) {
      continue;
    }

    if (!auto_clear) {
      return;
    }

    uint32_t result = svcResetSignal(handle);

    if ((result & 0x3fffff) == 0xfa01) {
      continue;
    }

    if (result) {
      AbortEventResult(&result);
    }

    return;
  }
}

bool InterProcessEventImplByHorizon::TryWait(uint32_t handle, bool auto_clear) {
  if (auto_clear) {
    return svcResetSignal(handle) == 0;
  }

  for (;;) {
    int index = 0;
    uint32_t result = svcWaitSynchronization(&index, &handle, 1, 0);

    if (!result) {
      return true;
    }

    if ((result & 0x3fffff) == 0xea01) {
      return false;
    }
  }
}

bool InterProcessEventImplByHorizon::TimedWait(uint32_t handle, bool auto_clear,
                                               TimeSpan time) {
  TimeoutHelper timeout{0};

  if (time.nanoseconds) {
    uint64_t now;
    asm volatile("mrs %0, cntpct_el0" : "=r"(now) : : "memory");
    uint64_t end = now + uint64_t(ConvertToTick(time).value) + 1;
    timeout.deadline = end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end);
  }

  for (;;) {
    int index = 0;
    int64_t remaining = timeout.GetLeftTimeOnTarget();
    uint32_t result = svcWaitSynchronization(&index, &handle, 1, remaining);

    if (result) {
      if ((result & 0x3fffff) == 0xea01) {
        return false;
      }

      continue;
    }

    if (!auto_clear) {
      return true;
    }

    result = svcResetSignal(handle);

    if ((result & 0x3fffff) == 0xfa01) {
      continue;
    }

    if (result) {
      AbortEventResult(&result);
    }

    return true;
  }
}

int MultiWaitHolderOfInterProcessEvent::IsSignaled() const {
  return 2;
}

bool MultiWaitHolderOfInterProcessEvent::GetNativeHandle(
  uint32_t* output) const {
  *output = event->readable;
  return true;
}

}
