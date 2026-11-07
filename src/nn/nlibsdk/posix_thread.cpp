#include "nn/nlibsdk/posix_thread.hpp"

#include <stddef.h>

#include "nn/os/tls.hpp"
#include "posix_thread_internal.hpp"

extern "C" void* aligned_alloc(size_t alignment, size_t size);
extern "C" void free(void* address);
extern "C" void* memset(void* address, int value, size_t size);
extern "C" __attribute__((returns_twice)) int setjmp(void* buffer);
extern "C" [[noreturn]] void longjmp(void* buffer, int value);

namespace nn::nlibsdk::detail {

[[noreturn]] void AbortPosixThread() asm("_ZN2nn4diag6detail9AbortImplEv");

static_assert(sizeof(PosixThread) == 2848);
static_assert(offsetof(PosixThread, entry) == 0x1c0);
static_assert(offsetof(PosixThread, jump_buffer) == 0x1d8);
static_assert(offsetof(PosixThread, tls) == 0x310);

static PosixThreadStorage*& CurrentStorage() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<PosixThreadStorage**>(tls + 0x1e0);
}

void RunPosixThread(void* argument) {
  auto* thread = static_cast<PosixThread*>(argument);
  CurrentStorage() = &thread->tls;
  os::SetTlsValue({GetLazyTlsSlot()}, reinterpret_cast<uintptr_t>(&thread->tls));

  if (setjmp(thread->jump_buffer) == 0) {
    thread->tls.reserved02 = 1;
    thread->result = thread->entry(thread->argument);
  }

  thread->tls.reserved02 = 0;
}

// The original calls it out of line.
[[gnu::noinline]] void JoinAndFreePosixThread(PosixThread* thread,
  void** result) {
  os::WaitThread(&thread->thread);
  thread->tls.state = 7;

  if (result) {
    *result = thread->result;
  }

  os::DestroyThread(&thread->thread);
  free(thread);
}

[[noreturn]] void RunRetirementWorker(void*) {
  auto& queue = RetirementQueue;
  queue.mutex.Lock();

  for (;;) {
    queue.condition.Wait(queue.mutex);
    void** current = queue.begin;
    void** end = queue.end;

    while (current != end) {
      auto* thread = static_cast<PosixThread*>(*current++);
      JoinAndFreePosixThread(thread, nullptr);
    }

    queue.end = queue.begin;
  }
}

int DetachPosixThread(PosixThread* thread) {
  auto& queue = RetirementQueue;
  queue.mutex.Lock();
  auto* initialized = reinterpret_cast<uint8_t*>(&queue.reserved00);

  if (!(*initialized & 1)) {
    void* stack = aligned_alloc(4096, 4096);
    *reinterpret_cast<void**>(queue.reserved0c + 4) = stack;

    if (!stack) {
      queue.mutex.Unlock();
      return 12;
    }

    if (os::CreateThread(&RetirementWorker, RunRetirementWorker, nullptr,
        stack, 4096, 0).value) {
      queue.mutex.Unlock();
      return 11;
    }

    *initialized = 1;
    os::StartThread(&RetirementWorker);
    os::SetThreadName(&RetirementWorker, "PthreadWorker");
  }

  uint8_t state = 1;
  __atomic_compare_exchange_n(&thread->tls.state, &state, uint8_t(3), false,
    __ATOMIC_RELAXED, __ATOMIC_RELAXED);
  int result = 0;

  if (state != 1) {
    if (state == 4 && __atomic_compare_exchange_n(&thread->tls.state, &state,
        uint8_t(6), false, __ATOMIC_RELAXED, __ATOMIC_RELAXED)) {
      JoinAndFreePosixThread(thread, nullptr);
    }
    else {
      result = 22;
    }
  }

  queue.mutex.Unlock();
  return result;
}

void SetDefaultPosixThreadName(PosixThread* thread) {
  char name[27] = "Pthread_0x";
  uintptr_t address = reinterpret_cast<uintptr_t>(thread->entry);

  for (unsigned index = 0; index < 16; ++index) {
    unsigned digit = (address >> ((15 - index) * 4)) & 15;
    name[10 + index] = char(digit + (digit > 9 ? 'A' - 10 : '0'));
  }

  os::SetThreadName(&thread->thread, name);
}

}

