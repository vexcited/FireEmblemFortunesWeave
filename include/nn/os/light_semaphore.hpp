#pragma once

#include <stdint.h>

#include "nn/os/detail/internal_light_primitives.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

struct LightSemaphoreType {
  bool isInitialized;
  int32_t count;
  int32_t maxCount;
  uint32_t reserved_0c;
  detail::InternalBusyMutex lock;
  uint32_t reserved_14;
  detail::InternalLightEvent event;
};

void InitializeLightSemaphore(LightSemaphoreType* semaphore, int initialCount,
  int maxCount);
void FinalizeLightSemaphore(LightSemaphoreType* semaphore);
void AcquireLightSemaphore(LightSemaphoreType* semaphore);
bool TryAcquireLightSemaphore(LightSemaphoreType* semaphore);
bool TimedAcquireLightSemaphore(LightSemaphoreType* semaphore,
  TimeSpan timeout);
void ReleaseLightSemaphore(LightSemaphoreType* semaphore);
void ReleaseLightSemaphore(LightSemaphoreType* semaphore, int count);
int GetCurrentLightSemaphoreCount(const LightSemaphoreType* semaphore);

}
