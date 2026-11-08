#include "nn/async/async_detail.hpp"
#include "nn/async/async_executor.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::async {

namespace {

enum ExecutableState : int32_t {
  ExecutableState_Idle,
  ExecutableState_Running,
  ExecutableState_Suspended,
  ExecutableState_Done,
};

}

Executable::Executable() {
  detail::ClearMutexType(&m_Mutex);
  os::InitializeMutex(&m_Mutex, false, 0);
  m_State = ExecutableState_Idle;
}

Executable::~Executable() {
  os::FinalizeMutex(&m_Mutex);
}

ExecutionResult Executable::Execute(const CancellationToken& token) {
  os::LockMutex(&m_Mutex);
  m_State = ExecutableState_Running;
  os::UnlockMutex(&m_Mutex);
  const ExecutionResult result = DoExecute(token);
  os::LockMutex(&m_Mutex);
  switch (result.GetCode()) {
    case ExecutionResultCode_Await:
    case ExecutionResultCode_Yield:
      m_State = ExecutableState_Suspended;
      break;
    case ExecutionResultCode_Complete:
      m_State = ExecutableState_Done;
      break;
    case ExecutionResultCode_Invalid:
      NN_ABORT_UNLESS(false);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

bool ExecutionBlocker::IsBlocked() const {
  if (m_Handler == nullptr) {
    return false;
  }

  os::MultiWaitType multiWait;
  os::MultiWaitHolderType holder;
  os::InitializeMultiWait(&multiWait);
  m_Handler->InitializeMultiWaitHolder(&holder);
  os::LinkMultiWaitHolder(&multiWait, &holder);
  os::MultiWaitHolderType* signaled = os::TryWaitAny(&multiWait);
  os::UnlinkMultiWaitHolder(&holder);
  os::FinalizeMultiWaitHolder(&holder);
  os::FinalizeMultiWait(&multiWait);
  return signaled == nullptr;
}

ExecutionResult::ExecutionResult(ExecutionResultCode code,
  ResumeBlocker* blocker) : m_pBlocker(blocker), m_Code(code) {
  switch (code) {
    case ExecutionResultCode_Complete:
    case ExecutionResultCode_Await:
    case ExecutionResultCode_Yield:
    case ExecutionResultCode_Invalid:
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
