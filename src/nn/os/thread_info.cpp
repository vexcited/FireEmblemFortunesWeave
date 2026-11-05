#include "nn/os/thread_info.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/os/startup.hpp"

extern "C" uint32_t svcGetInfo(uint64_t* value, uint32_t type,
  uint32_t handle, uint64_t subType);

namespace nn::os {

namespace {

constexpr uint32_t CurrentProcessHandle = 0xffff8001;

detail::ThreadManager* GetThreadManager() {
  return reinterpret_cast<detail::ThreadManager*>(
    detail::g_OsResourceManagerStorage + 0x120);
}

detail::ThreadManagerImplByHorizon* GetThreadManagerImpl() {
  return reinterpret_cast<detail::ThreadManagerImplByHorizon*>(
    detail::g_OsResourceManagerStorage + 0x120);
}

detail::TlsManager* GetTlsManager() {
  return reinterpret_cast<detail::TlsManager*>(
    detail::g_OsResourceManagerStorage + 0x310);
}

uintptr_t GetTlsRegion() {
  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  return tls;
}

uint64_t GetInfoOrAbort(uint32_t type, uint32_t handle, uint64_t subType) {
  uint64_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{svcGetInfo(&value, type, handle, subType)});
  return value;
}

}

Result CreateThread(ThreadType* thread, void (*entry)(void*), void* argument,
  void* stack, size_t size, int priority, int idealCore) {
  return {GetThreadManager()->CreateThread(thread, entry, argument, stack,
    size, priority, idealCore)};
}

void SetThreadNamePointer(ThreadType* thread, const char* name) {
  if (name == nullptr) {
    GetThreadManager()->SetInitialThreadNameUnsafe(thread);
    return;
  }

  thread->name = name;
}

const char* GetThreadNamePointer(const ThreadType* thread) {
  return thread->name;
}

int ChangeThreadPriority(ThreadType* thread, int priority) {
  auto* lock = reinterpret_cast<detail::InternalCriticalSection*>(
    &thread->critical_section);
  lock->Enter();

  const int previous = thread->priority;
  GetThreadManagerImpl()->ChangePriority(thread, priority);
  thread->priority = priority;

  lock->Leave();
  return previous;
}

int GetThreadCurrentPriority(const ThreadType* thread) {
  return GetThreadManagerImpl()->GetCurrentPriority(thread);
}

void YieldThread() {
  GetThreadManagerImpl()->YieldThread();
}

bool TryWaitThread(ThreadType* thread) {
  return GetThreadManager()->TryWaitThread(thread);
}

int GetCurrentCoreNumber() {
  return GetThreadManagerImpl()->GetCurrentCoreNumber();
}

int GetCurrentProcessorNumber() {
  return GetThreadManagerImpl()->GetCurrentCoreNumber();
}

void GetThreadCoreMask(int* idealCore, uint64_t* affinity,
  const ThreadType* thread) {
  GetThreadManagerImpl()->GetThreadCoreMask(idealCore, affinity, thread);
}

uint64_t GetThreadId(const ThreadType* thread) {
  return thread->id;
}

int SuspendThread(ThreadType* thread) {
  return GetThreadManager()->SuspendThread(thread);
}

int ResumeThread(ThreadType* thread) {
  return GetThreadManager()->ResumeThread(thread);
}

int GetThreadSuspendCount(const ThreadType* thread) {
  return thread->suspend_count;
}

void GetThreadContext(ThreadContextInfoAarch64* context,
  const ThreadType* thread) {
  GetThreadManager()->GetThreadContext(context, thread);
}

void GetThreadStackInfo(uintptr_t* stack, size_t* stackSize,
  const ThreadType* thread) {
  if (thread->state != ThreadState_Started) {
    if (stack != nullptr) {
      *stack = 0;
    }

    if (stackSize != nullptr) {
      *stackSize = 0;
    }

    return;
  }

  const auto* fiber = static_cast<const FiberType*>(thread->current_fiber);
  const size_t size = fiber == nullptr ? thread->stack_size : fiber->stackSize;

  if (stack != nullptr) {
    *stack = reinterpret_cast<uintptr_t>(
      fiber == nullptr ? thread->stack : fiber->stack);
  }

  if (stackSize != nullptr) {
    *stackSize = size;
  }
}

void GetCurrentStackInfo(uintptr_t* stack, size_t* stackSize) {
  uintptr_t currentStack = 0;
  size_t currentSize = 0;
  detail::DebugImplByHorizon::GetCurrentStackInfo(&currentStack,
    &currentSize);

  if (stack != nullptr) {
    *stack = currentStack;
  }

  if (stackSize != nullptr) {
    *stackSize = currentSize;
  }
}

int64_t GetIdleTickCount() {
  return GetInfoOrAbort(10, 0, ~uint64_t{0});
}

int64_t GetThreadTickCount() {
  const auto* offset = reinterpret_cast<volatile int64_t*>(
    GetTlsRegion() + 0x108);
  int64_t current = *offset;

  while (true) {
    const int64_t tick = __builtin_arm_rsr64("cntpct_el0");
    const int64_t previous = current;
    current = *offset;

    if (previous == current) {
      return tick + previous;
    }
  }
}

int GetFreeThreadCount() {
  return GetInfoOrAbort(24, CurrentProcessHandle, 0);
}

void SetDyingMessageRegion(uintptr_t address, size_t size) {
  auto* context = reinterpret_cast<uintptr_t*>(
    GetInfoOrAbort(20, CurrentProcessHandle, 0));
  context[0x1c0 / sizeof(uintptr_t)] = address;
  context[0x1c8 / sizeof(uintptr_t)] = size;
}

Result AllocateTlsSlot(TlsSlot* slot, void (*destructor)(uintptr_t)) {
  return {GetTlsManager()->AllocateTlsSlot(slot, destructor, false) ? 0U
    : 4611U};
}

int GetUsedTlsSlotCount() {
  return GetTlsManager()->allocated_slots;
}

}
