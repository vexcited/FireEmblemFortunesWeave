#pragma once

#include <list>
#include <stdint.h>
#include <vector>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/detail/movie_unique_ptr.hpp"
#include "movie/movie_interfaces.hpp"
#include "movie/movie_memory_buffer.hpp"
#include "movie/movie_std_lib_allocator.hpp"
#include "nn/os/event.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/time.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/socket/socket_api.hpp"
#include "nn/socket/socket_types.hpp"

namespace nn::socket {

struct TimeVal;

}

namespace movie::detail {

struct TaskQueueSemaphore {
  TaskQueueSemaphore(int count, int maximum) {
    nn::os::InitializeSemaphore(&semaphore, count, maximum);
  }

  ~TaskQueueSemaphore() {
    nn::os::FinalizeSemaphore(&semaphore);
  }

  // The original never runs the constructors of the members.
  union {
    nn::os::SemaphoreType semaphore;
  };
};

struct TaskQueueEvent {
  explicit TaskQueueEvent(nn::os::EventClearMode mode) {
    nn::os::InitializeEvent(&event, false, mode);
  }

  ~TaskQueueEvent() {
    nn::os::FinalizeEvent(&event);
  }

  union {
    nn::os::EventType event;
  };
};

struct TaskQueueMultiWait {
  TaskQueueMultiWait() {
    nn::os::InitializeMultiWait(&multiWait);
  }

  ~TaskQueueMultiWait() {
    nn::os::FinalizeMultiWait(&multiWait);
  }

  nn::os::MultiWaitType multiWait;
};

struct TaskQueueMultiWaitHolder {
  ~TaskQueueMultiWaitHolder() {
    if (isLinked == true) {
      nn::os::UnlinkMultiWaitHolder(&holder);
      nn::os::FinalizeMultiWaitHolder(&holder);
      isLinked = false;
    }
  }

  void Link(nn::os::MultiWaitType* multiWait) {
    nn::os::LinkMultiWaitHolder(multiWait, &holder);
    isLinked = true;
  }

  nn::os::MultiWaitHolderType holder;
  bool isLinked = false;
};

// Runs its tasks on a pool of worker threads, which also wait for the events
// of the registered handlers.
class TaskQueue final : public MovieRefBase<ITaskQueue> {
public:
  class WorkerThread {
  public:
    WorkerThread() : m_ThreadId(0), m_Thread() {}

    static UniquePtr<WorkerThread> MakeThread(IAllocator* allocator,
      const char* name, void (*function)(void*) noexcept, void* argument,
      size_t stackSize, uint32_t priority, uint32_t coreMask);
    static UniquePtr<WorkerThread> MakeAndStartThread(IAllocator* allocator,
      const char* name, void (*function)(void*) noexcept, void* argument,
      size_t stackSize, uint32_t priority, uint32_t coreMask);

    void StartThread();

    void DestroyThread() {
      if (m_IsStarted == true) {
        nn::os::WaitThread(&m_Thread);
        m_IsStarted = false;
      }

      if (m_IsCreated == true) {
        nn::os::DestroyThread(&m_Thread);
        m_IsCreated = false;
      }
    }

    uint64_t m_ThreadId;
    nn::os::ThreadType m_Thread;
    AllocatedMemory m_Stack;
    bool m_IsCreated = false;
    bool m_IsStarted = false;
  };

