#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/result.hpp"

namespace nn::friends {

struct InAppScreenName {
  char name[64];
  uint64_t languageCode;
};

struct FriendInvitationId {
  uint64_t value;
};

struct FriendInvitationGroupId {
  uint64_t value;
};

struct FriendInvitationGameModeDescription {
  char data[0xc00];
};

struct FriendInvitationGameModeDescriptionV2 {
  char data[0xd80];
};

enum FriendInvitationViewMode : int32_t {};

enum AppletMode : int32_t {
  AppletMode_ShowFriendList = 0,
  AppletMode_ShowUserDetailInfo = 1,
  AppletMode_StartSendingFriendRequest = 2,
  AppletMode_ShowAddFriends = 3,
  AppletMode_ShowMyProfile = 7,
  AppletMode_StartFriendInvitation = 8,
  AppletMode_StartSendingFriendInvitation = 9,
  AppletMode_ShowReceivedInvitationDetail = 10,
  AppletMode_StartFriendInvitationV2 = 11,
  AppletMode_StartSendingFriendInvitationV2 = 12,
};

struct UserDetailInfoArg {
  account::NetworkServiceAccountId accountId;
  InAppScreenName inAppScreenName;
  InAppScreenName myInAppScreenName;
};

struct ReceivedInvitationDetailArg {
  FriendInvitationId invitationId;
  FriendInvitationGroupId invitationGroupId;
};

template <typename Description>
struct FriendInvitationArg {
  int32_t maxCount;
  FriendInvitationViewMode viewMode;
  uint64_t applicationDataSize;
  uint8_t applicationData[0x400];
  Description description;
};

template <typename Description>
struct SendingFriendInvitationArg {
  int32_t count;
  account::NetworkServiceAccountId accountIds[16];
  uint64_t applicationDataSize;
  uint8_t applicationData[0x400];
  Description description;
};

struct AppletArgVer1 {
  AppletMode mode;
  account::Uid uid;
  union {
    UserDetailInfoArg userDetailInfo;
    ReceivedInvitationDetailArg receivedInvitationDetail;
    FriendInvitationArg<FriendInvitationGameModeDescription>
      friendInvitation;
    SendingFriendInvitationArg<FriendInvitationGameModeDescription>
      sendingFriendInvitation;
  };
};

static_assert(sizeof(AppletArgVer1) == 0x10a8);

struct AppletArgVer2 {
  AppletMode mode;
  account::Uid uid;
  union {
    FriendInvitationArg<FriendInvitationGameModeDescriptionV2>
      friendInvitation;
    SendingFriendInvitationArg<FriendInvitationGameModeDescriptionV2>
      sendingFriendInvitation;
  };
};

static_assert(sizeof(AppletArgVer2) == 0x1228);

namespace detail {

void CreateMyPageApplet(applet::LibraryAppletHandle* pOutHandle);
void CloseMyPageApplet(const applet::LibraryAppletHandle& handle);
Result StartMyPageApplet(const applet::LibraryAppletHandle& handle,
  const AppletArgVer1& arg, bool isPlayStartupSound);
Result StartMyPageApplet(const applet::LibraryAppletHandle& handle,
  const AppletArgVer2& arg, bool isPlayStartupSound);
Result GetMyPageResult(const applet::LibraryAppletHandle& handle);
void SetDefaultAppletArg(AppletArgVer1* pOutArg, AppletMode mode,
  const account::Uid& uid);
void SetDefaultAppletArg(AppletArgVer2* pOutArg, AppletMode mode,
  const account::Uid& uid);

}

}
