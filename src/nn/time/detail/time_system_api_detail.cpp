#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_time_zone_api.hpp"

namespace nn::time::detail {

void GetStandardUserSystemClockAutomaticCorrectionUpdatedTime(
  SteadyClockTimePoint* pOutValue) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->GetStandardUserSystemClockAutomaticCorrectionUpdatedTime(
      sf::Out<SteadyClockTimePoint>(pOutValue)));
}

void GetDeviceLocationNameAndUpdatedTime(LocationName* pOutName,
  SteadyClockTimePoint* pOutUpdatedTime) {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pTimeZoneService->GetDeviceLocationNameAndUpdatedTime(
      sf::Out<LocationName>(pOutName),
      sf::Out<SteadyClockTimePoint>(pOutUpdatedTime)));
}

}
