#include <string.h>

#include "nn/friends/friends_types.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::friends {

namespace {

const char DescriptionKey[] = "sys_description";
const char SystemKeyPrefix[] = "sys_";
const Result ResultInvalidKey = {0x1a79};

char ToLower(char c) {
  return c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c;
}

int Strnicmp(const char* lhs, const char* rhs, int count) {
  char l;
  char r;
  do {
    l = ToLower(*lhs++);
    r = ToLower(*rhs++);
  } while (l != 0 && l == r && --count != 0);
  return l - r;
}

}

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

UserPresence::UserPresence() {
  memset(this, 0, sizeof(*this));
}

Result UserPresence::Initialize(const account::Uid& uid) {
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  m_Uid = uid;
  return Result();
}

Result UserPresence::Initialize() {
  m_Uid = detail::GetCurrentUser();
  return Result();
}

void UserPresence::Clear() {
  m_OnlinePlaySessionState = OnlinePlaySessionState_None;
  memset(m_AppField, 0, sizeof(m_AppField));
}

Result UserPresence::SetDescription(const char* description) {
  return detail::PresenceAccessor::AddKeyValue(DescriptionKey, description,
    m_AppField, sizeof(m_AppField));
}

Result UserPresence::SetAppValueImpl(const char* key, const char* value) {
  return detail::PresenceAccessor::AddKeyValue(key, value, m_AppField,
    sizeof(m_AppField));
}

Result UserPresence::SetAppValue(const char* key, const char* value) {
  if (Strnicmp(key, SystemKeyPrefix, sizeof(SystemKeyPrefix) - 1) == 0) {
    return ResultInvalidKey;
  }
  return SetAppValueImpl(key, value);
}

void UserPresence::DeclareOpenOnlinePlaySession() {
  m_OnlinePlaySessionState = OnlinePlaySessionState_Open;
}

void UserPresence::DeclareCloseOnlinePlaySession() {
  m_OnlinePlaySessionState = OnlinePlaySessionState_Close;
}

FriendPresence::FriendPresence() {
  memset(this, 0, sizeof(*this));
}

const char* FriendPresence::GetDescription() const {
  const char* value = detail::PresenceAccessor::SearchKey(DescriptionKey,
    m_AppField, sizeof(m_AppField));
  return value != nullptr ? value : "";
}

const char* FriendPresence::GetAppValue(const char* key) const {
  const char* value = detail::PresenceAccessor::SearchKey(key, m_AppField,
    sizeof(m_AppField));
  return value != nullptr ? value : "";
}

Profile::Profile() {
  memset(this, 0, sizeof(*this));
}

}
