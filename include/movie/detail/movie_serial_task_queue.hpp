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
  // Event handler tokens cancel the timer event handler of the id.
  enum Type : int32_t {
    Type_Task,
    Type_EventHandler,
  };

  TaskQueueCancellationToken(IAllocator* allocator, uint64_t id,
    Type type = Type_Task)
    : MovieRefBase(allocator), m_Type(type), m_Id(id) {}

  Type m_Type;
  uint64_t m_Id;
};

// Runs its tasks one after the other on another task queue.
class SerialTaskQueue final : public MovieRefBase<ISerialTaskQueue> {
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
  // Both are called through the PLT by the original.
  [[gnu::noinline]] MovieResult QueueNextTask();
  [[gnu::noinline]] void InvokeNextTask();
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
