#include "nn/os/reader_writer_lock.hpp"

extern "C" uint32_t svcArbitrateLock(uint32_t owner, uint32_t* lock,
  uint32_t requester);
extern "C" uint32_t svcArbitrateUnlock(uint32_t* lock);

namespace nn::os::detail {

[[noreturn]] void AbortReaderWriterLock()
  asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortReaderWriterLockResult(const uint32_t*)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

namespace {

using CombinedState = uint64_t __attribute__((__may_alias__));
constexpr uint64_t Readers = 0x3ff00000000ULL;
constexpr uint64_t WaitingReaders = 0xffc0000000000ULL;
constexpr uint64_t WaitingWriters = 0x3ff0000000000000ULL;
constexpr uint64_t Writer = 0x4000000000000000ULL;
constexpr uint32_t Waiter = 0x40000000;

uintptr_t Tls() {
  uintptr_t value;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(value));
  return value;
}

uintptr_t CurrentThread() {
  return *reinterpret_cast<const uintptr_t*>(Tls() + 0x1f8);
}

uint32_t CurrentHandle() {
  return *reinterpret_cast<const uint32_t*>(Tls() + 0x110);
}

uint64_t Load(const ReaderWriterLockType* lock) {
  return __atomic_load_n(reinterpret_cast<const CombinedState*>(lock),
    __ATOMIC_RELAXED);
}

bool Exchange(ReaderWriterLockType* lock, uint64_t& observed,
  uint64_t desired, int order) {
  return __atomic_compare_exchange_n(reinterpret_cast<CombinedState*>(lock),
    &observed, desired, false, order,
    order == __ATOMIC_ACQUIRE ? __ATOMIC_ACQUIRE : __ATOMIC_RELAXED);
}

uint64_t Combine(uint32_t low, uint32_t high) {
  return uint64_t(low) | (uint64_t(high) << 32);
}

InternalConditionVariableImplByHorizon* Condition(uint32_t* value) {
  return reinterpret_cast<InternalConditionVariableImplByHorizon*>(value);
}

void WaitForLock(ReaderWriterLockType* lock, uint32_t observed,
  uint32_t handle) {
  uint32_t result = svcArbitrateLock(observed & ~Waiter,
    &lock->lock.value, handle);

  if (result) {
    AbortReaderWriterLockResult(&result);
  }
}

void WakeLock(ReaderWriterLockType* lock) {
  uint32_t result = svcArbitrateUnlock(&lock->lock.value);

  if (result) {
    AbortReaderWriterLockResult(&result);
  }
}

void FinishWriteRelease(ReaderWriterLockType* lock, uint64_t observed) {
  lock->owner = 0;

  if (observed & WaitingWriters) {
    Condition(&lock->condition28)->Signal();
  }
  else if (observed & WaitingReaders) {
    Condition(&lock->condition24)->Broadcast();
  }

  for (;;) {
    bool wake = uint32_t(observed) & Waiter;
    uint64_t desired = observed &
      (wake ? 0xbfffffffffffffffULL : 0xbfffffff00000000ULL);

    if (Exchange(lock, observed, desired, __ATOMIC_RELEASE)) {
      if (wake) {
        WakeLock(lock);
      }

      return;
    }
  }
}

}

void ReaderWriterLockImplByHorizon::AcquireReadLockWriteLocked(
  ReaderWriterLockType* lock) {
  ++lock->counter0c;
}

void ReaderWriterLockImplByHorizon::AcquireReadLock(
  ReaderWriterLockType* lock) {
  if (lock->owner == CurrentThread()) {
    ++lock->counter0c;
    return;
  }

  uint32_t handle = CurrentHandle();
  uint64_t observed = Load(lock);
  bool registered = false;

  for (;;) {
    uint32_t high = observed >> 32;
    uint32_t low = observed;
    bool blocked = observed & (WaitingWriters | Writer);
    uint32_t next_high;
    uint32_t next_low;

    if (blocked) {
      next_high = registered ? high :
        ((high & 0xffc00) + 0x400) | (high & 0xfff003ff);
      next_low = low ? low | Waiter : handle;
    }
    else {
      next_high = registered ?
        ((high & 0xffc00) - 0x400) | (high & 0x800003ff) : high;
      next_high = ((next_high & 0x3ff) + 1) | (next_high & 0xfffffc00);
      next_low = low;
    }

    uint64_t desired = Combine(next_low, next_high);

    if (!Exchange(lock, observed, desired, __ATOMIC_ACQUIRE)) {
      continue;
    }

    if (!blocked) {
      return;
    }

    registered = true;

    if (low) {
      WaitForLock(lock, next_low, handle);
      observed = Load(lock);

      if (((uint32_t(observed) ^ handle) & ~Waiter) != 0) {
        continue;
      }
    }
    else {
      observed = desired;
    }

    break;
  }

  for (;;) {
    while (observed & WaitingWriters) {
      Condition(&lock->condition24)->Wait(&lock->lock);
      observed = Load(lock);
    }

    uint32_t high = observed >> 32;
    uint32_t next_high = ((high & 0xffc00) - 0x400) |
      (high & 0xc0000000) | ((high & 0x3ff) + 1);
    bool wake = uint32_t(observed) & Waiter;
    uint64_t desired = Combine(wake ? uint32_t(observed) : 0, next_high);

    if (Exchange(lock, observed, desired, __ATOMIC_RELEASE)) {
      if (wake) {
        WakeLock(lock);
      }

      return;
    }
  }
}

