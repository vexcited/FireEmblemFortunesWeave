#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::friends {

class Friend;
class UserPresence;
struct PlayHistoryRegistrationKey;
struct FacedFriendRequestRegistrationKey;
struct InAppScreenName;

struct Url;
enum ImageSize : uint16_t;

struct FriendFilter {
  int32_t presenceStatus;
  bool isFavoriteOnly;
  bool isSameAppPresenceOnly;
  bool isSameAppPlayedOnly;
  bool isArbitraryAppPlayedOnly;
  uint64_t presenceGroupId;
};

enum NotificationType : int32_t {};

struct NotificationInfo {
  NotificationType type;
  account::NetworkServiceAccountId accountId;
};

namespace detail::ipc {

class INotificationService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result Clear() = 0;
  virtual Result Pop(sf::Out<NotificationInfo> pOutInfo) = 0;
};

class IDaemonSuspendSessionService;

struct SizedFriendFilter {
  int32_t presenceStatus;
  bool isFavoriteOnly;
  bool isSameAppPresenceOnly;
  bool isSameAppPlayedOnly;
  bool isArbitraryAppPlayedOnly;
  uint64_t presenceGroupId;
};

class IFriendService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetCompletionEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result Cancel() = 0;
  virtual Result GetFriendListIds(sf::Out<int> pOutCount,
    const sf::OutArray<account::NetworkServiceAccountId>& outIds,
    const account::Uid& uid, int offset, const SizedFriendFilter& filter,
    uint64_t processId) = 0;
  virtual Result GetFriendList(sf::Out<int> pOutCount,
    const sf::OutArray<Friend>& outFriends, const account::Uid& uid,
    int offset, const SizedFriendFilter& filter, uint64_t processId) = 0;
  virtual Result UpdateFriendInfo(const sf::OutArray<Friend>& outFriends,
    const account::Uid& uid,
    const sf::InArray<account::NetworkServiceAccountId>& accountIds,
    uint64_t processId) = 0;
  virtual Result GetFriendProfileImage(sf::Out<int> pOutSize,
    const account::Uid& uid, account::NetworkServiceAccountId accountId,
    const sf::OutBuffer& outImage) = 0;
  virtual void Reserved10() = 0;
  virtual Result CheckFriendListAvailability(sf::Out<bool> pOutIsAvailable,
    const account::Uid& uid) = 0;
  virtual void EnsureFriendListAvailable() = 0;
  virtual void SendFriendRequestForApplication() = 0;
  virtual Result AddFacedFriendRequestForApplication(const account::Uid& uid,
    const FacedFriendRequestRegistrationKey& key,
    const account::Nickname& nickname, const sf::InBuffer& image,
    const InAppScreenName& inAppScreenName,
    const InAppScreenName& myInAppScreenName, uint64_t processId) = 0;
  virtual Result GetBlockedUserListIds(sf::Out<int> pOutCount,
    const sf::OutArray<account::NetworkServiceAccountId>& outIds,
    const account::Uid& uid, int offset) = 0;
  virtual Result CheckBlockedUserListAvailability(
    sf::Out<bool> pOutIsAvailable, const account::Uid& uid) = 0;
  virtual void EnsureBlockedUserListAvailable() = 0;
  virtual void GetProfileList() = 0;
  virtual void Reserved19() = 0;
  virtual Result DeclareOpenOnlinePlaySession(const account::Uid& uid) = 0;
  virtual Result DeclareCloseOnlinePlaySession(const account::Uid& uid) = 0;
  virtual Result UpdateUserPresence(const account::Uid& uid,
    const UserPresence& presence, uint64_t processId) = 0;
  virtual Result GetPlayHistoryRegistrationKey(
    sf::Out<PlayHistoryRegistrationKey> pOutKey, const account::Uid& uid,
    bool isLocalPlay) = 0;
  virtual Result GetPlayHistoryRegistrationKeyWithNetworkServiceAccountId(
    sf::Out<PlayHistoryRegistrationKey> pOutKey,
    account::NetworkServiceAccountId accountId, bool isLocalPlay) = 0;
  virtual Result AddPlayHistory(const account::Uid& uid,
    const PlayHistoryRegistrationKey& key,
    const InAppScreenName& inAppScreenName,
    const InAppScreenName& myInAppScreenName, uint64_t processId) = 0;
  virtual void Reserved26() = 0;
  virtual Result GetProfileImageUrl(sf::Out<Url> pOutUrl, const Url& url,
    int imageSize) = 0;
  virtual void Reserved28() = 0;
  virtual void Reserved29() = 0;
  virtual void Reserved30() = 0;
  virtual void Reserved31() = 0;
  virtual void Reserved32() = 0;
  virtual void Reserved33() = 0;
  virtual void Reserved34() = 0;
  virtual void Reserved35() = 0;
  virtual void Reserved36() = 0;
  virtual void Reserved37() = 0;
  virtual void Reserved38() = 0;
  virtual void Reserved39() = 0;
  virtual void Reserved40() = 0;
  virtual void Reserved41() = 0;
  virtual void Reserved42() = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual void Reserved46() = 0;
  virtual void Reserved47() = 0;
  virtual void Reserved48() = 0;
  virtual void Reserved49() = 0;
  virtual void Reserved50() = 0;
  virtual void Reserved51() = 0;
  virtual void Reserved52() = 0;
  virtual void Reserved53() = 0;
  virtual void Reserved54() = 0;
  virtual void Reserved55() = 0;
  virtual void Reserved56() = 0;
  virtual void Reserved57() = 0;
  virtual void Reserved58() = 0;
  virtual void Reserved59() = 0;
  virtual void Reserved60() = 0;
  virtual void Reserved61() = 0;
  virtual void Reserved62() = 0;
  virtual void Reserved63() = 0;
  virtual void Reserved64() = 0;
  virtual void Reserved65() = 0;
  virtual void Reserved66() = 0;
  virtual void Reserved67() = 0;
  virtual void Reserved68() = 0;
  virtual void Reserved69() = 0;
  virtual void Reserved70() = 0;
  virtual void Reserved71() = 0;
  virtual void Reserved72() = 0;
  virtual void Reserved73() = 0;
  virtual void Reserved74() = 0;
  virtual void Reserved75() = 0;
  virtual void Reserved76() = 0;
  virtual void Reserved77() = 0;
  virtual void Reserved78() = 0;
  virtual void Reserved79() = 0;
  virtual Result GetFacedFriendRequestRegistrationKey(
    sf::Out<FacedFriendRequestRegistrationKey> pOutKey,
    const account::Uid& uid) = 0;
};

}

