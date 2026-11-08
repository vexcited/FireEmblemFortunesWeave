#include "nn/os/condition_variable.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/time.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
  NvError_Timeout = 5,
  NvError_InsufficientMemory = 6,
};

extern "C" void* NvOsAlloc(size_t size);
extern "C" void NvOsFree(void* pointer);
extern "C" NvError NvOsTlsAllocWithDestructor(void (*destructor)(void*));

namespace {

[[gnu::always_inline]] inline nn::TimeSpan Nanoseconds(int64_t value) {
  return {value};
}

}

extern "C" NvError NvOsMutexCreate(nn::os::MutexType** pOutMutex) {
  auto* mutex = static_cast<nn::os::MutexType*>(
    NvOsAlloc(sizeof(nn::os::MutexType)));
  if (mutex == nullptr) {
    *pOutMutex = nullptr;
    NvOsFree(mutex);
    return NvError_InsufficientMemory;
  }

  nn::os::detail::ClearMutexMembers(mutex);
  nn::os::InitializeMutex(mutex, true, 0);
  *pOutMutex = mutex;
  return NvSuccess;
}

extern "C" void NvOsMutexLock(nn::os::MutexType* mutex) {
  nn::os::LockMutex(mutex);
}

extern "C" NvError NvOsMutexLockEx(nn::os::MutexType* mutex) {
  if (mutex == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::LockMutex(mutex);
  return NvSuccess;
}

extern "C" void NvOsMutexUnlock(nn::os::MutexType* mutex) {
  nn::os::UnlockMutex(mutex);
}

extern "C" NvError NvOsMutexUnlockEx(nn::os::MutexType* mutex) {
  if (mutex == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::UnlockMutex(mutex);
  return NvSuccess;
}

extern "C" void NvOsMutexDestroy(nn::os::MutexType* mutex) {
  if (mutex == nullptr) {
    return;
  }

  nn::os::FinalizeMutex(mutex);
  NvOsFree(mutex);
}

extern "C" NvError NvOsMutexDestroyEx(nn::os::MutexType* mutex) {
  if (mutex == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::FinalizeMutex(mutex);
  NvOsFree(mutex);
  return NvSuccess;
}

extern "C" NvError NvOsSemaphoreCreate(nn::os::SemaphoreType** pOutSemaphore,
  uint32_t count) {
  auto* semaphore = static_cast<nn::os::SemaphoreType*>(
    NvOsAlloc(sizeof(nn::os::SemaphoreType)));
  if (semaphore == nullptr) {
    return NvError_InsufficientMemory;
  }

  nn::os::InitializeSemaphore(semaphore, count, INT32_MAX);
  *pOutSemaphore = semaphore;
  return NvSuccess;
}

extern "C" void NvOsSemaphoreWait(nn::os::SemaphoreType* semaphore) {
  nn::os::AcquireSemaphore(semaphore);
}

extern "C" NvError NvOsSemaphoreWaitEx(nn::os::SemaphoreType* semaphore) {
  if (semaphore == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::AcquireSemaphore(semaphore);
  return NvSuccess;
}

extern "C" NvError NvOsSemaphoreWaitTimeout(nn::os::SemaphoreType* semaphore,
  uint32_t milliseconds) {
  return nn::os::TimedAcquireSemaphore(semaphore,
    Nanoseconds(1000000LL * milliseconds)) ? NvSuccess : NvError_Timeout;
}

extern "C" void NvOsSemaphoreSignal(nn::os::SemaphoreType* semaphore) {
  nn::os::ReleaseSemaphore(semaphore);
}

extern "C" NvError NvOsSemaphoreSignalEx(nn::os::SemaphoreType* semaphore) {
  if (semaphore == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::ReleaseSemaphore(semaphore);
  return NvSuccess;
}

extern "C" void NvOsSemaphoreDestroy(nn::os::SemaphoreType* semaphore) {
  nn::os::FinalizeSemaphore(semaphore);
  NvOsFree(semaphore);
}

extern "C" NvError NvOsSemaphoreDestroyEx(nn::os::SemaphoreType* semaphore) {
  if (semaphore == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::FinalizeSemaphore(semaphore);
  NvOsFree(semaphore);
  return NvSuccess;
}

extern "C" NvError NvOsConditionCreate(
  nn::os::ConditionVariableType** pOutCondition) {
  auto* condition = static_cast<nn::os::ConditionVariableType*>(
    NvOsAlloc(sizeof(nn::os::ConditionVariableType)));
  if (condition == nullptr) {
    return NvError_InsufficientMemory;
  }

  nn::os::InitializeConditionVariable(condition);
  *pOutCondition = condition;
  return NvSuccess;
}

extern "C" NvError NvOsConditionDestroy(
  nn::os::ConditionVariableType* condition) {
  nn::os::FinalizeConditionVariable(condition);
  NvOsFree(condition);
  return NvSuccess;
}

extern "C" NvError NvOsConditionWaitTimeout(
  nn::os::ConditionVariableType* condition, nn::os::MutexType* mutex,
  uint32_t microseconds) {
  nn::os::TimedWaitConditionVariable(condition, mutex,
    Nanoseconds(1000LL * microseconds));
  return NvSuccess;
}

extern "C" uint32_t NvOsGetTimeMS() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick()).nanoseconds /
    1000000;
}

extern "C" uint64_t NvOsGetTimeUS() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick()).nanoseconds /
    1000;
}

extern "C" nn::TimeSpan NvOsGetTimeNS() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick());
}

