#include <string.h>

#include "nn/am/service/am_controllers.hpp"
#include "nn/am/service/am_notification.hpp"
#include "nn/applet/applet_notification.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::result::detail {

[[gnu::cold]] void ConvertInvalidImpl(Result result);

}

namespace nn::applet {

namespace detail {

[[gnu::visibility("hidden")]]
sf::SharedPointer<am::service::INotificationSenderService> g_SenderService;

}

namespace {

using detail::g_SenderService;

bool IsResultNotificationQueueFull(Result result) {
  return result.GetInnerValueForDebug() == ((75 << 9) | 131);
}

Result CreateSender(
  sf::SharedPointer<am::service::INotificationSender>* pOutSender,
  const NotificationSourceName& name,
  const NotificationQueueAttribute& attribute) {
  return g_SenderService->CreateNotificationSender(
    sf::Out<sf::SharedPointer<am::service::INotificationSender>>(pOutSender),
    name, attribute);
}

}

void InitializeSenderLibrary() {
  if (!g_SenderService) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      am::service::GetAppletCommonFunctionsObject()
        ->GetNotificationSenderService(
          sf::Out<sf::SharedPointer<
            am::service::INotificationSenderService>>(&g_SenderService)));
  }
}

void FinalizeSenderLibrary() {
  g_SenderService.Reset();
}

NotificationSender::NotificationSender() : m_pSender(nullptr) {}

bool NotificationSender::IsValid() const {
  return m_pSender != nullptr;
}

Result NotificationSender::Initialize(const NotificationSourceName& name,
  const NotificationQueueAttribute& attribute) {
  sf::SharedPointer<am::service::INotificationSender> sender;
  NN_RESULT_DO(CreateSender(&sender, name, attribute));
  m_pSender = sender.Detach();
  return Result{0};
}

void NotificationSender::Finalize() {
  if (m_pSender != nullptr) {
    m_pSender->Release();
    m_pSender = nullptr;
  }
}

NotificationSender::~NotificationSender() {
  if (m_pSender != nullptr) {
    m_pSender->Release();
    m_pSender = nullptr;
  }
}

void NotificationSender::swap(NotificationSender& other) {
  am::service::INotificationSender* sender = m_pSender;
  m_pSender = other.m_pSender;
  other.m_pSender = sender;
}

NotificationSender::NotificationSender(NotificationSender&& other)
  : m_pSender(nullptr) {
  swap(other);
}

NotificationSender& NotificationSender::operator=(NotificationSender&& other) {
  NotificationSender(static_cast<NotificationSender&&>(other)).swap(*this);
  return *this;
}

bool NotificationSender::Send(NotificationMessage message,
  NotificationSendOption option) {
  am::service::NotificationMessage serviceMessage = {};
  serviceMessage.tag = message.tag;
  serviceMessage.size = message.size;
  memcpy(serviceMessage.data, message.data, message.size);

  const Result result = m_pSender->Send(serviceMessage, option);
  if (result.IsFailure() && !IsResultNotificationQueueFull(result)) {
    result::detail::ConvertInvalidImpl(result);
  }
  return result.IsSuccess();
}

int NotificationSender::GetUnreceivedMessageCount() const {
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    m_pSender->GetUnreceivedMessageCount(sf::Out<int>(&count)));
  return count;
}

}