namespace detail {

class ShimLibraryGlobal {
 public:
  static ShimLibraryGlobal& GetInstance() {
    static ShimLibraryGlobal s_Instance;
    return s_Instance;
  }

  ShimLibraryGlobal();

  void Initialize();
  ipc::IFriendService* GetSyncSession();
  Result CreateAsyncSession(ipc::IFriendService** pOutSession);
  Result CreateNotificationService(ipc::INotificationService** pOutService,
    const account::Uid& uid);
  Result CreateDaemonSuspendSessionService(
    ipc::IDaemonSuspendSessionService** pOutService);

 private:
  void CreateIpcSession();

  os::SdkMutexType m_Mutex;
  ipc::IFriendService* m_SyncSession;
};

using AllocateFunction = void* (*)(size_t size);
using FreeFunction = void (*)(void* pointer, size_t size);

void SetGlobalAllocator(AllocateFunction allocate, FreeFunction free);
void GetGlobalAllocator(AllocateFunction* pOutAllocate,
  FreeFunction* pOutFree);

namespace ipc {

void Initialize();
void Finalize();
Result CreateFriendService(IFriendService** pOutService);
Result CreateNotificationService(INotificationService** pOutService,
  const account::Uid& uid);
Result CreateDaemonSuspendSessionService(
  IDaemonSuspendSessionService** pOutService);

}

}

}
