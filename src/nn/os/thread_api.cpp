#include "nn/os/thread_api.hpp"

#include "nn/os/startup.hpp"

extern "C" void* memcpy(void* output, const void* input, size_t size);

namespace nn::os {

[[noreturn]] void AbortThreadName() asm("_ZN2nn4diag6detail9AbortImplEv");

static detail::ThreadManager* Manager() {
  return reinterpret_cast<detail::ThreadManager*>(
    detail::g_OsResourceManagerStorage + 288);
}

Result CreateThread(ThreadType* thread, void (*entry)(void*), void* argument,
  void* stack, size_t size, int priority) {
  return {Manager()->CreateThread(thread, entry, argument, stack, size,
    priority)};
}

void DestroyThread(ThreadType* thread) {
  Manager()->DestroyThread(thread);
}

void StartThread(ThreadType* thread) {
  Manager()->StartThread(thread);
}

void WaitThread(ThreadType* thread) {
  Manager()->WaitThread(thread);
}

void SetThreadName(ThreadType* thread, const char* name) {
  if (!name) {
    Manager()->SetInitialThreadNameUnsafe(thread);
    return;
  }

  size_t length = 0;

  while (length < 32 && name[length]) {
    ++length;
  }

  if (length == 32) {
    AbortThreadName();
  }

  memcpy(thread->name_buffer, name, length + 1);
  thread->name = thread->name_buffer;
}

int GetThreadPriority(const ThreadType* thread) {
  return thread->priority;
}

void SetThreadCoreMask(ThreadType* thread, int ideal_core, uint64_t affinity) {
  reinterpret_cast<detail::ThreadManagerImplByHorizon*>(Manager())
    ->SetThreadCoreMask(thread, ideal_core, affinity);
}

}
