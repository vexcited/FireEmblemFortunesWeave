#include <atomic>
#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_account_settings_manager.hpp"

namespace nn::settings::detail {

namespace {

const Result ResultNullSettings = {(2012 << 9) | 105};
const Result ResultSettingsNotFound = {(2017 << 9) | 105};
const Result ResultNullFlagBuffer = {(2023 << 9) | 105};

// The user flag that marks the next data usage guide time stamp as set.
const uint32_t AccountUserFlag_NextDataUsageOptInGuideTimeStamp = 1u << 4;

std::atomic<bool> g_IsDefaultAccountIdentificationFlagSetCached;
os::SdkMutex g_DefaultAccountIdentificationFlagSetMutex;
util::BitFlagSet<32, system::AccountIdentificationFlag>
  g_DefaultAccountIdentificationFlagSet;

system::AccountUserSettings* FindAccountUserSettings(
  system::AccountUserSettings* pSettings, int count, const account::Uid& uid) {
  for (int i = 0; i < count; ++i) {
    if (pSettings[i].uid.value[0] == uid.value[0] &&
      pSettings[i].uid.value[1] == uid.value[1]) {
      return &pSettings[i];
    }
  }
  return nullptr;
}

}

Result GetDefaultAccountIdentificationFlagSet(
  util::BitFlagSet<32, system::AccountIdentificationFlag>* pOutFlags) {
  if (!g_IsDefaultAccountIdentificationFlagSetCached.load(
    std::memory_order_acquire)) {
    std::lock_guard<os::SdkMutex> lock(
      g_DefaultAccountIdentificationFlagSetMutex);
    if (!g_IsDefaultAccountIdentificationFlagSetCached.load(
      std::memory_order_relaxed)) {
      sf::SharedPointer<ISystemSettingsServer> server;
      Result result = CreateSystemSettingsServerProxyForIpc(&server);
      if (result.IsSuccess()) {
        result = server->GetDefaultAccountIdentificationFlagSet(
          sf::Out<util::BitFlagSet<32, system::AccountIdentificationFlag>>(
            &g_DefaultAccountIdentificationFlagSet));
        if (result.IsSuccess()) {
          g_IsDefaultAccountIdentificationFlagSetCached.store(true,
            std::memory_order_release);
        }
      }
      if (result.IsFailure()) {
        return result;
      }
    }
  }
  *pOutFlags = g_DefaultAccountIdentificationFlagSet;
  return Result{0};
}

Result GetNextDataUsageOptInGuideTimeStamp(time::PosixTime* pOutTimeStamp,
  bool* pOutIsSet, system::AccountUserSettings* pSettings, int count,
  const account::Uid& uid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }
  if (pOutIsSet == nullptr) {
    return ResultNullFlagBuffer;
  }
  system::AccountUserSettings* pFound =
    FindAccountUserSettings(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }
  *pOutTimeStamp = pFound->nextDataUsageOptInGuideTimeStamp;
  *pOutIsSet = (pFound->flags._storage[0] &
    AccountUserFlag_NextDataUsageOptInGuideTimeStamp) != 0;
  return Result{0};
}

Result SetNextDataUsageOptInGuideTimeStamp(const time::PosixTime& timeStamp,
  bool isSet, system::AccountUserSettings* pSettings, int count,
  const account::Uid& uid) {
  if (pSettings == nullptr) {
    return ResultNullSettings;
  }
  system::AccountUserSettings* pFound =
    FindAccountUserSettings(pSettings, count, uid);
  if (pFound == nullptr) {
    return ResultSettingsNotFound;
  }
  pFound->nextDataUsageOptInGuideTimeStamp = timeStamp;
  pFound->flags._storage[0] =
    (pFound->flags._storage[0] &
      ~AccountUserFlag_NextDataUsageOptInGuideTimeStamp) |
    (isSet ? AccountUserFlag_NextDataUsageOptInGuideTimeStamp : 0);
  return Result{0};
}

}
