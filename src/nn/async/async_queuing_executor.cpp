#include "nn/async/async_executor.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::async {

QueuingExecutor::QueuingExecutor(MemoryResource* resource) :
  m_Scheduler(resource) {
  os::InitializeEvent(&m_ExitEvent, false, os::EventClearMode_ManualClear);
}

QueuingExecutor::~QueuingExecutor() {
  NN_ABORT_UNLESS(m_Scheduler.IsEmpty());
  os::FinalizeEvent(&m_ExitEvent);
}

bool QueuingExecutor::TryExecuteOne() {
  detail::ThreadLocalTaskExecutionContextRegister contextRegister;
  detail::GetThreadLocalTaskExecutionContext()->executor = this;
  return m_Scheduler.TryDequeueAndCall();
}

void QueuingExecutor::LoopExecution() {
  detail::ThreadLocalTaskExecutionContextRegister contextRegister;
  detail::GetThreadLocalTaskExecutionContext()->executor = this;
  while (!os::TryWaitEvent(&m_ExitEvent)) {
    m_Scheduler.DequeueAndCall(&m_ExitEvent);
  }
}

void QueuingExecutor::RequestLoopExecutionExit() {
  os::SignalEvent(&m_ExitEvent);
}

bool QueuingExecutor::IsRequestedLoopExecutionExit() {
  return os::TryWaitEvent(&m_ExitEvent);
}

void QueuingExecutor::ExecuteAll() {
  detail::ThreadLocalTaskExecutionContextRegister contextRegister;
  detail::GetThreadLocalTaskExecutionContext()->executor = this;
  m_Scheduler.DequeueAndCallAll();
}

bool IsAwaitable() {
  detail::TaskExecutionContext* pContext = nullptr;
  if (!detail::TryGetThreadLocalTaskExecutionContext(&pContext)) {
    return false;
  }
  return pContext->coordinator != nullptr;
}

void YieldTask() {
  detail::GetThreadLocalTaskExecutionContext()->coordinator->YieldTask();
}

Executor* GetCurrentExecutor() {
  detail::TaskExecutionContext* pContext = nullptr;
  if (!detail::TryGetThreadLocalTaskExecutionContext(&pContext)) {
    return nullptr;
  }
  return pContext->executor;
}

void DumpAllTaskDebugData() {}

void DumpAllTaskDebugData(bool isDetailed) {
  static_cast<void>(isDetailed);
}

}
