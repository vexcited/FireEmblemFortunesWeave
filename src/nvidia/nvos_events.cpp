#include <stdint.h>

#include "nn/os/event.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/os/timer_event.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_Timeout = 5,
  NvError_InsufficientMemory = 6,
};

enum NvOsEventKind : uint32_t {
  NvOsEventKind_System = 1,
  NvOsEventKind_Timer = 2,
  NvOsEventKind_User = 3,
};

// Each event owns one os object and a holder whose user data points back at
// the event, so a pool wait returns the event that fired.
struct NvOsEvent {
  uint32_t kind;
  uint32_t reserved;
  alignas(8) uint8_t storage[0x40];
  nn::os::MultiWaitHolderType holder;

  nn::os::SystemEventType* System() {
    return reinterpret_cast<nn::os::SystemEventType*>(storage + 8);
  }

  nn::os::TimerEventType* Timer() {
    return reinterpret_cast<nn::os::TimerEventType*>(storage);
  }

  nn::os::EventType* User() {
    return reinterpret_cast<nn::os::EventType*>(storage);
  }
};

static_assert(sizeof(NvOsEvent) == 0x88);

struct NvOsEventPool {
  alignas(8) uint8_t multiWait[0x30];
  int32_t count;
  NvOsEvent** events;

  nn::os::MultiWaitType* MultiWait() {
    return reinterpret_cast<nn::os::MultiWaitType*>(multiWait);
  }
};

static_assert(sizeof(NvOsEventPool) == 0x40);

extern "C" void* NvOsAlloc(uint64_t size);
extern "C" void NvOsFree(void* pointer);
extern "C" void* memset(void* destination, int value, uint64_t size);

void NvOsDrvQueryEvent(int32_t fd, uint32_t eventId,
  nn::os::SystemEventType* pOutEvent);

namespace {

const uint32_t NvOsWaitInfinite = UINT32_MAX;

// The waits scale milliseconds by a thousand only.
nn::TimeSpan WaitTimeout(uint32_t milliseconds) {
  return {static_cast<int64_t>(static_cast<uint64_t>(milliseconds) * 1000)};
}

}

extern "C" NvError NvOsEventPoolCreate(uint32_t count,
  NvOsEventPool** pOutPool) {
  const uint64_t size = sizeof(NvOsEventPool) +
    static_cast<uint64_t>(count) * sizeof(NvOsEvent*);
  auto* pool = static_cast<NvOsEventPool*>(NvOsAlloc(size));
  if (pool == nullptr) {
    return NvError_InsufficientMemory;
  }

  memset(pool, 0, size);
  pool->count = count;
  pool->events = reinterpret_cast<NvOsEvent**>(pool + 1);
  nn::os::InitializeMultiWait(pool->MultiWait());
  *pOutPool = pool;
  return NvSuccess;
}

extern "C" void NvOsEventPoolDestroy(NvOsEventPool* pool) {
  for (int64_t i = 0; i < pool->count; i++) {
    NvOsEvent* event = pool->events[i];
    if (event != nullptr) {
      nn::os::UnlinkMultiWaitHolder(&event->holder);
    }
  }

  nn::os::FinalizeMultiWait(pool->MultiWait());
  NvOsFree(pool);
}

extern "C" NvError NvOsEventPoolLink(NvOsEventPool* pool, NvOsEvent* event) {
  int32_t index = 0;
  for (; index < pool->count; index++) {
    if (pool->events[index] == nullptr) {
      break;
    }
  }

  if (index == pool->count) {
    return NvError_InsufficientMemory;
  }

  nn::os::LinkMultiWaitHolder(pool->MultiWait(), &event->holder);
  pool->events[index] = event;
  return NvSuccess;
}

extern "C" void NvOsEventPoolWait(NvOsEventPool* pool, uint32_t timeout,
  NvOsEvent** pOutEvent) {
  nn::os::MultiWaitHolderType* holder;
  if (timeout == NvOsWaitInfinite) {
    holder = nn::os::WaitAny(pool->MultiWait());
  }
  else if (timeout == 0) {
    holder = nn::os::TryWaitAny(pool->MultiWait());
  }
  else {
    holder = nn::os::TimedWaitAny(pool->MultiWait(), WaitTimeout(timeout));
  }

  *pOutEvent = holder != nullptr ? reinterpret_cast<NvOsEvent*>(
    nn::os::GetMultiWaitHolderUserData(holder)) : nullptr;
}

