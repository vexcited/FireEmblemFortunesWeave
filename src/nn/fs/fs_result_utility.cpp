#include <stdint.h>

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_context.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::fs {

namespace {

bool g_IsResultHandledByApplication = false;
bool g_IsAbortByHostAccessFailedDisabled = false;

inline bool IsResultHandledByAllProcess(Result result) {
  return (result.value & 0x1FF) == 2 && ((result.value >> 9) & 0x1FFF) < 1000;
}

inline bool IsResultHandledBySystemProcess(Result result) {
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return (result.value & 0x1FF) == 2 && description >= 1000 &&
    description < 3000;
}

inline bool IsHtcAccessFailedResult(Result result) {
  const uint32_t module = result.value & 0x1FF;
  return module < 32 && ((1u << module) & 0xA0040000) != 0;
}

inline Result DisableAbortByHostAccessFailedImpl() {
  g_IsAbortByHostAccessFailedDisabled = true;
  return ResultSuccess();
}

}

void SetResultHandledByApplication(bool isHandled) {
  g_IsResultHandledByApplication = isHandled;
}

void DisableAbortByHostAccessFailed() {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, DisableAbortByHostAccessFailedImpl(),
    "");
}

namespace detail {

bool IsAbortNeeded(Result result) {
  if (result.IsSuccess()) {
    return false;
  }

  switch (GetCurrentThreadFsContext()->GetHandler()(result)) {
    case AbortSpecifier::Default:
      break;
    case AbortSpecifier::Abort:
      return true;
    case AbortSpecifier::Return:
      return false;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  if (g_IsAbortByHostAccessFailedDisabled &&
    IsHtcAccessFailedResult(result)) {
    return false;
  }

  if (g_IsResultHandledByApplication) {
    return !IsResultHandledByAllProcess(result);
  }
  if (IsResultHandledByAllProcess(result)) {
    return false;
  }
  return !IsResultHandledBySystemProcess(result);
}

bool IsResultHtcAccessFailed(Result result) {
  return IsHtcAccessFailedResult(result);
}

}

}
