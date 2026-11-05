#include "nn/util/util_executor.hpp"

#include <utility>

#include "nn/diag/diag_abort.hpp"

namespace nn::os {

bool TryWaitEvent(EventType* event);
void WaitEvent(EventType* event);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder, EventType* event);

}

namespace nn::util {

void Cancelable::Cancel() {
  m_Lock.Lock();

  if (!__atomic_exchange_n(&m_IsCanceled, true, __ATOMIC_SEQ_CST) &&
    m_pListener != nullptr) {
    m_pListener->Signal();
  }

  m_Lock.Unlock();
}

bool Cancelable::IsCanceled() const {
  return __atomic_load_n(&m_IsCanceled, __ATOMIC_SEQ_CST);
}

void Cancelable::AttachListener(Listener* listener) {
  m_Lock.Lock();
  m_pListener = listener;

  if (IsCanceled()) {
    m_pListener->Signal();
  }

  m_Lock.Unlock();
}

void Cancelable::DetachListener() {
  m_Lock.Lock();
  m_pListener = nullptr;
  m_Lock.Unlock();
}

CancelInjectable::CancelInjectable(const Cancelable* cancelable)
  : m_pCancelable(cancelable) {}

bool CancelInjectable::IsCanceled() const {
  return m_pCancelable != nullptr && m_pCancelable->IsCanceled();
}

Executable::~Executable() {
  if (m_IsEventInitialized) {
    os::DestroySystemEvent(&m_Event);
  }
}

Result Executable::Initialize() {
  const Result result = os::CreateSystemEvent(&m_Event,
    os::EventClearMode_ManualClear, true);

  if (result.IsSuccess()) {
    m_IsEventInitialized = true;
  }

  return result;
}

uint32_t Executable::GetReadableHandle() {
  return os::GetReadableHandleOfSystemEvent(&m_Event);
}

void Executable::Execute(void* buffer, size_t size) {
  if (m_Cancelable.IsCanceled()) {
    m_Result.reset();
  }
  else {
    m_Result = ExecuteImpl(buffer, size);
  }

  __atomic_store_n(&m_IsDone, true, __ATOMIC_RELEASE);
  os::SignalSystemEvent(&m_Event);
}

bool Executable::HasDone() const {
  return __atomic_load_n(&m_IsDone, __ATOMIC_ACQUIRE);
}

bool Executable::TryLock() {
  return m_Lock.TryLock();
}

void Executable::Lock() {
  m_Lock.Lock();
}

void Executable::Unlock() {
  m_Lock.Unlock();
}

AbstractExecutor::AbstractExecutor() {
  os::InitializeEvent(&m_Event, false, os::EventClearMode_ManualClear);
}

Result AbstractExecutor::Register(Executable* executable) {
  const Result result = RegisterImpl(executable);

  if (result.IsSuccess()) {
    os::SignalEvent(&m_Event);
  }

  return result;
}

void AbstractExecutor::Unregister(Executable* executable) {
  UnregisterImpl(executable);
  executable->Lock();
  executable->Unlock();
}

bool AbstractExecutor::TryUnregister(Executable* executable) {
  UnregisterImpl(executable);

  if (!executable->TryLock()) {
    return false;
  }

  executable->Unlock();
  return true;
}

void AbstractExecutor::Execute(void* buffer, size_t size) {
  while (Executable* executable = DequeueImpl()) {
    executable->Execute(buffer, size);
    UnregisterImpl(executable);
    executable->Unlock();
  }
}

void AbstractExecutor::InitializeMultiWaitHolder(
  os::MultiWaitHolderType* holder) {
  os::InitializeMultiWaitHolder(holder, &m_Event);
}

bool AbstractExecutor::TryWaitSignal() {
  return os::TryWaitEvent(&m_Event);
}

void AbstractExecutor::WaitSignal() {
  os::WaitEvent(&m_Event);
}

void AbstractExecutor::ClearSignal() {
  os::ClearEvent(&m_Event);
}

AsyncExecution::AsyncExecution(Executable* executable)
  : m_pExecutable(executable), m_pExecutor(nullptr) {}

AsyncExecution::AsyncExecution(AsyncExecution&& other)
  : m_pExecutable(other.m_pExecutable), m_pExecutor(other.m_pExecutor) {
  other.m_pExecutable = nullptr;
  other.m_pExecutor = nullptr;
}

AsyncExecution::~AsyncExecution() {
  if (IsInitialized()) {
    Finalize();
  }
}

AsyncExecution& AsyncExecution::operator=(AsyncExecution&& other) {
  AsyncExecution temporary(std::move(other));
  std::swap(m_pExecutable, temporary.m_pExecutable);
  std::swap(m_pExecutor, temporary.m_pExecutor);
  return *this;
}

bool AsyncExecution::IsInitialized() const {
  return m_pExecutor != nullptr;
}

Result AsyncExecution::Initialize(AbstractExecutor* executor) {
  NN_RESULT_DO(m_pExecutable->Initialize());
  NN_RESULT_DO(executor->Register(m_pExecutable));
  m_pExecutor = executor;
  return {0};
}

void AsyncExecution::Finalize() {
  Cancel();
  m_pExecutable->Lock();
  m_pExecutable->Unlock();
  m_pExecutor = nullptr;
}

void AsyncExecution::Cancel() {
  m_pExecutable->m_Cancelable.Cancel();

  if (!m_pExecutor->TryUnregister(m_pExecutable)) {
    return;
  }

  m_pExecutable->Lock();

  if (!m_pExecutable->HasDone()) {
    m_pExecutable->Execute(nullptr, 0);
  }

  m_pExecutable->Unlock();
}

}
