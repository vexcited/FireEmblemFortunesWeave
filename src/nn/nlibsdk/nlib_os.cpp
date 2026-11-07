#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/nlibsdk/posix_tls.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/thread_manager.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

ThreadType* GetCurrentThread();
void SetMemoryPermission(uintptr_t address, size_t size,
  MemoryPermission permission);

}

extern "C" {

int pthread_barrier_wait(void* barrier);
int pthread_mutexattr_init(uint32_t* attribute);
int pthread_mutexattr_settype(uint32_t* attribute, int type);
int pthread_mutex_init(void* mutex, const uint32_t* attribute);
int pthread_join(unsigned long thread, void** pOutValue);
int pthread_setaffinity_np(unsigned long thread, size_t size,
  const void* set);
int pthread_getschedparam(unsigned long thread, int* pOutPolicy,
  int* pOutPriority);
int sched_get_priority_min(int policy);
int sched_get_priority_max(int policy);
[[noreturn]] void pthread_exit(void* value);

}

namespace {

using nn::nlibsdk::NotifyThreadPool;

constexpr int EAgain = 11;
constexpr int EInval = 22;
constexpr int ETimedOut = 110;
constexpr int EOpNotSupp = 95;
constexpr int MutexRecursive = 1;
constexpr int SemaphoreMaximum = 0xffff;

// Times are counted in units of 100 nanoseconds.
int64_t GetTime() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick()).nanoseconds /
    100;
}

int InitializeRecursiveMutex(void* mutex) {
  uint32_t attribute = 0;
  pthread_mutexattr_init(&attribute);
  pthread_mutexattr_settype(&attribute, MutexRecursive);
  return pthread_mutex_init(mutex, &attribute);
}

// Output goes nowhere, at most 1024 bytes are reported as written.
int WriteNowhere(size_t* pOutWritten, size_t size) {
  NotifyThreadPool(1, 1);
  *pOutWritten = size < 1024 ? size : 1024;
  NotifyThreadPool(1, 1);
  return 0;
}

}

