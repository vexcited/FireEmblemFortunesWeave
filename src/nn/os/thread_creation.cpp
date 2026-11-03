#include "nn/os/thread_manager.hpp"

extern "C" uint32_t svcMapMemory(const void*, const void*, size_t);
extern "C" uint32_t svcUnmapMemory(const void*, const void*, size_t);
extern "C" uint32_t svcQueryMemory(void*, uint32_t*, uintptr_t);
extern "C" uint32_t svcCreateThread(uint32_t*, void (*)(nn::os::ThreadType*),
  nn::os::ThreadType*, void*, int, int);
extern "C" uint32_t svcGetThreadId(uint64_t*, uint32_t);
extern "C" void svcExitThread();
extern "C" void (*nnmuslThreadPointerInitializer)();
extern "C" void (*nnmuslThreadPointerDestroyer)();

namespace nn::os::detail {

extern uint8_t ResourceManagerStorage[1288]
  asm("_ZN2nn2os6detail26g_OsResourceManagerStorageE");
void EnterCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection5EnterEv");
void LeaveCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection5LeaveEv");
void WaitCondition(uint32_t* condition, uint32_t* lock)
  asm("_ZN2nn2os6detail38InternalConditionVariableImplByHorizon"
      "4WaitEPNS1_27InternalCriticalSectionTypeE");
void BroadcastCondition(uint32_t* condition)
  asm("_ZN2nn2os6detail38InternalConditionVariableImplByHorizon"
      "9BroadcastEv");
void InvokeTlsDestructors(void* manager)
  asm("_ZN2nn2os6detail10TlsManager20InvokeTlsDestructorsEv");
void NotifyAndWakeupThread(void* wait, void* holder)
  asm("_ZN2nn2os6detail13MultiWaitImpl21NotifyAndWakeupThread"
      "EPNS1_19MultiWaitHolderBaseE");
int MapAtRandomAddress(void* manager, void** output,
  bool (*map)(const void*, const void*, size_t),
  void (*unmap)(const void*, const void*, size_t), const void* source,
  size_t size)
  asm("_ZN2nn2os6detail17StackGuardManager18MapAtRandomAddress"
      "EPPvPFbPKvS6_mEPFvS6_S6_mES6_m");
void SleepThread(int64_t nanoseconds)
  asm("_ZN2nn2os11SleepThreadENS_8TimeSpanE");
[[noreturn]] void Abort()
  asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortResult(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");
[[noreturn]] void UnexpectedDefault()
  asm("_ZN2nn6detail21UnexpectedDefaultImplEv");

static uintptr_t ThreadLocalRegion() {
  uintptr_t value;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(value));
  return value;
}

extern "C" bool MapThreadStack(const void* target, const void* source,
  size_t size) {
  uint32_t mapped = svcMapMemory(target, source, size);

  if ((mapped & 0x3fffff) == 0xd401) {
    struct MemoryInfo {
      uintptr_t address;
      size_t size;
      uint32_t state;
      uint32_t attributes;
      uint32_t permissions;
      uint32_t reserved[3];
    } target_info;
    uint32_t page = 0;
    uint32_t result = svcQueryMemory(&target_info, &page, uintptr_t(target));

    if (result != 0) {
      AbortResult(&result);
    }

    uintptr_t end = uintptr_t(source) + size;

    if (target_info.state == 0 && end > uintptr_t(source)) {
      uintptr_t position = uintptr_t(source);
      uint32_t source_page = 0;

      do {
        MemoryInfo info;
        result = svcQueryMemory(&info, &source_page, position);

        if (result != 0) {
          AbortResult(&result);
        }

        if ((info.state != 4 && info.state != 5 && info.state != 9) ||
            info.attributes != 0 || info.permissions != 3) {
          Abort();
        }

        position = info.address + info.size;
      } while (position < end);
    }
  }

  return mapped == 0;
}

extern "C" void UnmapThreadStack(const void* target, const void* source,
  size_t size) {
  svcUnmapMemory(target, source, size);
}

bool ThreadManagerImplByHorizon::MapAliasStack(void** output,
  const void* original, size_t size) const {
  void* mapped = nullptr;
  int result = MapAtRandomAddress(ResourceManagerStorage + 184, &mapped,
    MapThreadStack, UnmapThreadStack, original, size);

  if (result == 0) {
    *output = mapped;
    return true;
  }

  if (result == 2) {
    return false;
  }

  if (result == 1) {
    Abort();
  }

  UnexpectedDefault();
}

bool ThreadManagerImplByHorizon::UnmapAliasStack(const void* alias,
  const void* original, size_t size) const {
  return svcUnmapMemory(alias, original, size) == 0;
}

void ThreadManager::CleanupThread(ThreadType* thread) {
  InvokeTlsDestructors(ResourceManagerStorage + 784);
  EnterCriticalSection(&thread->critical_section);
  thread->state = 4;
  BroadcastCondition(&thread->condition_variable);
  auto* end = &thread->waiters;
  auto* node = end->previous;

  while (node != end) {
    auto* bytes = reinterpret_cast<uint8_t*>(node);
    NotifyAndWakeupThread(*reinterpret_cast<void**>(bytes + 16), bytes - 24);
    node = node->previous;
  }

  LeaveCriticalSection(&thread->critical_section);
}

extern "C" void RunManagedThread(ThreadType* thread) {
  *reinterpret_cast<ThreadType**>(ThreadLocalRegion() + 0x1f8) = thread;
  EnterCriticalSection(&thread->critical_section);

  while (thread->state == 1) {
    WaitCondition(&thread->condition_variable, &thread->critical_section);
  }

  bool execute = thread->state == 3;
  LeaveCriticalSection(&thread->critical_section);

  if (execute) {
    thread->entry(thread->argument);
  }

  reinterpret_cast<ThreadManager*>(ResourceManagerStorage + 288)
    ->CleanupThread(thread);
}

extern "C" [[noreturn]] void RunKernelThread(ThreadType* thread) {
  *reinterpret_cast<ThreadType**>(ThreadLocalRegion() + 0x1f8) = thread;
  asm volatile("dsb sy" : : : "memory");

  if (nnmuslThreadPointerInitializer != nullptr) {
    nnmuslThreadPointerInitializer();
  }

  uintptr_t value = *reinterpret_cast<uintptr_t*>(ThreadLocalRegion() + 0x1f0);
  asm volatile("msr tpidr_el0, %0" : : "r"(value));
  uintptr_t end = uintptr_t(thread->stack) + thread->stack_size;
  auto entry = *reinterpret_cast<void (**)(ThreadType*)>(end - 32);
  entry(thread);

  if (nnmuslThreadPointerDestroyer != nullptr) {
    nnmuslThreadPointerDestroyer();
  }

  svcExitThread();

  for (;;) {
    asm volatile("");
  }
}

extern "C" uint32_t CreateKernelThread(uint32_t* handle,
  void (*)(ThreadType*), ThreadType* thread, void* stack, int priority,
  int ideal_core) {
  return svcCreateThread(handle, RunKernelThread, thread, stack, priority,
    ideal_core);
}

uint32_t ThreadManagerImplByHorizon::CreateThread(ThreadType* thread,
  void (*entry)(ThreadType*), int ideal_core) {
  uintptr_t end = uintptr_t(thread->stack) + thread->stack_size;
  void* top = reinterpret_cast<void*>(end - 32);
  *reinterpret_cast<void (**)(ThreadType*)>(top) = entry;
  int priority = thread->priority;
  uint32_t handle = 0;
  uint32_t result;

  for (unsigned attempt = 0;; ++attempt) {
    handle = 0;
    result = CreateKernelThread(&handle, nullptr, thread, top,
      priority + 28, ideal_core);

    if (result == 0) {
      break;
    }

    uint32_t description = result & 0x3fffff;

    if (description != 0xce01) {
      if (description == 0xe001 || description == 0xe201 ||
          description == 0xe601 || description == 0xd201) {
        Abort();
      }

      if (description == 0x10801) {
        result = 0x1a03;
      }

      AbortResult(&result);
    }

    if (attempt == 9) {
      return 0x1203;
    }

    SleepThread(10000000);
  }

  thread->handle = handle;
  uint64_t id = 0;
  result = svcGetThreadId(&id, handle);

  if (result != 0) {
    AbortResult(&result);
  }

  thread->id = id;
  return result;
}

bool ThreadManager::CreateAliasStackUnsafe(ThreadType* thread) {
  void* mapped = nullptr;
  bool result = reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->MapAliasStack(&mapped, thread->stack, thread->stack_size);

  if (result) {
    thread->stack_is_aliased = 1;
    thread->stack = mapped;
  }

  return result;
}

void ThreadManager::DeleteAliasStackUnsafe(ThreadType* thread) {
  reinterpret_cast<ThreadManagerImplByHorizon*>(this)->UnmapAliasStack(
    thread->stack, thread->original_stack, thread->stack_size);
  thread->stack_is_aliased = 0;
  thread->stack = thread->original_stack;
}

uint32_t ThreadManager::CreateThread(ThreadType* thread, void (*entry)(void*),
  void* argument, void* stack, size_t size, int priority, int ideal_core) {
  SetupThreadObjectUnsafe(thread, entry, argument, stack, size, priority);

  if (!CreateAliasStackUnsafe(thread)) {
    Abort();
  }

  uint32_t result = reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->CreateThread(thread, RunManagedThread, ideal_core);

  if (result != 0) {
    DeleteAliasStackUnsafe(thread);
    thread->state = 0;
  }
  else {
    SetInitialThreadNameUnsafe(thread);
    EnterCriticalSection(&critical_section);
    ThreadListNode* first = thread->all_threads.next;
    thread->all_threads.next = threads.next;
    first->previous = &threads;
    threads.next->previous = &thread->all_threads;
    threads.next = first;
    ++thread_count;
    total_stack_size += thread->stack_size;
    LeaveCriticalSection(&critical_section);
  }

  return result;
}

uint32_t ThreadManager::CreateThread(ThreadType* thread, void (*entry)(void*),
  void* argument, void* stack, size_t size, int priority) {
  return CreateThread(thread, entry, argument, stack, size, priority, -2);
}

}