namespace nn::nlibsdk {

PosixThreadHandle GetPosixThread() {
  uintptr_t thread = reinterpret_cast<uintptr_t>(os::GetCurrentThread());
  auto* storage = detail::CurrentStorage();

  if (storage && storage !=
      reinterpret_cast<detail::PosixThreadStorage*>(&PosixRetiredStorage) &&
      storage->kind == 80) {
    thread |= 7;
  }

  return thread;
}

int EqualPosixThreads(PosixThreadHandle first, PosixThreadHandle second) {
  return first == second;
}

int CreatePosixThread(PosixThreadHandle* output,
  const PosixThreadAttributes* attributes, PosixThreadEntry entry,
  void* argument) {
  PosixThreadAttributes defaults = {};

  if (!attributes) {
    detail::CopyDefaultPosixAttributes(&defaults);
    attributes = &defaults;
  }

  if (attributes->inherit_schedule > 1 ||
      (attributes->inherit_schedule == 1 && (attributes->policy > 1 ||
        uint32_t(attributes->priority) - 5 > 31)) ||
      attributes->stack_size < 4096 || (attributes->stack_size & 4095) ||
      (reinterpret_cast<uintptr_t>(attributes->stack) & 4095) ||
      (attributes->affinity &&
        !(os::GetThreadAvailableCoreMask() & attributes->affinity))) {
    return 22;
  }

  size_t size = attributes->stack_size ? attributes->stack_size : 81920;
  void* stack = attributes->stack;
  detail::PosixThread* thread;

  if (stack) {
    thread = static_cast<detail::PosixThread*>(aligned_alloc(8, 2848));
    memset(thread, 0, 2848);
  }
  else {
    thread = static_cast<detail::PosixThread*>(aligned_alloc(4096, size + 4096));

    if (!thread) {
      return 11;
    }

    memset(thread, 0, 4096);
    stack = reinterpret_cast<uint8_t*>(thread) + 4096;
  }

  thread->tls.state = 0;
  thread->tls.kind = 0;
  thread->tls.reserved02 = 0;
  thread->tls.dirty = 0;
  memset(thread->tls.keys, 0, 2048);
  thread->entry = nullptr;
  thread->argument = nullptr;
  thread->result = nullptr;
  int priority = attributes->inherit_schedule == 1 ?
    36 - attributes->priority : os::GetThreadPriority(os::GetCurrentThread());

  if (os::CreateThread(&thread->thread, detail::RunPosixThread, thread, stack,
      size, priority).value) {
    free(thread);
    return 11;
  }

  uint64_t affinity = attributes->affinity;

  if (affinity) {
    affinity &= os::GetThreadAvailableCoreMask();
    os::SetThreadCoreMask(&thread->thread, -1, affinity);
  }

  thread->entry = entry;
  thread->argument = argument;
  thread->tls.kind = 80;
  thread->tls.state = 1;

  if (attributes->detached == 1) {
    int result = detail::DetachPosixThread(thread);

    if (result) {
      thread->tls.state = 0;
      os::DestroyThread(&thread->thread);
      free(thread);
      return result;
    }
  }

  detail::SetDefaultPosixThreadName(thread);
  os::StartThread(&thread->thread);
  *output = reinterpret_cast<uintptr_t>(thread) | 7;
  return 0;
}

[[noreturn]] void ExitPosixThread(void* result) {
  PosixThreadHandle handle = GetPosixThread();

  if ((handle & 7) == 7) {
    auto* thread = reinterpret_cast<detail::PosixThread*>(handle & ~uintptr_t(7));

    if (thread->tls.reserved02 & 1) {
      thread->result = result;
      longjmp(thread->jump_buffer, 1);
    }
  }

  detail::AbortPosixThread();
}

int JoinPosixThread(PosixThreadHandle handle, void** result) {
  if ((handle & 7) != 7) {
    return 22;
  }

  auto* thread = reinterpret_cast<detail::PosixThread*>(handle & ~uintptr_t(7));

  if (os::GetCurrentThread() == &thread->thread) {
    return 35;
  }

  uint8_t state = 1;
  __atomic_compare_exchange_n(&thread->tls.state, &state, uint8_t(2), false,
    __ATOMIC_RELAXED, __ATOMIC_RELAXED);

  if (state != 1 && (state != 4 ||
      !__atomic_compare_exchange_n(&thread->tls.state, &state, uint8_t(5),
        false, __ATOMIC_RELAXED, __ATOMIC_RELAXED))) {
    return 22;
  }

  detail::JoinAndFreePosixThread(thread, result);
  return 0;
}

int DetachPosixThread(PosixThreadHandle handle) {
  if ((handle & 7) != 7) {
    return 22;
  }

  return detail::DetachPosixThread(
    reinterpret_cast<detail::PosixThread*>(handle & ~uintptr_t(7)));
}

}
