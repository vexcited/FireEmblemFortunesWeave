#pragma once

#include <stdint.h>

#include "nn/os/detail/internal_light_primitives.hpp"

namespace nn::os {

struct ThreadType;

struct BusyMutexType {
  uint8_t state;
  ThreadType* owner;
  detail::InternalBusyMutex lock;
};

void InitializeBusyMutex(BusyMutexType* mutex);
void FinalizeBusyMutex(BusyMutexType* mutex);
void LockBusyMutex(BusyMutexType* mutex);
bool TryLockBusyMutex(BusyMutexType* mutex);
void UnlockBusyMutex(BusyMutexType* mutex);

}
