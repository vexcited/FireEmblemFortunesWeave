#include <utility>

#include "nn/account/account_async_context.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/sf/native_handle.hpp"

namespace nn::account {

void AsyncContext::Swap(AsyncContext& other) {
  std::swap(m_Uid, other.m_Uid);
  std::swap(m_pContext, other.m_pContext);
}

detail::IAsyncContext* AsyncContext::GetPointerUnsafe() const {
  return m_pContext;
}

AsyncContext::AsyncContext(AsyncContext&& other)
  : m_Uid(other.m_Uid), m_pContext(other.m_pContext) {
  other.m_Uid = Uid();
  other.m_pContext = nullptr;
}

AsyncContext& AsyncContext::operator=(AsyncContext&& other) {
  AsyncContext(std::move(other)).Swap(*this);
  return *this;
}

AsyncContext::AsyncContext(detail::IAsyncContext* pContext)
  : m_Uid(), m_pContext(pContext) {}

AsyncContext::AsyncContext(detail::IAsyncContext* pContext, const Uid& uid)
  : m_Uid(uid), m_pContext(pContext) {}

AsyncContext::AsyncContext() : m_Uid(), m_pContext(nullptr) {}

AsyncContext::~AsyncContext() {
  if (m_pContext != nullptr) {
    bool isDone = false;
    NN_ABORT_UNLESS_RESULT_SUCCESS(m_pContext->HasDone(sf::Out<bool>(&isDone)));
    m_pContext->Release();
    m_pContext = nullptr;
    NN_ABORT_UNLESS(isDone);
  }
}

AsyncContext::operator bool() const {
  return m_pContext != nullptr;
}

Result AsyncContext::Cancel() {
  return m_pContext->Cancel();
}

Result AsyncContext::HasDone(bool* pOutIsDone) const {
  return m_pContext->HasDone(sf::Out<bool>(pOutIsDone));
}

Result AsyncContext::HasDone(bool* pOutIsDone) {
  return m_pContext->HasDone(sf::Out<bool>(pOutIsDone));
}

Result AsyncContext::GetResult() const {
  return m_pContext->GetResult();
}

Result AsyncContext::GetResult() {
  return m_pContext->GetResult();
}


Result AsyncContext::GetSystemEvent(os::SystemEvent* pOutEvent) {
  sf::NativeHandle handle;
  NN_RESULT_DO(m_pContext->GetSystemEvent(
    sf::Out<sf::NativeHandle>(&handle)));
  pOutEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();
  return Result{0};
}
}