  class EventHandler final
    : public MovieRefBase<ITaskQueueRegistrationToken> {
  public:
    enum EventHandlerType : int32_t {
      EventHandlerType_Event,
      EventHandlerType_OneShotTimer,
      EventHandlerType_PeriodicTimer,
      EventHandlerType_Semaphore,
      EventHandlerType_Socket,
      EventHandlerType_SystemEvent,
    };

    EventHandler(IAllocator* allocator, EventHandlerType type, uint64_t id,
      ITask* task);
    EventHandler(IAllocator* allocator, nn::os::EventType* event,
      uint64_t id, ITask* task);
    EventHandler(IAllocator* allocator, nn::os::SystemEventType* event,
      uint64_t id, ITask* task);
    EventHandler(IAllocator* allocator, nn::os::SemaphoreType* semaphore,
      uint64_t id, ITask* task);
    ~EventHandler() override;

    bool IsSignaled();
    void Link(nn::os::MultiWaitType* multiWait);

    nn::os::Mutex m_Mutex;

    struct Socket {
      int32_t reserved;
      int32_t socket;
      nn::socket::FdSet readSet;
      bool hasWriteSet;
      nn::socket::FdSet writeSet;
      bool hasExceptSet;
      nn::socket::FdSet exceptSet;
      bool hasTimeout;
      uint64_t timeout[2];
      int32_t eventFd;
      TaskQueue* pTaskQueue;
      UniquePtr<WorkerThread> thread;
    };

    EventHandlerType m_Type;
    uint64_t m_Id;
    RefPtr<ITask> m_pTask;
    RefPtr<IAsyncCallback> m_pCallback;
    nn::os::MultiWaitHolderType m_Holder;
    bool m_IsLinked;
    // Set while the task of a signaled handler is queued.
    bool m_IsPending;
    union {
      nn::os::EventType* m_pEvent;
      nn::os::SystemEventType* m_pSystemEvent;
      nn::os::SemaphoreType* m_pSemaphore;
      nn::os::TimerEventType m_TimerEvent;
      Socket m_Socket;
    };
  };

  class ThreadEventResult final : public MovieRefBase<IAsyncResult> {
  public:
    ThreadEventResult(IAllocator* allocator, MovieResult result,
      ThreadEvent event)
      : MovieRefBase(allocator), m_Result(result), m_Event(event) {}

    MovieResult GetResult() const override {
      return m_Result;
    }

    MovieResult m_Result;
    ThreadEvent m_Event;
  };

  TaskQueue(IAllocator* allocator, uint32_t priority, uint32_t coreMask);
  ~TaskQueue() override;

  MovieResult Initialize() override;
  void Finalize() override;
  MovieResult GetInterface(void** ppOutInterface, int id) override;

  MovieResult QueueTask(ITask* task) override;
  MovieResult QueueTask(ITaskQueueCancellationToken** ppOutToken,
    ITask* task) override;
  MovieResult QueueOneShotTimerTask(ITaskQueueCancellationToken** ppOutToken,
    nn::TimeSpan delay, ITask* task) override;
  MovieResult QueuePeriodicTimerTask(
    ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
    nn::TimeSpan period, ITask* task) override;
  void CancelTask(ITaskQueueCancellationToken* token) override;
  MovieResult QueueAsyncCallback(IAsyncCallback* callback) override;
  MovieResult RegisterEventHandler(ITaskQueueRegistrationToken** ppOutToken,
    nn::os::EventType* event, ITask* task) override;
  MovieResult RegisterSystemEventHandler(
    ITaskQueueRegistrationToken** ppOutToken,
    nn::os::SystemEventType* event, ITask* task) override;
  MovieResult RegisterSemaphoreAcquiredHandler(
    ITaskQueueRegistrationToken** ppOutToken,
    nn::os::SemaphoreType* semaphore, ITask* task) override;
  MovieResult RegisterSocketEventHandler(
    ITaskQueueRegistrationToken** ppOutToken, int socket,
    nn::socket::FdSet* readSet, nn::socket::FdSet* writeSet,
    nn::socket::FdSet* exceptSet, IAsyncCallback* callback) override;
  MovieResult UpdateSocketEventHandler(ITaskQueueRegistrationToken* token,
    int socket, nn::socket::FdSet* readSet, nn::socket::FdSet* writeSet,
    nn::socket::FdSet* exceptSet) override;
  MovieResult GetSocketEventResult(bool* pOutIsSignaled,
    nn::socket::FdSet* readSet, nn::socket::FdSet* writeSet,
    nn::socket::FdSet* exceptSet, IAsyncResult* result) override;
  void UnregisterEventHandler(ITaskQueueRegistrationToken* token) override;
  void UnregisterEventHandlerAsync(
    ITaskQueueRegistrationToken* token) override;
  MovieResult RegisterThreadEventHandler(IAsyncCallback* callback) override;
  MovieResult UnregisterThreadEventHandler(IAsyncCallback* callback) override;
  MovieResult GetThreadEventResult(ThreadEvent* pOutEvent,
    IAsyncResult* result) override;

