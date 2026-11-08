#include "nn/async/async_detail.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::async::detail {

FiberTaskCoordinatorBase::FiberTaskCoordinatorBase(MemoryResource* resource,
  FutureStateBase* /* state */, FutureStateBase* /* result */, void* stack,
  size_t stackSize, os::FiberFlag flag)
  : m_pStack(stack), m_pCallerFiber(nullptr), m_pInlineExecutable(nullptr) {
  os::InitializeFiber(&m_Fiber, FiberMain, this, stack, stackSize, flag);
  if (resource != nullptr) {
    m_Continuations.emplace(resource);
  }
}

os::FiberType* FiberTaskCoordinatorBase::FiberMain(void* argument) {
  auto* coordinator = static_cast<FiberTaskCoordinatorBase*>(argument);
  coordinator->m_Result = coordinator->Run();
  return coordinator->m_pCallerFiber;
}

void FiberTaskCoordinatorBase::FinalizeFiber() {
  os::FinalizeFiber(&m_Fiber);
}

ExecutionResult FiberTaskCoordinatorBase::DoExecute(
  const CancellationToken& token) {
  const ExecutionResult result = [&] {
    ScopedCancellationTokenRegister tokenRegister(token);
    m_pCallerFiber = os::GetCurrentFiber();
    m_Result = ExecutionResult();
    {
      TaskExecutionContext* context = GetThreadLocalTaskExecutionContext();
      FiberTaskCoordinatorBase* previous = context->coordinator;
      context->coordinator = this;
      os::SwitchToFiber(&m_Fiber);
      context->coordinator = previous;
    }

    while (m_pInlineExecutable != nullptr) {
      ExecuteInline(m_pInlineExecutable, m_InlineToken);
      m_pInlineExecutable = nullptr;
      m_InlineToken = CancellationToken();
      TaskExecutionContext* context = GetThreadLocalTaskExecutionContext();
      FiberTaskCoordinatorBase* previous = context->coordinator;
      context->coordinator = this;
      os::SwitchToFiber(&m_Fiber);
      context->coordinator = previous;
    }

    if (m_Result.GetCode() == ExecutionResultCode_Complete) {
      Finish();
      Complete();
      if (m_Continuations.has_value()) {
        m_Continuations->ExecuteContinuations();
      }
    }

    return m_Result;
  }();

  switch (m_Result.GetCode()) {
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

void FiberTaskCoordinatorBase::Await(ResumeBlocker* blocker) {
  m_Result = ExecutionResult(ExecutionResultCode_Await, blocker);
  os::SwitchToFiber(m_pCallerFiber);
}

void FiberTaskCoordinatorBase::YieldTask() {
  m_Result = ExecutionResult(ExecutionResultCode_Yield, nullptr);
  os::SwitchToFiber(m_pCallerFiber);
}

void FiberTaskCoordinatorBase::SuspendAndExecuteInline(
  Executable* executable, const CancellationToken& token) {
  m_pInlineExecutable = executable;
  m_InlineToken = token;
  os::SwitchToFiber(m_pCallerFiber);
}

SynchronousContinuationList*
FiberTaskCoordinatorBase::GetSynchronousContinuationList() {
  return m_Continuations.has_value() ? &*m_Continuations : nullptr;
}

}
