#include "nn/os/barrier.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"

// The POSIX objects start with the os object they wrap.
extern "C" int pthread_barrier_destroy(nn::os::BarrierType* barrier) {
  nn::os::FinalizeBarrier(barrier);
  return 0;
}

extern "C" int pthread_rwlock_destroy(nn::os::ReaderWriterLockType* lock) {
  nn::os::FinalizeReaderWriterLock(lock);
  return 0;
}

extern "C" int pthread_rwlock_wrlock(nn::os::ReaderWriterLockType* lock) {
  nn::os::AcquireWriteLock(lock);
  return 0;
}

extern "C" int sched_yield() {
  nn::os::YieldThread();
  return 0;
}

extern "C" int sem_destroy(nn::os::SemaphoreType* semaphore) {
  nn::os::FinalizeSemaphore(semaphore);
  return 0;
}

extern "C" int sem_post(nn::os::SemaphoreType* semaphore) {
  nn::os::ReleaseSemaphore(semaphore);
  return 0;
}

extern "C" int sem_wait(nn::os::SemaphoreType* semaphore) {
  nn::os::AcquireSemaphore(semaphore);
  return 0;
}
