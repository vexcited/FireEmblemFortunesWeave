#include "nn/async/async_detail.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/os/tls.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::async::detail {

namespace {

class TaskExecutionContextTlsSlot {
public:
  // Used keeps the optimizer from dropping the this argument, which the
  // original still passes.
  [[gnu::noinline, gnu::used]] TaskExecutionContextTlsSlot() {
    NN_ABORT_UNLESS_RESULT_SUCCESS(os::SdkAllocateTlsSlot(&m_Slot, nullptr));
  }

  ~TaskExecutionContextTlsSlot() {
    os::FreeTlsSlot(m_Slot);
  }

  os::TlsSlot Get() const {
    return m_Slot;
  }

private:
  os::TlsSlot m_Slot;
};

os::TlsSlot GetTaskExecutionContextTlsSlot() {
  static TaskExecutionContextTlsSlot s_Slot;
  return s_Slot.Get();
}

}

ScopedExecutorRegister::ScopedExecutorRegister(Executor* executor) {
  m_pPrevious = GetThreadLocalTaskExecutionContext()->executor;
  GetThreadLocalTaskExecutionContext()->executor = executor;
}

ScopedExecutorRegister::~ScopedExecutorRegister() {
  GetThreadLocalTaskExecutionContext()->executor = m_pPrevious;
}

ScopedCancellationTokenRegister::ScopedCancellationTokenRegister(
  const CancellationToken& token) {
  m_Previous = std::move(GetThreadLocalTaskExecutionContext()->token);
  GetThreadLocalTaskExecutionContext()->token = token;
}

ScopedCancellationTokenRegister::~ScopedCancellationTokenRegister() {
  GetThreadLocalTaskExecutionContext()->token = std::move(m_Previous);
}

[[gnu::noinline]] SynchronousContinuationList::SynchronousContinuationList(
  MemoryResource* resource) : m_pResource(resource) {
  ClearMutexType(&m_Mutex);
  os::InitializeMutex(&m_Mutex, false, 0);
  m_IsExecuted = false;
}

SynchronousContinuationList::~SynchronousContinuationList() {
  NN_ABORT_UNLESS(m_Continuations.empty());
  os::FinalizeMutex(&m_Mutex);
}

bool SynchronousContinuationList::BeginAddingContinuation() {
  os::LockMutex(&m_Mutex);
  if (m_IsExecuted) {
    os::UnlockMutex(&m_Mutex);
    return false;
  }

  return true;
}

void SynchronousContinuationList::AddContinuation(
  std::shared_ptr<Executable> executable, bool isInline,
  const CancellationToken& token) {
  Continuation* continuation =
    new (m_pResource->allocate(sizeof(Continuation))) Continuation();
  continuation->executable = std::move(executable);
  continuation->token = token;
  continuation->isInline = isInline;
  m_Continuations.push_back(*continuation);
}

void SynchronousContinuationList::EndAddingContinuation() {
  os::UnlockMutex(&m_Mutex);
}

void SynchronousContinuationList::ExecuteContinuations() {
  os::LockMutex(&m_Mutex);
  m_IsExecuted = true;
  os::UnlockMutex(&m_Mutex);
  for (ContinuationList::iterator it = m_Continuations.begin();
    it != m_Continuations.end();) {
    Continuation& continuation = *it;
    ExecuteTaskInline(continuation.executable.get(), continuation.isInline,
      continuation.token);
    it = m_Continuations.erase(it);
    continuation.~Continuation();
    m_pResource->deallocate(&continuation, sizeof(Continuation));
  }
}

TaskCoordinatorBase::TaskCoordinatorBase(MemoryResource* resource,
  FutureStateBase* /* state */, FutureStateBase* /* result */) {
  if (resource != nullptr) {
    m_Continuations.emplace(resource);
  }
}

