#include "nn/async/async_detail.hpp"
#include "nn/async/async_executor.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::async::detail {

void ExecuteInline(Executable* executable, const CancellationToken& token) {
  executable->Execute(token);
}

void ExecuteSuspendableInline(Executable* executable,
  const CancellationToken& token) {
  for (;;) {
    const ExecutionResult result = executable->Execute(token);
    switch (result.GetCode()) {
      case ExecutionResultCode_Complete:
        return;
      case ExecutionResultCode_Await:
        if (IsAwaitable()) {
          AwaitImpl(result.GetBlocker());
        }
        else {
          GroupWait groupWait;
          groupWait.LinkGroupWaitHolder(
            result.GetBlocker()->GetGroupWaitHolder());
          groupWait.Wait();
        }

        break;
      case ExecutionResultCode_Yield:
        if (IsAwaitable()) {
          YieldTask();
        }

        break;
      case ExecutionResultCode_Invalid:
        NN_ABORT_UNLESS(false);
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
  }
}

void SuspendAndExecuteInline(Executable* executable,
  const CancellationToken& token) {
  GetThreadLocalTaskExecutionContext()->coordinator->SuspendAndExecuteInline(
    executable, token);
}

void ExecuteTaskInline(Executable* executable, bool isSuspendable,
  const CancellationToken& token) {
  InheritingThreadLocalTaskExecutionContextRegister contextRegister;
  if (isSuspendable) {
    ExecuteSuspendableInline(executable, token);
  }
  else if (IsAwaitable()) {
    SuspendAndExecuteInline(executable, token);
  }
  else {
    executable->Execute(token);
  }
}

}
