#include <stdint.h>

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_context.hpp"
#include "nn/os/tls.hpp"

namespace nn::fs {

namespace {

bool g_IsAutoAbortEnabled = true;

AbortSpecifier DefaultResultHandler(Result) {
  return g_IsAutoAbortEnabled ? AbortSpecifier::Default :
    AbortSpecifier::Return;
}

AbortSpecifier AlwaysReturnResultHandler(Result) {
  return AbortSpecifier::Return;
}

class FsContextManager {
public:
  FsContextManager()
    : m_DefaultContext(DefaultResultHandler),
      m_AutoAbortDisabledContext(AlwaysReturnResultHandler) {
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS(
      os::SdkAllocateTlsSlot(&m_TlsSlot, nullptr));
  }

  const FsContext* GetCurrentThreadContext() const {
    const FsContext* context =
      reinterpret_cast<const FsContext*>(os::GetTlsValue(m_TlsSlot));
    return context != nullptr ? context : &m_DefaultContext;
  }

  void SetCurrentThreadContext(const FsContext* context) {
    os::SetTlsValue(m_TlsSlot, reinterpret_cast<uintptr_t>(context));
  }

  void SetDefaultResultHandler(ResultHandler handler) {
    m_DefaultContext.SetHandler(handler != nullptr ? handler :
      DefaultResultHandler);
  }

  const FsContext* GetAutoAbortDisabledContext() const {
    return &m_AutoAbortDisabledContext;
  }

private:
  os::TlsSlot m_TlsSlot;
  FsContext m_DefaultContext;
  FsContext m_AutoAbortDisabledContext;
};

FsContextManager g_ContextManager;

}

void SetEnabledAutoAbort(bool isEnabled) {
  g_IsAutoAbortEnabled = isEnabled;
}

bool IsAutoAbortPolicyCustomized() {
  if (!g_IsAutoAbortEnabled) {
    return true;
  }
  return g_ContextManager.GetCurrentThreadContext()->GetHandler() !=
    DefaultResultHandler;
}

const FsContext* GetCurrentThreadFsContext() {
  return g_ContextManager.GetCurrentThreadContext();
}

ScopedAutoAbortDisabler::ScopedAutoAbortDisabler()
  : m_PreviousContext(g_ContextManager.GetCurrentThreadContext()) {
  g_ContextManager.SetCurrentThreadContext(
    g_ContextManager.GetAutoAbortDisabledContext());
}

void SetCurrentThreadFsContext(const FsContext* context) {
  g_ContextManager.SetCurrentThreadContext(context);
}

void SetDefaultFsContextResultHandler(ResultHandler handler) {
  g_ContextManager.SetDefaultResultHandler(handler);
}

bool IsResolubleAccessFailureResult(Result) {
  return false;
}

}
