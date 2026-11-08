#include <errno.h>
#include <limits.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdint.h>
#include <threads.h>

#include "nn/diag/diag_abort.hpp"

namespace nn::os {

struct BarrierType;
struct ReaderWriterLockType;
struct SemaphoreType;
struct SdkMutexType;

void InitializeBarrier(BarrierType* barrier, int count);
void InitializeSemaphore(SemaphoreType* semaphore, int count, int maxCount);
bool IsWriteLockHeldByCurrentThread(const ReaderWriterLockType* lock);
void AcquireReadLock(ReaderWriterLockType* lock);
void ReleaseReadLock(ReaderWriterLockType* lock);
void ReleaseWriteLock(ReaderWriterLockType* lock);

struct SdkConditionVariableType {
  void Initialize();
  void Wait(SdkMutexType& mutex);
};

}

namespace {

struct Condition {
  uint8_t isInitialized;
  uint8_t reserved;
  uint16_t clock;
  nn::os::SdkConditionVariableType condition;
};

struct Mutex {
  uint8_t reserved;
  uint8_t type;
  uint16_t lockCount;
  uint8_t mutex[1];
};

struct Barrier {
  uint8_t barrier[0x14];
  uint32_t isSerialTaken;
};

constexpr uint8_t MutexType_ErrorCheck = 2;

template <typename T>
[[gnu::always_inline]] inline T* As(void* object) {
  return reinterpret_cast<T*>(object);
}

}

extern "C" {

int pthread_cond_init(pthread_cond_t* condition,
  const pthread_condattr_t* attribute) {
  uint32_t clock = 0;
  if (attribute != nullptr) {
    const uint32_t value = *reinterpret_cast<const uint32_t*>(attribute);
    if ((value & 0x80000000) != 0) {
      return EINVAL;
    }

    clock = value & 0x7fffffff;
    if ((clock & ~1u) == 2 || clock > 1) {
      return EINVAL;
    }
  }

  Condition* object = As<Condition>(condition);
  object->clock = clock;
  object->isInitialized = 1;
  object->reserved = 0;
  object->condition.Initialize();
  return 0;
}

int sem_init(sem_t* semaphore, int isShared, unsigned int value) {
  if (static_cast<int>(value) < 0) {
    errno = EINVAL;
    return -1;
  }

  if (isShared != 0) {
    errno = ENOSYS;
    return -1;
  }

  nn::os::InitializeSemaphore(As<nn::os::SemaphoreType>(semaphore), value,
    INT_MAX);
  return 0;
}

int pthread_barrier_init(pthread_barrier_t* barrier,
  const pthread_barrierattr_t* attribute, unsigned int count) {
  if (static_cast<int>(count) < 1 || (attribute != nullptr &&
    *reinterpret_cast<const int*>(attribute) != 0)) {
    return EINVAL;
  }

  nn::os::InitializeBarrier(As<nn::os::BarrierType>(barrier), count);
  As<Barrier>(barrier)->isSerialTaken = 0;
  return 0;
}

int pthread_rwlock_rdlock(pthread_rwlock_t* lock) {
  auto* object = As<nn::os::ReaderWriterLockType>(lock);
  if (nn::os::IsWriteLockHeldByCurrentThread(object)) {
    return EDEADLK;
  }

  nn::os::AcquireReadLock(object);
  return 0;
}

int pthread_rwlock_unlock(pthread_rwlock_t* lock) {
  auto* object = As<nn::os::ReaderWriterLockType>(lock);
  if (nn::os::IsWriteLockHeldByCurrentThread(object)) {
    nn::os::ReleaseWriteLock(object);
  }
  else {
    nn::os::ReleaseReadLock(object);
  }

  return 0;
}

int pthread_condattr_setclock(pthread_condattr_t* attribute,
  clockid_t clock) {
  if ((static_cast<uint32_t>(clock) & ~1u) == 2) {
    return EINVAL;
  }

  if (static_cast<uint32_t>(clock) >= 2) {
    return static_cast<uint32_t>(clock) < 12 ? ENOTSUP : EINVAL;
  }

  uint32_t* value = As<uint32_t>(attribute);
  *value = (*value & 0x80000000) | clock;
  return 0;
}

// The wait gives up the single lock the thread holds and takes it back.
int pthread_cond_wait(pthread_cond_t* condition, pthread_mutex_t* mutex) {
  Mutex* object = As<Mutex>(mutex);
  if (object->lockCount == 1) {
    object->lockCount = 0;
    As<Condition>(condition)->condition.Wait(
      *As<nn::os::SdkMutexType>(object->mutex));
    object->lockCount = object->lockCount + 1;
    return 0;
  }

  if (object->type == MutexType_ErrorCheck) {
    return EPERM;
  }

  nn::diag::detail::AbortImpl();
}

int mtx_init(mtx_t* mutex, int type) {
  if (mutex == nullptr) {
    return thrd_error;
  }

  pthread_mutexattr_t attribute;
  pthread_mutexattr_init(&attribute);
  if (static_cast<unsigned int>(type) > 1 ||
    pthread_mutexattr_settype(&attribute, type) != 0) {
    return thrd_error;
  }

  pthread_mutex_init(reinterpret_cast<pthread_mutex_t*>(mutex), &attribute);
  return thrd_success;
}

}
