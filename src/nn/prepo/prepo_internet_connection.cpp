#include "nn/prepo/prepo_play_report.hpp"

namespace nn::prepo {

namespace {

// The service fills these placeholders with the current connection.
constexpr int8_t PlaceholderSsid = 0x40;
constexpr int8_t PlaceholderBssid = 0x41;
constexpr int8_t PlaceholderRssi = 0x42;

}

Result AddInternetConnectionStatus(PlayReport* pReport, const char* ssidKey,
  const char* bssidKey, const char* rssiKey) {
  if (ssidKey != nullptr) {
    const Result result =
      pReport->m_Impl.AddPlaceholder(ssidKey, PlaceholderSsid);
    if (result.IsFailure()) {
      return result;
    }
  }
  if (bssidKey != nullptr) {
    const Result result =
      pReport->m_Impl.AddPlaceholder(bssidKey, PlaceholderBssid);
    if (result.IsFailure()) {
      return result;
    }
  }
  if (rssiKey != nullptr) {
    return pReport->m_Impl.AddPlaceholder(rssiKey, PlaceholderRssi);
  }
  return Result{};
}

}
