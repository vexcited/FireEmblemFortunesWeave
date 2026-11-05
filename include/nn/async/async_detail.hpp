#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>
#include <optional>

#include "nn/memory_resource.hpp"
#include "nn/os/condition_variable.hpp"
#include "nn/os/mutex.hpp"

namespace nn::async {

class Executor;
class ResumeBlocker;

namespace detail {

class CancellationState;
class FiberTaskCoordinatorBase;
class FutureStateBase;
class GroupWaitHolder;

class GroupWait {
public:
  struct SignaledObject {
    GroupWaitHolder* holder;
    int index;
  };

  GroupWait();
  ~GroupWait();

  void LinkGroupWaitHolder(GroupWaitHolder* holder);
  bool TryWait(SignaledObject* pOut);

private:
  uint8_t m_Storage[64];
};

class FiberTaskCoordinatorBase {
public:
  void Await(ResumeBlocker* blocker);
  void YieldTask();
};

}

class ResumeBlocker {
public:
  virtual ~ResumeBlocker() = default;
  virtual detail::GroupWaitHolder* GetGroupWaitHolder() = 0;
};

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

class Executable {
public:
  Executable();
  virtual void DoExecute(const CancellationToken& token) = 0;
  virtual ~Executable();

private:
  uint8_t m_Storage[40];
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

  void DoExecute(const CancellationToken& token) override;
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
  ~ThreadCounter() {}

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
int AwaitAnyImpl(ResumeBlocker* blocker);

}
