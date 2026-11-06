#pragma once

#include <list>
#include <stdint.h>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"
#include "movie/movie_std_lib_allocator.hpp"
#include "nn/os/mutex.hpp"

namespace movie::detail {

class TaskQueueCancellationToken
  : public MovieRefBase<ITaskQueueCancellationToken> {
public:
  TaskQueueCancellationToken(IAllocator* allocator, uint64_t id)
    : MovieRefBase(allocator), m_Id(id) {}

  uint64_t m_Id;
};

// Runs its tasks one after the other on another task queue.
class SerialTaskQueue : public MovieRefBase<ISerialTaskQueue> {
public:
  SerialTaskQueue(IAllocator* allocator, ITaskQueue* taskQueue);
  ~SerialTaskQueue() override;

  void Finalize() override;
  MovieResult QueueTask(ITask* task) override;
  MovieResult QueueTask(ITaskQueueCancellationToken** ppOutToken,
    ITask* task) override;
  void CancelTask(ITaskQueueCancellationToken* token) override;
  MovieResult QueueAsyncCallback(IAsyncCallback* callback) override;

  MovieResult QueueTaskInternal(ITaskQueueCancellationToken** ppOutToken,
    ITask* task);
  MovieResult QueueNextTask();
  void InvokeNextTask();
  void HandleAsyncError(MovieResult result);

private:
  struct Entry {
    uint64_t id;
    RefPtr<ITask> task;
    // The token of the task queued for this entry on the task queue.
    RefPtr<ITaskQueueCancellationToken> token;
  };

  nn::os::Mutex m_Mutex;
  bool m_IsFinalized;
  MovieResult m_Status;
  RefPtr<ITaskQueue> m_pTaskQueue;
  std::list<Entry, StdLibAllocator<Entry>> m_Entries;
};

}

namespace movie {

MovieResult CreateSerialTaskQueue(ISerialTaskQueue** ppOutTaskQueue,
  IAllocator* allocator, ITaskQueue* taskQueue);

}
