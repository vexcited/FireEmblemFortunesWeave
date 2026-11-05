#pragma once

#include <stdint.h>

#include "nn/os/event.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

struct LightEventType {
  bool isAutoClear;
  bool isInitialized;
  uint32_t state;
};

void InitializeLightEvent(LightEventType* event, bool isSignaled,
  EventClearMode clearMode);
void FinalizeLightEvent(LightEventType* event);
void SignalLightEvent(LightEventType* event);
void WaitLightEvent(LightEventType* event);
bool TryWaitLightEvent(LightEventType* event);
bool TimedWaitLightEvent(LightEventType* event, TimeSpan timeout);
void ClearLightEvent(LightEventType* event);

class LightEvent {
public:
  LightEvent(bool isSignaled, EventClearMode clearMode) {
    InitializeLightEvent(&m_LightEvent, isSignaled, clearMode);
  }

  ~LightEvent() {
    FinalizeLightEvent(&m_LightEvent);
  }

  void Signal() {
    SignalLightEvent(&m_LightEvent);
  }

  void Wait() {
    WaitLightEvent(&m_LightEvent);
  }

  bool TimedWait(TimeSpan timeout) {
    return TimedWaitLightEvent(&m_LightEvent, timeout);
  }

  LightEventType* GetBase() {
    return &m_LightEvent;
  }

private:
  LightEventType m_LightEvent;
  uint64_t m_Reserved;
};

}
