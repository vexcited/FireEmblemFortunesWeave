#include "nn/nlibsdk/posix_mutex.hpp"

#include <stddef.h>

namespace nn::nlibsdk {

static_assert(sizeof(PosixMutex) == 8);
static_assert(offsetof(PosixMutex, mutex) == 4);

[[noreturn]] void AbortPosixMutex() asm("_ZN2nn4diag6detail9AbortImplEv");

int InitializePosixMutex(PosixMutex* mutex,
  const PosixMutexAttributes* attributes) {
  uint32_t type = attributes ? attributes->value & 3 : 0;

  if (attributes && (type == 3 || (attributes->value & 0x80))) {
    return 22;
  }

  mutex->type = uint8_t(type);
  mutex->count = 0;
  mutex->initialized = 1;
  mutex->mutex.Initialize();
  return 0;
}

int DestroyPosixMutex(PosixMutex* mutex) {
  mutex->initialized = 0;
  return 0;
}

int LockPosixMutex(PosixMutex* mutex) {
  uint8_t type = mutex->type;
  bool owned = mutex->mutex.IsLockedByCurrentThread();

  if (type == 1) {
    if (owned && mutex->count == 0xffff) {
      return 11;
    }
  }
  else if (type == 0 || type == 2) {
    if (owned) {
      if (type == 2) {
        return 35;
      }

      AbortPosixMutex();
    }
  }
  else {
    return 22;
  }

  if (!owned) {
    mutex->mutex.Lock();
  }

  ++mutex->count;
  return 0;
}

int TryLockPosixMutex(PosixMutex* mutex) {
  uint8_t type = mutex->type;
  bool owned = mutex->mutex.IsLockedByCurrentThread();

  if (type == 1) {
    if (owned && mutex->count == 0xffff) {
      return 11;
    }
  }
  else if (type == 0 || type == 2) {
    if (owned) {
      return 16;
    }
  }
  else {
    return 22;
  }

  if (!owned && !mutex->mutex.TryLock()) {
    return 16;
  }

  ++mutex->count;
  return 0;
}

int UnlockPosixMutex(PosixMutex* mutex) {
  uint8_t type = mutex->type;

  if (type == 1 || type == 2) {
    if (!mutex->mutex.IsLockedByCurrentThread()) {
      return 1;
    }
  }
  else if (type != 0) {
    return 22;
  }

  if (--mutex->count == 0) {
    mutex->mutex.Unlock();
  }

  return 0;
}

int InitializePosixMutexAttributes(PosixMutexAttributes* attributes) {
  attributes->value = 0;
  return 0;
}

int DestroyPosixMutexAttributes(PosixMutexAttributes*) {
  return 0;
}

int GetPosixMutexType(const PosixMutexAttributes* attributes, int* type) {
  *type = int(attributes->value & 3);
  return 0;
}

int SetPosixMutexType(PosixMutexAttributes* attributes, int type) {
  if (uint32_t(type) > 2) {
    return 22;
  }

  attributes->value = (attributes->value & ~3U) | uint32_t(type);
  return 0;
}

int GetPosixMutexSharing(const PosixMutexAttributes* attributes, int* shared) {
  *shared = (attributes->value & 0x80) != 0;
  return 0;
}

int SetPosixMutexSharing(PosixMutexAttributes* attributes, int shared) {
  if (shared == 1) {
    return 95;
  }

  if (shared != 0) {
    return 22;
  }

  attributes->value &= ~0x80U;
  return 0;
}

}
