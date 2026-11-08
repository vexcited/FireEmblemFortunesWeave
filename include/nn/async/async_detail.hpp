#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>
#include <optional>

#include "nn/memory_resource.hpp"
#include "nn/os/condition_variable.hpp"
#include "nn/os/event.hpp"
#include "nn/os/message_queue.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::async {

class CancellationToken;
class Executable;
class Executor;
class ResumeBlocker;

namespace detail {

class CancellationState;
class FiberTaskCoordinatorBase;
class FutureStateBase;
class GroupWait;

class GroupWaitHolder : public util::IntrusiveListBaseNode<GroupWaitHolder> {
public:
  struct InnerHolder {
    os::MultiWaitHolderType holder;
    GroupWaitHolder* owner;
    GroupWait* groupWait;
  };

  enum WaitTarget : int32_t {
    WaitTarget_All,
    WaitTarget_Any,
  };

  virtual ~GroupWaitHolder() = default;
  virtual int GetCount() const = 0;
  virtual InnerHolder* GetHolder(int index) = 0;
  virtual int GetIndex(InnerHolder* holder) = 0;
  virtual WaitTarget GetWaitTarget() const = 0;

  void* GetUserData() const {
    return m_pUserData;
  }

  void SetUserData(void* pUserData) {
    m_pUserData = pUserData;
  }

private:
  void* m_pUserData;
};

class GroupWaitHolderOne final : public GroupWaitHolder {
public:
  GroupWaitHolderOne() {
    m_Inner.owner = nullptr;
    m_Inner.groupWait = nullptr;
  }

  template<typename... Args>
  explicit GroupWaitHolderOne(Args... args) : m_Inner() {
    os::InitializeMultiWaitHolder(&m_Inner.holder, args...);
    m_Inner.owner = this;
  }

  ~GroupWaitHolderOne() override;

  void Finalize();
  int GetCount() const override;
  InnerHolder* GetHolder(int index) override;
  int GetIndex(InnerHolder* holder) override;
  WaitTarget GetWaitTarget() const override;

  os::MultiWaitHolderType* GetMultiWaitHolder() {
    return &m_Inner.holder;
  }

  void AttachOwner() {
    m_Inner.owner = this;
  }

private:
  InnerHolder m_Inner;
};

class GroupWait {
public:
  struct SignaledObject {
    GroupWaitHolder* holder;
    int index;
  };

  GroupWait();
  ~GroupWait();

  void LinkGroupWaitHolder(GroupWaitHolder* holder);
  void UnlinkGroupWaitHolder(GroupWaitHolder* holder);
  void UnlinkAllGroupWaitHolders();
  SignaledObject Wait();
  bool TryWait(SignaledObject* pOut);

private:
  using HolderList = util::IntrusiveList<GroupWaitHolder,
    util::IntrusiveListBaseNodeTraits<GroupWaitHolder>>;

  void LinkMultiWaitHolder(GroupWaitHolder::InnerHolder* holder);
  void UnlinkMultiWaitHolder(GroupWaitHolder::InnerHolder* holder);
  bool CheckIfWaitRetryIsNeeded(SignaledObject* pOut,
    os::MultiWaitHolderType* signaled);

  os::MultiWaitType m_MultiWait;
  HolderList m_Holders;
};

class FiberTaskCoordinatorBase {
public:
  void Await(ResumeBlocker* blocker);
  void YieldTask();
  void SuspendAndExecuteInline(Executable* executable,
    const CancellationToken& token);
};

}

class ResumeBlocker {
public:
  virtual ~ResumeBlocker() = default;
  virtual detail::GroupWaitHolder* GetGroupWaitHolder() = 0;
};

class ResumeBlockerOne final : public ResumeBlocker {
public:
  template<typename... Args>
  explicit ResumeBlockerOne(Args... args) : m_Holder(args...) {}

  detail::GroupWaitHolder* GetGroupWaitHolder() override {
    return &m_Holder;
  }

private:
  detail::GroupWaitHolderOne m_Holder;
};

void Await(os::EventType* event);
void Await(os::MessageQueueType* queue, os::MessageQueueWaitType waitType);
void Await(os::SemaphoreType* semaphore);
void Await(os::SystemEventType* event);
void Await(os::ThreadType* thread);
void Await(os::TimerEventType* event);

namespace detail {

class CancellationTokenAccessor;

}

class CancellationToken {
public:
  CancellationToken() = default;
  explicit CancellationToken(
    std::shared_ptr<detail::CancellationState> state);

  bool IsCancellationRequested() const;

private:
  friend class detail::CancellationTokenAccessor;

  std::shared_ptr<detail::CancellationState> m_State;
};

enum ExecutionResultCode : int32_t {
  ExecutionResultCode_Complete,
  ExecutionResultCode_Await,
  ExecutionResultCode_Yield,
  ExecutionResultCode_Invalid,
};

