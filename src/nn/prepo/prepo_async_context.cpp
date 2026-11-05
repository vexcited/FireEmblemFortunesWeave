#include "nn/diag/diag_abort.hpp"
#include "nn/prepo/prepo_play_report.hpp"

namespace nn::prepo {

AsyncContext::AsyncContext() : m_pContext(nullptr), m_Result{0} {}

AsyncContext::~AsyncContext() {
  if (m_pContext != nullptr) {
    m_pContext->Release();
    m_pContext = nullptr;
  }
}

AsyncContext::AsyncContext(AsyncContext&& other)
  : m_pContext(other.m_pContext), m_Result(other.m_Result) {
  other.m_pContext = nullptr;
  other.m_Result = Result{0};
}

AsyncContext& AsyncContext::operator=(AsyncContext&& other) {
  m_pContext = other.m_pContext;
  m_Result = other.m_Result;
  other.m_pContext = nullptr;
  other.m_Result = Result{0};
  return *this;
}

void AsyncContext::GetCompletionEvent(os::SystemEvent* pOutEvent) {
  if (m_pContext != nullptr) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      m_pContext->GetSystemEvent(sf::Out<sf::NativeHandle>(&handle)));
    pOutEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_ManualClear);
    handle.Detach();
  }
  else {
    // Without a context the result is final, so the event is signaled now.
    NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSystemEvent(
      pOutEvent->GetBase(), os::EventClearMode_ManualClear, false));
    os::SignalSystemEvent(pOutEvent->GetBase());
  }
}

void AsyncContext::Cancel() {
  if (m_pContext != nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(m_pContext->Cancel());
  }
}

Result AsyncContext::GetResult() {
  if (m_pContext != nullptr) {
    return detail::HandleSrepoResult(m_pContext->GetResult());
  }
  return detail::HandleSrepoResult(m_Result);
}

AsyncContext::AsyncContext(detail::ipc::IAsyncContext* pContext)
  : m_pContext(pContext) {}

AsyncContext::AsyncContext(Result result)
  : m_pContext(nullptr), m_Result(result) {}

}
