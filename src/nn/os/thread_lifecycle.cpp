#include "nn/os/thread_manager.hpp"
#include "nn/os/synchronization.hpp"

extern "C" uint32_t svcStartThread(uint32_t handle);
extern "C" uint32_t svcCloseHandle(uint32_t handle);
extern "C" uint32_t svcWaitSynchronization(int32_t* selected,
  const uint32_t* handles, int32_t count, int64_t timeout);

namespace nn::os::detail {

[[noreturn]] void AbortThreadResult(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static InternalCriticalSection* ThreadLock(ThreadType* thread) {
  return reinterpret_cast<InternalCriticalSection*>(
    &thread->critical_section);
}

static InternalConditionVariableImplByHorizon* ThreadCondition(
  ThreadType* thread) {
  return reinterpret_cast<InternalConditionVariableImplByHorizon*>(
    &thread->condition_variable);
}

void FinalizeInternalCriticalSection(InternalCriticalSectionType*) {
}

void InternalCriticalSection::Finalize() {
  FinalizeInternalCriticalSection(&state);
}

void ThreadManagerImplByHorizon::StartThread(const ThreadType* thread) {
  uint32_t result = svcStartThread(thread->handle);

  if (result) {
    AbortThreadResult(&result);
  }
}

void ThreadManagerImplByHorizon::DestroyThreadUnsafe(ThreadType* thread) {
  uint32_t result = svcCloseHandle(thread->handle);

  if (result) {
    AbortThreadResult(&result);
  }

  thread->handle = 0;
}

bool ThreadManagerImplByHorizon::TryWaitForExitThread(ThreadType* thread) {
  for (;;) {
    uint32_t handle = thread->handle;
    int32_t selected = 0;
    uint32_t result = svcWaitSynchronization(&selected, &handle, 1, 0);

    if (!result) {
      return true;
    }

    uint32_t description = result & 0x3fffff;

    if (description == 0xea01) {
      return false;
    }

    if (description != 0xec01) {
      AbortThreadResult(&result);
    }
  }
}

void ThreadManagerImplByHorizon::WaitForExitThread(ThreadType* thread) {
  for (;;) {
    uint32_t handle = thread->handle;
    int32_t selected = 0;
    uint32_t result = svcWaitSynchronization(&selected, &handle, 1, -1);

    if (!result) {
      return;
    }

    if ((result & 0x3fffff) != 0xec01) {
      AbortThreadResult(&result);
    }
  }
}

void ThreadManager::StartThread(ThreadType* thread) {
  ThreadLock(thread)->Enter();
  reinterpret_cast<ThreadManagerImplByHorizon*>(this)->StartThread(thread);
  thread->state = 3;
  ThreadCondition(thread)->Signal();
  ThreadLock(thread)->Leave();
}

bool ThreadManager::TryWaitThread(ThreadType* thread) {
  bool exited = reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->TryWaitForExitThread(thread);

  if (exited) {
    ThreadLock(thread)->Enter();

    if (thread->stack_is_aliased == 1) {
      DeleteAliasStackUnsafe(thread);
    }

    ThreadLock(thread)->Leave();
  }

  return exited;
}

void ThreadManager::WaitThread(ThreadType* thread) {
  reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->WaitForExitThread(thread);
  ThreadLock(thread)->Enter();

  if (thread->stack_is_aliased == 1) {
    DeleteAliasStackUnsafe(thread);
  }

  ThreadLock(thread)->Leave();
}

void ThreadManager::DestroyThread(ThreadType* thread) {
  ThreadLock(thread)->Enter();

  if (thread->state == 1) {
    thread->state = 2;
    reinterpret_cast<ThreadManagerImplByHorizon*>(this)->StartThread(thread);
    ThreadCondition(thread)->Signal();
  }

  ThreadLock(thread)->Leave();
  reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->WaitForExitThread(thread);
  DestroyThreadObject(thread);
}

void ThreadManager::DestroyThreadObject(ThreadType* thread) {
  ThreadLock(thread)->Enter();
  auto* manager_lock = reinterpret_cast<InternalCriticalSection*>(
    &critical_section);
  manager_lock->Enter();
  auto* node = &thread->all_threads;

  if (node != &threads) {
    auto* previous = node->previous;
    auto* original = previous->next;
    node->next->previous = previous;
    previous->next = node->next;
    original->previous = node;
    node->next = original;
  }

  --thread_count;
  total_stack_size -= thread->stack_size;
  manager_lock->Leave();

  if (thread->stack_is_aliased == 1) {
    DeleteAliasStackUnsafe(thread);
  }

  reinterpret_cast<ThreadManagerImplByHorizon*>(this)
    ->DestroyThreadUnsafe(thread);
  thread->state = 0;
  thread->name_buffer[0] = 0;
  ThreadLock(thread)->Leave();
  ThreadLock(thread)->Finalize();
}

}
