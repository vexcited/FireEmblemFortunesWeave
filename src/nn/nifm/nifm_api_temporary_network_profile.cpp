#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/nifm_api.hpp"
#include "nn/os/sleep_thread.hpp"

namespace nn::nifm {

namespace {

constexpr NetworkProfileType NetworkProfileType_Temporary =
  static_cast<NetworkProfileType>(4);
constexpr NetworkInterfaceType NetworkInterfaceType_Ieee80211 =
  static_cast<NetworkInterfaceType>(1);
constexpr NetworkInterfaceType NetworkInterfaceType_Ethernet =
  static_cast<NetworkInterfaceType>(2);

os::SdkMutexType g_TemporaryNetworkProfileMutex;
TemporaryNetworkProfile* g_pTemporaryNetworkProfile;
alignas(8) uint8_t g_TemporaryNetworkProfileStorage[0x18];

}

Result RegisterTemporaryNetworkProfile(const IpSettingDataV2& ipSetting) {
  g_TemporaryNetworkProfileMutex.Lock();
  if (g_pTemporaryNetworkProfile != nullptr) {
    UnregisterTemporaryNetworkProfile();
  }
  NetworkProfileDataV2 profile = {{}, {}, NetworkProfileType_Temporary,
    NetworkInterfaceType_Ethernet, true, true, true, {}, ipSetting};
  g_pTemporaryNetworkProfile = new (g_TemporaryNetworkProfileStorage)
    TemporaryNetworkProfile(profile);
  g_TemporaryNetworkProfileMutex.Unlock();
  return Result{};
}

Result RegisterTemporaryNetworkProfile(
  const WirelessSettingData& wirelessSetting,
  const IpSettingDataV2& ipSetting) {
  g_TemporaryNetworkProfileMutex.Lock();
  if (g_pTemporaryNetworkProfile != nullptr) {
    UnregisterTemporaryNetworkProfile();
  }
  NetworkProfileDataV2 profile = {{}, {}, NetworkProfileType_Temporary,
    NetworkInterfaceType_Ieee80211, true, true, true, wirelessSetting,
    ipSetting};
  g_pTemporaryNetworkProfile = new (g_TemporaryNetworkProfileStorage)
    TemporaryNetworkProfile(profile);
  g_TemporaryNetworkProfileMutex.Unlock();
  return Result{};
}

void UnregisterTemporaryNetworkProfile() {
  g_TemporaryNetworkProfileMutex.Lock();
  if (g_pTemporaryNetworkProfile != nullptr) {
    g_pTemporaryNetworkProfile->~TemporaryNetworkProfile();
    g_pTemporaryNetworkProfile = nullptr;

    NetworkConnection* pConnection = nullptr;
    if (detail::GetNetworkConnectionPointer(&pConnection).IsSuccess()) {
      while (pConnection->GetRequestState() != RequestState_Free) {
        os::SleepThread(TimeSpan{5000000});
      }
      NN_ABORT_UNLESS_RESULT_SUCCESS(SetRequestNetworkProfileId(
        pConnection->GetRequestHandle(), util::InvalidUuid));
    }
  }
  g_TemporaryNetworkProfileMutex.Unlock();
}

namespace detail {

void SetRequestTemporaryNetworkProfileId(RequestHandle handle) {
  g_TemporaryNetworkProfileMutex.Lock();
  if (g_pTemporaryNetworkProfile != nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(SetRequestNetworkProfileId(handle,
      g_pTemporaryNetworkProfile->GetId()));
  }
  g_TemporaryNetworkProfileMutex.Unlock();
}

}

}
