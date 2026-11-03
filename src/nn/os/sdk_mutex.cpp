#include "nn/os/synchronization.hpp"

namespace nn::os::detail {

[[noreturn]] void AbortSynchronization() asm("_ZN2nn4diag6detail9AbortImplEv");

[[noreturn]] void TryEnterInternalCriticalSectionAbort(
  InternalCriticalSectionType*, uint32_t, uint32_t) {
  AbortSynchronization();
}

bool InternalCriticalSection::TryEnter() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  uint32_t requester = *reinterpret_cast<const uint32_t*>(tls + 0x110);
  uint32_t observed = 0;
  __atomic_compare_exchange_n(&state.value, &observed, requester, false,
                              __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);

  if (observed && (observed & ~0x40000000u) == requester) {
    TryEnterInternalCriticalSectionAbort(&state, observed, requester);
  }

  return observed == 0;
}

}

namespace nn::os {

void SdkMutexType::Initialize() {
  lock.Initialize();
}

void SdkMutexType::Lock() {
  lock.Enter();
}

bool SdkMutexType::TryLock() {
  return lock.TryEnter();
}

void SdkMutexType::Unlock() {
  lock.Leave();
}

}
