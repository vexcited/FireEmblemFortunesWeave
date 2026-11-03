#include "nn/os/thread_manager.hpp"
#include "nn/os/synchronization.hpp"

extern "C" void svcSleepThread(int64_t nanoseconds);
extern "C" uint32_t svcSetThreadPriority(uint32_t handle, int priority);
extern "C" uint32_t svcGetThreadPriority(int* priority, uint32_t handle);
extern "C" uint32_t svcSetThreadActivity(uint32_t handle, uint32_t activity);
extern "C" uint32_t svcGetThreadContext3(void* output, uint32_t handle);
extern "C" int svcGetCurrentProcessorNumber();
extern "C" uint32_t svcSetThreadCoreMask(uint32_t handle, int ideal_core,
  uint64_t affinity);
extern "C" uint32_t svcGetThreadCoreMask(int* ideal_core, uint64_t* affinity,
  uint32_t handle);
extern "C" uint32_t svcGetInfo(uint64_t*, uint32_t, uint32_t, uint64_t);
extern "C" void* memcpy(void*, const void*, size_t);

namespace nn::os::detail {

extern uint8_t ResourceManagerStorage[1288]
  asm("_ZN2nn2os6detail26g_OsResourceManagerStorageE");

[[noreturn]] void AbortThreadControl()
  asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortThreadControlResult(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static InternalCriticalSection* ThreadLock(const ThreadType* thread) {
  return reinterpret_cast<InternalCriticalSection*>(
    const_cast<uint32_t*>(&thread->critical_section));
}

static uint8_t& SuspendCount(ThreadType* thread) {
  return reinterpret_cast<uint8_t*>(&thread->reserved_42)[1];
}

void ThreadManagerImplByHorizon::YieldThread() {
  svcSleepThread(-1);
}

bool ThreadManagerImplByHorizon::ChangePriority(ThreadType* thread,
  int priority) {
  uint32_t result = svcSetThreadPriority(thread->handle,
    int32_t(uint32_t(priority) + 28));

  if ((result & 0x3fffff) == 0xe001) {
    AbortThreadControl();
  }

  return result == 0;
}

int ThreadManagerImplByHorizon::GetCurrentPriority(
  const ThreadType* thread) const {
  int priority = 0;
  uint32_t result = svcGetThreadPriority(&priority, thread->handle);

  if (result) {
    AbortThreadControlResult(&result);
  }

  return int32_t(uint32_t(priority) - 28);
}

void ThreadManagerImplByHorizon::SuspendThreadUnsafe(ThreadType* thread) {
  uint32_t result = svcSetThreadActivity(thread->handle, 1);

  if (result) {
    AbortThreadControlResult(&result);
  }
}

void ThreadManagerImplByHorizon::ResumeThreadUnsafe(ThreadType* thread) {
  uint32_t result = svcSetThreadActivity(thread->handle, 0);

  if (result) {
    AbortThreadControlResult(&result);
  }
}

void ThreadManagerImplByHorizon::GetThreadContextUnsafe(
  ThreadContextInfoAarch64* output, const ThreadType* thread) {
  alignas(16) uint8_t context[0x320];
  uint32_t result = svcGetThreadContext3(context, thread->handle);

  if (result) {
    AbortThreadControlResult(&result);
  }

  auto* bytes = reinterpret_cast<uint8_t*>(output);
  memcpy(bytes, context, 0xe8);
  __builtin_memcpy(bytes + 0xe8, context + 0xe8, 32);
  __builtin_memcpy(bytes + 0x108, context + 0x108, 4);
  memcpy(bytes + 0x110, context + 0x110, 0x200);
  __builtin_memcpy(bytes + 0x310, context + 0x310, 4);
  __builtin_memcpy(bytes + 0x314, context + 0x314, 4);
}

int ThreadManagerImplByHorizon::GetCurrentCoreNumber() const {
  return svcGetCurrentProcessorNumber();
}

void ThreadManagerImplByHorizon::SetThreadCoreMask(ThreadType* thread,
  int ideal_core, uint64_t affinity) const {
  uint32_t result = svcSetThreadCoreMask(thread->handle, ideal_core, affinity);

  if (result) {
    AbortThreadControlResult(&result);
  }
}

void ThreadManagerImplByHorizon::GetThreadCoreMask(int* ideal_core,
  uint64_t* affinity, const ThreadType* thread) const {
  int core = 0;
  uint64_t mask = 0;
  uint32_t result = svcGetThreadCoreMask(&core, &mask, thread->handle);

  if (result) {
    AbortThreadControlResult(&result);
  }

  if (ideal_core) {
    *ideal_core = core;
  }

  if (affinity) {
    *affinity = mask;
  }
}

uint64_t ThreadManagerImplByHorizon::GetThreadAvailableCoreMask() const {
  uint64_t affinity = 0;
  uint32_t result = svcGetInfo(&affinity, 0, 0xffff8001, 0);

  if (result) {
    AbortThreadControlResult(&result);
  }

  return affinity;
}

int ThreadManager::SuspendThread(ThreadType* thread) {
  ThreadLock(thread)->Enter();
  uint8_t previous = SuspendCount(thread);
  SuspendCount(thread) = uint8_t(previous + 1);

  if (!previous) {
    reinterpret_cast<ThreadManagerImplByHorizon*>(this)
      ->SuspendThreadUnsafe(thread);
  }

  ThreadLock(thread)->Leave();
  return previous;
}

int ThreadManager::ResumeThread(ThreadType* thread) {
  ThreadLock(thread)->Enter();
  uint8_t previous = SuspendCount(thread);

  if (previous) {
    SuspendCount(thread) = uint8_t(previous - 1);

    if (previous == 1) {
      reinterpret_cast<ThreadManagerImplByHorizon*>(this)
        ->ResumeThreadUnsafe(thread);
    }
  }

  ThreadLock(thread)->Leave();
  return previous;
}

void ThreadManager::GetThreadContext(ThreadContextInfoAarch64* output,
  const ThreadType* thread) {
  ThreadLock(thread)->Enter();
  reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->GetThreadContextUnsafe(output, thread);
  ThreadLock(thread)->Leave();
}

}

namespace nn::os {

uint64_t GetThreadAvailableCoreMask() {
  return reinterpret_cast<detail::ThreadManagerImplByHorizon*>(
    detail::ResourceManagerStorage + 288)->GetThreadAvailableCoreMask();
}

}
