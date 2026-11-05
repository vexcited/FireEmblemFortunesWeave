#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/friends/detail/friends_my_page.hpp"

namespace nn::friends {

namespace {

Result ShowMyPage(AppletMode mode, const account::Uid& uid,
  bool isPlayStartupSound) {
  applet::LibraryAppletHandle handle = {};
  detail::CreateMyPageApplet(&handle);
  AppletArgVer1 arg;
  detail::SetDefaultAppletArg(&arg, mode, uid);
  Result result = detail::StartMyPageApplet(handle, arg, isPlayStartupSound);
  detail::CloseMyPageApplet(handle);
  return result;
}

template <typename Arg>
Result RunMyPage(applet::LibraryAppletHandle& handle, const Arg& arg) {
  Result result = detail::StartMyPageApplet(handle, arg, false);
  if (result.IsSuccess()) {
    result = detail::GetMyPageResult(handle);
  }
  detail::CloseMyPageApplet(handle);
  return result;
}

template <typename Arg, typename Description>
[[gnu::always_inline]] inline Result StartFriendInvitationImpl(AppletMode mode,
  FriendInvitationViewMode viewMode, const account::Uid& uid, int maxCount,
  const Description& description, const void* applicationData,
  size_t applicationDataSize) {
  NN_ABORT_UNLESS(maxCount >= 1 && maxCount <= 16);
  NN_ABORT_UNLESS_NOT_NULL(applicationData);
  NN_ABORT_UNLESS(applicationDataSize >= 1 && applicationDataSize <= 0x400);
  applet::LibraryAppletHandle handle = {};
  detail::CreateMyPageApplet(&handle);
  Arg arg;
  detail::SetDefaultAppletArg(&arg, mode, uid);
  arg.friendInvitation.maxCount = maxCount;
  arg.friendInvitation.viewMode = viewMode;
  arg.friendInvitation.applicationDataSize = applicationDataSize;
  memcpy(arg.friendInvitation.applicationData, applicationData,
    applicationDataSize);
  memcpy(&arg.friendInvitation.description, &description,
    sizeof(description));
  return RunMyPage(handle, arg);
}

template <typename Arg, typename Description>
[[gnu::always_inline]] inline Result StartSendingFriendInvitationImpl(
  AppletMode mode, const account::Uid& uid,
  const account::NetworkServiceAccountId* accountIds, int count, const Description& description, const void* applicationData,
  size_t applicationDataSize) {
  NN_ABORT_UNLESS_NOT_NULL(accountIds);
  NN_ABORT_UNLESS(count >= 1 && count <= 16);
  NN_ABORT_UNLESS_NOT_NULL(applicationData);
  NN_ABORT_UNLESS(applicationDataSize >= 1 && applicationDataSize <= 0x400);
  applet::LibraryAppletHandle handle = {};
  detail::CreateMyPageApplet(&handle);
  Arg arg;
  detail::SetDefaultAppletArg(&arg, mode, uid);
  arg.sendingFriendInvitation.count = count;
  memcpy(arg.sendingFriendInvitation.accountIds, accountIds,
    sizeof(account::NetworkServiceAccountId) * count);
  arg.sendingFriendInvitation.applicationDataSize = applicationDataSize;
  memcpy(arg.sendingFriendInvitation.applicationData, applicationData,
    applicationDataSize);
  memcpy(&arg.sendingFriendInvitation.description, &description,
    sizeof(description));
  return RunMyPage(handle, arg);
}

}

Result ShowFriendList(const account::Uid& uid) {
  return ShowMyPage(AppletMode_ShowFriendList, uid, false);
}

Result ShowUserDetailInfo(const account::Uid& uid,
  const account::NetworkServiceAccountId& accountId,
  const InAppScreenName& inAppScreenName,
  const InAppScreenName& myInAppScreenName) {
  applet::LibraryAppletHandle handle = {};
  detail::CreateMyPageApplet(&handle);
  AppletArgVer1 arg;
  detail::SetDefaultAppletArg(&arg, AppletMode_ShowUserDetailInfo, uid);
  arg.userDetailInfo.accountId = accountId;
  arg.userDetailInfo.inAppScreenName = inAppScreenName;
  arg.userDetailInfo.myInAppScreenName = myInAppScreenName;
  Result result = detail::StartMyPageApplet(handle, arg, false);
  detail::CloseMyPageApplet(handle);
  return result;
}

Result ShowAddFriends(const account::Uid& uid) {
  return ShowMyPage(AppletMode_ShowAddFriends, uid, false);
}

Result StartSendingFriendRequest(const account::Uid& uid,
  const account::NetworkServiceAccountId& accountId,
  const InAppScreenName& inAppScreenName,
  const InAppScreenName& myInAppScreenName) {
  applet::LibraryAppletHandle handle = {};
  detail::CreateMyPageApplet(&handle);
  AppletArgVer1 arg;
  detail::SetDefaultAppletArg(&arg, AppletMode_StartSendingFriendRequest,
    uid);
  arg.userDetailInfo.accountId = accountId;
  arg.userDetailInfo.inAppScreenName = inAppScreenName;
  arg.userDetailInfo.myInAppScreenName = myInAppScreenName;
  return RunMyPage(handle, arg);
}

Result StartFriendInvitation(const account::Uid& uid, int maxCount,
  const FriendInvitationGameModeDescription& description,
  const void* applicationData, size_t applicationDataSize) {
  return StartFriendInvitationImpl<AppletArgVer1>(
    AppletMode_StartFriendInvitation, FriendInvitationViewMode(0), uid,
    maxCount, description, applicationData, applicationDataSize);
}

Result StartFriendInvitation(FriendInvitationViewMode viewMode,
  const account::Uid& uid, int maxCount,
  const FriendInvitationGameModeDescription& description,
  const void* applicationData, size_t applicationDataSize) {
  return StartFriendInvitationImpl<AppletArgVer1>(
    AppletMode_StartFriendInvitation, viewMode, uid, maxCount, description,
    applicationData, applicationDataSize);
}

Result StartFriendInvitation(const account::Uid& uid, int maxCount,
  const FriendInvitationGameModeDescriptionV2& description,
  const void* applicationData, size_t applicationDataSize) {
  return StartFriendInvitationImpl<AppletArgVer2>(
    AppletMode_StartFriendInvitationV2, FriendInvitationViewMode(0), uid,
    maxCount, description, applicationData, applicationDataSize);
}

Result StartFriendInvitation(FriendInvitationViewMode viewMode,
  const account::Uid& uid, int maxCount,
  const FriendInvitationGameModeDescriptionV2& description,
  const void* applicationData, size_t applicationDataSize) {
  return StartFriendInvitationImpl<AppletArgVer2>(
    AppletMode_StartFriendInvitationV2, viewMode, uid, maxCount, description,
    applicationData, applicationDataSize);
}

Result StartSendingFriendInvitation(const account::Uid& uid,
  const account::NetworkServiceAccountId* accountIds, int count,
  const FriendInvitationGameModeDescription& description,
  const void* applicationData, size_t applicationDataSize) {
  return StartSendingFriendInvitationImpl<AppletArgVer1>(
    AppletMode_StartSendingFriendInvitation, uid, accountIds, count,
    description, applicationData, applicationDataSize);
}

Result StartSendingFriendInvitation(const account::Uid& uid,
  const account::NetworkServiceAccountId* accountIds, int count,
  const FriendInvitationGameModeDescriptionV2& description,
  const void* applicationData, size_t applicationDataSize) {
  return StartSendingFriendInvitationImpl<AppletArgVer2>(
    AppletMode_StartSendingFriendInvitationV2, uid, accountIds, count,
    description, applicationData, applicationDataSize);
}

Result ShowMyProfile(const account::Uid& uid) {
  return ShowMyPage(AppletMode_ShowMyProfile, uid, false);
}

Result ShowMyProfileForHomeMenu(const account::Uid& uid) {
  return ShowMyPage(AppletMode_ShowMyProfile, uid, true);
}

Result ShowReceivedInvitationDetail(const account::Uid& uid,
  const FriendInvitationId& invitationId,
  const FriendInvitationGroupId& invitationGroupId) {
  applet::LibraryAppletHandle handle = {};
  detail::CreateMyPageApplet(&handle);
  AppletArgVer1 arg;
  detail::SetDefaultAppletArg(&arg, AppletMode_ShowReceivedInvitationDetail,
    uid);
  arg.receivedInvitationDetail.invitationId = invitationId;
  arg.receivedInvitationDetail.invitationGroupId = invitationGroupId;
  Result result = detail::StartMyPageApplet(handle, arg, false);
  detail::CloseMyPageApplet(handle);
  return result;
}

}
