#pragma once

#include <atomic>
#include <memory>
#include <stddef.h>
#include <stdint.h>

#include "nn/async/async_detail.hpp"
#include "nn/memory_resource.hpp"
#include "nn/os/event.hpp"
#include "nn/os/event_class.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/mutex.hpp"
#include "nn/span.hpp"

namespace nn::os {

struct ThreadType;

}

namespace nn::async {

namespace detail {

class IWaitHandler {
public:
  virtual ~IWaitHandler() = default;
  virtual void InitializeMultiWaitHolder(os::MultiWaitHolderType* holder) = 0;
};

}

namespace detail {

class ExecutionScheduler;

}

class ExecutionBlocker {
public:
  bool IsBlocked() const;

private:
  friend class detail::ExecutionScheduler;

  std::shared_ptr<detail::IWaitHandler> m_Handler;
};

namespace detail {

class ExecutionScheduler {
public:
  explicit ExecutionScheduler(MemoryResource* resource);
  ~ExecutionScheduler();

  bool IsEmpty();
  void Enqueue(std::shared_ptr<Executable> executable,
    CancellationToken token);
  void Enqueue(std::shared_ptr<Executable> executable,
    CancellationToken token, ExecutionBlocker blocker);
  void DequeueAndCall();
  void DequeueAndCall(os::EventType* pExitEvent);
  bool TryDequeueAndCall();
  void DequeueAndCallAll();

private:
  struct WorkItem : util::IntrusiveListBaseNode<WorkItem> {
    WorkItem(std::shared_ptr<Executable>&& executable,
      CancellationToken&& token)
      : executable(std::move(executable)), token(std::move(token)),
        resumeBlocker(nullptr) {}

    WorkItem(std::shared_ptr<Executable>&& executable,
      CancellationToken&& token, ExecutionBlocker&& blocker)
      : executable(std::move(executable)), token(std::move(token)),
        blocker(std::move(blocker)), resumeBlocker(nullptr) {}

    bool IsBlocked() const {
      return blocker.m_Handler != nullptr || resumeBlocker != nullptr;
    }

    GroupWaitHolder* GetGroupWaitHolder();

    std::shared_ptr<Executable> executable;
    CancellationToken token;
    ExecutionBlocker blocker;
    GroupWaitHolderOne holder;
    ResumeBlocker* resumeBlocker;
  };

  using WorkItemList = util::IntrusiveList<WorkItem,
    util::IntrusiveListBaseNodeTraits<WorkItem>>;

  enum WorkItemGroupKind : int32_t {
    WorkItemGroupKind_Runnable,
    WorkItemGroupKind_Blocked,
  };

  struct WorkItemGroup : util::IntrusiveListBaseNode<WorkItemGroup> {
    explicit WorkItemGroup(WorkItemGroupKind kind) : kind(kind) {}

    WorkItemGroupKind kind;
    WorkItemList items;
  };

  using WorkItemGroupList = util::IntrusiveList<WorkItemGroup,
    util::IntrusiveListBaseNodeTraits<WorkItemGroup>>;

  enum SignalKind : int32_t {
    SignalKind_Refresh,
    SignalKind_Extra,
    SignalKind_WorkItem,
    SignalKind_None,
  };

  struct Signal {
    SignalKind kind;
    WorkItem* item;
  };

  class WorkItemMultiWait : public GroupWait {
  public:
    explicit WorkItemMultiWait(os::EventType* pRefreshEvent);

    void LinkWorkItem(WorkItem* item);
    void UnlinkWorkItem(WorkItem* item);
    Signal WaitAny(GroupWaitHolder* extra);
    Signal TryWaitAny(GroupWaitHolder* extra);

  private:
    friend class ExecutionScheduler;

    os::EventType* m_pRefreshEvent;
  };

  WorkItem* CreateWorkItem(std::shared_ptr<Executable> executable,
    CancellationToken token, ExecutionBlocker blocker);
  void DestroyWorkItem(WorkItem* item);
  void EnqueueWorkItem(WorkItem* item);
  void EnqueueBlockedWorkItem(WorkItem* item);
  void EnqueueRunnableWorkItem(WorkItem* item);
  void UpdateRefreshEvent();
  void ExecuteWorkItem(WorkItem* item);
  bool TryDequeueMonitoredWorkItem(WorkItem** pOut);
  void MovePreMonitoredWorkItemsToMonitoredList();
  bool TryDequeueRunnableWorkItem(WorkItem** pOut);
  Signal WaitForSignal(GroupWaitHolder* extra);
  WorkItem* DoRefreshJob();

  MemoryResource* m_pResource;
  WorkItemList m_PreMonitoredItems;
  WorkItemGroupList m_Groups;
  os::Event m_RefreshEvent;
  WorkItemMultiWait m_MultiWait;
  std::atomic<uint32_t> m_MonitoredCount;
  os::Mutex m_ListMutex;
  os::Mutex m_WaitMutex;
  ThreadCounter m_ThreadCounter;
  bool m_IsExiting;
};

}

class Executor {
public:
  virtual void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token) = 0;
  virtual void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token, ExecutionBlocker blocker) = 0;
  virtual ~Executor() = default;
};

void EnqueueExecutable(Executor* executor,
  std::shared_ptr<Executable> executable, const CancellationToken& token);
void EnqueueExecutable(Executor* executor,
  std::shared_ptr<Executable> executable, const CancellationToken& token,
  ExecutionBlocker blocker);

class QueuingExecutor final : public Executor {
public:
  explicit QueuingExecutor(MemoryResource* resource);
  ~QueuingExecutor() override;

  void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token) override;
  void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token, ExecutionBlocker blocker) override;

  bool TryExecuteOne();
  void LoopExecution();
  void RequestLoopExecutionExit();
  bool IsRequestedLoopExecutionExit();
  void ExecuteAll();

private:
  detail::ExecutionScheduler m_Scheduler;

  // The event is only set up by InitializeEvent.
  union {
    os::EventType m_ExitEvent;
  };
};

class ThreadPool {
public:
  explicit ThreadPool(MemoryResource* resource);
  ~ThreadPool();

  bool HasStartedThreads() const;
  void StartThreads(int count, size_t stackSize, int priority);
  void StartThreads(int count, void** stacks, size_t stackSize,
    int priority);
  void StartThreads(int count, void** stacks, size_t stackSize, int priority,
    int* pCoreNumbers);
  void RequestThreadExit();
  void JoinThreads();

private:
  static void WorkerThreadMain(void* argument);

  void DestroyThreads(Span<os::ThreadType*>& threads);
  Result StartThreadsImpl(int count, void** stacks, size_t stackSize,
    int priority, int* pCoreNumbers);

  MemoryResource* m_pResource;
  Span<os::ThreadType*> m_Threads;
  QueuingExecutor m_Executor;
  bool m_IsJoined;
};

template <typename T>
class Future {
public:
  Future() = default;
  explicit Future(std::shared_ptr<detail::FutureState<T>> state)
    : m_State(std::move(state)) {}

private:
  std::shared_ptr<detail::FutureState<T>> m_State;
};

Future<void> MakeReadyFuture(MemoryResource* resource);

bool IsAwaitable();
void YieldTask();
Executor* GetCurrentExecutor();
void DumpAllTaskDebugData();
void DumpAllTaskDebugData(bool isDetailed);

}
