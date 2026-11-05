#pragma once

#include <stdint.h>

#include "nn/os/multi_wait.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::am::service {

class INotificationReceiver;
class INotificationSender;

}

namespace nn::applet {

struct NotificationSourceName {
  char value[32];
};

struct NotificationMessage {
  uint32_t tag;
  uint32_t size;
  uint8_t data[120];
};

struct NotificationQueueAttribute {
  int32_t queueCount;
  uint32_t reserved;
};

struct NotificationSendOption {
  bool isQueued;
  bool overwritesValue;
  uint8_t reserved[6];
};

struct NotificationReceiverHandle {
  void* _p;
};

struct NotificationSenderHandle {
  void* _p;
};

class NotificationReceiver {
 public:
  NotificationReceiver();
  NotificationReceiver(NotificationReceiver&& other);
  ~NotificationReceiver();

  NotificationReceiver& operator=(NotificationReceiver&& other);

  bool IsValid() const;
  Result Initialize();
  void Finalize();
  void swap(NotificationReceiver& other);

  void AddSource(const NotificationSourceName& name);
  void RemoveSource(const NotificationSourceName& name);
  bool TryReceive(NotificationMessage* pOutMessage);
  bool TryReceive(NotificationMessage* pOutMessage, os::Tick* pOutTick);
  void Receive(NotificationMessage* pOutMessage);
  void Receive(NotificationMessage* pOutMessage, os::Tick* pOutTick);
  bool HasMessageToReceive();
  void WaitForMessageToReceive();
  void AttachWaitHolder(os::MultiWaitHolderType* pHolder);

 private:
  am::service::INotificationReceiver* m_pReceiver;
  os::SystemEventType m_Event;
  bool m_IsEventHandleManaged;
};

class NotificationSender {
 public:
  NotificationSender();
  NotificationSender(NotificationSender&& other);
  ~NotificationSender();

  NotificationSender& operator=(NotificationSender&& other);

  bool IsValid() const;
  Result Initialize(const NotificationSourceName& name,
    const NotificationQueueAttribute& attribute);
  void Finalize();
  void swap(NotificationSender& other);

  bool Send(NotificationMessage message, NotificationSendOption option);
  int GetUnreceivedMessageCount() const;

 private:
  am::service::INotificationSender* m_pSender;
};

void InitializeReceiverLibrary();
void FinalizeReceiverLibrary();
void InitializeSenderLibrary();
void FinalizeSenderLibrary();

void InitializeNotificationReceiverLibraryForApplet();
void FinalizeNotificationReceiverLibraryForApplet();
NotificationReceiverHandle CreateNotificationReceiver();
void DestroyNotificationReceiver(NotificationReceiverHandle handle);
void SubscribeNotificationSenderSource(NotificationReceiverHandle handle,
  const NotificationSourceName& name);
void UnsubscribeNotificationSenderSource(NotificationReceiverHandle handle,
  const NotificationSourceName& name);
bool TryReceiveNotificationMessage(NotificationMessage* pOutMessage,
  NotificationReceiverHandle handle);
bool TryReceiveNotificationMessage(NotificationMessage* pOutMessage,
  os::Tick* pOutTick, NotificationReceiverHandle handle);
void ReceiveNotificationMessage(NotificationMessage* pOutMessage,
  NotificationReceiverHandle handle);
void ReceiveNotificationMessage(NotificationMessage* pOutMessage,
  os::Tick* pOutTick, NotificationReceiverHandle handle);
bool HasNotificationMessageToReceive(NotificationReceiverHandle handle);
void WaitForNotificationMessageToReceive(NotificationReceiverHandle handle);
void InitializeMultiWaitHolderWithNotificationReceiver(
  os::MultiWaitHolderType* pHolder, NotificationReceiverHandle handle);

void InitializeNotificationSenderLibraryForApplet();
void FinalizeNotificationSenderLibraryForApplet();
NotificationSenderHandle CreateNotificationSenderForValue(
  const NotificationSourceName& name);
NotificationSenderHandle CreateNotificationSenderWithQueue(
  const NotificationSourceName& name, int queueCount);
bool SendNotificationMessage(NotificationSenderHandle handle,
  const NotificationMessage& message);
int GetUnreceivedNotificationMessageCount(NotificationSenderHandle handle);

}
