#include <stdarg.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct UserExceptionInfo;

}

namespace nn::diag {

enum AssertionType : int {};
enum AssertionFailureOperation : int {};
struct AssertionInfo;

using AssertionFailureHandler =
  AssertionFailureOperation (*)(const AssertionInfo& info);

}

namespace nn::diag::detail {

// Set by SetAssertionFailureHandler, read when an assertion fails.
extern AssertionFailureHandler g_AssertionFailureHandler;

void OnAssertionFailure(AssertionType type, const char* condition,
  const char* function, const char* file, int line, const char* format, ...);

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

[[noreturn]] void VAbortImpl(const char* condition, const char* function,
  const char* file, int line, const Result* result,
  const os::UserExceptionInfo* exceptionInfo, const char* format,
  va_list& args);

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
