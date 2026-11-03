#pragma once

#include "nn/os/synchronization.hpp"

namespace nn::nlibsdk {

struct PosixMutex {
  uint8_t initialized;
  uint8_t type;
  uint16_t count;
  os::SdkMutexType mutex;
};

struct PosixMutexAttributes {
  uint32_t value;
};

int InitializePosixMutex(PosixMutex* mutex,
  const PosixMutexAttributes* attributes) asm("pthread_mutex_init");
int DestroyPosixMutex(PosixMutex* mutex) asm("pthread_mutex_destroy");
int LockPosixMutex(PosixMutex* mutex) asm("pthread_mutex_lock");
int TryLockPosixMutex(PosixMutex* mutex) asm("pthread_mutex_trylock");
int UnlockPosixMutex(PosixMutex* mutex) asm("pthread_mutex_unlock");
int InitializePosixMutexAttributes(PosixMutexAttributes* attributes)
  asm("pthread_mutexattr_init");
int DestroyPosixMutexAttributes(PosixMutexAttributes* attributes)
  asm("pthread_mutexattr_destroy");
int GetPosixMutexType(const PosixMutexAttributes* attributes, int* type)
  asm("pthread_mutexattr_gettype");
int SetPosixMutexType(PosixMutexAttributes* attributes, int type)
  asm("pthread_mutexattr_settype");
int GetPosixMutexSharing(const PosixMutexAttributes* attributes, int* shared)
  asm("pthread_mutexattr_getpshared");
int SetPosixMutexSharing(PosixMutexAttributes* attributes, int shared)
  asm("pthread_mutexattr_setpshared");

}
