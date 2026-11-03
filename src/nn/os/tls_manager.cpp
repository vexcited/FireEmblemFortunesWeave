#include "nn/os/managers.hpp"
#include "nn/os/startup.hpp"
#include "nn/os/thread_manager.hpp"

namespace nn::os::detail {

[[noreturn]] void AbortTls() asm("_ZN2nn4diag6detail9AbortImplEv");

static_assert(sizeof(TlsSlot) == 4);
static_assert(offsetof(ThreadType, tls_values) == 0x80);
static_assert(offsetof(ThreadType, critical_section) == 0x1a8);
static_assert(offsetof(ThreadManager, critical_section) == 0x1c8);
static_assert(offsetof(ThreadManager, threads) == 0x1d0);

static ThreadType* CurrentThread() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<ThreadType**>(tls + 0x1f8);
}

static InternalCriticalSection* ThreadLock(ThreadType* thread) {
  return reinterpret_cast<InternalCriticalSection*>(&thread->critical_section);
}

void DefaultTlsDestructor(uintptr_t) {
}

void TlsManager::InvokeTlsDestructors() {
  ThreadType* thread = CurrentThread();

  // The first sweep also calls destructors for zero values.
  for (unsigned index = 0; index < 32; ++index) {
    if (destructors[index]) {
      destructors[index](thread->tls_values[index]);
    }

    thread->tls_values[index] = 0;
  }

  for (unsigned pass = 0; pass < 4; ++pass) {
    bool empty = true;

    for (unsigned index = 0; index < 32; ++index) {
      uintptr_t value = thread->tls_values[index];

      if (value) {
        if (destructors[index]) {
          destructors[index](value);
        }

        thread->tls_values[index] = 0;
        empty = false;
      }
    }

    if (empty) {
      return;
    }
  }
}

int TlsManager::SearchUnusedTlsSlotUnsafe(bool sdk) const {
  if (sdk) {
    for (int index = 31; index >= 17; --index) {
      if (!destructors[index]) {
        return index;
      }
    }
  }
  else {
    for (int index = 0; index < 16; ++index) {
      if (!destructors[index]) {
        return index;
      }
    }
  }

  AbortTls();
}

bool TlsManager::AllocateTlsSlot(TlsSlot* output, TlsDestructor destructor,
                                 bool sdk) {
  ThreadType* thread = CurrentThread();
  ThreadLock(thread)->Enter();
  lock.Enter();
  bool available = sdk || static_cast<int32_t>(allocated_slots) < 16;
  int slot = 0;

  if (available) {
    slot = SearchUnusedTlsSlotUnsafe(sdk);
    destructors[slot] = destructor ? destructor : DefaultTlsDestructor;

    if (!sdk) {
      ++allocated_slots;
    }
  }

  lock.Leave();
  ThreadLock(thread)->Leave();

  if (available) {
    auto* manager =
      reinterpret_cast<ThreadManager*>(g_OsResourceManagerStorage + 0x120);
    manager->SetZeroToAllThreadsTlsSafe(slot);
    output->value = slot;
  }

  return available;
}

void TlsManager::FreeTlsSlot(TlsSlot slot) {
  ThreadType* thread = CurrentThread();
  ThreadLock(thread)->Enter();
  lock.Enter();

  if (!destructors[slot.value]) {
    AbortTls();
  }

  destructors[slot.value] = nullptr;

  if (slot.value < 16) {
    --allocated_slots;
  }

  lock.Leave();
  ThreadLock(thread)->Leave();
}

void ThreadManager::SetZeroToAllThreadsTlsSafe(int slot) {
  auto* lock = reinterpret_cast<InternalCriticalSection*>(&critical_section);
  lock->Enter();

  for (ThreadListNode* node = threads.previous; node != &threads;
       node = node->previous) {
    auto* thread = reinterpret_cast<ThreadType*>(node);
    thread->tls_values[slot] = 0;
  }

  lock->Leave();
}

}
