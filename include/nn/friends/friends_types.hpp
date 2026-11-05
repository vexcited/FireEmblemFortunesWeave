#pragma once

#include <stddef.h>
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
  FriendPresence();

  PresenceStatus GetStatus() const;
  const ApplicationInfo& GetLastPlayedApplication() const;
  const time::PosixTime& GetLastOnlineTime() const;
  const time::PosixTime& GetLastUpdateTime() const;
  bool IsSamePresenceGroupApplication() const;
  const char* GetDescription() const;
  const char* GetAppValue(const char* key) const;

 private:
  ApplicationInfo m_LastPlayedApplication;
  time::PosixTime m_LastUpdateTime;
  PresenceStatus m_Status;
  bool m_IsSamePresenceGroupApplication;
  uint8_t m_Reserved1d[3];
  char m_AppField[0xc0];
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
  Profile();

  account::NetworkServiceAccountId GetAccountId() const;
  const account::Nickname& GetNickname() const;
  bool IsValid() const;

 private:
  account::NetworkServiceAccountId m_AccountId;
  account::Nickname m_Nickname;
  uint8_t m_Reserved29[0xa7];
  bool m_IsValid;
  uint8_t m_ReservedD1[0x2f];
};

class UserPresence {
 public:
  UserPresence();

  Result Initialize(const account::Uid& uid);
  Result Initialize();
  void Clear();
  Result SetDescription(const char* description);
  Result SetAppValue(const char* key, const char* value);
  void DeclareOpenOnlinePlaySession();
  void DeclareCloseOnlinePlaySession();

 private:
  Result SetAppValueImpl(const char* key, const char* value);

  enum OnlinePlaySessionState : uint8_t {
    OnlinePlaySessionState_None,
    OnlinePlaySessionState_Open,
    OnlinePlaySessionState_Close,
  };

  account::Uid m_Uid;
  uint8_t m_Reserved10[8];
  OnlinePlaySessionState m_OnlinePlaySessionState;
  uint8_t m_Reserved19[7];
  char m_AppField[0xc0];
};

namespace detail {

class PresenceAccessor {
 public:
  static Result AddKeyValue(const char* key, const char* value, char* field,
    size_t size);
  static const char* SearchKey(const char* key, const char* field,
    size_t size);
  static bool VerifyKey(const char* key, size_t length);
  static bool VerifyValue(const char* value, size_t length);
};

account::Uid GetCurrentUser();
Result CheckUserStatus(const account::Uid& uid);

}

Result UpdateFriendInfo(Friend* pFriends, const account::Uid& uid,
  const account::NetworkServiceAccountId* pAccountIds, int count);

}
