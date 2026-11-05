#include <string.h>

#include "nn/friends/friends_types.hpp"

namespace nn::friends {

Friend::Friend() {
  memset(this, 0, sizeof(*this));
}

account::NetworkServiceAccountId Friend::GetAccountId() const {
  return m_AccountId;
}

const account::Nickname& Friend::GetNickname() const {
  return m_Nickname;
}

const FriendPresence& Friend::GetPresence() const {
  return m_Presence;
}

bool Friend::IsFavorite() const {
  return m_IsFavorite;
}

bool Friend::IsNewly() const {
  return m_IsNewly;
}

Result Friend::Update() {
  return UpdateFriendInfo(this, m_Uid, &m_AccountId, 1);
}

bool Friend::IsValid() const {
  return m_IsValid;
}

PresenceStatus FriendPresence::GetStatus() const {
  return m_Status;
}

const ApplicationInfo& FriendPresence::GetLastPlayedApplication() const {
  return m_LastPlayedApplication;
}

// Both times are read from the same last update stamp.
const time::PosixTime& FriendPresence::GetLastOnlineTime() const {
  return m_LastUpdateTime;
}

const time::PosixTime& FriendPresence::GetLastUpdateTime() const {
  return m_LastUpdateTime;
}

bool FriendPresence::IsSamePresenceGroupApplication() const {
  return m_IsSamePresenceGroupApplication;
}

account::NetworkServiceAccountId Profile::GetAccountId() const {
  return m_AccountId;
}

const account::Nickname& Profile::GetNickname() const {
  return m_Nickname;
}

bool Profile::IsValid() const {
  return m_IsValid;
}

}