bool ReaderWriterLockImplByHorizon::TryAcquireReadLock(
  ReaderWriterLockType* lock) {
  if (lock->owner == CurrentThread()) {
    ++lock->counter0c;
    return true;
  }

  uint64_t observed = Load(lock);

  while (!(observed & (WaitingWriters | Writer))) {
    uint32_t high = observed >> 32;
    uint64_t desired = Combine(observed,
      ((high & 0x3ff) + 1) | (high & 0x800ffc00));

    if (Exchange(lock, observed, desired, __ATOMIC_ACQUIRE)) {
      return true;
    }
  }

  return false;
}

void ReaderWriterLockImplByHorizon::ReleaseReadLockWriteLocked(
  ReaderWriterLockType* lock) {
  uint32_t remaining = --lock->counter0c;
  uint64_t observed = Load(lock);

  if (!remaining && !lock->counter20) {
    FinishWriteRelease(lock, observed);
  }
}

void ReaderWriterLockImplByHorizon::ReleaseWriteLockImpl(
  ReaderWriterLockType* lock) {
  uint64_t observed = Load(lock);

  if (!lock->counter0c && !lock->counter20) {
    FinishWriteRelease(lock, observed);
  }
}

void ReaderWriterLockImplByHorizon::ReleaseReadLock(
  ReaderWriterLockType* lock) {
  if (lock->owner == CurrentThread()) {
    ReleaseReadLockWriteLocked(lock);
    return;
  }

  uint64_t observed = Load(lock);

  for (;;) {
    uint32_t high = observed >> 32;

    if ((high & 0x3ff) == 1 && (observed & WaitingWriters)) {
      break;
    }

    uint64_t desired = Combine(observed,
      ((high & 0x3ff) - 1) | (high & 0xfffffc00));

    if (Exchange(lock, observed, desired, __ATOMIC_RELEASE)) {
      return;
    }
  }

  uint32_t handle = CurrentHandle();

  for (;;) {
    uint32_t low = observed;
    uint32_t next_low = low ? low | Waiter : handle;
    uint64_t desired = Combine(next_low, observed >> 32);

    if (!Exchange(lock, observed, desired, __ATOMIC_ACQUIRE)) {
      continue;
    }

    if (next_low == handle) {
      break;
    }

    WaitForLock(lock, next_low, handle);
    observed = Load(lock);

    if (((uint32_t(observed) ^ handle) & ~Waiter) == 0) {
      break;
    }
  }

  uint64_t released;

  for (;;) {
    uint32_t high = observed >> 32;
    released = Combine(observed,
      ((high & 0x3ff) - 1) | (high & 0xfffffc00));

    if (Exchange(lock, observed, released, __ATOMIC_RELAXED)) {
      break;
    }
  }

  Condition(&lock->condition28)->Signal();
  observed = released;

  for (;;) {
    uint32_t retained = uint32_t(observed) & Waiter
      ? uint32_t(observed) : 0;
    uint64_t desired = Combine(retained, observed >> 32);

    if (Exchange(lock, observed, desired, __ATOMIC_RELEASE)) {
      if (retained & Waiter) {
        WakeLock(lock);
      }

      return;
    }
  }
}

