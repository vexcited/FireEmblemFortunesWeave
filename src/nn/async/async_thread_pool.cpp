#include "nn/async/async_executor.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/thread_api.hpp"

namespace nn::async {

ThreadPool::ThreadPool(MemoryResource* resource) :
  m_pResource(resource), m_Threads{nullptr, 0}, m_Executor(resource),
  m_IsJoined(false) {}

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
