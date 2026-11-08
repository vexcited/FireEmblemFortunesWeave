#include "nn/os/synchronization.hpp"

namespace nn::os::detail {

void EnterInternalCriticalSectionNoInline(InternalCriticalSectionType* state,
  uint32_t observed, uint32_t requester);
void LeaveInternalCriticalSectionNoInline(InternalCriticalSectionType* state,
  uint32_t observed, uint32_t requester);

// Lockable adapter for the standard lock guards.
class InternalCriticalSectionWrapper {
 public:
  void lock();
  void unlock();

 private:
  InternalCriticalSection* m_pCriticalSection;
};

namespace {

[[gnu::always_inline]] inline uint32_t GetCurrentThreadHandle() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<const uint32_t*>(tls + 0x110);
}

}

void InternalCriticalSectionWrapper::lock() {
  InternalCriticalSectionType* pState = &m_pCriticalSection->state;
  const uint32_t requester = GetCurrentThreadHandle();
  uint32_t observed = 0;
  __atomic_compare_exchange_n(&pState->value, &observed, requester, false,
    __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  if (observed != 0) {
    EnterInternalCriticalSectionNoInline(pState, observed, requester);
  }
}

void InternalCriticalSectionWrapper::unlock() {
  InternalCriticalSectionType* pState = &m_pCriticalSection->state;
  const uint32_t requester = GetCurrentThreadHandle();
  uint32_t observed = requester;
  __atomic_compare_exchange_n(&pState->value, &observed, 0, false,
    __ATOMIC_RELEASE, __ATOMIC_RELAXED);
  if (observed != requester) {
    LeaveInternalCriticalSectionNoInline(pState, observed, requester);
  }
}

}
