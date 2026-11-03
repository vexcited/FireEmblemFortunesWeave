#pragma once

#include "nn/os/timer_event.hpp"

namespace nn::os {

struct EventType {
  detail::MultiWaitListNode waiters;
  uint8_t signaled;
  uint8_t initially_signaled;
  uint8_t clear_mode;
  uint8_t initialized;
  uint32_t signal_count_low;
  uint32_t signal_count_high;
  detail::InternalCriticalSection lock;
  detail::InternalConditionVariableImplByHorizon condition;
};

void InitializeEvent(EventType* event, bool signaled, EventClearMode mode);
void FinalizeEvent(EventType* event);
void SignalEvent(EventType* event);
void ClearEvent(EventType* event);
void WaitEvent(EventType* event);
bool TryWaitEvent(EventType* event);
bool TimedWaitEvent(EventType* event, TimeSpan time);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder, EventType* event);

namespace detail {

struct MultiWaitHolderOfEvent : MultiWaitHolderBase {
  EventType* event;
  uintptr_t user_data;

  int IsSignaled() const;
  int AddToObjectList();
  void RemoveFromObjectList();
};

}
}
