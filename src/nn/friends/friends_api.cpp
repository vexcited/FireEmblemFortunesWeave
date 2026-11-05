#include "nn/friends/detail/friends_my_page.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/friends/friends_types.hpp"

namespace nn::friends {

namespace detail {

Result NormalizeInAppScreenName(InAppScreenName* pOutName,
  const InAppScreenName& name);

}

namespace {

detail::ipc::SizedFriendFilter ToSizedFilter(const FriendFilter& filter) {
  detail::ipc::SizedFriendFilter sized;
  sized.presenceStatus = filter.presenceStatus;
  sized.isFavoriteOnly = filter.isFavoriteOnly;
  sized.isSameAppPresenceOnly = filter.isSameAppPresenceOnly;
  sized.isSameAppPlayedOnly = filter.isSameAppPlayedOnly;
  sized.isArbitraryAppPlayedOnly = filter.isArbitraryAppPlayedOnly;
  sized.presenceGroupId = filter.presenceGroupId;
  return sized;
}

}

void Initialize() {
  detail::ShimLibraryGlobal::GetInstance().Initialize();
}

void SetAllocator(detail::AllocateFunction allocate,
  detail::FreeFunction free) {
  detail::SetGlobalAllocator(allocate, free);
}

[[gnu::noinline]] Result GetBlockedUserList(int* pOutCount,
  account::NetworkServiceAccountId* pOutAccountIds, const account::Uid& uid,
  int offset, int count) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  int outCount = 0;
  NN_RESULT_DO(session->GetBlockedUserListIds(sf::Out<int>(&outCount),
    sf::OutArray<account::NetworkServiceAccountId>(pOutAccountIds, count),
    uid, offset));
  *pOutCount = outCount;
  return Result{};
}

Result GetBlockedUserList(int* pOutCount,
  account::NetworkServiceAccountId* pOutAccountIds, int offset, int count) {
  return GetBlockedUserList(pOutCount, pOutAccountIds,
    detail::GetCurrentUser(), offset, count);
}

Result CheckBlockedUserListAvailability(bool* pOutIsAvailable,
  const account::Uid& uid) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->CheckBlockedUserListAvailability(
    sf::Out<bool>(pOutIsAvailable), uid);
}

Result CheckBlockedUserListAvailability(bool* pOutIsAvailable) {
  return CheckBlockedUserListAvailability(pOutIsAvailable,
    detail::GetCurrentUser());
}

[[gnu::noinline]] Result GetFriendList(int* pOutCount,
  account::NetworkServiceAccountId* pOutAccountIds, const account::Uid& uid,
  int offset, int count, const FriendFilter& filter) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  int outCount = 0;
  detail::ipc::SizedFriendFilter sized = ToSizedFilter(filter);
  NN_RESULT_DO(session->GetFriendListIds(sf::Out<int>(&outCount),
    sf::OutArray<account::NetworkServiceAccountId>(pOutAccountIds, count),
    uid, offset, sized, 0));
  *pOutCount = outCount;
  return Result{};
}

Result GetFriendList(int* pOutCount,
  account::NetworkServiceAccountId* pOutAccountIds, int offset, int count,
  const FriendFilter& filter) {
  return GetFriendList(pOutCount, pOutAccountIds, detail::GetCurrentUser(),
    offset, count, filter);
}

[[gnu::noinline]] Result GetFriendList(int* pOutCount, Friend* pOutFriends,
  const account::Uid& uid, int offset, int count,
  const FriendFilter& filter) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  int outCount = 0;
  detail::ipc::SizedFriendFilter sized = ToSizedFilter(filter);
  NN_RESULT_DO(session->GetFriendList(sf::Out<int>(&outCount),
    sf::OutArray<Friend>(pOutFriends, count), uid, offset, sized, 0));
  *pOutCount = outCount;
  return Result{};
}

Result GetFriendList(int* pOutCount, Friend* pOutFriends, int offset,
  int count, const FriendFilter& filter) {
  return GetFriendList(pOutCount, pOutFriends, detail::GetCurrentUser(),
    offset, count, filter);
}

Result CheckFriendListAvailability(bool* pOutIsAvailable,
  const account::Uid& uid) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->CheckFriendListAvailability(sf::Out<bool>(pOutIsAvailable),
    uid);
}

