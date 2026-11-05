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

}
