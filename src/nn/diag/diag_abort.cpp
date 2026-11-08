#include <stdarg.h>

#include <stdint.h>

#include "nn/diag/abort_observer.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct UserExceptionInfo;

struct SdkMutexType {
  void Lock();
  void Unlock();
  bool IsLockedByCurrentThread() const;

  uint32_t value;
};

}

namespace nn::diag {

enum AssertionType : int {};
enum AssertionFailureOperation : int {
  AssertionFailureOperation_Abort = 0,
  AssertionFailureOperation_Continue = 1,
};

enum AbortReason : int {
  AbortReason_Abort = 3,
};

struct LogMessage {
  const char* format;
  va_list* args;
};

struct AssertionInfo {
  AssertionType assertionType;
  const LogMessage* message;
  const char* condition;
  const char* functionName;
  const char* fileName;
  int lineNumber;
};

struct AbortInfo {
  AbortReason abortReason;
  const LogMessage* message;
  const char* condition;
  const char* functionName;
  const char* fileName;
  int lineNumber;
};

struct SdkAbortInfo {
  AbortInfo abortInfo;
  Result result;
  const os::UserExceptionInfo* exceptionInfo;
};

using AssertionFailureHandler =
  AssertionFailureOperation (*)(const AssertionInfo& info);

}

namespace nn::diag::detail {

// Set by SetAssertionFailureHandler, read when an assertion fails.
extern AssertionFailureHandler g_AssertionFailureHandler;

extern uintptr_t g_AbortImplReturnAddress;

[[gnu::visibility("hidden")]] extern os::SdkMutexType g_AbortMutex;
[[gnu::visibility("hidden")]] extern os::SdkMutexType g_AssertionMutex;

void PrepareAbort();
[[noreturn]] void Abort(const Result* result);

// Known assertion types keep their value, the rest count as an abort.
[[gnu::visibility("hidden"), gnu::noinline, clang::optnone]] AbortReason
  ToAbortReason(AssertionType type) {
  return type < AbortReason_Abort ? static_cast<AbortReason>(type) :
    AbortReason_Abort;
}

// A nested failure on the same thread aborts at once.
[[gnu::noinline]] void OnAssertionFailure(AssertionType type,
  const char* condition, const char* function, const char* file, int line,
  const char* format, ...) {
  PrepareAbort();
  if (g_AssertionMutex.IsLockedByCurrentThread()) {
    Abort(nullptr);
  }

  g_AssertionMutex.Lock();

  va_list args;
  va_start(args, format);
  const LogMessage message = {format, &args};
  const AssertionInfo info = {type, &message, condition, function, file,
    line};
  const AssertionFailureOperation operation =
    g_AssertionFailureHandler(info);
  if (operation == AssertionFailureOperation_Continue) {
    g_AssertionMutex.Unlock();
    return;
  }

  if (operation != AssertionFailureOperation_Abort) {
    AbortImpl();
  }

  const AbortInfo abortInfo = {ToAbortReason(info.assertionType),
    info.message, info.condition, info.functionName, info.fileName,
    info.lineNumber};
  InvokeAbortObserver(abortInfo);
  Abort(nullptr);
}

void OnAssertionFailure(AssertionType type, const char* condition,
  const char* function, const char* file, int line) {
  OnAssertionFailure(type, condition, function, file, line, "");
}

void OnAssertionFailure(AssertionType type) {
  OnAssertionFailure(type, "", "", "", 0, "");
}

}

namespace nn::diag {

void SetAssertionFailureHandler(AssertionFailureHandler handler) {
  detail::g_AssertionFailureHandler = handler;
}

}

namespace nn::diag::detail {

// The caller of the abort is kept so backtraces can start above it.
[[noreturn, gnu::noinline]] void VAbortImpl(const char* condition,
  const char* function, const char* file, int line, const Result* result,
  const os::UserExceptionInfo* exceptionInfo, const char* format,
  va_list& args) {
  uintptr_t returnAddress =
    reinterpret_cast<uintptr_t>(__builtin_return_address(0));
  PrepareAbort();
  if (g_AbortMutex.IsLockedByCurrentThread()) {
    Abort(result);
  }

  g_AbortMutex.Lock();
  asm(".arch_extension pauth\n\txpaci %0" : "+r"(returnAddress));
  g_AbortImplReturnAddress = returnAddress;

  const LogMessage message = {format, &args};
  const AbortInfo info = {AbortReason_Abort, &message, condition, function,
    file, line};
  const SdkAbortInfo sdkInfo = {info, *result, exceptionInfo};
  InvokeAbortObserver(info);
  InvokeSdkAbortObserver(sdkInfo);
  Abort(result);
}

[[noreturn]] void AbortImpl(const char* condition, const char* function,
  const char* file, int line, const Result* result,
  const os::UserExceptionInfo* exceptionInfo, const char* format, ...) {
  va_list args;
  va_start(args, format);
  VAbortImpl(condition, function, file, line, result, exceptionInfo, format,
    args);
}

[[noreturn]] void AbortImpl(const char* condition, const char* function,
  const char* file, int line, const Result* result, const char* format,
  ...) {
  va_list args;
  va_start(args, format);
  VAbortImpl(condition, function, file, line, result, nullptr, format, args);
}

[[noreturn]] void AbortImpl(const char* condition, const char* function,
  const char* file, int line, const char* format, ...) {
  va_list args;
  va_start(args, format);
  const Result result = {0};
  VAbortImpl(condition, function, file, line, &result, nullptr, format,
    args);
}

[[noreturn]] void AbortImpl(const char* condition, const char* function,
  const char* file, int line) {
  AbortImpl(condition, function, file, line, "");
}

[[noreturn]] void AbortImpl() {
  AbortImpl("", "", "", 0);
}

[[noreturn]] void AbortImpl(const Result* result) {
  AbortImpl("", "", "", 0, result, "");
}

[[noreturn]] void AbortImpl(const Result* result,
  const os::UserExceptionInfo* exceptionInfo) {
  AbortImpl("", "", "", 0, result, exceptionInfo, "");
}

}
