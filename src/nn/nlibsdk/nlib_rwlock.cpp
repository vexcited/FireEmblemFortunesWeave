#include <stddef.h>
#include <stdint.h>

#include "nn/nlibsdk/posix_tls.hpp"

extern "C" {

int pthread_mutex_lock(void* mutex);
int pthread_mutex_unlock(void* mutex);
int pthread_mutex_trylock(void* mutex);
int pthread_mutex_init(void* mutex, const void* attribute);
int pthread_mutex_destroy(void* mutex);
int pthread_cond_init(void* condition, const void* attribute);
int pthread_cond_destroy(void* condition);
int pthread_cond_signal(void* condition);
int pthread_cond_broadcast(void* condition);
int pthread_cond_wait(void* condition, void* mutex);
int nnmem_nlib_mutex_recursive_timed_init(void* mutex);
int nnmem_nlib_mutex_trylock_for(void* mutex, int64_t duration);
int nnmem_nlib_epochtime(int64_t* pOutTime);
int nnmem_nlib_cond_wait_for(void* condition, void* mutex,
  int64_t duration);
int nnmem_nlib_cond_wait_until(void* condition, void* mutex,
  int64_t deadline);

}

namespace {

// Readers count their entries under the entry mutex and their exits under
// the exit mutex. A waiting writer stores minus the readers still inside as
// the exit count and is signaled when it reaches zero.
struct RwLock {
  int32_t readersIn;
  int32_t readersOut;
  int32_t writerDepth;
  uint32_t entryMutex[2];
  uint32_t exitMutex[2];
  uint32_t condition[2];
};

struct CondRwLock {
  uint32_t condition[2];
  uint32_t mutex[2];
};

}

extern "C" {

int nnmem_nlib_rwlock_wrlock(RwLock* lock);
int nnmem_nlib_rwlock_trywrlock_until(RwLock* lock, int64_t deadline);

}

namespace {

using nn::nlibsdk::NotifyThreadPool;

constexpr int EBusy = 16;
constexpr int ETimedOut = 110;

[[gnu::always_inline]] inline void LockMutex(void* mutex) {
  NotifyThreadPool(1, 1);
  pthread_mutex_lock(mutex);
  NotifyThreadPool(1, 0);
}

[[gnu::noinline]] void LockForRebalance(void* mutex) {
  LockMutex(mutex);
}

// Entries are rebased on the exits before the count overflows.
[[gnu::always_inline]] inline void EnterReader(RwLock* lock) {
  if (++lock->readersIn == INT32_MAX) {
    LockForRebalance(lock->exitMutex);
    lock->readersIn -= lock->readersOut;
    lock->readersOut = 0;
    pthread_mutex_unlock(lock->exitMutex);
  }
  pthread_mutex_unlock(lock->entryMutex);
}

[[gnu::always_inline]] inline int ExitReader(RwLock* lock) {
  LockMutex(lock->exitMutex);
  int result = 0;
  if (++lock->readersOut == 0) {
    result = pthread_cond_signal(lock->condition);
  }
  pthread_mutex_unlock(lock->exitMutex);
  return result;
}

// Returns the readers still inside once the exits are folded in.
[[gnu::always_inline]] inline int32_t FoldReaders(RwLock* lock) {
  int32_t inside = lock->readersIn;
  if (lock->readersOut >= 1) {
    inside -= lock->readersOut;
    lock->readersIn = inside;
    lock->readersOut = 0;
  }
  return inside;
}

[[gnu::always_inline]] inline void UnlockWriter(RwLock* lock) {
  pthread_mutex_unlock(lock->exitMutex);
  pthread_mutex_unlock(lock->entryMutex);
}

template <typename Wait>
[[gnu::always_inline]] inline int WaitCondition(CondRwLock* condition,
  RwLock* lock, bool isReader, Wait wait) {
  LockMutex(condition->mutex);
  if (isReader) {
    ExitReader(lock);
  }
  else {
    --lock->writerDepth;
    UnlockWriter(lock);
  }
  int result = wait();
  pthread_mutex_unlock(condition->mutex);
  if (isReader) {
    LockMutex(lock->entryMutex);
    EnterReader(lock);
  }
  else {
    nnmem_nlib_rwlock_wrlock(lock);
  }
  return result;
}

}

