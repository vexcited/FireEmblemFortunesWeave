#include "libc/cxx_guard.hpp"

#include "nn/os/synchronization.hpp"

extern "C" {
extern nn::os::SdkMutexType CxxGuardMutex;
extern nn::os::SdkConditionVariableType CxxGuardCondition;
}

extern "C" int __cxa_guard_acquire(uint64_t* guard) {
  auto* bytes = reinterpret_cast<uint8_t*>(guard);

  if (__atomic_load_n(bytes, __ATOMIC_ACQUIRE)) {
    return 0;
  }

  CxxGuardMutex.Lock();

  while (bytes[1] & 2) {
    bytes[1] |= 4;
    CxxGuardCondition.Wait(CxxGuardMutex);
  }

  int acquired = bytes[1] != 1;

  if (acquired) {
    bytes[1] = 2;
  }

  CxxGuardMutex.Unlock();
  return acquired;
}

extern "C" void __cxa_guard_release(uint64_t* guard) {
  auto* bytes = reinterpret_cast<uint8_t*>(guard);
  __atomic_store_n(bytes, uint8_t(1), __ATOMIC_RELEASE);
  CxxGuardMutex.Lock();
  uint8_t previous = bytes[1];
  bytes[1] = 1;
  CxxGuardMutex.Unlock();

  if (previous & 4) {
    CxxGuardCondition.Broadcast();
  }
}

extern "C" void __cxa_guard_abort(uint64_t* guard) {
  auto* bytes = reinterpret_cast<uint8_t*>(guard);
  CxxGuardMutex.Lock();
  uint8_t previous = bytes[1];
  bytes[1] = 0;
  CxxGuardMutex.Unlock();

  if (previous & 4) {
    CxxGuardCondition.Broadcast();
  }
}
