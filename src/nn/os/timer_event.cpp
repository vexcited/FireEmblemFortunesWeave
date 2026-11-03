#include "nn/os/timer_event.hpp"

#include <stddef.h>

namespace nn::os::detail {

[[noreturn]] void
UnexpectedTimerMode() asm("_ZN2nn6detail21UnexpectedDefaultImplEv");

extern const uintptr_t
  TimerHolderVtable[] asm("_ZTVN2nn2os6detail27MultiWaitHolderOfTimerEventE");

static_assert(sizeof(TimerEventType) == 64);
static_assert(offsetof(TimerEventType, signal_count_low) == 20);
static_assert(offsetof(TimerEventType, next_wakeup) == 32);
static_assert(offsetof(TimerEventType, lock) == 56);
static_assert(offsetof(TimerEventType, condition) == 60);
static_assert(sizeof(MultiWaitHolderOfTimerEvent) == 64);

TimeSpan SaturatedAdd(TimeSpan first, TimeSpan second) {
  uint64_t sum = uint64_t(first.nanoseconds) + uint64_t(second.nanoseconds);
  return {sum < uint64_t(INT64_MAX) ? int64_t(sum) : INT64_MAX};
}

void StopTimerUnsafe(TimerEventType* event) {
  event->next_wakeup = 0;
  event->timer_mode = 0;
}

bool UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(TimerEventType* event,
                                                      TimeSpan now) {
  if (!event->timer_mode) {
    return false;
  }

  if (event->timer_mode == 1) {
    if (event->next_wakeup >= now.nanoseconds) {
      return false;
    }

    event->next_wakeup = 0;
    event->signaled = 1;
    event->timer_mode = 0;
    return true;
  }

  if (event->timer_mode != 2) {
    UnexpectedTimerMode();
  }

  if (event->next_wakeup >= now.nanoseconds) {
    return false;
  }

  event->signaled = 1;
  uint64_t period = uint64_t(event->interval);
  int64_t next =
    SaturatedAdd({event->next_wakeup}, {event->interval}).nanoseconds;

  if (next < now.nanoseconds) {
    uint64_t elapsed =
      uint64_t(now.nanoseconds) - uint64_t(event->initial_delay);
    // AArch64 UDIV returns zero for a zero divisor.
    uint64_t quotient = period ? elapsed / period : 0;
    uint64_t advance = period * quotient + period;
    advance = advance < uint64_t(INT64_MAX) ? advance : uint64_t(INT64_MAX);
    next = SaturatedAdd({event->initial_delay}, {int64_t(advance)}).nanoseconds;
  }

  event->next_wakeup = next;
  return true;
}

int MultiWaitHolderOfTimerEvent::IsSignaled() const {
  TimerEventType* locked = event;
  locked->lock.Enter();
  UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(event, {owner->wait_time});
  int result = event->signaled;
  locked->lock.Leave();
  return result;
}

int MultiWaitHolderOfTimerEvent::AddToObjectList() {
  TimerEventType* locked = event;
  locked->lock.Enter();
  auto* end = &event->waiters;
  auto* original = object_node.next;
  object_node.next = end->next;
  original->previous = end;
  end->next->previous = &object_node;
  end->next = original;
  UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(event, {owner->wait_time});
  int result = event->signaled;
  locked->lock.Leave();
  return result;
}

void MultiWaitHolderOfTimerEvent::RemoveFromObjectList() {
  TimerEventType* locked = event;
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

int64_t MultiWaitHolderOfTimerEvent::GetAbsoluteTimeToWakeup() const {
  TimerEventType* locked = event;
  locked->lock.Enter();
  int64_t result = event->timer_mode ? event->next_wakeup : INT64_MAX;
  locked->lock.Leave();
  return result;
}

static uint64_t ReadTick() {
  uint64_t ticks;
  asm volatile("mrs %0, cntpct_el0" : "=r"(ticks) : : "memory");
  return ticks;
}

static TimeSpan ReadTime() {
  return ConvertToTimeSpan({int64_t(ReadTick())});
}

static uint64_t SignalCount(const TimerEventType* event) {
  uint64_t result;
  __builtin_memcpy(&result, &event->signal_count_low, sizeof(result));
  return result;
}

static void NotifyWaiters(TimerEventType* event, bool selected) {
  for (auto* node = event->waiters.previous; node != &event->waiters;
       node = node->previous) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 24);
    holder->owner->NotifyAndWakeupThread(selected ? holder : nullptr);
  }
}

