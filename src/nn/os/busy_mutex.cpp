#include "nn/os/busy_mutex.hpp"

namespace nn::os {

void InitializeBusyMutex(BusyMutexType* mutex) {
  mutex->lock.value = 0;
  mutex->owner = nullptr;
  mutex->state = 1;
}

void FinalizeBusyMutex(BusyMutexType* mutex) {
  mutex->state = 0;
}

void LockBusyMutex(BusyMutexType* mutex) {
  mutex->lock.Lock();
}

bool TryLockBusyMutex(BusyMutexType* mutex) {
  return mutex->lock.TryLock();
}

void UnlockBusyMutex(BusyMutexType* mutex) {
  mutex->lock.Unlock();
}

}