Result CheckFriendListAvailability(bool* pOutIsAvailable) {
  return CheckFriendListAvailability(pOutIsAvailable,
    detail::GetCurrentUser());
}

Result DeclareOpenOnlinePlaySession(const account::Uid& uid) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->DeclareOpenOnlinePlaySession(uid);
}

Result DeclareOpenOnlinePlaySession() {
  return DeclareOpenOnlinePlaySession(detail::GetCurrentUser());
}

Result DeclareCloseOnlinePlaySession(const account::Uid& uid) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->DeclareCloseOnlinePlaySession(uid);
}

Result DeclareCloseOnlinePlaySession() {
  return DeclareCloseOnlinePlaySession(detail::GetCurrentUser());
}

Result GetPlayHistoryRegistrationKey(PlayHistoryRegistrationKey* pOutKey,
  const account::Uid& uid, bool isLocalPlay) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->GetPlayHistoryRegistrationKey(
    sf::Out<PlayHistoryRegistrationKey>(pOutKey), uid, isLocalPlay);
}

Result GetPlayHistoryRegistrationKey(PlayHistoryRegistrationKey* pOutKey,
  bool isLocalPlay) {
  return GetPlayHistoryRegistrationKey(pOutKey, detail::GetCurrentUser(),
    isLocalPlay);
}

Result GetPlayHistoryRegistrationKey(PlayHistoryRegistrationKey* pOutKey,
  account::NetworkServiceAccountId accountId, bool isLocalPlay) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  return session->GetPlayHistoryRegistrationKeyWithNetworkServiceAccountId(
    sf::Out<PlayHistoryRegistrationKey>(pOutKey), accountId, isLocalPlay);
}

Result UpdateFriendInfo(Friend* pOutFriends, const account::Uid& uid,
  const account::NetworkServiceAccountId* pAccountIds, int count) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->UpdateFriendInfo(sf::OutArray<Friend>(pOutFriends, count),
    uid, sf::InArray<account::NetworkServiceAccountId>(pAccountIds, count),
    0);
}

Result UpdateFriendInfo(Friend* pOutFriends,
  const account::NetworkServiceAccountId* pAccountIds, int count) {
  return UpdateFriendInfo(pOutFriends, detail::GetCurrentUser(), pAccountIds,
    count);
}

Result GetFacedFriendRequestRegistrationKey(
  FacedFriendRequestRegistrationKey* pOutKey, const account::Uid& uid) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return session->GetFacedFriendRequestRegistrationKey(
    sf::Out<FacedFriendRequestRegistrationKey>(pOutKey), uid);
}

Result AddFacedFriendRequest(const account::Uid& uid,
  const FacedFriendRequestRegistrationKey& key,
  const account::Nickname& nickname, const void* image, size_t imageSize,
  const InAppScreenName& inAppScreenName,
  const InAppScreenName& myInAppScreenName) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  InAppScreenName normalizedName;
  NN_RESULT_DO(detail::NormalizeInAppScreenName(&normalizedName,
    inAppScreenName));
  InAppScreenName normalizedMyName;
  NN_RESULT_DO(detail::NormalizeInAppScreenName(&normalizedMyName,
    myInAppScreenName));
  return session->AddFacedFriendRequestForApplication(uid, key, nickname,
    sf::InBuffer(image, imageSize), normalizedName, normalizedMyName, 0);
}

[[gnu::noinline]] Result AddPlayHistory(const account::Uid& uid,
  const PlayHistoryRegistrationKey& key,
  const InAppScreenName& inAppScreenName,
  const InAppScreenName& myInAppScreenName) {
  detail::ipc::IFriendService* session =
    detail::ShimLibraryGlobal::GetInstance().GetSyncSession();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  InAppScreenName normalizedName;
  NN_RESULT_DO(detail::NormalizeInAppScreenName(&normalizedName,
    inAppScreenName));
  InAppScreenName normalizedMyName;
  NN_RESULT_DO(detail::NormalizeInAppScreenName(&normalizedMyName,
    myInAppScreenName));
  return session->AddPlayHistory(uid, key, normalizedName, normalizedMyName,
    0);
}

Result AddPlayHistory(const PlayHistoryRegistrationKey& key,
  const InAppScreenName& inAppScreenName,
  const InAppScreenName& myInAppScreenName) {
  return AddPlayHistory(detail::GetCurrentUser(), key, inAppScreenName,
    myInAppScreenName);
}

}
