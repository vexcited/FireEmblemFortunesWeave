#include <string.h>

#include "nn/async/async_executor.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"

namespace nn::async {

namespace {

constexpr Result ResultOutOfMemory = {544};

}

ThreadPool::ThreadPool(MemoryResource* resource) :
  m_pResource(resource), m_Threads{nullptr, 0}, m_Executor(resource),
  m_IsJoined(false) {}

ThreadPool::~ThreadPool() {
  if (m_Threads.size != 0) {
    NN_ABORT_UNLESS(m_IsJoined);
    DestroyThreads(m_Threads);
  }
}

void ThreadPool::DestroyThreads(Span<os::ThreadType*>& threads) {
  const size_t count = threads.size;
  if (count == 0) {
    return;
  }

  for (size_t i = 0; i < count; ++i) {
    os::ThreadType* thread = threads.data[i];
    if (thread != nullptr) {
      os::DestroyThread(thread);
      m_pResource->deallocate(thread, sizeof(os::ThreadType),
        alignof(os::ThreadType));
    }
  }

  m_pResource->deallocate(threads.data,
    threads.size * sizeof(os::ThreadType*), alignof(os::ThreadType*));
  threads = {};
}

void ThreadPool::WorkerThreadMain(void* argument) {
  ThreadPool* pool = static_cast<ThreadPool*>(argument);
  pool->m_Executor.LoopExecution();
  pool->m_Executor.ExecuteAll();
}

Result ThreadPool::StartThreadsImpl(int count, void** stacks,
  size_t stackSize, int priority, int* pCoreNumbers) {
  auto** pThreads = static_cast<os::ThreadType**>(m_pResource->allocate(
    sizeof(os::ThreadType*) * count, alignof(os::ThreadType*)));
  if (pThreads == nullptr) {
    return ResultOutOfMemory;
  }

  Span<os::ThreadType*> threads = {pThreads, static_cast<uintptr_t>(count)};
  Result result = {};
  if (count >= 1) {
    memset(pThreads, 0, sizeof(os::ThreadType*) * count);
    for (int i = 0; i < count; ++i) {
      os::ThreadType* thread = static_cast<os::ThreadType*>(
        m_pResource->allocate(sizeof(os::ThreadType),
          alignof(os::ThreadType)));
      pThreads[i] = thread;
      if (thread == nullptr) {
        result = ResultOutOfMemory;
        break;
      }

      result = pCoreNumbers != nullptr ?
        os::CreateThread(thread, WorkerThreadMain, this, stacks[i],
          stackSize, priority, pCoreNumbers[i]) :
        os::CreateThread(thread, WorkerThreadMain, this, stacks[i],
          stackSize, priority);
      if (result.IsFailure()) {
        break;
      }
    }
  }

  if (result.IsFailure()) {
    DestroyThreads(threads);
    return result;
  }

  m_Threads = threads;
  for (size_t i = 0; i < threads.size; ++i) {
    os::StartThread(m_Threads.data[i]);
  }

  return {};
}

bool ThreadPool::HasStartedThreads() const {
  return m_Threads.size != 0;
}

// Threads without caller supplied stacks are not supported.
void ThreadPool::StartThreads(int count, size_t stackSize, int priority) {
  static_cast<void>(count);
  static_cast<void>(stackSize);
  static_cast<void>(priority);
  NN_ABORT_UNLESS(false);
}

void ThreadPool::StartThreads(int count, void** stacks, size_t stackSize,
  int priority) {
  StartThreadsImpl(count, stacks, stackSize, priority, nullptr);
}

void ThreadPool::StartThreads(int count, void** stacks, size_t stackSize,
  int priority, int* pCoreNumbers) {
  StartThreadsImpl(count, stacks, stackSize, priority, pCoreNumbers);
}

void ThreadPool::RequestThreadExit() {
  m_Executor.RequestLoopExecutionExit();
}

void ThreadPool::JoinThreads() {
  for (size_t i = 0; i < m_Threads.size; ++i) {
    os::WaitThread(m_Threads.data[i]);
  }
  m_IsJoined = true;
}

}
