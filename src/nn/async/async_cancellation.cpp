#include "nn/async/async_cancellation.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/util/util_pmr.hpp"

namespace nn::async {

CancellationObserver::~CancellationObserver() {
  NN_ABORT_UNLESS(!m_Node.IsLinked());
}

void CancellationObserver::NotifyCancel() {
  OnCancel();
}

CancellationToken::CancellationToken(
  std::shared_ptr<detail::CancellationState> state) :
  m_State(std::move(state)) {}

bool CancellationToken::IsCancellationRequested() const {
  if (m_State == nullptr) {
    return false;
  }
  return os::TryWaitEvent(m_State->m_Event.GetBase());
}

const CancellationToken& GetCurrentCancellationToken() {
  return detail::GetThreadLocalTaskExecutionContext()->token;
}

bool CanReceiveCancellationRequest(const CancellationToken& token) {
  return detail::CancellationTokenAccessor::CanReceiveCancellationRequest(
    token);
}

void RegisterCancellationObserver(const CancellationToken& token,
  CancellationObserver* pObserver) {
  detail::CancellationTokenAccessor::RegisterObserver(token, pObserver);
}

void UnregisterCancellationObserver(const CancellationToken& token,
  CancellationObserver* pObserver) {
  detail::CancellationTokenAccessor::UnregisterObserver(token, pObserver);
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* pHolder,
  const CancellationToken& token) {
  detail::InitializeMultiWaitHolder(pHolder,
    detail::CancellationTokenAccessor::GetState(token));
}

CancellationTokenSource::CancellationTokenSource(MemoryResource* resource)
  : m_State(std::allocate_shared<detail::CancellationState>(
    util::pmr::PolymorphicAllocator<detail::CancellationState>(resource))) {}

CancellationToken CancellationTokenSource::GetToken() const {
  return detail::CancellationTokenAccessor::GetToken(m_State);
}

void CancellationTokenSource::RequestCancel() {
  m_State->RequestCancel();
}

}