class ExecutionResult {
public:
  ExecutionResult(ExecutionResultCode code, ResumeBlocker* blocker);

  ResumeBlocker* GetBlocker() const {
    return m_pBlocker;
  }

  ExecutionResultCode GetCode() const {
    return m_Code;
  }

private:
  ResumeBlocker* m_pBlocker;
  ExecutionResultCode m_Code;
};

class Executable {
public:
  Executable();
  virtual ExecutionResult DoExecute(const CancellationToken& token) = 0;
  virtual ~Executable();

  ExecutionResult Execute(const CancellationToken& token);

private:
  os::MutexType m_Mutex;
  int32_t m_State;
};

enum SuspendableTaskFlag : int32_t {
  SuspendableTaskFlag_None,
  SuspendableTaskFlag_ShareStack,
};

}

namespace nn::os {

enum FiberFlag : int32_t {};

}

namespace nn::async::detail {

// The original value initializes the mutex member by member, so the padding
// of MutexType keeps its previous contents.
inline void ClearMutexType(os::MutexType* mutex) {
  mutex->initialized = 0;
  mutex->recursive = 0;
  mutex->lock_level = 0;
  mutex->count = 0;
  mutex->owner = nullptr;
  mutex->lock = {};
}

struct TaskExecutionContext {
  TaskExecutionContext();

  Executor* executor;
  CancellationToken token;
  FiberTaskCoordinatorBase* coordinator;
};

TaskExecutionContext* GetThreadLocalTaskExecutionContext();
bool TryGetThreadLocalTaskExecutionContext(TaskExecutionContext** pOut);

class ThreadLocalTaskExecutionContextRegister : public TaskExecutionContext {
public:
  ThreadLocalTaskExecutionContextRegister();
  ~ThreadLocalTaskExecutionContextRegister();
};

class InheritingThreadLocalTaskExecutionContextRegister
  : public TaskExecutionContext {
public:
  InheritingThreadLocalTaskExecutionContextRegister();
  ~InheritingThreadLocalTaskExecutionContextRegister();

private:
  TaskExecutionContext* m_pParent;
};

class ScopedExecutorRegister {
public:
  explicit ScopedExecutorRegister(Executor* executor);
  ~ScopedExecutorRegister();

private:
  Executor* m_pPrevious;
};

class ScopedCancellationTokenRegister {
public:
  explicit ScopedCancellationTokenRegister(const CancellationToken& token);
  ~ScopedCancellationTokenRegister();

private:
  CancellationToken m_Previous;
};

class SynchronousContinuationList {
public:
  explicit SynchronousContinuationList(MemoryResource* resource);
  ~SynchronousContinuationList();

  bool BeginAddingContinuation();
  void AddContinuation(std::shared_ptr<Executable> executable, bool isInline,
    const CancellationToken& token);
  void EndAddingContinuation();
  void ExecuteContinuations();

private:
  struct Node {
    Node* next;
    Node* prev;
  };

  MemoryResource* m_pResource;
  Node m_Head;
  os::MutexType m_Mutex;
  bool m_IsExecuted;
};

class IContinuationListHolder {
public:
  virtual ~IContinuationListHolder() = default;
  virtual SynchronousContinuationList* GetSynchronousContinuationList() = 0;
};

class TaskCoordinatorBase : public Executable,
  public IContinuationListHolder {
public:
  TaskCoordinatorBase(MemoryResource* resource, FutureStateBase* state,
    FutureStateBase* result);

  ExecutionResult DoExecute(const CancellationToken& token) override;
  SynchronousContinuationList* GetSynchronousContinuationList() override;

protected:
  virtual void Run() = 0;
  virtual void Complete() = 0;
  virtual void Finish() = 0;

private:
  std::optional<SynchronousContinuationList> m_Continuations;
};

class ThreadCounter {
public:
  ThreadCounter();

  ~ThreadCounter() {
    os::FinalizeConditionVariable(&m_Condition);
    os::FinalizeMutex(&m_Mutex);
  }

  void Join();
  void Leave();
  void WaitForAllLeaving();
  int GetCount();

private:
  int m_Count;
  os::MutexType m_Mutex;

  // The condition variable is only set up by InitializeConditionVariable.
  union {
    os::ConditionVariableType m_Condition;
  };
};

os::FiberFlag ConvertToOsFiberFlag(SuspendableTaskFlag flag);

void AwaitImpl(ResumeBlocker* blocker);
void ExecuteInline(Executable* executable, const CancellationToken& token);
void ExecuteSuspendableInline(Executable* executable,
  const CancellationToken& token);
void SuspendAndExecuteInline(Executable* executable,
  const CancellationToken& token);
void ExecuteTaskInline(Executable* executable, bool isSuspendable,
  const CancellationToken& token);
int AwaitAnyImpl(ResumeBlocker* blocker);

}