void ReaderWriterLockImplByHorizon::AcquireWriteLock(
  ReaderWriterLockType* lock) {
  uintptr_t thread = CurrentThread();

  if (lock->owner == thread) {
    ++lock->counter20;
    return;
  }

  uint32_t handle = CurrentHandle();
  uint64_t observed = Load(lock);
  bool registered = false;

  for (;;) {
    uint32_t high = observed >> 32;
    uint32_t low = observed;
    uint32_t next_high;
    uint32_t next_low;
    bool available = !(low | (high & 0x3ff));

    if (available) {
      next_high = registered ?
        ((high & 0x3ff00000) - 0x100000) | (high & 0x800fffff) : high;
      next_high |= 0x40000000;
      next_low = handle;
    }
    else {
      next_high = registered ? high :
        ((high & 0x3ff00000) + 0x100000) | (high & 0xc00fffff);
      next_low = low ? low | Waiter : handle;
    }

    uint64_t desired = Combine(next_low, next_high);

    if (!Exchange(lock, observed, desired, __ATOMIC_ACQUIRE)) {
      continue;
    }

    if (available) {
      break;
    }

    registered = true;

    if (low) {
      WaitForLock(lock, next_low, handle);
      observed = Load(lock);

      if (((uint32_t(observed) ^ handle) & ~Waiter) != 0) {
        continue;
      }
    }
    else {
      observed = desired;
    }

    for (;;) {
      while (observed & Readers) {
        Condition(&lock->condition28)->Wait(&lock->lock);
        observed = Load(lock);
      }

      high = observed >> 32;
      desired = Combine(observed,
        ((high & 0x3ff00000) - 0x100000) | (high & 0x800ffc00) |
        0x40000000);

      if (Exchange(lock, observed, desired, __ATOMIC_ACQUIRE)) {
        break;
      }
    }

    break;
  }

  lock->owner = thread;
  ++lock->counter20;
}

bool ReaderWriterLockImplByHorizon::TryAcquireWriteLock(
  ReaderWriterLockType* lock) {
  uintptr_t thread = CurrentThread();

  if (lock->owner == thread) {
    ++lock->counter20;
    return true;
  }

  uint32_t handle = CurrentHandle();
  uint64_t observed = Load(lock);

  while (!(observed & 0x3ffffffffffULL)) {
    uint64_t desired = observed | Writer | handle;

    if (Exchange(lock, observed, desired, __ATOMIC_ACQUIRE)) {
      lock->owner = thread;
      ++lock->counter20;
      return true;
    }
  }

  return false;
}

void ReaderWriterLockImplByHorizon::ReleaseWriteLock(
  ReaderWriterLockType* lock) {
  uint32_t remaining = --lock->counter20;
  uint64_t observed = Load(lock);

  if (!(lock->counter0c | remaining)) {
    FinishWriteRelease(lock, observed);
  }
}

}

namespace nn::os {

using Implementation = detail::ReaderWriterLockImplByHorizon;

void FinalizeReaderWriterLock(ReaderWriterLockType* lock) {
  lock->initialized = 0;
  detail::FinalizeInternalCriticalSection(&lock->lock);
}

void AcquireReadLock(ReaderWriterLockType* lock) {
  Implementation::AcquireReadLock(lock);
}

bool TryAcquireReadLock(ReaderWriterLockType* lock) {
  return Implementation::TryAcquireReadLock(lock);
}

void ReleaseReadLock(ReaderWriterLockType* lock) {
  Implementation::ReleaseReadLock(lock);
}

void AcquireWriteLock(ReaderWriterLockType* lock) {
  Implementation::AcquireWriteLock(lock);
}

bool TryAcquireWriteLock(ReaderWriterLockType* lock) {
  return Implementation::TryAcquireWriteLock(lock);
}

void ReleaseWriteLock(ReaderWriterLockType* lock) {
  if (lock->owner != detail::CurrentThread()) {
    detail::AbortReaderWriterLock();
  }

  Implementation::ReleaseWriteLock(lock);
}

bool IsReadLockHeld(const ReaderWriterLockType* lock) {
  return (lock->state04 & 0x3ff) || lock->counter0c;
}

bool IsWriteLockHeldByCurrentThread(const ReaderWriterLockType* lock) {
  return lock->owner == detail::CurrentThread() && lock->counter20;
}

bool IsReaderWriterLockOwnerThread(const ReaderWriterLockType* lock) {
  return lock->owner == detail::CurrentThread();
}

Result GetReaderWriterLockOwnerThread(ThreadType** output,
  const ReaderWriterLockType* lock) {
  uintptr_t owner = lock->owner;

  if (!owner) {
    return {0x1c03};
  }

  *output = reinterpret_cast<ThreadType*>(owner);
  return {0};
}

}
