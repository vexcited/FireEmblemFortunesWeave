#include <string.h>

#include <algorithm>

#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_account_settings_manager.hpp"

namespace nn::settings::system {

namespace {

const Result ResultNullSettings = {(2012 << 9) | 105};
const Result ResultSettingsFull = {(2015 << 9) | 105};
const Result ResultSettingsAlreadyExists = {(2016 << 9) | 105};
const Result ResultSettingsNotFound = {(2017 << 9) | 105};

const int MaxAccountCount = 8;

bool IsSameUser(const account::Uid& lhs, const account::Uid& rhs) {
  return lhs.value[0] == rhs.value[0] && lhs.value[1] == rhs.value[1];
}

template <typename Settings>
Result CheckAddable(const Settings* pSettings, int count,
  const account::Uid& uid) {
  if (count >= MaxAccountCount) {
    return ResultSettingsFull;
  }
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pSettings[i].uid, uid)) {
      return ResultSettingsAlreadyExists;
    }
  }
  return Result{0};
}

template <typename Settings>
Result Find(Settings** ppOutSettings, Settings* pSettings, int count,
  const account::Uid& uid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pSettings[i].uid, uid)) {
      *ppOutSettings = &pSettings[i];
      return Result{0};
    }
  }
  return ResultSettingsNotFound;
}

template <typename Settings>
void Remove(Settings* pSettings, int* pCount, const account::Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    pSettings != nullptr ? Result{0} : ResultNullSettings);
  const int count = *pCount;
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pSettings[i].uid, uid)) {
      const int last = count - 1;
      if (i < last) {
        memcpy(&pSettings[i], &pSettings[i + 1],
          sizeof(Settings) * static_cast<uint32_t>(last - i));
      }
      pSettings[last] = {};
      *pCount = last;
      return;
    }
  }
}

template <typename Settings>
bool Has(Settings* pSettings, int count, const account::Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    pSettings != nullptr ? Result{0} : ResultNullSettings);
  for (int i = 0; i < count; ++i) {
    if (IsSameUser(pSettings[i].uid, uid)) {
      return true;
    }
  }
  return false;
}

}

AccountIdentificationSettingsManager::AccountIdentificationSettingsManager(
  AccountIdentificationSettings* pSettings, int capacity)
  : m_pSettings(pSettings), m_Capacity(capacity), m_Count(0) {}

AccountIdentificationSettingsManager&
AccountIdentificationSettingsManager::Load() {
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAccountIdentificationSettings(
    &count, m_pSettings, std::max(m_Capacity, 0)));
  m_Count = count;
  return *this;
}

AccountIdentificationSettingsManager&
AccountIdentificationSettingsManager::Save() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAccountIdentificationSettings(
    m_pSettings, std::max(m_Count, 0)));
  return *this;
}

AccountIdentificationSettingsManager&
AccountIdentificationSettingsManager::Add(
  const AccountIdentificationSettings& settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    CheckAddable(m_pSettings, m_Count, settings.uid));
  m_pSettings[m_Count] = settings;
  ++m_Count;
  return *this;
}

AccountIdentificationSettingsManager&
AccountIdentificationSettingsManager::Add(const account::Uid& uid) {
  util::BitFlagSet<32, AccountIdentificationFlag> flags = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetDefaultAccountIdentificationFlagSet(&flags));
  NN_ABORT_UNLESS_RESULT_SUCCESS(CheckAddable(m_pSettings, m_Count, uid));
  m_pSettings[m_Count] = {uid, flags, 0};
  ++m_Count;
  return *this;
}

AccountIdentificationSettingsManager&
AccountIdentificationSettingsManager::Remove(const account::Uid& uid) {
  system::Remove(m_pSettings, &m_Count, uid);
  return *this;
}

bool AccountIdentificationSettingsManager::IsValid(const account::Uid& uid,
  util::BitFlagSet<32, AccountIdentificationFlag> flags) {
  AccountIdentificationSettings* pFound = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(Find(&pFound, m_pSettings, m_Count, uid));
  return (flags._storage[0] & ~pFound->flags._storage[0]) == 0;
}

