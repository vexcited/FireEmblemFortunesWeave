#include "nn/diag/diag_abort.hpp"
#include "nn/diag/diag_hashed_trace_context.hpp"
#include "nn/fs/detail/fs_error_context_handler.hpp"
#include "nn/fs/fs_error_context.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::fs::detail {

[[gnu::visibility("hidden")]] extern uint8_t g_IsErrorContextEnabled;
[[gnu::visibility("hidden")]] extern os::SdkMutexType g_ErrorContextMutex;
[[gnu::visibility("hidden")]] extern IErrorContextHandler*
  g_pErrorContextHandler;

namespace {

constexpr uint32_t FsModule = 2;
constexpr uint32_t FsDescriptionMask = 0x3ff000;
constexpr uint32_t FsDescriptionReportedMin = 0x7d000;

// Successes and the low fs results carry no context.
[[gnu::always_inline]] bool HasContext(Result result) {
  if (result.value == 0) {
    return false;
  }
  return (result.value & 0x1ff) != FsModule ||
    (result.value & FsDescriptionMask) >= FsDescriptionReportedMin;
}

[[gnu::always_inline]] bool IsHandling() {
  return g_IsErrorContextEnabled == 1 && g_pErrorContextHandler != nullptr;
}

template <typename Context>
[[gnu::always_inline]] Result UpdateResultImpl(Result result,
  const Context& context) {
  g_ErrorContextMutex.Lock();
  if (IsHandling() && HasContext(result)) {
    result = g_pErrorContextHandler->UpdateResult(result, context);
  }
  g_ErrorContextMutex.Unlock();
  return result;
}

}

void SetErrorContextHandler(IErrorContextHandler* pHandler) {
  g_ErrorContextMutex.Lock();
  NN_ABORT_UNLESS(pHandler != nullptr);
  NN_ABORT_UNLESS(g_pErrorContextHandler == nullptr);
  NN_ABORT_UNLESS(g_IsErrorContextEnabled != 1);
  g_pErrorContextHandler = pHandler;
  g_ErrorContextMutex.Unlock();
}

void SetErrorContextEnabled(bool isEnabled) {
  g_ErrorContextMutex.Lock();
  if (isEnabled && (g_IsErrorContextEnabled & 1) == 0 &&
      g_pErrorContextHandler != nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(g_pErrorContextHandler->Enable());
  }
  g_IsErrorContextEnabled = isEnabled;
  g_ErrorContextMutex.Unlock();
}

Result UpdateResult(Result result, diag::HashedTraceContextImpl context) {
  g_ErrorContextMutex.Lock();
  if (IsHandling() && HasContext(result)) {
    result = g_pErrorContextHandler->UpdateResult(result, context);
  }
  g_ErrorContextMutex.Unlock();
  return result;
}

Result UpdateResult(Result result, const ErrorContext& context) {
  return UpdateResultImpl(result, context);
}

Result UpdateResult(Result result, const sdcard::ErrorContext& context) {
  return UpdateResultImpl(result, context);
}

Result ConvertResult(Result result, Result converted) {
  g_ErrorContextMutex.Lock();
  if (IsHandling() && HasContext(result) && HasContext(converted)) {
    converted = g_pErrorContextHandler->ConvertResult(result, converted);
  }
  g_ErrorContextMutex.Unlock();
  return converted;
}

}