// A yield sleeps a millisecond so lower priorities get to run.
extern "C" void NvOsThreadYield() {
  nn::os::SleepThread(Nanoseconds(1000000));
}

extern "C" void NvOsSleepMS(uint32_t milliseconds) {
  nn::os::SleepThread(Nanoseconds(1000000LL * milliseconds));
}

extern "C" void NvOsWaitUS(uint32_t microseconds) {
  nn::os::SleepThread(Nanoseconds(1000LL * microseconds));
}

extern "C" NvError NvOsSleepUS(uint32_t microseconds) {
  nn::os::SleepThread(Nanoseconds(1000LL * microseconds));
  return NvSuccess;
}

extern "C" NvError NvOsSleepNS(uint32_t nanoseconds) {
  nn::os::SleepThread(Nanoseconds(nanoseconds));
  return NvSuccess;
}

extern "C" NvError NvOsBusyWaitUS(uint32_t microseconds) {
  nn::os::SleepThread(Nanoseconds(1000LL * microseconds));
  return NvSuccess;
}

extern "C" NvError NvOsBusyWaitNS(uint32_t nanoseconds) {
  nn::os::SleepThread(Nanoseconds(nanoseconds));
  return NvSuccess;
}

// NvBool is a byte, any nonzero value is true.
struct NvOsThread {
  nn::os::ThreadType thread;
  void* stack;
  uint8_t isStackProvided;
};

extern "C" void NvOsThreadJoin(NvOsThread* thread) {
  if (thread == nullptr) {
    return;
  }

  nn::os::DestroyThread(&thread->thread);
  if (thread->isStackProvided == 0) {
    NvOsFree(thread->stack);
  }

  NvOsFree(thread);
}

extern "C" NvError NvOsThreadJoinEx(NvOsThread* thread) {
  if (thread == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::DestroyThread(&thread->thread);
  if (thread->isStackProvided == 0) {
    NvOsFree(thread->stack);
  }

  NvOsFree(thread);
  return NvSuccess;
}

extern "C" const char* NvOsThreadGetName(nn::os::ThreadType* thread) {
  return nn::os::GetThreadNamePointer(thread);
}

extern "C" NvError NvOsTlsAlloc() {
  return NvOsTlsAllocWithDestructor(nullptr);
}