AccountIdentificationSettingsManager&
AccountIdentificationSettingsManager::SetValidity(const account::Uid& uid,
  util::BitFlagSet<32, AccountIdentificationFlag> flags, bool isValid) {
  AccountIdentificationSettings* pFound = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(Find(&pFound, m_pSettings, m_Count, uid));
  if (isValid) {
    pFound->flags._storage[0] |= flags._storage[0];
  }
  else {
    pFound->flags._storage[0] &= ~flags._storage[0];
  }
  return *this;
}

int AccountIdentificationSettingsManager::GetCount() {
  return m_Count;
}

bool AccountIdentificationSettingsManager::Has(const account::Uid& uid) {
  return system::Has(m_pSettings, m_Count, uid);
}

AccountUserSettingsManager::AccountUserSettingsManager(
  AccountUserSettings* pSettings, int capacity)
  : m_pSettings(pSettings), m_Count(0), m_Capacity(capacity) {}

AccountUserSettingsManager& AccountUserSettingsManager::Load() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountUserSettings(&m_Count, m_pSettings, m_Capacity));
  return *this;
}

AccountUserSettingsManager& AccountUserSettingsManager::Save() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetAccountUserSettings(m_pSettings, m_Count));
  return *this;
}

AccountUserSettingsManager& AccountUserSettingsManager::Add(
  const AccountUserSettings& settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    CheckAddable(m_pSettings, m_Count, settings.uid));
  m_pSettings[m_Count] = settings;
  ++m_Count;
  return *this;
}

AccountUserSettingsManager& AccountUserSettingsManager::Add(
  const account::Uid& uid) {
  AccountUserSettings settings = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetDefaultAccountUserSettings(&settings));
  settings.uid = uid;
  NN_ABORT_UNLESS_RESULT_SUCCESS(CheckAddable(m_pSettings, m_Count, uid));
  m_pSettings[m_Count] = settings;
  ++m_Count;
  return *this;
}

AccountUserSettingsManager& AccountUserSettingsManager::Remove(
  const account::Uid& uid) {
  system::Remove(m_pSettings, &m_Count, uid);
  return *this;
}

bool AccountUserSettingsManager::IsValid(const account::Uid& uid,
  util::BitFlagSet<32, AccountUserFlag> flags) {
  AccountUserSettings* pFound = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(Find(&pFound, m_pSettings, m_Count, uid));
  return (flags._storage[0] & ~pFound->flags._storage[0]) == 0;
}

AccountUserSettingsManager& AccountUserSettingsManager::SetValidity(
  const account::Uid& uid, util::BitFlagSet<32, AccountUserFlag> flags,
  bool isValid) {
  AccountUserSettings* pFound = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(Find(&pFound, m_pSettings, m_Count, uid));
  if (isValid) {
    pFound->flags._storage[0] |= flags._storage[0];
  }
  else {
    pFound->flags._storage[0] &= ~flags._storage[0];
  }
  return *this;
}

int AccountUserSettingsManager::GetCount() {
  return m_Count;
}

bool AccountUserSettingsManager::Has(const account::Uid& uid) {
  return system::Has(m_pSettings, m_Count, uid);
}

bool AccountUserSettingsManager::GetNextDataUsageOptInGuideTimeStamp(
  time::PosixTime* pOutTimeStamp, const account::Uid& uid) {
  bool isSet = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetNextDataUsageOptInGuideTimeStamp(
    pOutTimeStamp, &isSet, m_pSettings, m_Count, uid));
  return isSet;
}

AccountUserSettingsManager&
AccountUserSettingsManager::SetNextDataUsageOptInGuideTimeStamp(
  const account::Uid& uid, const time::PosixTime& timeStamp) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetNextDataUsageOptInGuideTimeStamp(
    timeStamp, true, m_pSettings, m_Count, uid));
  return *this;
}

AccountUserSettingsManager&
AccountUserSettingsManager::ClearNextDataUsageOptInGuideTimeStamp(
  const account::Uid& uid) {
  const time::PosixTime timeStamp = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetNextDataUsageOptInGuideTimeStamp(
    timeStamp, false, m_pSettings, m_Count, uid));
  return *this;
}

}
