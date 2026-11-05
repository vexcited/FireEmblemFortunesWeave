#include "nn/os/light_semaphore.hpp"

namespace nn::os {

namespace {

// Takes one count, or clears the event so that waiters sleep until a release.
bool TryAcquireOrClear(LightSemaphoreType* semaphore) {
  semaphore->lock.Lock();
  const int count = semaphore->count;

  if (count > 0) {
    semaphore->count = count - 1;
  }
  else {
    semaphore->event.Clear();
  }

  semaphore->lock.Unlock();
  return count > 0;
}

}

void InitializeLightSemaphore(LightSemaphoreType* semaphore, int initialCount,
  int maxCount) {
  semaphore->count = initialCount;
  semaphore->maxCount = maxCount;
  semaphore->lock.value = 0;
  semaphore->event.state = initialCount > 0
    ? detail::InternalLightEvent::State_Signaled
    : detail::InternalLightEvent::State_NotSignaled;
  semaphore->isInitialized = true;
}

void FinalizeLightSemaphore(LightSemaphoreType* semaphore) {
  semaphore->isInitialized = false;
}

void AcquireLightSemaphore(LightSemaphoreType* semaphore) {
  while (!TryAcquireOrClear(semaphore)) {
    semaphore->event.WaitWithManualClear();
  }
}

bool TryAcquireLightSemaphore(LightSemaphoreType* semaphore) {
  semaphore->lock.Lock();
  const int count = semaphore->count;

  if (count != 0) {
    semaphore->count = count - 1;
  }

  semaphore->lock.Unlock();
  return count != 0;
}

bool TimedAcquireLightSemaphore(LightSemaphoreType* semaphore,
  TimeSpan timeout) {
  const detail::TimeoutHelper helper = detail::MakeLightTimeout(timeout);

  while (true) {
    if (TryAcquireOrClear(semaphore)) {
      return true;
    }

    if (detail::IsLightTimeoutExpired(helper)) {
      return false;
    }

    semaphore->event.TimedWaitWithManualClear(helper);
  }
}

void ReleaseLightSemaphore(LightSemaphoreType* semaphore) {
  semaphore->lock.Lock();
  ++semaphore->count;
  semaphore->lock.Unlock();
  semaphore->event.SignalWithManualClear();
}

void ReleaseLightSemaphore(LightSemaphoreType* semaphore, int count) {
  semaphore->lock.Lock();
  semaphore->count += count;
  semaphore->lock.Unlock();
  semaphore->event.SignalWithManualClear();
}

int GetCurrentLightSemaphoreCount(const LightSemaphoreType* semaphore) {
  auto* lock = const_cast<detail::InternalBusyMutex*>(&semaphore->lock);
  lock->Lock();
  const int count = semaphore->count;
  lock->Unlock();
  return count;
}

}