extern "C" {

int nnmem_nlib_rwlock_init(RwLock* lock) {
  int result = nnmem_nlib_mutex_recursive_timed_init(lock->entryMutex);
  if (result != 0) {
    return result;
  }
  result = nnmem_nlib_mutex_recursive_timed_init(lock->exitMutex);
  if (result != 0) {
    pthread_mutex_destroy(lock->entryMutex);
    return result;
  }
  result = pthread_cond_init(lock->condition, nullptr);
  if (result != 0) {
    pthread_mutex_destroy(lock->entryMutex);
    pthread_mutex_destroy(lock->exitMutex);
    return result;
  }
  lock->readersIn = 0;
  lock->readersOut = 0;
  lock->writerDepth = 0;
  return 0;
}

int nnmem_nlib_rwlock_destroy(RwLock* lock) {
  int entryResult = pthread_mutex_destroy(lock->entryMutex);
  int exitResult = pthread_mutex_destroy(lock->exitMutex);
  int conditionResult = pthread_cond_destroy(lock->condition);
  if (entryResult != 0) {
    return entryResult;
  }
  return exitResult != 0 ? exitResult : conditionResult;
}

int nnmem_nlib_rwlock_rdlock(RwLock* lock) {
  LockMutex(lock->entryMutex);
  EnterReader(lock);
  return 0;
}

int nnmem_nlib_rwlock_tryrdlock(RwLock* lock) {
  int result = pthread_mutex_trylock(lock->entryMutex);
  if (result == 0) {
    EnterReader(lock);
  }
  return result;
}

int nnmem_nlib_rwlock_tryrdlock_for(RwLock* lock, int64_t duration) {
  int result = nnmem_nlib_mutex_trylock_for(lock->entryMutex, duration);
  if (result == 0) {
    EnterReader(lock);
  }
  return result;
}

int nnmem_nlib_rwlock_tryrdlock_until(RwLock* lock, int64_t deadline) {
  int64_t now = 0;
  int result = nnmem_nlib_epochtime(&now);
  if (result != 0) {
    return result;
  }
  result = nnmem_nlib_mutex_trylock_for(lock->entryMutex, deadline - now);
  if (result != 0) {
    return result;
  }
  EnterReader(lock);
  return 0;
}

int nnmem_nlib_rwlock_rdunlock(RwLock* lock) {
  return ExitReader(lock);
}

// Writers are recursive and wait for the readers inside to leave.
int nnmem_nlib_rwlock_wrlock(RwLock* lock) {
  LockMutex(lock->entryMutex);
  LockMutex(lock->exitMutex);
  int32_t depth = lock->writerDepth;
  if (depth == 0) {
    int32_t inside = FoldReaders(lock);
    if (inside >= 1) {
      lock->readersOut = -inside;
      for (;;) {
        NotifyThreadPool(1, 1);
        int result = pthread_cond_wait(lock->condition, lock->exitMutex);
        NotifyThreadPool(1, 0);
        if (result != 0) {
          UnlockWriter(lock);
          return result;
        }
        if (lock->readersOut >= 0) {
          break;
        }
      }
      lock->readersIn = 0;
    }
  }
  lock->writerDepth = depth + 1;
  return 0;
}

int nnmem_nlib_rwlock_trywrlock(RwLock* lock) {
  int result = pthread_mutex_trylock(lock->entryMutex);
  if (result != 0) {
    return result;
  }
  LockMutex(lock->exitMutex);
  int32_t depth = lock->writerDepth;
  if (depth == 0 && FoldReaders(lock) >= 1) {
    UnlockWriter(lock);
    return EBusy;
  }
  lock->writerDepth = depth + 1;
  return 0;
}

// A timeout gives the waiting readers back to the entry count.
int nnmem_nlib_rwlock_trywrlock_until(RwLock* lock, int64_t deadline) {
  int64_t now = 0;
  int result = nnmem_nlib_epochtime(&now);
  if (result != 0) {
    return result;
  }
  result = nnmem_nlib_mutex_trylock_for(lock->entryMutex, deadline - now);
  if (result != 0) {
    return result;
  }
  LockMutex(lock->exitMutex);
  int32_t depth = lock->writerDepth;
  if (depth == 0) {
    int32_t inside = FoldReaders(lock);
    if (inside >= 1) {
      lock->readersOut = -inside;
      for (;;) {
        result = nnmem_nlib_cond_wait_until(lock->condition, lock->exitMutex,
          deadline);
        if (result == ETimedOut) {
          lock->readersIn = -lock->readersOut;
          lock->readersOut = 0;
          UnlockWriter(lock);
          return ETimedOut;
        }
        if (result != 0) {
          UnlockWriter(lock);
          return result;
        }
        if (lock->readersOut >= 0) {
          break;
        }
      }
      depth = lock->writerDepth;
      lock->readersIn = 0;
    }
  }
  lock->writerDepth = depth + 1;
  return 0;
}

int nnmem_nlib_rwlock_trywrlock_for(RwLock* lock, int64_t duration) {
  int64_t now = 0;
  int result = nnmem_nlib_epochtime(&now);
  if (result != 0) {
    return result;
  }
  return nnmem_nlib_rwlock_trywrlock_until(lock, now + duration);
}

int nnmem_nlib_rwlock_wrunlock(RwLock* lock) {
  --lock->writerDepth;
  UnlockWriter(lock);
  return 0;
}

int nnmem_nlib_condrwlock_init(CondRwLock* condition) {
  pthread_cond_init(condition->condition, nullptr);
  pthread_mutex_init(condition->mutex, nullptr);
  return 0;
}

int nnmem_nlib_condrwlock_destroy(CondRwLock* condition) {
  pthread_cond_destroy(condition->condition);
  pthread_mutex_destroy(condition->mutex);
  return 0;
}

int nnmem_nlib_condrwlock_signal(CondRwLock* condition) {
  LockMutex(condition->mutex);
  pthread_cond_signal(condition->condition);
  pthread_mutex_unlock(condition->mutex);
  return 0;
}

int nnmem_nlib_condrwlock_broadcast(CondRwLock* condition) {
  LockMutex(condition->mutex);
  pthread_cond_broadcast(condition->condition);
  pthread_mutex_unlock(condition->mutex);
  return 0;
}

// The lock is released while waiting and taken again in the same mode.
int nnmem_nlib_condrwlock_wait(CondRwLock* condition, RwLock* lock,
  int isReader) {
  return WaitCondition(condition, lock, isReader != 0, [condition] {
    NotifyThreadPool(1, 1);
    int result = pthread_cond_wait(condition->condition, condition->mutex);
    NotifyThreadPool(1, 0);
    return result;
  });
}

int nnmem_nlib_condrwlock_wait_for(CondRwLock* condition, RwLock* lock,
  int64_t duration, int isReader) {
  return WaitCondition(condition, lock, isReader != 0, [=] {
    return nnmem_nlib_cond_wait_for(condition->condition, condition->mutex,
      duration);
  });
}

int nnmem_nlib_condrwlock_wait_until(CondRwLock* condition, RwLock* lock,
  int64_t deadline, int isReader) {
  return WaitCondition(condition, lock, isReader != 0, [=] {
    return nnmem_nlib_cond_wait_until(condition->condition, condition->mutex,
      deadline);
  });
}

}
