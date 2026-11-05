#include <string.h>

#include "nn/account/account_cached_nintendo_account_info.hpp"
#include "nn/account/account_network_service_account_manager.hpp"

namespace nn::account {

namespace {

const char* GetString(size_t* pOutSize, const char* string, size_t size) {
  *pOutSize = strnlen(string, size) + 1;
  return string;
}

}

CachedNintendoAccountInfo::CachedNintendoAccountInfo() {}

const char* CachedNintendoAccountInfo::GetBirthday(size_t* pOutSize) const {
  return GetString(pOutSize, m_Birthday, sizeof(m_Birthday));
}

const char* CachedNintendoAccountInfo::GetGender(size_t* pOutSize) const {
  return GetString(pOutSize, m_Gender, sizeof(m_Gender));
}

const char* CachedNintendoAccountInfo::GetCountry(size_t* pOutSize) const {
  return GetString(pOutSize, m_Country, sizeof(m_Country));
}

const char* CachedNintendoAccountInfo::GetRegion(size_t* pOutSize) const {
  return GetString(pOutSize, m_Region, sizeof(m_Region));
}

CachedNintendoAccountInfoForSystemService::
  CachedNintendoAccountInfoForSystemService()
  : m_Id() {}

const NintendoAccountId& CachedNintendoAccountInfoForSystemService::GetId()
  const {
  return m_Id;
}

bool CachedNintendoAccountInfoForSystemService::IsChild() const {
  return m_Info.isChild;
}

const char* CachedNintendoAccountInfoForSystemService::GetScreenName(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.screenName, sizeof(m_Info.screenName));
}

const char* CachedNintendoAccountInfoForSystemService::GetEmailAddress(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.emailAddress,
    sizeof(m_Info.emailAddress));
}

const char* CachedNintendoAccountInfoForSystemService::GetLoginId(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.loginId, sizeof(m_Info.loginId));
}

const char* CachedNintendoAccountInfoForSystemService::GetBirthday(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.birthday, sizeof(m_Info.birthday));
}

const char* CachedNintendoAccountInfoForSystemService::GetGender(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.gender, sizeof(m_Info.gender));
}

const char* CachedNintendoAccountInfoForSystemService::GetCountry(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.country, sizeof(m_Info.country));
}

const char* CachedNintendoAccountInfoForSystemService::GetRegion(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.region, sizeof(m_Info.region));
}

const char* CachedNintendoAccountInfoForSystemService::GetLanguage(
  size_t* pOutSize) const {
  return GetString(pOutSize, m_Info.language, sizeof(m_Info.language));
}

NintendoAccountAnalyticsPermissionState
CachedNintendoAccountInfoForSystemService::GetAnalyticsPermissionState()
  const {
  NintendoAccountAnalyticsPermissionState state;
  state.isTargetMarketingPermitted = m_Info.permitted.isTargetMarketing;
  state.isTargetMarketingChanged = m_Info.permissionChanged.isTargetMarketing;
  state.isTargetMarketingRequired =
    m_Info.permissionRequired.isTargetMarketing;
  state.isInternalAnalysisPermitted = m_Info.permitted.isInternalAnalysis;
  state.isInternalAnalysisChanged =
    m_Info.permissionChanged.isInternalAnalysis;
  state.isInternalAnalysisRequired =
    m_Info.permissionRequired.isInternalAnalysis;
  state.isThirdPartyPermitted = m_Info.permitted.isThirdParty;
  state.isThirdPartyChanged = m_Info.permissionChanged.isThirdParty;
  return state;
}

bool CachedNintendoAccountInfoForSystemService::GetAnalyticsOptedInFlag()
  const {
  return m_Info.isAnalyticsOptedIn;
}

bool CachedNintendoAccountInfoForSystemService::IsLinkedWithNintendoNetwork()
  const {
  return m_Info.isLinkedWithNintendoNetwork;
}

bool CachedNintendoAccountInfoForSystemService::IsPhoneNumberEnabled() const {
  return m_Info.isPhoneNumberEnabled;
}

int CalculateCheckDigit(const NetworkServiceAccountId& id) {
  uint64_t value = id.id;
  if (value == 0) {
    return 0;
  }

  uint64_t sum = 0;
  bool isTripled = true;
  do {
    uint64_t digit = value % 10;
    if (isTripled) {
      digit *= 3;
    }
    sum += digit;
    isTripled = !isTripled;
    value /= 10;
  } while (value != 0);

  const uint64_t remainder = sum % 10;
  return remainder != 0 ? static_cast<int>(10 - remainder) : 0;
}

}
