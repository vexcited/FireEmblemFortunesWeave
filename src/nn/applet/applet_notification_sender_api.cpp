#include <mutex>

#include "nn/applet/applet_notification.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::applet {

namespace {

struct SenderHolder {
  NotificationSender sender;
  NotificationSendOption option;
  bool isUsed;
};

const int SenderCountMax = 4;

os::SdkMutex g_SenderMutex;
SenderHolder g_SenderHolders[SenderCountMax];

SenderHolder* AcquireSenderHolder() {
  std::lock_guard<os::SdkMutex> lock(g_SenderMutex);
  SenderHolder* pHolder = nullptr;
  for (SenderHolder& holder : g_SenderHolders) {
    if (!holder.isUsed) {
      pHolder = &holder;
      break;
    }
  }
  NN_ABORT_UNLESS(pHolder != nullptr);
  pHolder->isUsed = true;
  return pHolder;
}

SenderHolder* GetHolder(NotificationSenderHandle handle) {
  return static_cast<SenderHolder*>(handle._p);
}

}

void InitializeNotificationSenderLibraryForApplet() {
  InitializeSenderLibrary();
}

void FinalizeNotificationSenderLibraryForApplet() {
  FinalizeSenderLibrary();
}

NotificationSenderHandle CreateNotificationSenderForValue(
  const NotificationSourceName& name) {
  NotificationQueueAttribute attribute;
  attribute.queueCount = 1;
  SenderHolder* pHolder = AcquireSenderHolder();
  NN_ABORT_UNLESS_RESULT_SUCCESS(pHolder->sender.Initialize(name, attribute));
  pHolder->option = NotificationSendOption{false, true, {}};
  return NotificationSenderHandle{pHolder};
}

NotificationSenderHandle CreateNotificationSenderWithQueue(
  const NotificationSourceName& name, int queueCount) {
  NotificationQueueAttribute attribute;
  attribute.queueCount = queueCount;
  SenderHolder* pHolder = AcquireSenderHolder();
  NN_ABORT_UNLESS_RESULT_SUCCESS(pHolder->sender.Initialize(name, attribute));
  pHolder->option = NotificationSendOption{true, false, {}};
  return NotificationSenderHandle{pHolder};
}

void DestroyNotificationSender(NotificationSenderHandle handle) {
  SenderHolder* pHolder = GetHolder(handle);
  pHolder->sender.Finalize();
  pHolder->option = NotificationSendOption();
  std::lock_guard<os::SdkMutex> lock(g_SenderMutex);
  pHolder->isUsed = false;
}

bool SendNotificationMessage(NotificationSenderHandle handle,
  const NotificationMessage& message) {
  SenderHolder* pHolder = GetHolder(handle);
  return pHolder->sender.Send(message, pHolder->option);
}

int GetUnreceivedNotificationMessageCount(NotificationSenderHandle handle) {
  return GetHolder(handle)->sender.GetUnreceivedMessageCount();
}

}
