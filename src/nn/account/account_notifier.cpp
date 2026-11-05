#include "nn/account/account_service.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

void Notifier::Swap(Notifier& other) {
  detail::INotifier* pNotifier = m_pNotifier;
  m_pNotifier = other.m_pNotifier;
  other.m_pNotifier = pNotifier;
}

Notifier::Notifier(detail::INotifier* pNotifier) : m_pNotifier(pNotifier) {}

Notifier::Notifier() : m_pNotifier(nullptr) {}

Notifier::Notifier(Notifier&& other) : m_pNotifier(other.m_pNotifier) {
  other.m_pNotifier = nullptr;
}

// The deleting destructor calls this one out of line.
[[gnu::noinline]]
Notifier::~Notifier() {
  if (m_pNotifier != nullptr) {
    m_pNotifier->Release();
  }
}

Notifier& Notifier::operator=(Notifier&& other) {
  Notifier temporary(static_cast<Notifier&&>(other));
  detail::INotifier* pNotifier = m_pNotifier;
  m_pNotifier = temporary.m_pNotifier;
  temporary.m_pNotifier = pNotifier;
  return *this;
}

Result Notifier::GetSystemEvent(os::SystemEvent* pOutEvent) {
  sf::NativeHandle handle;
  NN_RESULT_DO(
    m_pNotifier->GetSystemEvent(sf::Out<sf::NativeHandle>(&handle)));
  pOutEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();
  return Result{0};
}

}
