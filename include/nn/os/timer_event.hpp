#pragma once

#include "nn/os/multi_wait.hpp"

namespace nn::os {

enum EventClearMode { EventClearMode_ManualClear, EventClearMode_AutoClear };

struct TimerEventType {
  detail::MultiWaitListNode waiters;
  uint8_t initialized;
  uint8_t clear_mode;
  uint8_t signaled;
  uint8_t timer_mode;
  uint32_t signal_count_low;
  uint32_t signal_count_high;
  uint8_t reserved[4];
  int64_t next_wakeup;
  int64_t initial_delay;
  int64_t interval;
  detail::InternalCriticalSection lock;
  detail::InternalConditionVariableImplByHorizon condition;
};

void InitializeTimerEvent(TimerEventType* event, EventClearMode mode);
void FinalizeTimerEvent(TimerEventType* event);
void StartOneShotTimerEvent(TimerEventType* event, TimeSpan delay);
void StartPeriodicTimerEvent(TimerEventType* event, TimeSpan delay,
                             TimeSpan interval);
void StopTimerEvent(TimerEventType* event);
void SignalTimerEvent(TimerEventType* event);
void ClearTimerEvent(TimerEventType* event);
void WaitTimerEvent(TimerEventType* event);
bool TryWaitTimerEvent(TimerEventType* event);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder,
                               TimerEventType* event);

namespace detail {

struct MultiWaitHolderOfTimerEvent : MultiWaitHolderBase {
  TimerEventType* event;
  uintptr_t user_data;

  int IsSignaled() const;
  int AddToObjectList();
  void RemoveFromObjectList();
  int64_t GetAbsoluteTimeToWakeup() const;
};

TimeSpan SaturatedAdd(TimeSpan first, TimeSpan second);
void StopTimerUnsafe(TimerEventType* event);
bool UpdateSignalStateAndRecalcNextTimeToWakeupUnsafe(TimerEventType* event,
                                                      TimeSpan now);

}
}
