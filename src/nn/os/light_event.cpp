#include "nn/os/light_event.hpp"

#include "nn/os/detail/internal_light_primitives.hpp"

namespace nn::os {

namespace {

detail::InternalLightEvent* GetImpl(LightEventType* event) {
  return reinterpret_cast<detail::InternalLightEvent*>(&event->state);
}

}

void InitializeLightEvent(LightEventType* event, bool isSignaled,
  EventClearMode clearMode) {
  event->isInitialized = true;
  event->isAutoClear = clearMode == EventClearMode_AutoClear;
  event->state = isSignaled ? detail::InternalLightEvent::State_Signaled
    : detail::InternalLightEvent::State_NotSignaled;
}

void FinalizeLightEvent(LightEventType* event) {
  event->isInitialized = false;
}

void SignalLightEvent(LightEventType* event) {
  if (event->isAutoClear) {
    GetImpl(event)->SignalWithAutoClear();
  }
  else {
    GetImpl(event)->SignalWithManualClear();
  }
}

void ClearLightEvent(LightEventType* event) {
  GetImpl(event)->Clear();
}

void WaitLightEvent(LightEventType* event) {
  if (event->isAutoClear) {
    GetImpl(event)->WaitWithAutoClear();
  }
  else {
    GetImpl(event)->WaitWithManualClear();
  }
}

bool TryWaitLightEvent(LightEventType* event) {
  if (event->isAutoClear) {
    return GetImpl(event)->TryWaitWithAutoClear();
  }

  return GetImpl(event)->TryWaitWithManualClear();
}

bool TimedWaitLightEvent(LightEventType* event, TimeSpan timeout) {
  const detail::TimeoutHelper helper = detail::MakeLightTimeout(timeout);

  if (event->isAutoClear) {
    return GetImpl(event)->TimedWaitWithAutoClear(helper);
  }

  return GetImpl(event)->TimedWaitWithManualClear(helper);
}

}
