#include <atomic>
#include <new>
#include <utility>

#include "movie/detail/movie_serial_task_queue.hpp"

namespace nn::os {

void YieldThread();

}

namespace movie::detail {

namespace {

constexpr MovieResult ResultFinalized = static_cast<MovieResult>(19);

std::atomic<uint64_t> g_NextTaskId;

}

template class MovieRefBase<ISerialTaskQueue>;

SerialTaskQueue::SerialTaskQueue(IAllocator* allocator,
  ITaskQueue* taskQueue)
  : MovieRefBase(allocator), m_Mutex(false), m_IsFinalized(false),
    m_Status(MovieResult_Success), m_pTaskQueue(taskQueue),
    m_Entries(StdLibAllocator<Entry>(allocator)) {
}

SerialTaskQueue::~SerialTaskQueue() {
  Finalize();
}

void SerialTaskQueue::Finalize() {
  m_Mutex.Lock();
  if (!m_IsFinalized) {
    m_Entries.clear();
    m_IsFinalized = true;
  }

  m_Mutex.Unlock();
}

MovieResult SerialTaskQueue::QueueTask(ITask* task) {
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      result = QueueTaskInternal(nullptr, task);
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult SerialTaskQueue::QueueTask(
  ITaskQueueCancellationToken** ppOutToken, ITask* task) {
  if (ppOutToken != nullptr) {
    *ppOutToken = nullptr;
  }

  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      result = QueueTaskInternal(ppOutToken, task);
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult SerialTaskQueue::QueueTaskInternal(
  ITaskQueueCancellationToken** ppOutToken, ITask* task) {
  uint64_t id = g_NextTaskId++;
  RefPtr<TaskQueueCancellationToken> token;
  if (ppOutToken != nullptr) {
    IAllocator* allocator = m_pAllocator;
    void* storage = allocator->Allocate(sizeof(TaskQueueCancellationToken));
    if (storage == nullptr) {
      return MovieResult_OutOfMemory;
    }

    token = new (storage) TaskQueueCancellationToken(allocator, id);
  }

  m_Entries.push_back(Entry{id, RefPtr<ITask>(task), {}});
  if (m_Entries.size() == 1) {
    MovieResult result = QueueNextTask();
    if (result != MovieResult_Success) {
      m_Entries.pop_back();
      if (!IsSucceeded(result)) {
        return result;
      }
    }
  }

  if (ppOutToken != nullptr) {
    *ppOutToken = token.Detach();
  }

  return MovieResult_Success;
}

void SerialTaskQueue::InvokeNextTask() {
  ITask* task = nullptr;
  ITaskQueueCancellationToken* token = nullptr;
  m_Mutex.Lock();
  if (m_IsFinalized) {
    m_Mutex.Unlock();
    return;
  }

  if (!m_Entries.empty()) {
    task = m_Entries.front().task.Detach();
    token = m_Entries.front().token.Detach();
  }

  m_Mutex.Unlock();
  if (task != nullptr) {
    task->Run();
    nn::os::YieldThread();
  }

  m_Mutex.Lock();
  if (!m_IsFinalized && !m_Entries.empty()) {
    m_Entries.pop_front();
    MovieResult result = QueueNextTask();
    if (result != MovieResult_Success && m_Status == MovieResult_Success) {
      m_Status = result;
    }
  }

  m_Mutex.Unlock();
  if (token != nullptr) {
    token->Release();
  }

  if (task != nullptr) {
    task->Release();
  }
}

void SerialTaskQueue::CancelTask(ITaskQueueCancellationToken* token) {
  if (token == nullptr) {
    return;
  }

  m_Mutex.Lock();
  uint64_t id = static_cast<TaskQueueCancellationToken*>(token)->m_Id;
  for (auto it = m_Entries.begin(); it != m_Entries.end(); ++it) {
    if (it->id == id) {
      if (it->token) {
        m_pTaskQueue->CancelTask(it->token.Get());
      }

      m_Entries.erase(it);
      break;
    }
  }

  m_Mutex.Unlock();
}

void SerialTaskQueue::HandleAsyncError(MovieResult result) {
  if (m_Status == MovieResult_Success) {
    m_Status = result == MovieResult_Success ? MovieResult_Unknown : result;
  }
}

}

namespace movie {

MovieResult CreateSerialTaskQueue(ISerialTaskQueue** ppOutTaskQueue,
  IAllocator* allocator, ITaskQueue* taskQueue) {
  *ppOutTaskQueue = nullptr;
  void* storage = allocator->Allocate(sizeof(detail::SerialTaskQueue));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  detail::SerialTaskQueue* queue =
    new (storage) detail::SerialTaskQueue(allocator, taskQueue);
  queue->AddRef();
  *ppOutTaskQueue = queue;
  return MovieResult_Success;
}

}
