#pragma once

#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"
#include "nn/os/mutex.hpp"

namespace movie::detail {

// A process wide singleton, so reference counting does nothing.
class TaskQueueManager : public ITaskQueueManager {
public:
  static TaskQueueManager* GetInstance();

  TaskQueueManager();

  void AddRef() override {
  }

  void Release() override {
  }

  MovieResult Initialize() override {
    return MovieResult_Success;
  }

  void Finalize() override;
  MovieResult GetInterface(void** ppOutInterface, int id) override;
  MovieResult SetAllocator(IAllocator* allocator) override;
  MovieResult GetTaskQueue(ITaskQueue** ppOutTaskQueue) override;

private:
  nn::os::Mutex m_Mutex;
  RefPtr<IAllocator> m_pAllocator;
  RefPtr<ITaskQueue> m_pTaskQueue;
};

}

namespace movie {

ITaskQueueManager* GetTaskQueueManagerInstance();

}
