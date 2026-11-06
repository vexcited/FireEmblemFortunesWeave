#pragma once

#include <atomic>
#include <new>
#include <stdint.h>

#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"

namespace movie {

void MovieIncrementObjectCount();
void MovieDecrementObjectCount();

// Runs a copy of a functor, freed through the allocator that holds it.
template <typename F>
class Task : public ITask {
public:
  Task(IAllocator* allocator, F function)
    : m_RefCount(0), m_pAllocator(allocator), m_Function(function) {
    MovieIncrementObjectCount();
    m_pAllocator->AddRef();
  }

  ~Task() {
    m_pAllocator->Release();
    MovieDecrementObjectCount();
  }

  void AddRef() override {
    m_RefCount++;
  }

  void Release() override {
    if (m_RefCount.fetch_sub(1) == 1) {
      IAllocator* allocator = m_pAllocator;
      allocator->AddRef();
      m_RefCount = 0xdead00;
      this->~Task();
      allocator->Free(this);
      allocator->Release();
    }
  }

  void Run() override {
    m_Function();
  }

private:
  std::atomic<uint32_t> m_RefCount;
  IAllocator* m_pAllocator;
  F m_Function;
};

}

namespace movie::detail {

template <typename F>
MovieResult CreateTask(RefPtr<ITask>* pOutTask, IAllocator* allocator,
  F function) {
  void* storage = allocator->Allocate(sizeof(Task<F>));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  *pOutTask = new (storage) Task<F>(allocator, function);
  return MovieResult_Success;
}

template <typename F>
MovieResult QueueTask(IAllocator* allocator, ITaskQueue* taskQueue,
  F function) {
  RefPtr<ITask> task;
  MovieResult result = CreateTask(&task, allocator, function);
  if (task) {
    result = taskQueue->QueueTask(task.Get());
  }

  return result;
}

}
