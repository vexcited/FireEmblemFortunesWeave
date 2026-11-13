#include <stddef.h>
#include <string.h>
#include <utility>

#include "movie/detail/movie_serial_task_queue.hpp"
#include "movie/detail/movie_task.hpp"
#include "movie/detail/movie_task_queue.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"

namespace movie::detail {

namespace {

constexpr MovieResult ResultFinalized = static_cast<MovieResult>(19);
constexpr size_t WorkerThreadCount = 4;
constexpr size_t WorkerThreadStackSize = 0x10000;
constexpr size_t ThreadStackAlignment = 0x1000;

std::atomic<uint64_t> g_NextTaskId;

}

static_assert(offsetof(TaskQueue, m_Semaphore) == 72);
static_assert(offsetof(TaskQueue, m_MultiWait) == 192);
static_assert(offsetof(TaskQueue, m_IsWaitingForEvents) == 240);
static_assert(offsetof(TaskQueue, m_Threads) == 392);
static_assert(offsetof(TaskQueue, m_ThreadEventCallbacks) == 584);
static_assert(sizeof(TaskQueue) == 616);
static_assert(offsetof(TaskQueue::EventHandler, m_Holder) == 88);
static_assert(offsetof(TaskQueue::EventHandler, m_Socket) == 160);
static_assert(sizeof(TaskQueue::EventHandler) == 688);
static_assert(sizeof(TaskQueue::WorkerThread) == 488);

template class MovieRefBase<ITaskQueue>;
template class MovieRefBase<ITaskQueueRegistrationToken>;

UniquePtr<TaskQueue::WorkerThread> TaskQueue::WorkerThread::MakeThread(
  IAllocator* allocator, const char* name, void (*function)(void*) noexcept,
  void* argument, size_t stackSize, uint32_t priority, uint32_t coreMask) {
  UniquePtr<WorkerThread> result;
  UniquePtr<WorkerThread> thread =
    UniquePtr<WorkerThread>::Make(allocator, 1, {});
  uint32_t size = static_cast<uint32_t>(stackSize);
  void* stack = allocator->Allocate(size, ThreadStackAlignment);
  bool isZeroFilled;
  if (stack != nullptr) {
    memset(stack, 0, size);
    allocator->AddRef();
    isZeroFilled = true;
  }
  else {
    size = 0;
    isZeroFilled = false;
    allocator = nullptr;
  }

  thread->m_Stack.Assign(stack, size, isZeroFilled, allocator);
  if (thread->m_Stack.pData != nullptr) {
    nn::Result created = nn::os::CreateThread(&thread->m_Thread, function,
      argument, thread->m_Stack.pData, thread->m_Stack.size, priority);
    if (created.IsSuccess()) {
      thread->m_IsCreated = true;
      thread->m_ThreadId = nn::os::GetThreadId(&thread->m_Thread);
      if (coreMask != 0) {
        nn::os::SetThreadCoreMask(&thread->m_Thread, -1, coreMask);
      }

      nn::os::SetThreadName(&thread->m_Thread, name);
      result = std::move(thread);
    }
  }

  return result;
}

UniquePtr<TaskQueue::WorkerThread>
TaskQueue::WorkerThread::MakeAndStartThread(IAllocator* allocator,
  const char* name, void (*function)(void*) noexcept, void* argument,
  size_t stackSize, uint32_t priority, uint32_t coreMask) {
  UniquePtr<WorkerThread> result = MakeThread(allocator, name, function,
    argument, stackSize, priority, coreMask);
  if (result) {
    nn::os::StartThread(&result->m_Thread);
    result->m_IsStarted = true;
  }

  return result;
}

void TaskQueue::WorkerThread::StartThread() {
  if (!m_IsStarted) {
    nn::os::StartThread(&m_Thread);
    m_IsStarted = true;
  }
}

TaskQueue::EventHandler::EventHandler(IAllocator* allocator,
  EventHandler::EventHandlerType type, uint64_t id, ITask* task)
  : MovieRefBase(allocator), m_Mutex(false), m_Type(type), m_Id(id),
    m_pTask(task), m_IsLinked(false), m_IsPending(false) {
  memset(&m_TimerEvent, 0, sizeof(m_TimerEvent));
  if (type == EventHandlerType_OneShotTimer ||
    type == EventHandlerType_PeriodicTimer) {
    nn::os::InitializeTimerEvent(&m_TimerEvent,
      nn::os::EventClearMode_AutoClear);
    nn::os::InitializeMultiWaitHolder(&m_Holder, &m_TimerEvent);
  }
}

TaskQueue::EventHandler::EventHandler(IAllocator* allocator,
  nn::os::EventType* event, uint64_t id, ITask* task)
  : MovieRefBase(allocator), m_Mutex(false), m_Type(EventHandlerType_Event),
    m_Id(id), m_pTask(task), m_IsLinked(false), m_IsPending(false),
    m_pEvent(event) {
  nn::os::InitializeMultiWaitHolder(&m_Holder, event);
}

TaskQueue::EventHandler::EventHandler(IAllocator* allocator,
  nn::os::SystemEventType* event, uint64_t id, ITask* task)
  : MovieRefBase(allocator), m_Mutex(false),
    m_Type(EventHandlerType_SystemEvent), m_Id(id), m_pTask(task),
    m_IsLinked(false), m_IsPending(false), m_pSystemEvent(event) {
  nn::os::InitializeMultiWaitHolder(&m_Holder, event);
}

TaskQueue::EventHandler::EventHandler(IAllocator* allocator,
  nn::os::SemaphoreType* semaphore, uint64_t id, ITask* task)
  : MovieRefBase(allocator), m_Mutex(false),
    m_Type(EventHandlerType_Semaphore), m_Id(id), m_pTask(task),
    m_IsLinked(false), m_IsPending(false), m_pSemaphore(semaphore) {
  nn::os::InitializeMultiWaitHolder(&m_Holder, semaphore);
}

TaskQueue::EventHandler::~EventHandler() {
  if (m_Type == EventHandlerType_Socket) {
    if (m_Socket.eventFd != -1) {
      nn::socket::EventFdWrite(m_Socket.eventFd, 1);
    }

    if (m_Socket.thread) {
      m_Socket.thread->DestroyThread();
      m_Socket.thread.Reset();
    }

    if (m_Socket.eventFd != -1) {
      nn::socket::Close(m_Socket.eventFd);
      m_Socket.eventFd = -1;
    }
  }
  else {
    if (m_IsLinked == true) {
      nn::os::UnlinkMultiWaitHolder(&m_Holder);
      m_IsLinked = false;
    }

    nn::os::FinalizeMultiWaitHolder(&m_Holder);
  }

  if (m_Type == EventHandlerType_OneShotTimer ||
    m_Type == EventHandlerType_PeriodicTimer) {
    nn::os::FinalizeTimerEvent(&m_TimerEvent);
  }
}

bool TaskQueue::EventHandler::IsSignaled() {
  switch (m_Type) {
    case EventHandlerType_Event:
      return nn::os::TryWaitEvent(m_pEvent);
    case EventHandlerType_OneShotTimer:
    case EventHandlerType_PeriodicTimer:
      return nn::os::TryWaitTimerEvent(&m_TimerEvent);
    case EventHandlerType_Semaphore:
      return nn::os::TryAcquireSemaphore(m_pSemaphore);
    case EventHandlerType_SystemEvent:
      return nn::os::TryWaitSystemEvent(m_pSystemEvent);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void TaskQueue::EventHandler::Link(nn::os::MultiWaitType* multiWait) {
  if (!m_IsLinked) {
    nn::os::LinkMultiWaitHolder(multiWait, &m_Holder);
    m_IsLinked = true;
  }
}

TaskQueue::TaskQueue(IAllocator* allocator, uint32_t priority,
  uint32_t coreMask)
  : MovieRefBase(allocator), m_Mutex(false), m_Priority(priority),
    m_CoreMask(coreMask), m_IsStarted(false), m_IsFinalized(false),
    m_Status(MovieResult_Success), m_Semaphore(0, 0x7fffffff),
    m_RegistrationEvent(nn::os::EventClearMode_ManualClear),
    m_UnregistrationEvent(nn::os::EventClearMode_ManualClear),
    m_IsWaitingForEvents(false),
    m_Threads(StdLibAllocator<UniquePtr<WorkerThread>>(allocator)),
    m_Tasks(StdLibAllocator<TaskEntry>(allocator)),
    m_EventHandlers(StdLibAllocator<RefPtr<EventHandler>>(allocator)),
    m_PendingRegistrations(StdLibAllocator<RefPtr<EventHandler>>(allocator)),
    m_PendingUnregistrations(
      StdLibAllocator<RefPtr<EventHandler>>(allocator)),
    m_SocketHandlers(StdLibAllocator<RefPtr<EventHandler>>(allocator)),
    m_ThreadEventCallbacks(
      StdLibAllocator<RefPtr<IAsyncCallback>>(allocator)) {
}

TaskQueue::~TaskQueue() {
  Finalize();
}

MovieResult TaskQueue::Initialize() {
  nn::os::InitializeMultiWaitHolder(&m_SemaphoreHolder.holder,
    &m_Semaphore.semaphore);
  m_SemaphoreHolder.Link(&m_MultiWait.multiWait);
  nn::os::InitializeMultiWaitHolder(&m_RegistrationEventHolder.holder,
    &m_RegistrationEvent.event);
  m_RegistrationEventHolder.Link(&m_MultiWait.multiWait);
  m_Threads.reserve(WorkerThreadCount);
  MovieResult result = MovieResult_Success;
  for (size_t i = 0; i < WorkerThreadCount; i++) {
    UniquePtr<WorkerThread> thread = WorkerThread::MakeThread(m_pAllocator,
      "TaskQueueThread", TaskQueueWorkerThreadFunction, this,
      WorkerThreadStackSize, m_Priority, m_CoreMask);
    if (!thread) {
      result = MovieResult_OutOfMemory;
      break;
    }

    m_Threads.push_back(std::move(thread));
  }

  return result;
}

void TaskQueue::Finalize() {
  FinalizeInternal();
}

void TaskQueue::FinalizeInternal() {
  m_Mutex.Lock();
  if (m_IsFinalized) {
    m_Mutex.Unlock();
    return;
  }

  m_Tasks.clear();
  size_t count = m_Threads.size();
  nn::os::ReleaseSemaphore(&m_Semaphore.semaphore, static_cast<int>(count));
  m_IsFinalized = true;
  m_Mutex.Unlock();
  for (size_t i = 0; i < count; i++) {
    UniquePtr<WorkerThread> thread(std::move(m_Threads[i]));
    thread->DestroyThread();
  }

  for (auto it = m_SocketHandlers.begin(); it != m_SocketHandlers.end();
    ++it) {
    ShutdownSocketEventHandler(it->Get());
  }

  m_Mutex.Lock();
  m_Threads.clear();
  m_EventHandlers.clear();
  m_SocketHandlers.clear();
  m_PendingRegistrations.clear();
  m_PendingUnregistrations.clear();
  m_ThreadEventCallbacks.clear();
  nn::os::SignalEvent(&m_UnregistrationEvent.event);
  m_Mutex.Unlock();
}

MovieResult TaskQueue::GetInterface(void** ppOutInterface, int id) {
  *ppOutInterface = nullptr;
  return MovieResult_MessageNotProcessed;
}

void TaskQueue::StartIfNecessary() {
  if (!m_IsStarted && !m_IsFinalized) {
    for (auto it = m_Threads.begin(); it != m_Threads.end(); ++it) {
      (*it)->StartThread();
    }

    m_IsStarted = true;
  }
}

MovieResult TaskQueue::QueueTask(ITask* task) {
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      StartIfNecessary();
      QueueTaskInternal(g_NextTaskId++, task, true, nullptr);
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueue::QueueTask(ITaskQueueCancellationToken** ppOutToken,
  ITask* task) {
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
      StartIfNecessary();
      uint64_t id = g_NextTaskId++;
      if (ppOutToken != nullptr) {
        IAllocator* allocator = m_pAllocator;
        void* storage =
          allocator->Allocate(sizeof(TaskQueueCancellationToken));
        if (storage == nullptr) {
          result = MovieResult_OutOfMemory;
          m_Mutex.Unlock();
          return result;
        }

        TaskQueueCancellationToken* token =
          new (storage) TaskQueueCancellationToken(allocator, id);
        token->AddRef();
        *ppOutToken = token;
      }

      QueueTaskInternal(id, task, true, nullptr);
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

void TaskQueue::QueueTaskInternal(uint64_t id, ITask* task, bool signal,
  EventHandler* handler) {
  nn::TimeSpan time = nn::os::ConvertToTimeSpan(nn::os::GetSystemTick());
  m_Tasks.push_back(TaskEntry{time, id, RefPtr<ITask>(task),
    RefPtr<EventHandler>(handler)});
  if (signal) {
    nn::os::ReleaseSemaphore(&m_Semaphore.semaphore);
  }
}

MovieResult TaskQueue::QueueOneShotTimerTask(
  ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
  ITask* task) {
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
      StartIfNecessary();
      result = QueueOneShotTimerTaskInternal(ppOutToken, delay, task);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueue::QueueOneShotTimerTaskInternal(
  ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
  ITask* task) {
  uint64_t id = g_NextTaskId++;
  IAllocator* allocator = m_pAllocator;
  void* storage = allocator->Allocate(sizeof(EventHandler));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  RefPtr<EventHandler> handler(new (storage) EventHandler(allocator,
    EventHandler::EventHandlerType_OneShotTimer, id, task));
  if (ppOutToken != nullptr) {
    IAllocator* tokenAllocator = m_pAllocator;
    void* tokenStorage =
      tokenAllocator->Allocate(sizeof(TaskQueueCancellationToken));
    if (tokenStorage == nullptr) {
      return MovieResult_OutOfMemory;
    }

    TaskQueueCancellationToken* token = new (tokenStorage)
      TaskQueueCancellationToken(tokenAllocator, id,
        TaskQueueCancellationToken::Type_EventHandler);
    token->AddRef();
    *ppOutToken = token;
  }

  RegisterEventHandler(handler.Get());
  nn::os::StartOneShotTimerEvent(&handler->m_TimerEvent, delay);
  return MovieResult_Success;
}

MovieResult TaskQueue::QueuePeriodicTimerTask(
  ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
  nn::TimeSpan period, ITask* task) {
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
      StartIfNecessary();
      uint64_t id = g_NextTaskId++;
      IAllocator* allocator = m_pAllocator;
      void* storage = allocator->Allocate(sizeof(EventHandler));
      if (storage == nullptr) {
        result = MovieResult_OutOfMemory;
      }
      else {
        RefPtr<EventHandler> handler(new (storage) EventHandler(allocator,
          EventHandler::EventHandlerType_PeriodicTimer, id, task));
        result = MovieResult_Success;
        if (ppOutToken != nullptr) {
          IAllocator* tokenAllocator = m_pAllocator;
          void* tokenStorage =
            tokenAllocator->Allocate(sizeof(TaskQueueCancellationToken));
          if (tokenStorage == nullptr) {
            result = MovieResult_OutOfMemory;
          }
          else {
            TaskQueueCancellationToken* token = new (tokenStorage)
              TaskQueueCancellationToken(tokenAllocator, id,
                TaskQueueCancellationToken::Type_EventHandler);
            token->AddRef();
            *ppOutToken = token;
          }
        }

        if (result == MovieResult_Success) {
          RegisterEventHandler(handler.Get());
          nn::os::StartPeriodicTimerEvent(&handler->m_TimerEvent, delay,
            period);
        }
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

void TaskQueue::RegisterEventHandler(EventHandler* handler) {
  m_PendingRegistrations.push_back(RefPtr<EventHandler>(handler));
  nn::os::SignalEvent(&m_RegistrationEvent.event);
  if (!m_IsWaitingForEvents) {
    nn::os::ReleaseSemaphore(&m_Semaphore.semaphore);
  }
}

void TaskQueue::CancelTask(ITaskQueueCancellationToken* token) {
  if (token == nullptr) {
    return;
  }

  TaskQueueCancellationToken* cancellationToken =
    static_cast<TaskQueueCancellationToken*>(token);
  switch (cancellationToken->m_Type) {
    case TaskQueueCancellationToken::Type_Task:
      CancelTask(cancellationToken->m_Id);
      break;
    case TaskQueueCancellationToken::Type_EventHandler:
      UnregisterEventHandlerAsync(cancellationToken->m_Id);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void TaskQueue::CancelTask(uint64_t id) {
  m_Mutex.Lock();
  for (auto it = m_Tasks.begin(); it != m_Tasks.end(); ++it) {
    if (it->id == id) {
      m_Tasks.erase(it);
      break;
    }
  }

  m_Mutex.Unlock();
}

MovieResult TaskQueue::RegisterEventHandler(
  ITaskQueueRegistrationToken** ppOutToken, nn::os::EventType* event,
  ITask* task) {
  *ppOutToken = nullptr;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      StartIfNecessary();
      uint64_t id = g_NextTaskId++;
      IAllocator* allocator = m_pAllocator;
      void* storage = allocator->Allocate(sizeof(EventHandler));
      if (storage == nullptr) {
        result = MovieResult_OutOfMemory;
      }
      else {
        EventHandler* handler =
          new (storage) EventHandler(allocator, event, id, task);
        handler->AddRef();
        RegisterEventHandler(handler);
        result = MovieResult_Success;
        *ppOutToken = handler;
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueue::RegisterSystemEventHandler(
  ITaskQueueRegistrationToken** ppOutToken, nn::os::SystemEventType* event,
  ITask* task) {
  *ppOutToken = nullptr;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      StartIfNecessary();
      uint64_t id = g_NextTaskId++;
      IAllocator* allocator = m_pAllocator;
      void* storage = allocator->Allocate(sizeof(EventHandler));
      if (storage == nullptr) {
        result = MovieResult_OutOfMemory;
      }
      else {
        EventHandler* handler =
          new (storage) EventHandler(allocator, event, id, task);
        handler->AddRef();
        RegisterEventHandler(handler);
        result = MovieResult_Success;
        *ppOutToken = handler;
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueue::RegisterSemaphoreAcquiredHandler(
  ITaskQueueRegistrationToken** ppOutToken, nn::os::SemaphoreType* semaphore,
  ITask* task) {
  *ppOutToken = nullptr;
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      StartIfNecessary();
      uint64_t id = g_NextTaskId++;
      IAllocator* allocator = m_pAllocator;
      void* storage = allocator->Allocate(sizeof(EventHandler));
      if (storage == nullptr) {
        result = MovieResult_OutOfMemory;
      }
      else {
        EventHandler* handler =
          new (storage) EventHandler(allocator, semaphore, id, task);
        handler->AddRef();
        RegisterEventHandler(handler);
        result = MovieResult_Success;
        *ppOutToken = handler;
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueue::QueueAsyncCallback(IAsyncCallback* callback) {
  m_Mutex.Lock();
  MovieResult result;
  if (m_IsFinalized) {
    result = ResultFinalized;
  }
  else {
    result = m_Status;
    if (IsSucceeded(result)) {
      StartIfNecessary();
      uint64_t id = g_NextTaskId++;
      auto function = [callback = RefPtr<IAsyncCallback>(callback)]() {
        callback->Invoke();
      };
      RefPtr<ITask> task;
      result = CreateTask(&task, m_pAllocator, function);
      if (task) {
        QueueTaskInternal(id, task.Get(), true, nullptr);
        result = MovieResult_Success;
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

bool TaskQueue::UnregisterEventHandlerAsync(uint64_t id) {
  m_Mutex.Lock();
  bool isUnregistering = false;
  if (!m_IsFinalized) {
    auto pending = m_PendingRegistrations.begin();
    for (; pending != m_PendingRegistrations.end(); ++pending) {
      if ((*pending)->m_Id == id) {
        break;
      }
    }

    if (pending != m_PendingRegistrations.end()) {
      // The original reloads the handler and tests it for null.
      __asm__ volatile("" ::: "memory");
      m_PendingRegistrations.erase(pending);
    }
    else {
      auto it = m_EventHandlers.begin();
      for (; it != m_EventHandlers.end(); ++it) {
        if ((*it)->m_Id == id) {
          break;
        }
      }

      if (it != m_EventHandlers.end()) {
        EventHandler* handler = it->Get();
        m_PendingUnregistrations.push_back(std::move(*it));
        m_EventHandlers.erase(it);
        if (handler->m_IsPending == true) {
          for (auto task = m_Tasks.begin(); task != m_Tasks.end();) {
            auto next = task;
            ++next;
            if (task->id == id) {
              m_Tasks.erase(task);
            }

            task = next;
          }
        }

        nn::os::SignalEvent(&m_RegistrationEvent.event);
        if (!m_IsWaitingForEvents) {
          nn::os::ReleaseSemaphore(&m_Semaphore.semaphore);
        }

        nn::os::ClearEvent(&m_UnregistrationEvent.event);
        isUnregistering = true;
      }
    }
  }

  m_Mutex.Unlock();
  return isUnregistering;
}

void TaskQueue::UnregisterEventHandler(ITaskQueueRegistrationToken* token) {
  if (token == nullptr) {
    return;
  }

  EventHandler* handler = static_cast<EventHandler*>(token);
  if (handler->m_Type == EventHandler::EventHandlerType_Socket) {
    UnregisterSocketEventHandler(handler);
  }
  else {
    UnregisterEventHandler(handler->m_Id);
  }
}

void TaskQueue::UnregisterEventHandler(uint64_t id) {
  if (UnregisterEventHandlerAsync(id)) {
    nn::os::WaitEvent(&m_UnregistrationEvent.event);
  }
}

void TaskQueue::UnregisterEventHandlerAsync(
  ITaskQueueRegistrationToken* token) {
  if (token == nullptr) {
    return;
  }

  EventHandler* handler = static_cast<EventHandler*>(token);
  if (handler->m_Type == EventHandler::EventHandlerType_Socket) {
    UnregisterSocketEventHandler(handler);
  }
  else {
    UnregisterEventHandlerAsync(handler->m_Id);
  }
}

void TaskQueue::HandleAsyncError(MovieResult result) {
  m_Mutex.Lock();
  if (m_Status == MovieResult_Success) {
    m_Status = result == MovieResult_Success ? MovieResult_Unknown : result;
  }

  m_Mutex.Unlock();
}

MovieResult TaskQueue::RegisterThreadEventHandler(IAsyncCallback* callback) {
  m_Mutex.Lock();
  auto it = m_ThreadEventCallbacks.begin();
  for (; it != m_ThreadEventCallbacks.end(); ++it) {
    if (it->Get() == callback) {
      break;
    }
  }

  if (it == m_ThreadEventCallbacks.end()) {
    m_ThreadEventCallbacks.emplace_back(callback);
  }

  m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult TaskQueue::UnregisterThreadEventHandler(
  IAsyncCallback* callback) {
  m_Mutex.Lock();
  MovieResult result = MovieResult_MessageNotProcessed;
  for (auto it = m_ThreadEventCallbacks.begin();
    it != m_ThreadEventCallbacks.end(); ++it) {
    if (it->Get() == callback) {
      m_ThreadEventCallbacks.erase(it);
      result = MovieResult_Success;
      break;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult TaskQueue::GetThreadEventResult(ThreadEvent* pOutEvent,
  IAsyncResult* result) {
  *pOutEvent = ThreadEvent_None;
  ThreadEventResult* eventResult = static_cast<ThreadEventResult*>(result);
  MovieResult status = eventResult->m_Result;
  if (IsSucceeded(status)) {
    *pOutEvent = eventResult->m_Event;
    return MovieResult_Success;
  }

  return status;
}

TaskQueue::TaskEntry TaskQueue::GetNextTaskToInvoke() {
  TaskEntry entry = {nn::os::ConvertToTimeSpan(nn::os::GetSystemTick())};
  if (!m_Tasks.empty()) {
    entry = std::move(m_Tasks.front());
    m_Tasks.pop_front();
  }

  return entry;
}

void TaskQueue::TaskQueueWorkerThreadFunction(void* argument) noexcept {
  static_cast<TaskQueue*>(argument)->TaskQueueWorkerThreadBody();
}

}

namespace movie {

MovieResult CreateTaskQueue(ITaskQueue** ppOutTaskQueue,
  IAllocator* allocator, uint32_t priority, uint32_t coreMask) {
  *ppOutTaskQueue = nullptr;
  void* storage = allocator->Allocate(sizeof(detail::TaskQueue));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  detail::RefPtr<detail::TaskQueue> queue(
    new (storage) detail::TaskQueue(allocator, priority, coreMask));
  MovieResult result = queue->Initialize();
  if (result != MovieResult_Success) {
    queue->Finalize();
    queue.Reset();
    if (!IsSucceeded(result)) {
      return result;
    }
  }

  *ppOutTaskQueue = queue.Detach();
  return MovieResult_Success;
}

}
