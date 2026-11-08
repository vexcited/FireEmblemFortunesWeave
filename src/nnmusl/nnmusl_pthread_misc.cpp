#include <errno.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdint.h>
#include <time.h>

namespace nn::os {

struct BarrierType;
struct ReaderWriterLockType;
struct SemaphoreType;

void AwaitBarrier(BarrierType* barrier);
void InitializeReaderWriterLock(ReaderWriterLockType* lock);
bool IsWriteLockHeldByCurrentThread(const ReaderWriterLockType* lock);
bool TryAcquireReadLock(ReaderWriterLockType* lock);
bool TryAcquireWriteLock(ReaderWriterLockType* lock);
int GetCurrentSemaphoreCount(const SemaphoreType* semaphore);
bool TryAcquireSemaphore(SemaphoreType* semaphore);

struct SdkConditionVariableType {
  void Broadcast();
  void Signal();
};

}

namespace {

// The musl objects wrap the os primitives directly.
struct Barrier {
  uint8_t barrier[0x14];
  uint8_t isSerialTaken;
};

struct Condition {
  uint8_t isInitialized;
  uint8_t reserved;
  uint16_t clock;
  nn::os::SdkConditionVariableType condition;
};

template <typename T>
[[gnu::always_inline]] inline T* As(void* object) {
  return reinterpret_cast<T*>(object);
}

}

extern "C" {

[[gnu::visibility("hidden")]] int __nnmusl_cond_clockwait(
  pthread_cond_t* condition, pthread_mutex_t* mutex, clockid_t clock,
  const struct timespec* timeout);

// The first thread to leave the barrier is its serial thread.
int pthread_barrier_wait(pthread_barrier_t* barrier) {
  Barrier* object = As<Barrier>(barrier);
  object->isSerialTaken = 0;
  nn::os::AwaitBarrier(As<nn::os::BarrierType>(barrier));
  const uint8_t wasTaken = __atomic_exchange_n(&object->isSerialTaken, 1,
    __ATOMIC_RELAXED);
  return (wasTaken & 1) != 0 ? 0 : PTHREAD_BARRIER_SERIAL_THREAD;
}

int pthread_barrierattr_setpshared(pthread_barrierattr_t* attribute,
  int isShared) {
  if (isShared == 0) {
    *As<int>(attribute) = 0;
    return 0;
  }

  return isShared == 1 ? ENOTSUP : EINVAL;
}

int pthread_cond_destroy(pthread_cond_t* condition) {
  As<Condition>(condition)->isInitialized = 0;
  return 0;
}

int pthread_cond_timedwait(pthread_cond_t* condition, pthread_mutex_t* mutex,
  const struct timespec* timeout) {
  return __nnmusl_cond_clockwait(condition, mutex,
    As<Condition>(condition)->clock, timeout);
}

int pthread_cond_broadcast(pthread_cond_t* condition) {
  As<Condition>(condition)->condition.Broadcast();
  return 0;
}

int pthread_cond_signal(pthread_cond_t* condition) {
  As<Condition>(condition)->condition.Signal();
  return 0;
}

int pthread_condattr_setpshared(pthread_condattr_t* attribute, int isShared) {
  if (isShared == 0) {
    *As<uint32_t>(attribute) &= 0x7fffffff;
    return 0;
  }

  return isShared == 1 ? ENOTSUP : EINVAL;
}

int pthread_rwlock_init(pthread_rwlock_t* lock,
  const pthread_rwlockattr_t* attribute) {
  if (attribute != nullptr &&
    *reinterpret_cast<const int*>(attribute) != 0) {
    return EINVAL;
  }

  nn::os::InitializeReaderWriterLock(As<nn::os::ReaderWriterLockType>(lock));
  return 0;
}

int pthread_rwlock_tryrdlock(pthread_rwlock_t* lock) {
  auto* object = As<nn::os::ReaderWriterLockType>(lock);
  if (nn::os::IsWriteLockHeldByCurrentThread(object)) {
    return EBUSY;
  }

  return nn::os::TryAcquireReadLock(object) ? 0 : EBUSY;
}

int pthread_rwlock_trywrlock(pthread_rwlock_t* lock) {
  return nn::os::TryAcquireWriteLock(As<nn::os::ReaderWriterLockType>(lock)) ?
    0 : EBUSY;
}

int sem_getvalue(sem_t* semaphore, int* pOutValue) {
  const int count = nn::os::GetCurrentSemaphoreCount(
    As<nn::os::SemaphoreType>(semaphore));
  *pOutValue = count < 0 ? 0 : count;
  return 0;
}

int sem_trywait(sem_t* semaphore) {
  if (nn::os::TryAcquireSemaphore(As<nn::os::SemaphoreType>(semaphore))) {
    return 0;
  }

  errno = EAGAIN;
  return -1;
}

}
