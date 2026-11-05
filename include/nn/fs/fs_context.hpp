#pragma once

#include "nn/result.hpp"

namespace nn::fs {

enum class AbortSpecifier {
  Default,
  Abort,
  Return,
};

using ResultHandler = AbortSpecifier (*)(Result result);

class FsContext {
public:
  explicit FsContext(ResultHandler handler) : m_Handler(handler) {}

  void SetHandler(ResultHandler handler) {
    m_Handler = handler;
  }

  ResultHandler GetHandler() const {
    return m_Handler;
  }

private:
  ResultHandler m_Handler;
};

class ScopedAutoAbortDisabler {
public:
  ScopedAutoAbortDisabler();

private:
  const FsContext* m_PreviousContext;
};

void SetEnabledAutoAbort(bool isEnabled);
bool IsAutoAbortPolicyCustomized();
const FsContext* GetCurrentThreadFsContext();
void SetCurrentThreadFsContext(const FsContext* context);
void SetDefaultFsContextResultHandler(ResultHandler handler);
bool IsResolubleAccessFailureResult(Result result);
void SetResultHandledByApplication(bool isHandled);
void DisableAbortByHostAccessFailed();

namespace detail {

bool IsResultHtcAccessFailed(Result result);

}

}
