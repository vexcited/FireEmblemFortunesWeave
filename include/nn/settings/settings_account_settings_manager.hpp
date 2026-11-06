#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/time/time_types.hpp"

namespace nn::settings::system {

struct AccountIdentificationSettings {
  account::Uid uid;
  util::BitFlagSet<32, AccountIdentificationFlag> flags;
  uint32_t reserved;
};

struct AccountUserSettings {
  account::Uid uid;
  util::BitFlagSet<32, AccountUserFlag> flags;
  uint32_t reserved14;
  time::PosixTime nextDataUsageOptInGuideTimeStamp;
  uint8_t reserved20[32];
};

class AccountIdentificationSettingsManager {
 public:
  AccountIdentificationSettingsManager(
    AccountIdentificationSettings* pSettings, int capacity);

  AccountIdentificationSettingsManager& Load();
  AccountIdentificationSettingsManager& Save();
  AccountIdentificationSettingsManager& Add(
    const AccountIdentificationSettings& settings);
  AccountIdentificationSettingsManager& Add(const account::Uid& uid);
  AccountIdentificationSettingsManager& Remove(const account::Uid& uid);
  AccountIdentificationSettingsManager& RemoveExcept(account::Uid* pUids,
    int count);
  bool IsValid(const account::Uid& uid,
    util::BitFlagSet<32, AccountIdentificationFlag> flags);
  AccountIdentificationSettingsManager& SetValidity(const account::Uid& uid,
    util::BitFlagSet<32, AccountIdentificationFlag> flags, bool isValid);
  int GetCount();
  bool Has(const account::Uid& uid);

 private:
  AccountIdentificationSettings* m_pSettings;
  int m_Capacity;
  int m_Count;
};

class AccountUserSettingsManager {
 public:
  AccountUserSettingsManager(AccountUserSettings* pSettings, int capacity);

  AccountUserSettingsManager& Load();
  AccountUserSettingsManager& Save();
  AccountUserSettingsManager& Add(const AccountUserSettings& settings);
  AccountUserSettingsManager& Add(const account::Uid& uid);
  AccountUserSettingsManager& Remove(const account::Uid& uid);
  AccountUserSettingsManager& RemoveExcept(account::Uid* pUids, int count);
  bool IsValid(const account::Uid& uid,
    util::BitFlagSet<32, AccountUserFlag> flags);
  AccountUserSettingsManager& SetValidity(const account::Uid& uid,
    util::BitFlagSet<32, AccountUserFlag> flags, bool isValid);
  int GetCount();
  bool Has(const account::Uid& uid);
  bool GetNextDataUsageOptInGuideTimeStamp(time::PosixTime* pOutTimeStamp,
    const account::Uid& uid);
  AccountUserSettingsManager& SetNextDataUsageOptInGuideTimeStamp(
    const account::Uid& uid, const time::PosixTime& timeStamp);
  AccountUserSettingsManager& ClearNextDataUsageOptInGuideTimeStamp(
    const account::Uid& uid);

 private:
  AccountUserSettings* m_pSettings;
  int m_Count;
  int m_Capacity;
};

}