extern "C" NvError NvOsSystemEventCreate(int32_t fd, uint32_t eventId,
  NvOsEvent** pOutEvent) {
  auto* event = static_cast<NvOsEvent*>(NvOsAlloc(sizeof(NvOsEvent)));
  if (event == nullptr) {
    return NvError_InsufficientMemory;
  }

  event->kind = NvOsEventKind_System;
  NvOsDrvQueryEvent(fd, eventId, event->System());
  nn::os::InitializeMultiWaitHolder(&event->holder, event->System());
  nn::os::SetMultiWaitHolderUserData(&event->holder,
    reinterpret_cast<uintptr_t>(event));
  *pOutEvent = event;
  return NvSuccess;
}

extern "C" NvError NvOsTimerEventCreate(uint32_t milliseconds,
  NvOsEvent** pOutEvent) {
  auto* event = static_cast<NvOsEvent*>(NvOsAlloc(sizeof(NvOsEvent)));
  if (event == nullptr) {
    return NvError_InsufficientMemory;
  }

  event->kind = NvOsEventKind_Timer;
  nn::os::InitializeTimerEvent(event->Timer(),
    nn::os::EventClearMode_ManualClear);
  nn::os::StartOneShotTimerEvent(event->Timer(),
    {static_cast<int64_t>(static_cast<uint64_t>(milliseconds) * 1000000)});
  nn::os::InitializeMultiWaitHolder(&event->holder, event->Timer());
  nn::os::SetMultiWaitHolderUserData(&event->holder,
    reinterpret_cast<uintptr_t>(event));
  *pOutEvent = event;
  return NvSuccess;
}

extern "C" NvError NvOsUserEventCreate(NvOsEvent** pOutEvent) {
  auto* event = static_cast<NvOsEvent*>(NvOsAlloc(sizeof(NvOsEvent)));
  if (event == nullptr) {
    return NvError_InsufficientMemory;
  }

  event->kind = NvOsEventKind_User;
  nn::os::InitializeEvent(event->User(), false,
    nn::os::EventClearMode_ManualClear);
  nn::os::InitializeMultiWaitHolder(&event->holder, event->User());
  nn::os::SetMultiWaitHolderUserData(&event->holder,
    reinterpret_cast<uintptr_t>(event));
  *pOutEvent = event;
  return NvSuccess;
}

extern "C" NvError NvOsEventWait(NvOsEvent* event, uint32_t timeout) {
  const nn::TimeSpan span = WaitTimeout(timeout);

  switch (event->kind) {
    case NvOsEventKind_System:
      if (timeout == NvOsWaitInfinite) {
        nn::os::WaitSystemEvent(event->System());
        return NvSuccess;
      }

      if (!nn::os::TimedWaitSystemEvent(event->System(), span)) {
        return NvError_Timeout;
      }

      return NvSuccess;
    case NvOsEventKind_Timer:
      nn::os::WaitTimerEvent(event->Timer());
      return NvSuccess;
    case NvOsEventKind_User:
      if (timeout == NvOsWaitInfinite) {
        nn::os::WaitEvent(event->User());
        return NvSuccess;
      }

      if (!nn::os::TimedWaitEvent(event->User(), span)) {
        return NvError_Timeout;
      }

      return NvSuccess;
    default:
      return NvSuccess;
  }
}

extern "C" void NvOsEventDestroy(NvOsEvent* event) {
  switch (event->kind) {
    case NvOsEventKind_System:
      nn::os::DestroySystemEvent(event->System());
      break;
    case NvOsEventKind_Timer:
      nn::os::FinalizeTimerEvent(event->Timer());
      break;
    case NvOsEventKind_User:
      nn::os::FinalizeEvent(event->User());
      break;
  }

  nn::os::FinalizeMultiWaitHolder(&event->holder);
  NvOsFree(event);
}
