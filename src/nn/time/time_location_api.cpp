#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_time_zone_api.hpp"

namespace nn::time {

namespace {

const uint32_t ResultLocationNameNotFoundValue = 0x7ba74;

}

void LoadLocationNameList(int* pOutCount, LocationName* pOutNames, int count,
  int offset) {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pTimeZoneService->LoadLocationNameList(
    sf::Out<int>(pOutCount), sf::OutArray<LocationName>(pOutNames, count),
    offset));
}

int GetTotalLocationNameCount() {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pTimeZoneService->GetTotalLocationNameCount(sf::Out<int>(&count)));
  return count;
}

void SetDeviceLocationName(const LocationName& name) {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  Result result = g_pTimeZoneService->SetDeviceLocationName(name);
  NN_ABORT_UNLESS(
    result.GetInnerValueForDebug() != ResultLocationNameNotFoundValue);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void GetTimeZoneRuleVersion(TimeZoneRuleVersion* pOutVersion) {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pTimeZoneService->GetTimeZoneRuleVersion(
    sf::Out<TimeZoneRuleVersion>(pOutVersion)));
}

int GetStandardUserSystemClockInitialYear() {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  int year = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->GetStandardUserSystemClockInitialYear(
      sf::Out<int>(&year)));
  return year;
}

void GetInitialLaunchEndTime(PosixTime* pOutTime) {
  PosixTime time = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pStaticService->GetInitialLaunchEndTime(
    sf::Out<PosixTime>(&time)));
  *pOutTime = time;
}

void NotifyInitialLaunchSettingsDone() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->NotifyInitialLaunchSettingsDone());
}

}
