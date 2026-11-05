#include <stddef.h>

#include "nn/account/account_types.hpp"
#include "nn/am/service/am_application_functions.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::result::detail {

[[gnu::cold]] void ConvertInvalidImpl(Result result);

}

namespace nn::friends {

namespace {

using am::service::GetApplicationFunctionsObject;
using am::service::IStorage;

bool IsResultNoFriendInvitation(Result result) {
  return result.GetInnerValueForDebug() == ((2 << 9) | 128);
}

class FriendInvitationNotificationEvent {
 public:
  [[gnu::noinline]] FriendInvitationNotificationEvent() {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetApplicationFunctionsObject()->GetFriendInvitationStorageChannelEvent(
        sf::Out<sf::NativeHandle>(&handle)));
    m_Event.AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_ManualClear);
    handle.Detach();
  }

  os::SystemEvent* Get() {
    return &m_Event;
  }

 private:
  os::SystemEvent m_Event;
};

}

os::SystemEvent* GetFriendInvitationNotificationEvent() {
  static FriendInvitationNotificationEvent s_Event;
  return s_Event.Get();
}

bool TryPopFriendInvitationNotificationInfo(account::Uid* pOutUid,
  size_t* pOutSize, void* buffer, size_t size) {
  sf::SharedPointer<IStorage> storage;
  const Result result =
    GetApplicationFunctionsObject()->TryPopFromFriendInvitationStorageChannel(
      sf::Out<sf::SharedPointer<IStorage>>(&storage));
  if (result.IsFailure()) {
    if (!IsResultNoFriendInvitation(result)) {
      result::detail::ConvertInvalidImpl(result);
    }
    return false;
  }

  applet::StorageHandle handle = {storage.Detach()};
  account::Uid uid = {};
  const int64_t storageSize = applet::GetStorageSize(handle);
  const bool isValid = storageSize >= static_cast<int64_t>(sizeof(uid));
  if (isValid) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::ReadFromStorage(handle, 0, &uid, sizeof(uid)));
    size_t readSize = static_cast<size_t>(storageSize) - sizeof(uid);
    if (size < readSize) {
      readSize = size;
    }
    if (readSize != 0) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        applet::ReadFromStorage(handle, sizeof(uid), buffer, readSize));
    }
    *pOutSize = readSize;
    *pOutUid = uid;
  }
  applet::ReleaseStorage(handle);
  return isValid;
}

}
