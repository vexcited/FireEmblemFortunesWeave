#include <stdint.h>

#include "nn/async/async_cancellation.hpp"

namespace nn::async::detail {

namespace {

uint32_t g_DebugLoggingFlags[2];

}

CancellationState::~CancellationState() {
  m_Observers.clear();
  os::FinalizeEvent(&m_Event);
}

void CancellationState::RequestCancel() {
  m_Mutex.Lock();
  if (!os::TryWaitEvent(&m_Event)) {
    os::SignalEvent(&m_Event);
    for (CancellationObserver& observer : m_Observers) {
      observer.NotifyCancel();
    }
  }
  m_Mutex.Unlock();
}

void CancellationState::RegisterObserver(CancellationObserver* pObserver) {
  m_Mutex.Lock();
  m_Observers.push_back(*pObserver);
  if (os::TryWaitEvent(&m_Event)) {
    pObserver->NotifyCancel();
  }
  m_Mutex.Unlock();
}

void CancellationState::UnregisterObserver(CancellationObserver* pObserver) {
  m_Mutex.Lock();
  const ObserverList::iterator it = m_Observers.iterator_to(*pObserver);
  if (it != m_Observers.end()) {
    m_Observers.erase(it);
  }
  m_Mutex.Unlock();
}

void InitializeMultiWaitHolder(os::MultiWaitHolderType* pHolder,
  CancellationState* pState) {
  os::InitializeMultiWaitHolder(pHolder, &pState->m_Event);
}

CancellationToken CancellationTokenAccessor::GetToken(
  std::shared_ptr<CancellationState> state) {
  return CancellationToken(std::move(state));
}

bool CancellationTokenAccessor::CanReceiveCancellationRequest(
  const CancellationToken& token) {
  return token.m_State != nullptr;
}

void CancellationTokenAccessor::RegisterObserver(
  const CancellationToken& token, CancellationObserver* pObserver) {
  if (token.m_State != nullptr) {
    token.m_State->RegisterObserver(pObserver);
  }
}

void CancellationTokenAccessor::UnregisterObserver(
  const CancellationToken& token, CancellationObserver* pObserver) {
  if (token.m_State != nullptr) {
    token.m_State->UnregisterObserver(pObserver);
  }
}

void EnableDebugLogging(DebugComponent component) {
  if (component == DebugComponent_All) {
    g_DebugLoggingFlags[0] = ~0u;
    return;
  }
  g_DebugLoggingFlags[component / 32] |= 1u << (component % 32);
}

void DisableDebugLogging(DebugComponent component) {
  if (component == DebugComponent_All) {
    g_DebugLoggingFlags[0] = 0;
    return;
  }
  g_DebugLoggingFlags[component / 32] &= ~(1u << (component % 32));
}

bool IsDebugLoggingEnabled(DebugComponent component) {
  if (component == DebugComponent_All) {
    return g_DebugLoggingFlags[0] == ~0u;
  }
  return ((g_DebugLoggingFlags[component / 32] >> (component % 32)) & 1) != 0;
}

}
