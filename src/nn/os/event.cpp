#include "nn/os/event.hpp"

#include <stddef.h>

namespace nn::os::detail {

extern const uintptr_t
  EventHolderVtable[] asm("_ZTVN2nn2os6detail22MultiWaitHolderOfEventE");

static_assert(sizeof(EventType) == 40);
static_assert(offsetof(EventType, signal_count_low) == 20);
static_assert(offsetof(EventType, lock) == 28);
static_assert(offsetof(EventType, condition) == 32);
static_assert(sizeof(MultiWaitHolderOfEvent) == 64);

int MultiWaitHolderOfEvent::IsSignaled() const {
  EventType* locked = event;
  locked->lock.Enter();
  int result = event->signaled;
  locked->lock.Leave();
  return result;
}

int MultiWaitHolderOfEvent::AddToObjectList() {
  EventType* locked = event;
  locked->lock.Enter();
  auto* end = &event->waiters;
  auto* original = object_node.next;
  object_node.next = end->next;
  original->previous = end;
  end->next->previous = &object_node;
  end->next = original;
  int result = event->signaled;
  locked->lock.Leave();
  return result;
}

void MultiWaitHolderOfEvent::RemoveFromObjectList() {
  EventType* locked = event;
  locked->lock.Enter();

  if (&object_node != &event->waiters) {
    auto* next = object_node.next;
    auto* previous = object_node.previous;
    auto* previous_next = previous->next;
    next->previous = previous;
    previous->next = object_node.next;
    previous_next->previous = &object_node;
    object_node.next = previous_next;
  }

  locked->lock.Leave();
}

static uint64_t EventSignalCount(const EventType* event) {
  uint64_t value;
  __builtin_memcpy(&value, &event->signal_count_low, sizeof(value));
  return value;
}

static TimeoutHelper EventTimeout(TimeSpan time) {
  if (!time.nanoseconds) {
    return {0};
  }

  uint64_t ticks;
  asm volatile("mrs %0, cntpct_el0" : "=r"(ticks) : : "memory");
  uint64_t end = ticks + uint64_t(ConvertToTick(time).value) + 1;
  return {end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end)};
}

}

namespace nn::os {

void InitializeEvent(EventType* event, bool signaled, EventClearMode mode) {
  event->lock.Initialize();
  event->condition.Initialize();
  event->waiters.next = &event->waiters;
  event->waiters.previous = &event->waiters;
  event->signaled = signaled;
  event->initially_signaled = signaled;
  event->clear_mode = uint8_t(mode);
  event->signal_count_low = 0;
  event->signal_count_high = 0;
  event->initialized = 1;
}

void FinalizeEvent(EventType* event) {
  event->initialized = 0;
  event->lock.Finalize();
}

void SignalEvent(EventType* event) {
  event->lock.Enter();

  if (!(event->signaled & 1)) {
    event->signaled = 1;

    if (event->clear_mode) {
      event->condition.Signal();
    }
    else {
      if (++event->signal_count_low == 0) {
        ++event->signal_count_high;
      }

      event->condition.Broadcast();
    }

    for (auto* node = event->waiters.previous; node != &event->waiters;
         node = node->previous) {
      auto* holder = reinterpret_cast<detail::MultiWaitHolderBase*>(
        reinterpret_cast<uint8_t*>(node) - 24);
      holder->owner->NotifyAndWakeupThread(holder);
    }
  }

  event->lock.Leave();
}

void ClearEvent(EventType* event) {
  event->lock.Enter();
  event->signaled = 0;
  event->lock.Leave();
}

void WaitEvent(EventType* event) {
  event->lock.Enter();

  if (!(event->signaled & 1)) {
    uint64_t count = detail::EventSignalCount(event);

    while (count == detail::EventSignalCount(event)) {
      event->condition.Wait(&event->lock.state);

      if (event->signaled) {
        break;
      }
    }
  }

  if (event->clear_mode == 1) {
    event->signaled = 0;
  }

  event->lock.Leave();
}

bool TryWaitEvent(EventType* event) {
  event->lock.Enter();
  bool result = event->signaled;

  if (event->clear_mode == 1) {
    event->signaled = 0;
  }

  event->lock.Leave();
  return result;
}

bool TimedWaitEvent(EventType* event, TimeSpan time) {
  auto timeout = detail::EventTimeout(time);
  event->lock.Enter();
  uint64_t count = detail::EventSignalCount(event);
  bool result;

  for (;;) {
    if ((event->signaled & 1) || count != detail::EventSignalCount(event)) {
      if (event->clear_mode == 1) {
        event->signaled = 0;
      }

      result = true;
      break;
    }

    if (event->condition.TimedWait(&event->lock.state, timeout) ==
        ConditionVariableStatus_Timeout) {
      result = false;
      break;
    }
  }

  event->lock.Leave();
  return result;
}

void InitializeMultiWaitHolder(MultiWaitHolderType* storage, EventType* event) {
  auto* holder = reinterpret_cast<detail::MultiWaitHolderOfEvent*>(storage);
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->owner = nullptr;
  holder->event = event;
  holder->user_data = 0;
  holder->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
    detail::EventHolderVtable + 2);
}

}
