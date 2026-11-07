#include "nn/diag/diag_abort.hpp"
#include "nn/notification/notification_api.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::notification {

Notifier::Notifier(Notifier&& other)
  : m_pNotifier(other.m_pNotifier.Detach(), false) {}

Notifier::~Notifier() {}

void Notifier::GetSystemEvent(os::SystemEvent* pOutEvent) {
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    m_pNotifier->GetEvent(sf::Out<sf::NativeHandle>(&handle)));
  pOutEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();
}

}