ExecutionResult TaskCoordinatorBase::DoExecute(
  const CancellationToken& token) {
  const ExecutionResult result = [&] {
    ScopedCancellationTokenRegister tokenRegister(token);
    const ExecutionResult executed = Run();
    if (executed.GetCode() == ExecutionResultCode_Complete) {
      Finish();
      Complete();
      if (m_Continuations.has_value()) {
        m_Continuations->ExecuteContinuations();
      }
    }

    return executed;
  }();

  switch (result.GetCode()) {
    case ExecutionResultCode_Complete:
    case ExecutionResultCode_Await:
    case ExecutionResultCode_Yield:
      break;
    case ExecutionResultCode_Invalid:
      NN_ABORT_UNLESS(false);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  return result;
}

SynchronousContinuationList*
TaskCoordinatorBase::GetSynchronousContinuationList() {
  return m_Continuations ? &*m_Continuations : nullptr;
}

[[gnu::noinline]] TaskExecutionContext::TaskExecutionContext()
  : executor(nullptr), token(), coordinator(nullptr) {}

[[gnu::noinline]] TaskExecutionContext* GetThreadLocalTaskExecutionContext() {
  return reinterpret_cast<TaskExecutionContext*>(
    os::GetTlsValue(GetTaskExecutionContextTlsSlot()));
}

bool TryGetThreadLocalTaskExecutionContext(TaskExecutionContext** pOut) {
  TaskExecutionContext* context = reinterpret_cast<TaskExecutionContext*>(
    os::GetTlsValue(GetTaskExecutionContextTlsSlot()));
  if (context != nullptr) {
    *pOut = context;
  }

  return context != nullptr;
}

ThreadLocalTaskExecutionContextRegister::
ThreadLocalTaskExecutionContextRegister() {
  static_cast<void>(os::GetTlsValue(GetTaskExecutionContextTlsSlot()));
  os::SetTlsValue(GetTaskExecutionContextTlsSlot(),
    reinterpret_cast<uintptr_t>(static_cast<TaskExecutionContext*>(this)));
}

ThreadLocalTaskExecutionContextRegister::
~ThreadLocalTaskExecutionContextRegister() {
  static_cast<void>(os::GetTlsValue(GetTaskExecutionContextTlsSlot()));
  os::SetTlsValue(GetTaskExecutionContextTlsSlot(), 0);
}

InheritingThreadLocalTaskExecutionContextRegister::
InheritingThreadLocalTaskExecutionContextRegister() : m_pParent(nullptr) {
  if (os::GetTlsValue(GetTaskExecutionContextTlsSlot()) == 0) {
    os::SetTlsValue(GetTaskExecutionContextTlsSlot(),
      reinterpret_cast<uintptr_t>(static_cast<TaskExecutionContext*>(this)));
  }
}

InheritingThreadLocalTaskExecutionContextRegister::
~InheritingThreadLocalTaskExecutionContextRegister() {
  if (reinterpret_cast<TaskExecutionContext*>(
    os::GetTlsValue(GetTaskExecutionContextTlsSlot())) == this) {
    os::SetTlsValue(GetTaskExecutionContextTlsSlot(), 0);
  }
}

ThreadCounter::ThreadCounter() : m_Count(0) {
  ClearMutexType(&m_Mutex);
  os::InitializeMutex(&m_Mutex, false, 0);
  os::InitializeConditionVariable(&m_Condition);
}

void ThreadCounter::Join() {
  os::LockMutex(&m_Mutex);
  ++m_Count;
  os::UnlockMutex(&m_Mutex);
}

void ThreadCounter::Leave() {
  os::LockMutex(&m_Mutex);
  --m_Count;
  os::SignalConditionVariable(&m_Condition);
  os::UnlockMutex(&m_Mutex);
}

void ThreadCounter::WaitForAllLeaving() {
  os::LockMutex(&m_Mutex);
  while (m_Count > 0) {
    os::WaitConditionVariable(&m_Condition, &m_Mutex);
  }
  os::UnlockMutex(&m_Mutex);
}

int ThreadCounter::GetCount() {
  os::LockMutex(&m_Mutex);
  const int count = m_Count;
  os::UnlockMutex(&m_Mutex);
  return count;
}

os::FiberFlag ConvertToOsFiberFlag(SuspendableTaskFlag flag) {
  switch (flag) {
    case SuspendableTaskFlag_None:
      return static_cast<os::FiberFlag>(0);
    case SuspendableTaskFlag_ShareStack:
      return static_cast<os::FiberFlag>(1);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void AwaitImpl(ResumeBlocker* blocker) {
  for (;;) {
    GroupWait::SignaledObject signaled;
    bool isSignaled;
    {
      GroupWait groupWait;
      groupWait.LinkGroupWaitHolder(blocker->GetGroupWaitHolder());
      isSignaled = groupWait.TryWait(&signaled);
    }
    if (isSignaled) {
      return;
    }

    GetThreadLocalTaskExecutionContext()->coordinator->Await(blocker);
  }
}

int AwaitAnyImpl(ResumeBlocker* blocker) {
  for (;;) {
    GroupWait::SignaledObject signaled;
    bool isSignaled;
    {
      GroupWait groupWait;
      groupWait.LinkGroupWaitHolder(blocker->GetGroupWaitHolder());
      isSignaled = groupWait.TryWait(&signaled);
    }
    if (isSignaled) {
      return signaled.index;
    }

    GetThreadLocalTaskExecutionContext()->coordinator->Await(blocker);
  }
}

}

namespace nn::async {

void Await(os::EventType* event) {
  ResumeBlockerOne blocker(event);
  detail::AwaitImpl(&blocker);
}

void Await(os::MessageQueueType* queue, os::MessageQueueWaitType waitType) {
  ResumeBlockerOne blocker(queue, waitType);
  detail::AwaitImpl(&blocker);
}

void Await(os::SemaphoreType* semaphore) {
  ResumeBlockerOne blocker(semaphore);
  detail::AwaitImpl(&blocker);
}

void Await(os::SystemEventType* event) {
  ResumeBlockerOne blocker(event);
  detail::AwaitImpl(&blocker);
}

void Await(os::ThreadType* thread) {
  ResumeBlockerOne blocker(thread);
  detail::AwaitImpl(&blocker);
}

void Await(os::TimerEventType* event) {
  ResumeBlockerOne blocker(event);
  detail::AwaitImpl(&blocker);
}

}
