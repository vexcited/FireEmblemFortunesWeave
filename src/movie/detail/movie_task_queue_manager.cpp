#include "movie/detail/movie_task_queue_manager.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/thread_manager.hpp"

namespace nn::movie {

Result IsInitialized();

}

namespace movie::detail {

namespace {

constexpr uint32_t TaskQueuePriority = 16;

}

TaskQueueManager* TaskQueueManager::GetInstance() {
  static TaskQueueManager instance;
  return &instance;
}

TaskQueueManager::TaskQueueManager() : m_Mutex(false) {
}

MovieResult TaskQueueManager::GetInterface(void** ppOutInterface, int id) {
  *ppOutInterface = nullptr;
  return MovieResult_MessageNotProcessed;
}

void TaskQueueManager::Finalize() {
  m_Mutex.Lock();
  m_pAllocator.Reset();
  ITaskQueue* taskQueue = m_pTaskQueue.Detach();
  m_Mutex.Unlock();
  if (taskQueue != nullptr) {
    taskQueue->Finalize();
    taskQueue->Release();
  }
}

MovieResult TaskQueueManager::SetAllocator(IAllocator* allocator) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::movie::IsInitialized());
  m_Mutex.Lock();
  MovieResult result;
  if (m_pAllocator) {
    result = MovieResult_AlreadyInitialized;
  }
  else {
    m_pAllocator = allocator;
    result = MovieResult_Success;
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueueManager::GetTaskQueue(ITaskQueue** ppOutTaskQueue) {
  *ppOutTaskQueue = nullptr;
  m_Mutex.Lock();
  MovieResult result;
  if (!m_pAllocator) {
    result = MovieResult_NotInitialized;
  }
  else {
    result = MovieResult_Success;
    if (!m_pTaskQueue) {
      result = CreateTaskQueue(m_pTaskQueue.GetAddress(), m_pAllocator.Get(),
        TaskQueuePriority, nn::os::GetThreadAvailableCoreMask());
    }

    if (IsSucceeded(result)) {
      *ppOutTaskQueue = m_pTaskQueue.Get();
      m_pTaskQueue->AddRef();
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

}

namespace movie {

ITaskQueueManager* GetTaskQueueManagerInstance() {
  return detail::TaskQueueManager::GetInstance();
}

}
