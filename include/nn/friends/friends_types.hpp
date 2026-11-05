#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/result.hpp"

namespace nn::friends {

enum PresenceStatus : int32_t {};

struct ApplicationInfo {
  uint64_t applicationId;
  uint64_t presenceGroupId;
};

class FriendPresence {
 public:
  PresenceStatus GetStatus() const;
  const ApplicationInfo& GetLastPlayedApplication() const;
  const time::PosixTime& GetLastOnlineTime() const;
  const time::PosixTime& GetLastUpdateTime() const;
  bool IsSamePresenceGroupApplication() const;

 private:
  ApplicationInfo m_LastPlayedApplication;
  time::PosixTime m_LastUpdateTime;
  PresenceStatus m_Status;
  bool m_IsSamePresenceGroupApplication;
  uint8_t m_Reserved[0xc3];
};

class Friend {
 public:
  Friend();

  account::NetworkServiceAccountId GetAccountId() const;
  const account::Nickname& GetNickname() const;
  const FriendPresence& GetPresence() const;
  bool IsFavorite() const;
  bool IsNewly() const;
  Result Update();
  bool IsValid() const;

 private:
  account::Uid m_Uid;
  account::NetworkServiceAccountId m_AccountId;
  account::Nickname m_Nickname;
  FriendPresence m_Presence;
  bool m_IsFavorite;
  bool m_IsNewly;
  uint8_t m_Reserved122[6];
  bool m_IsValid;
  uint8_t m_Reserved129[0xd7];
};

class Profile {
 public:
  account::NetworkServiceAccountId GetAccountId() const;
  const account::Nickname& GetNickname() const;
  bool IsValid() const;

 private:
  account::NetworkServiceAccountId m_AccountId;
  account::Nickname m_Nickname;
  uint8_t m_Reserved29[0xa7];
  bool m_IsValid;
};

Result UpdateFriendInfo(Friend* pFriends, const account::Uid& uid,
  const account::NetworkServiceAccountId* pAccountIds, int count);

}
