#pragma once

#include "nn/nifm/nifm_request.hpp"
#include "nn/nifm/nifm_types.hpp"
#include "nn/os/process_id.hpp"
#include "nn/os/system_event.hpp"

namespace nn::nifm {

Result GetCurrentNetworkProfile(NetworkProfileDataV2* pOutProfile);
Result GetCurrentAccessPoint(AccessPointData* pOutAccessPoint);
Result GetInternetConnectionStatus(InternetConnectionStatus* pOutStatus);
Result Scan(const int16_t* channels, int count, RequirementPreset preset);
void UnregisterTemporaryNetworkProfile();

}