extern "C" {

int nnmem_nlib_epochtime(int64_t* pOutTime) {
  *pOutTime = GetTime();
  return 0;
}

int nnmem_nlib_ticktime(int64_t* pOutTime) {
  *pOutTime = GetTime();
  return 0;
}

// Sleeps of 50 microseconds or more are shortened by 8 microseconds, and
// sleeps of a millisecond or more first take off the time spent measuring.
int nnmem_nlib_sleep(int64_t duration) {
  if (duration < 0) {
    return EInval;
  }
  NotifyThreadPool(1, 1);
  if (duration >= 10000) {
    int64_t start = GetTime();
    duration -= GetTime() - start;
    if (duration < 0) {
      goto done;
    }
  }
  if (duration > 499) {
    duration -= 80;
  }
  nn::os::SleepThread({100 * duration});

done:
  NotifyThreadPool(1, 1);
  return 0;
}

int nnmem_nlib_mprotect(void* address, size_t size, int protection) {
  int permission = protection & ((protection & 1) != 0 ? 3 : 2);
  uintptr_t begin = reinterpret_cast<uintptr_t>(address) & ~0xfffull;
  uintptr_t end = (reinterpret_cast<uintptr_t>(address) + size + 0xfff) &
    ~0xfffull;
  if (end > begin) {
    nn::os::SetMemoryPermission(begin, end - begin,
      static_cast<nn::os::MemoryPermission>(permission));
  }
  return 0;
}

int nnmem_nlib_barrier_wait(void* barrier) {
  NotifyThreadPool(1, 1);
  int result = pthread_barrier_wait(barrier);
  if (static_cast<unsigned int>(result + 1) < 2) {
    result = 0;
  }
  NotifyThreadPool(1, 1);
  return result;
}

int nnmem_nlib_mutex_recursive_init(void* mutex) {
  return InitializeRecursiveMutex(mutex);
}

int nnmem_nlib_mutex_recursive_timed_init(void* mutex) {
  return InitializeRecursiveMutex(mutex);
}

int nnmem_nlib_semaphore_init(nn::os::SemaphoreType* semaphore, int count) {
  if (count >= 0x10000) {
    return EInval;
  }
  nn::os::InitializeSemaphore(semaphore, count, SemaphoreMaximum);
  return 0;
}

int nnmem_nlib_semaphore_wait(nn::os::SemaphoreType* semaphore) {
  NotifyThreadPool(1, 1);
  nn::os::AcquireSemaphore(semaphore);
  NotifyThreadPool(1, 1);
  return 0;
}

int nnmem_nlib_semaphore_trywait(nn::os::SemaphoreType* semaphore) {
  return nn::os::TryAcquireSemaphore(semaphore) ? 0 : EAgain;
}

int nnmem_nlib_semaphore_trywait_for(nn::os::SemaphoreType* semaphore,
  int64_t duration) {
  NotifyThreadPool(1, 1);
  int result = nn::os::TimedAcquireSemaphore(semaphore, {100 * duration}) ?
    0 : ETimedOut;
  NotifyThreadPool(1, 1);
  return result;
}

// The previous count cannot be queried.
int nnmem_nlib_semaphore_post(nn::os::SemaphoreType* semaphore,
  int* pOutPreviousCount) {
  if (pOutPreviousCount != nullptr) {
    return EOpNotSupp;
  }
  nn::os::ReleaseSemaphore(semaphore);
  return 0;
}

int nnmem_nlib_semaphore_post_ex(nn::os::SemaphoreType* semaphore, int count,
  int* pOutPreviousCount) {
  if (pOutPreviousCount != nullptr) {
    return EOpNotSupp;
  }
  nn::os::ReleaseSemaphore(semaphore, count);
  return 0;
}

int nnmem_nlib_semaphore_destroy(nn::os::SemaphoreType* semaphore) {
  nn::os::FinalizeSemaphore(semaphore);
  return 0;
}

int nnmem_nlib_thread_join(unsigned long thread) {
  void* value = nullptr;
  return pthread_join(thread, &value);
}

int nnmem_nlib_thread_getid(int* pOutId) {
  *pOutId = static_cast<int>(reinterpret_cast<uintptr_t>(
    nn::os::GetCurrentThread()));
  return 0;
}

int nnmem_nlib_thread_getcpu(int* pOutCore) {
  *pOutCore = nn::os::GetCurrentCoreNumber();
  return 0;
}

int nnmem_nlib_thread_setaffinity(unsigned long thread, uint32_t mask) {
  uint64_t set = mask;
  return pthread_setaffinity_np(thread, sizeof(set), &set);
}

int nnmem_nlib_thread_getconcurrency(int* pOutCount) {
  *pOutCount = __builtin_popcountll(nn::os::GetThreadAvailableCoreMask());
  return 0;
}

int nnmem_nlib_thread_getpriority(unsigned long thread, int* pOutPriority) {
  struct {
    int policy;
    int priority;
  } schedule = {};
  int result = pthread_getschedparam(thread, &schedule.policy,
    &schedule.priority);
  if (result == 0) {
    *pOutPriority = schedule.priority;
  }
  return result;
}

int nnmem_nlib_thread_priority_min(int* pOutPriority) {
  *pOutPriority = sched_get_priority_min(0);
  return 0;
}

int nnmem_nlib_thread_priority_max(int* pOutPriority) {
  *pOutPriority = sched_get_priority_max(0);
  return 0;
}

[[noreturn]] void nnmem_nlib_thread_exit() {
  pthread_exit(nullptr);
}

int nnmem_nlib_write_stdout(size_t* pOutWritten, const void*, size_t size) {
  return WriteNowhere(pOutWritten, size);
}

int nnmem_nlib_write_stderr(size_t* pOutWritten, const void*, size_t size) {
  return WriteNowhere(pOutWritten, size);
}

// Backtraces are not available, the buffer is only cleared.
int nnmem_nlib_debug_backtrace(size_t*, void** buffer, size_t count) {
  if (count == 0) {
    return EInval;
  }
  memset(buffer, 0, sizeof(void*) * count);
  return EOpNotSupp;
}

int nnmem_nlib_debug_backtrace_gettext(char* string, size_t size,
  void* const*, size_t count) {
  if (size == 0 || count == 0) {
    return EInval;
  }
  *string = 0;
  return EOpNotSupp;
}

}

[[noreturn]] void nnmem_nlib_thread_exit_cpp() {
  pthread_exit(nullptr);
}
