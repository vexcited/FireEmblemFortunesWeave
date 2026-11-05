#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_network_service_account_manager.hpp"

namespace nn::account {

class CachedNintendoAccountInfo {
 public:
  CachedNintendoAccountInfo();

  const char* GetBirthday(size_t* pOutSize) const;
  const char* GetGender(size_t* pOutSize) const;
  const char* GetCountry(size_t* pOutSize) const;
  const char* GetRegion(size_t* pOutSize) const;

 private:
  char m_Birthday[16];
  char m_Gender[8];
  uint8_t m_Reserved18[8];
  char m_Country[4];
  char m_Region[4];
};

struct NintendoAccountAnalyticsPermissionState {
  bool isTargetMarketingPermitted;
  bool isTargetMarketingChanged;
  bool isTargetMarketingRequired;
  bool isInternalAnalysisPermitted;
  bool isInternalAnalysisChanged;
  bool isInternalAnalysisRequired;
  bool isThirdPartyPermitted;
  bool isThirdPartyChanged;
};

int CalculateCheckDigit(const NetworkServiceAccountId& id);

}
