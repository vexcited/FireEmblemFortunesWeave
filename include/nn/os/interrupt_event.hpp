#pragma once

#include <stdint.h>

#include "nn/os/multi_wait.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

struct InterruptEventType;

namespace detail {

class InterruptEventImplByHorizon {
public:
  ~InterruptEventImplByHorizon();
  void Clear();
  void Wait();
  bool TryWait();
  bool TimedWait(TimeSpan timeout);

  uint32_t m_Handle;
  bool m_IsManualClear;
};

struct MultiWaitHolderOfInterruptEvent : MultiWaitHolderBase {
  InterruptEventType* event;
  uintptr_t userData;

  int IsSignaled() const;
  bool GetNativeHandle(uint32_t* handle) const;
};

}

struct InterruptEventType {
  detail::MultiWaitListNode multiWaitObjectList;
  uint8_t clearMode;
  uint8_t state;
  detail::InterruptEventImplByHorizon impl;
};

void FinalizeInterruptEvent(InterruptEventType* event);
void ClearInterruptEvent(InterruptEventType* event);
void WaitInterruptEvent(InterruptEventType* event);
bool TryWaitInterruptEvent(InterruptEventType* event);
bool TimedWaitInterruptEvent(InterruptEventType* event, TimeSpan timeout);
uint32_t GetInterruptEventHandle(const InterruptEventType* event);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder,
  InterruptEventType* event);

}