static void PublishSignal(TimerEventType* event) {
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

  NotifyWaiters(event, true);
}

}

namespace nn::os {

void InitializeTimerEvent(TimerEventType* event, EventClearMode mode) {
  event->lock.Initialize();
  event->condition.Initialize();
  event->waiters.next = &event->waiters;
  event->waiters.previous = &event->waiters;
  event->clear_mode = uint8_t(mode);
  event->signaled = 0;
  event->timer_mode = 0;
  event->signal_count_low = 0;
  event->signal_count_high = 0;
  event->next_wakeup = 0;
  event->initial_delay = 0;
  event->interval = 0;
  event->initialized = 1;
}

void FinalizeTimerEvent(TimerEventType* event) {
  event->initialized = 0;
  event->lock.Finalize();
}

void StartOneShotTimerEvent(TimerEventType* event, TimeSpan delay) {
  event->lock.Enter();
  event->next_wakeup =
    detail::SaturatedAdd(detail::ReadTime(), delay).nanoseconds;
  event->initial_delay = delay.nanoseconds;
  event->interval = 0;
  event->timer_mode = 1;
  event->condition.Broadcast();
  detail::NotifyWaiters(event, false);
  event->lock.Leave();
}

void StartPeriodicTimerEvent(TimerEventType* event, TimeSpan delay,
                             TimeSpan interval) {
  event->lock.Enter();
  event->next_wakeup =
    detail::SaturatedAdd(detail::ReadTime(), delay).nanoseconds;
  event->initial_delay = delay.nanoseconds;
  event->interval = interval.nanoseconds;
  event->timer_mode = 2;
  event->condition.Broadcast();
  detail::NotifyWaiters(event, false);
  event->lock.Leave();
}

void StopTimerEvent(TimerEventType* event) {
  event->lock.Enter();
  detail::StopTimerUnsafe(event);
  event->condition.Broadcast();
  detail::NotifyWaiters(event, false);
  event->lock.Leave();
}

void SignalTimerEvent(TimerEventType* event) {
  event->lock.Enter();

  if (!(event->signaled & 1)) {
    detail::UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(
      event, detail::ReadTime());
    detail::PublishSignal(event);
  }

  event->lock.Leave();
}

void ClearTimerEvent(TimerEventType* event) {
  event->lock.Enter();

  if (detail::UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(
        event, detail::ReadTime())) {
    detail::PublishSignal(event);
  }

  event->signaled = 0;
  event->lock.Leave();
}

bool TryWaitTimerEvent(TimerEventType* event) {
  event->lock.Enter();

  if (detail::UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(
        event, detail::ReadTime())) {
    detail::PublishSignal(event);
  }

  bool result = event->signaled;

  if (event->clear_mode == 1) {
    event->signaled = 0;
  }

  event->lock.Leave();
  return result;
}

void WaitTimerEvent(TimerEventType* event) {
  event->lock.Enter();

  if (!(event->signaled & 1)) {
    uint64_t count = detail::SignalCount(event);

    for (;;) {
      if (count != detail::SignalCount(event)) {
        break;
      }

      TimeSpan now = detail::ReadTime();

      if (detail::UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(event,
                                                                   now)) {
        detail::PublishSignal(event);
        break;
      }

      if (event->timer_mode) {
        int64_t remaining =
          int64_t(uint64_t(event->next_wakeup) - uint64_t(now.nanoseconds));
        detail::TimeoutHelper timeout{0};

        if (remaining) {
          uint64_t ticks = detail::ReadTick();
          uint64_t end = ticks + uint64_t(ConvertToTick({remaining}).value) + 1;
          timeout.deadline =
            end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end);
        }

        event->condition.TimedWait(&event->lock.state, timeout);
      }
      else {
        event->condition.Wait(&event->lock.state);
      }

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

void InitializeMultiWaitHolder(MultiWaitHolderType* storage,
                               TimerEventType* event) {
  auto* holder =
    reinterpret_cast<detail::MultiWaitHolderOfTimerEvent*>(storage);
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->owner = nullptr;
  holder->event = event;
  holder->user_data = 0;
  holder->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
    detail::TimerHolderVtable + 2);
}

}
