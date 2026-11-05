#include <string.h>

#include "nn/am/service/am_controllers.hpp"
#include "nn/am/service/am_notification.hpp"
#include "nn/applet/applet_notification.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::result::detail {

[[gnu::cold]] void ConvertInvalidImpl(Result result);

}

namespace nn::applet {

namespace {

sf::SharedPointer<am::service::INotificationReceiverService>
  g_ReceiverService;

bool IsResultNotificationNotFound(Result result) {
  return result.GetInnerValueForDebug() == ((77 << 9) | 131);
}

void CopyMessage(NotificationMessage* pOut,
  const am::service::NotificationMessage& message) {
  pOut->tag = message.tag;
  pOut->size = message.size;
  memcpy(pOut->data, message.data, message.size);
}

}

void InitializeReceiverLibrary() {
  if (!g_ReceiverService) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      am::service::GetAppletCommonFunctionsObject()
        ->GetNotificationReceiverService(
          sf::Out<sf::SharedPointer<
            am::service::INotificationReceiverService>>(&g_ReceiverService)));
  }
}

void FinalizeReceiverLibrary() {
  g_ReceiverService.Reset();
}

NotificationReceiver::NotificationReceiver()
  : m_pReceiver(nullptr), m_IsEventHandleManaged(false) {
  memset(m_Event.storage, 0, sizeof(m_Event.storage));
  m_Event.state = 0;
}

bool NotificationReceiver::IsValid() const {
  return m_pReceiver != nullptr;
}

Result NotificationReceiver::Initialize() {
  sf::SharedPointer<am::service::INotificationReceiver> receiver;
  NN_RESULT_DO(g_ReceiverService->CreateNotificationReceiver(
    sf::Out<sf::SharedPointer<am::service::INotificationReceiver>>(
      &receiver)));

  sf::NativeHandle handle;
  NN_RESULT_DO(receiver->GetEvent(sf::Out<sf::NativeHandle>(&handle)));

  m_pReceiver = receiver.Detach();
  os::AttachReadableHandleToSystemEvent(&m_Event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  m_IsEventHandleManaged = handle.IsManaged();
  handle.Detach();
  return Result{0};
}

void NotificationReceiver::Finalize() {
  if (m_pReceiver != nullptr) {
    m_pReceiver->Release();
    os::DestroySystemEvent(&m_Event);
    m_pReceiver = nullptr;
  }
}

NotificationReceiver::~NotificationReceiver() {
  if (m_pReceiver != nullptr) {
    m_pReceiver->Release();
    os::DestroySystemEvent(&m_Event);
    m_pReceiver = nullptr;
  }
}

void NotificationReceiver::swap(NotificationReceiver& other) {
  uint32_t handle = 0;
  if (m_pReceiver != nullptr) {
    handle = os::DetachReadableHandleOfSystemEvent(&m_Event);
    os::DestroySystemEvent(&m_Event);
  }

  uint32_t otherHandle = 0;
  if (other.m_pReceiver != nullptr) {
    otherHandle = os::DetachReadableHandleOfSystemEvent(&other.m_Event);
    os::DestroySystemEvent(&other.m_Event);
  }

  if (m_pReceiver != nullptr) {
    os::AttachReadableHandleToSystemEvent(&other.m_Event, handle,
      m_IsEventHandleManaged, os::EventClearMode_ManualClear);
  }
  if (other.m_pReceiver != nullptr) {
    os::AttachReadableHandleToSystemEvent(&m_Event, otherHandle,
      other.m_IsEventHandleManaged, os::EventClearMode_ManualClear);
  }

  am::service::INotificationReceiver* receiver = m_pReceiver;
  m_pReceiver = other.m_pReceiver;
  other.m_pReceiver = receiver;

  bool isManaged = m_IsEventHandleManaged;
  m_IsEventHandleManaged = other.m_IsEventHandleManaged;
  other.m_IsEventHandleManaged = isManaged;
}

NotificationReceiver::NotificationReceiver(NotificationReceiver&& other)
  : m_pReceiver(nullptr), m_IsEventHandleManaged(false) {
  memset(m_Event.storage, 0, sizeof(m_Event.storage));
  m_Event.state = 0;
  swap(other);
}

NotificationReceiver& NotificationReceiver::operator=(
  NotificationReceiver&& other) {
  NotificationReceiver(static_cast<NotificationReceiver&&>(other)).swap(*this);
  return *this;
}

void NotificationReceiver::AddSource(const NotificationSourceName& name) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_pReceiver->AddSource(name));
}

void NotificationReceiver::RemoveSource(const NotificationSourceName& name) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_pReceiver->RemoveSource(name));
}

bool NotificationReceiver::TryReceive(NotificationMessage* pOutMessage) {
  if (!os::TryWaitSystemEvent(&m_Event)) {
    return false;
  }

  am::service::NotificationMessage message = {};
  const Result result = m_pReceiver->TryReceive(
    sf::Out<am::service::NotificationMessage>(&message));
  if (result.IsSuccess()) [[likely]] {
    CopyMessage(pOutMessage, message);
  }
  else if (!IsResultNotificationNotFound(result)) {
    result::detail::ConvertInvalidImpl(result);
  }
  return result.IsSuccess();
}

bool NotificationReceiver::TryReceive(NotificationMessage* pOutMessage,
  os::Tick* pOutTick) {
  if (!os::TryWaitSystemEvent(&m_Event)) {
    return false;
  }

  am::service::NotificationMessage message = {};
  os::Tick tick = {};
  const Result result = m_pReceiver->TryReceiveWithTick(
    sf::Out<am::service::NotificationMessage>(&message),
    sf::Out<os::Tick>(&tick));
  if (result.IsSuccess()) {
    CopyMessage(pOutMessage, message);
    *pOutTick = tick;
  }
  else if (!IsResultNotificationNotFound(result)) {
    result::detail::ConvertInvalidImpl(result);
  }
  return result.IsSuccess();
}

void NotificationReceiver::Receive(NotificationMessage* pOutMessage) {
  for (;;) {
    os::WaitSystemEvent(&m_Event);
    am::service::NotificationMessage message = {};
    const Result result = m_pReceiver->TryReceive(
      sf::Out<am::service::NotificationMessage>(&message));
    if (result.IsSuccess()) {
      CopyMessage(pOutMessage, message);
      return;
    }
    if (!IsResultNotificationNotFound(result)) {
      result::detail::ConvertInvalidImpl(result);
    }
  }
}

void NotificationReceiver::Receive(NotificationMessage* pOutMessage,
  os::Tick* pOutTick) {
  for (;;) {
    os::WaitSystemEvent(&m_Event);
    am::service::NotificationMessage message = {};
    os::Tick tick = {};
    const Result result = m_pReceiver->TryReceiveWithTick(
      sf::Out<am::service::NotificationMessage>(&message),
      sf::Out<os::Tick>(&tick));
    if (result.IsSuccess()) {
      CopyMessage(pOutMessage, message);
      *pOutTick = tick;
      return;
    }
    if (!IsResultNotificationNotFound(result)) {
      result::detail::ConvertInvalidImpl(result);
    }
  }
}

bool NotificationReceiver::HasMessageToReceive() {
  return os::TryWaitSystemEvent(&m_Event);
}

void NotificationReceiver::WaitForMessageToReceive() {
  os::WaitSystemEvent(&m_Event);
}

void NotificationReceiver::AttachWaitHolder(os::MultiWaitHolderType* pHolder) {
  os::InitializeMultiWaitHolder(pHolder, &m_Event);
}

}
