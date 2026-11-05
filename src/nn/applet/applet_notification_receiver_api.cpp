#include <mutex>

#include "nn/applet/applet_notification.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::applet {

namespace {

struct ReceiverHolder {
  NotificationReceiver receiver;
  bool isUsed;
};

const int ReceiverCountMax = 4;

os::SdkMutex g_ReceiverMutex;
ReceiverHolder g_ReceiverHolders[ReceiverCountMax];

NotificationReceiver* GetReceiver(NotificationReceiverHandle handle) {
  return &static_cast<ReceiverHolder*>(handle._p)->receiver;
}

}

void InitializeNotificationReceiverLibraryForApplet() {
  InitializeReceiverLibrary();
}

void FinalizeNotificationReceiverLibraryForApplet() {
  FinalizeReceiverLibrary();
}

NotificationReceiverHandle CreateNotificationReceiver() {
  ReceiverHolder* pHolder = nullptr;
  {
    std::lock_guard<os::SdkMutex> lock(g_ReceiverMutex);
    for (ReceiverHolder& holder : g_ReceiverHolders) {
      if (!holder.isUsed) {
        pHolder = &holder;
        break;
      }
    }
    NN_ABORT_UNLESS(pHolder != nullptr);
    pHolder->isUsed = true;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(pHolder->receiver.Initialize());
  return NotificationReceiverHandle{pHolder};
}

void DestroyNotificationReceiver(NotificationReceiverHandle handle) {
  ReceiverHolder* pHolder = static_cast<ReceiverHolder*>(handle._p);
  pHolder->receiver.Finalize();
  std::lock_guard<os::SdkMutex> lock(g_ReceiverMutex);
  pHolder->isUsed = false;
}

void SubscribeNotificationSenderSource(NotificationReceiverHandle handle,
  const NotificationSourceName& name) {
  GetReceiver(handle)->AddSource(name);
}

void UnsubscribeNotificationSenderSource(NotificationReceiverHandle handle,
  const NotificationSourceName& name) {
  GetReceiver(handle)->RemoveSource(name);
}

bool TryReceiveNotificationMessage(NotificationMessage* pOutMessage,
  NotificationReceiverHandle handle) {
  return GetReceiver(handle)->TryReceive(pOutMessage);
}

bool TryReceiveNotificationMessage(NotificationMessage* pOutMessage,
  os::Tick* pOutTick, NotificationReceiverHandle handle) {
  return GetReceiver(handle)->TryReceive(pOutMessage, pOutTick);
}

void ReceiveNotificationMessage(NotificationMessage* pOutMessage,
  NotificationReceiverHandle handle) {
  GetReceiver(handle)->Receive(pOutMessage);
}

void ReceiveNotificationMessage(NotificationMessage* pOutMessage,
  os::Tick* pOutTick, NotificationReceiverHandle handle) {
  GetReceiver(handle)->Receive(pOutMessage, pOutTick);
}

bool HasNotificationMessageToReceive(NotificationReceiverHandle handle) {
  return GetReceiver(handle)->HasMessageToReceive();
}

void WaitForNotificationMessageToReceive(NotificationReceiverHandle handle) {
  GetReceiver(handle)->WaitForMessageToReceive();
}

void InitializeMultiWaitHolderWithNotificationReceiver(
  os::MultiWaitHolderType* pHolder, NotificationReceiverHandle handle) {
  GetReceiver(handle)->AttachWaitHolder(pHolder);
}

}
