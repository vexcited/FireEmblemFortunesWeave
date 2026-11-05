#pragma once

#include <stdint.h>

#include "nn/applet/applet_notification.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

struct NotificationMessage {
  uint32_t tag;
  uint32_t size;
  uint8_t data[120];
};

class INotificationReceiver : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result AddSource(const applet::NotificationSourceName& name) = 0;
  virtual Result RemoveSource(const applet::NotificationSourceName& name) = 0;
  virtual Result GetEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result TryReceive(sf::Out<NotificationMessage> pOutMessage) = 0;
  virtual Result TryReceiveWithTick(sf::Out<NotificationMessage> pOutMessage,
    sf::Out<os::Tick> pOutTick) = 0;
};

class INotificationReceiverService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateNotificationReceiver(
    const sf::Out<sf::SharedPointer<INotificationReceiver>>& pOutReceiver) = 0;
};

class INotificationSender : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Send(const NotificationMessage& message,
    applet::NotificationSendOption option) = 0;
  virtual Result GetUnreceivedMessageCount(sf::Out<int> pOutCount) = 0;
};

class INotificationSenderService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateNotificationSender(
    const sf::Out<sf::SharedPointer<INotificationSender>>& pOutSender,
    const applet::NotificationSourceName& name,
    applet::NotificationQueueAttribute attribute) = 0;
};

}
