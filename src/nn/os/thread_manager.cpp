#include "nn/os/thread_manager.hpp"

extern "C" void* memset(void*, int, size_t);
extern "C" uint32_t svcQueryMemory(void*, uint32_t*, uintptr_t);
extern "C" uint32_t svcGetThreadPriority(int32_t*, uint32_t);
extern "C" uint32_t svcGetThreadId(uint64_t*, uint32_t);

namespace nn::os::detail {

extern uint64_t BootParameter asm("_ZN2nn2os6detail16g_OsBootParamterE");
void InitializeCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection10InitializeEv");
void EnterCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection5EnterEv");
void LeaveCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection5LeaveEv");
void ConstructConditionVariable(uint32_t* storage)
  asm("_ZN2nn2os6detail38InternalConditionVariableImplByHorizonC1Ev");
void ConstructThreadManagerImpl(void* storage, ThreadType* initial_thread)
  asm("_ZN2nn2os6detail26ThreadManagerImplByHorizonC1EPNS0_10ThreadTypeE");
[[noreturn]] void AbortResult(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static_assert(sizeof(ThreadType) == 448);
static_assert(offsetof(ThreadType, state) == 0x40);
static_assert(offsetof(ThreadType, original_stack) == 0x48);
static_assert(offsetof(ThreadType, tls_values) == 0x80);
static_assert(offsetof(ThreadType, name_buffer) == 0x180);
static_assert(offsetof(ThreadType, critical_section) == 0x1a8);
static_assert(offsetof(ThreadType, id) == 0x1b8);
static_assert(sizeof(ThreadManager) == 496);
static_assert(offsetof(ThreadManager, initial_thread) == 8);
static_assert(offsetof(ThreadManager, critical_section) == 0x1c8);
static_assert(offsetof(ThreadManager, threads) == 0x1d0);
static_assert(offsetof(ThreadManager, thread_count) == 0x1e8);

static uintptr_t ThreadLocalRegion() {
  uintptr_t value;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(value));
  return value;
}

static void SetMainName(ThreadType* thread) {
  uint64_t prefix = 0x657268546e69614d;
  uint32_t suffix = 0x00646165;
  __builtin_memcpy(thread->name_buffer, &prefix, sizeof(prefix));
  __builtin_memcpy(thread->name_buffer + 7, &suffix, sizeof(suffix));
  thread->name = thread->name_buffer;
}

void ExpandUnsignedValueToAscii(char* output, unsigned long value, int bits) {
  int count = bits / 4;

  for (int index = 0; index < count; ++index) {
    unsigned shift = uint32_t(count - index - 1) * 4;
    unsigned digit = (value >> (shift & 63)) & 15;
    *output++ = (digit > 9 ? 'A' - 10 : '0') + digit;
  }

  *output = 0;
}

void SetupThreadObjectUnsafe(ThreadType* thread, void (*entry)(void*),
  void* argument, void* stack, size_t stack_size, int priority) {
  memset(thread, 0, sizeof(*thread));
  thread->reserved_46 = 1;
  InitializeCriticalSection(&thread->critical_section);
  ConstructConditionVariable(&thread->condition_variable);
  thread->all_threads = {&thread->all_threads, &thread->all_threads};
  thread->stack_is_aliased = 0;
  thread->original_stack = stack;
  thread->stack = stack;
  thread->stack_size = stack_size;
  thread->argument = argument;
  thread->priority = priority;
  thread->reserved_1b4 = 0;
  thread->reserved_42 = 0;
  thread->name_buffer[0] = 0;
  thread->entry = entry;
  thread->current_fiber = nullptr;
  thread->waiters = {&thread->waiters, &thread->waiters};
  thread->initial_fiber = nullptr;

  for (auto& value : thread->tls_values) {
    value = 0;
  }

  thread->name = thread->name_buffer;
  thread->state = 1;
}

ThreadManagerImplByHorizon::ThreadManagerImplByHorizon(
  ThreadType* initial_thread) {
  struct MemoryInfo {
    uintptr_t address;
    size_t size;
    uint32_t attributes[6];
  } info;
  uint32_t page_info = 0;
  uint32_t result = svcQueryMemory(&info, &page_info,
    uintptr_t(__builtin_frame_address(0)));

  if (result != 0) {
    AbortResult(&result);
  }

  int32_t priority = 0;
  uint32_t handle = BootParameter;
  result = svcGetThreadPriority(&priority, handle);

  if (result != 0) {
    AbortResult(&result);
  }

  SetupThreadObjectUnsafe(initial_thread, nullptr, nullptr,
    reinterpret_cast<void*>(info.address), info.size,
    uint32_t(priority) - 28);
  initial_thread->handle = BootParameter;
  uint64_t id = 0;
  result = svcGetThreadId(&id, handle);

  if (result != 0) {
    AbortResult(&result);
  }

  initial_thread->id = id;
  uintptr_t value = *reinterpret_cast<uintptr_t*>(ThreadLocalRegion() + 0x1f0);
  asm volatile("msr tpidr_el0, %0" : : "r"(value));
}

void ThreadManager::SetInitialThreadNameUnsafe(ThreadType* thread) {
  if (thread == &initial_thread) {
    SetMainName(thread);
  }
  else {
    uint64_t prefix = 0x305f646165726854;
    thread->name_buffer[8] = 'x';
    __builtin_memcpy(thread->name_buffer, &prefix, sizeof(prefix));
    ExpandUnsignedValueToAscii(thread->name_buffer + 9,
      uintptr_t(thread->entry), 64);
    thread->name = thread->name_buffer;
  }
}

ThreadManager::ThreadManager() {
  ConstructThreadManagerImpl(this, &initial_thread);
  InitializeCriticalSection(&critical_section);
  total_stack_size = 0;
  thread_count = 0;
  threads = {&threads, &threads};
  initial_thread.state = 3;
  *reinterpret_cast<ThreadType**>(ThreadLocalRegion() + 0x1f8)
    = &initial_thread;
  SetMainName(&initial_thread);
  EnterCriticalSection(&critical_section);
  ThreadListNode* first = initial_thread.all_threads.next;
  initial_thread.all_threads.next = threads.next;
  first->previous = &threads;
  threads.next->previous = &initial_thread.all_threads;
  threads.next = first;
  ++thread_count;
  total_stack_size += initial_thread.stack_size;
  LeaveCriticalSection(&critical_section);
}

}
