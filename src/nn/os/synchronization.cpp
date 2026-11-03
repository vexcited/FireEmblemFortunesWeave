#include "nn/os/synchronization.hpp"

#include <stddef.h>

extern "C" uint32_t svcArbitrateLock(uint32_t owner, uint32_t* lock,
                                     uint32_t requester);
extern "C" uint32_t svcArbitrateUnlock(uint32_t* lock);

namespace nn::os::detail {

[[noreturn]] void AbortSynchronization() asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static_assert(sizeof(InternalCriticalSection) == 4);
static_assert(sizeof(InternalConditionVariableImplByHorizon) == 4);

static uint32_t CurrentThreadHandle() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<const uint32_t*>(tls + 0x110);
}

__attribute__((target("rcpc"))) static uint32_t
LoadLockAcquire(const uint32_t* lock) {
  uint32_t value;
  asm volatile("ldapr %w0, [%1]" : "=r"(value) : "r"(lock) : "memory");
  return value;
}

void InitializeInternalCriticalSection(InternalCriticalSectionType* state) {
  state->value = 0;
}

void EnterInternalCriticalSectionNoInline(InternalCriticalSectionType* state,
                                          uint32_t observed,
                                          uint32_t requester) {
  if ((observed & ~0x40000000u) == requester) {
    AbortSynchronization();
  }

  for (;;) {
    uint32_t current = observed;
    bool wait = true;

    if (!(observed & 0x40000000)) {
      __atomic_compare_exchange_n(&state->value, &current,
                                  observed | 0x40000000, false,
                                  __ATOMIC_RELAXED, __ATOMIC_RELAXED);
      wait = current == observed;
    }

    if (wait) {
      uint32_t result =
        svcArbitrateLock(observed & ~0x40000000u, &state->value, requester);

      if (result) {
        AbortResult(&result);
      }

      current = LoadLockAcquire(&state->value);

      if ((current & ~0x40000000u) == requester) {
        return;
      }
    }

    observed = current;

    if (!current) {
      __atomic_compare_exchange_n(&state->value, &observed, requester, false,
                                  __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);

      if (!observed) {
        return;
      }
    }
  }
}

void LeaveInternalCriticalSectionNoInline(InternalCriticalSectionType* state,
                                          uint32_t observed,
                                          uint32_t requester) {
  if (observed != (requester | 0x40000000)) {
    AbortSynchronization();
  }

  uint32_t result = svcArbitrateUnlock(&state->value);

  if (result) {
    AbortResult(&result);
  }
}

void InternalCriticalSection::Initialize() {
  InitializeInternalCriticalSection(&state);
}

void InternalCriticalSection::Enter() {
  uint32_t requester = CurrentThreadHandle();
  uint32_t observed = 0;
  __atomic_compare_exchange_n(&state.value, &observed, requester, false,
                              __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);

  if (observed) {
    EnterInternalCriticalSectionNoInline(&state, observed, requester);
  }
}

void InternalCriticalSection::Leave() {
  uint32_t requester = CurrentThreadHandle();
  uint32_t observed = requester;
  __atomic_compare_exchange_n(&state.value, &observed, 0, false,
                              __ATOMIC_RELEASE, __ATOMIC_RELAXED);

  if (observed != requester) {
    LeaveInternalCriticalSectionNoInline(&state, observed, requester);
  }
}

InternalConditionVariableImplByHorizon::
  InternalConditionVariableImplByHorizon() {
  value = 0;
}

}

namespace nn::os {

void ConstructConditionVariable(uint32_t* state) asm(
  "_ZN2nn2os6detail38InternalConditionVariableImplByHorizonC1Ev");

static_assert(sizeof(ReaderWriterLockType) == 48);
static_assert(offsetof(ReaderWriterLockType, condition24) == 36);
static_assert(offsetof(ReaderWriterLockType, owner) == 24);

void InitializeReaderWriterLock(ReaderWriterLockType* lock) {
  detail::InitializeInternalCriticalSection(&lock->lock);
  ConstructConditionVariable(&lock->condition24);
  ConstructConditionVariable(&lock->condition28);
  lock->counter20 = 0;
  lock->counter0c = 0;
  lock->owner = 0;
  lock->state04 &= 0x80000000;
  lock->initialized = 1;
}

}