  struct TaskEntry {
    nn::TimeSpan time;
    uint64_t id;
    RefPtr<ITask> task;
    RefPtr<EventHandler> handler;
  };

  static void TaskQueueWorkerThreadFunction(void* argument) noexcept;
  static void TaskQueueSocketHandlerThreadFunction(void* argument) noexcept;

  // The original calls all of these through the PLT.
  [[gnu::noinline]] void FinalizeInternal();
  void StartIfNecessary();
  [[gnu::noinline]] void QueueTaskInternal(uint64_t id, ITask* task,
    bool signal, EventHandler* handler);
  [[gnu::noinline]] MovieResult QueueOneShotTimerTaskInternal(
    ITaskQueueCancellationToken** ppOutToken, nn::TimeSpan delay,
    ITask* task);
  void RegisterEventHandler(EventHandler* handler);
  [[gnu::noinline]] void CancelTask(uint64_t id);
  [[gnu::noinline]] bool UnregisterEventHandlerAsync(uint64_t id);
  void UnregisterEventHandler(uint64_t id);
  [[gnu::noinline]] MovieResult UnregisterSocketEventHandler(
    EventHandler* handler);
  [[gnu::noinline]] void ShutdownSocketEventHandler(EventHandler* handler);
  [[gnu::noinline]] MovieResult TaskQueueWorkerThreadBody();
  [[gnu::noinline]] MovieResult TaskQueueSocketHandlerThreadBody(
    EventHandler* handler);
  void HandleAsyncError(MovieResult result);
  [[gnu::noinline]] void NotifyOfThreadEvent(ThreadEvent event);
  [[gnu::noinline]] TaskEntry GetNextTaskToInvoke();
  [[gnu::noinline]] void ProcessEvents();
  [[gnu::noinline]] bool ProcessEventRegistration(bool* pOutIsChanged);
  [[gnu::noinline]] bool ProcessEventUnregistration(bool* pOutIsChanged);

  template <typename T>
  using List = std::list<T, StdLibAllocator<T>>;

  nn::os::Mutex m_Mutex;
  uint32_t m_Priority;
  uint32_t m_CoreMask;
  bool m_IsStarted;
  bool m_IsFinalized;
  MovieResult m_Status;
  TaskQueueSemaphore m_Semaphore;
  TaskQueueEvent m_RegistrationEvent;
  TaskQueueEvent m_UnregistrationEvent;
  TaskQueueMultiWait m_MultiWait;
  // Set while a worker waits for the events of the handlers.
  bool m_IsWaitingForEvents;
  TaskQueueMultiWaitHolder m_SemaphoreHolder;
  TaskQueueMultiWaitHolder m_RegistrationEventHolder;
  std::vector<UniquePtr<WorkerThread>,
    StdLibAllocator<UniquePtr<WorkerThread>>> m_Threads;
  List<TaskEntry> m_Tasks;
  List<RefPtr<EventHandler>> m_EventHandlers;
  List<RefPtr<EventHandler>> m_PendingRegistrations;
  List<RefPtr<EventHandler>> m_PendingUnregistrations;
  List<RefPtr<EventHandler>> m_SocketHandlers;
  List<RefPtr<IAsyncCallback>> m_ThreadEventCallbacks;
};

}
