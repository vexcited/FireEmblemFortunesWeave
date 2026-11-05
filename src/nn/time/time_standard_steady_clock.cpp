#include "nn/time/time_standard_steady_clock.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_api.hpp"

namespace nn::time {

namespace {

using SteadyClockService = timesrv::detail::service::ISteadyClock;

const Result ResultNotInitialized = {0x74};
const Result ResultSteadyClockNotReady = {0xce74};

}

Result GetStandardSteadyClockCurrentTimePoint(SteadyClockTimePoint* pOutValue) {
  if (g_SharedMemoryClient.isInitialized) {
    g_SharedMemoryClient->GetStandardSteadyClockCurrentTimePoint(pOutValue);
    if (pOutValue->sourceId == util::InvalidUuid) {
      return ResultSteadyClockNotReady;
    }
    return Result();
  }
  return ResultNotInitialized;
}

Result StandardSteadyClock::GetCurrentTimePoint(
  SteadyClockTimePoint* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    g_SharedMemoryClient->GetStandardSteadyClockCurrentTimePoint(outValue);
    if (outValue->sourceId == util::InvalidUuid) {
      return ResultSteadyClockNotReady;
    }
    return Result();
  }
  return ResultNotInitialized;
}

StandardSteadyClock::time_point StandardSteadyClock::now() {
  SteadyClockTimePoint timePoint;
  if (GetCurrentTimePoint(&timePoint).IsFailure()) {
    return time_point();
  }
  return time_point(duration(timePoint.value));
}

Result GetStandardSteadyClockCurrentTimespec(timespec* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    return g_SharedMemoryClient->GetStandardSteadyClockCurrentTimespec(
      outValue);
  }
  return ResultNotInitialized;
}

int64_t GetStandardSteadyClockRtcValue() {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  int64_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->GetStandardSteadyClockRtcValue(
      sf::Out<int64_t>(&value)));
  return value;
}

bool IsRtcResetDetected() {
  sf::SharedPointer<SteadyClockService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetStandardSteadyClockService(&service));
  bool isDetected = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->IsRtcResetDetected(sf::Out<bool>(&isDetected)));
  return isDetected;
}

Result GetStandardSteadyClockSetupResultValue() {
  sf::SharedPointer<SteadyClockService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetStandardSteadyClockService(&service));
  Result value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetSetupResultValue(sf::Out<Result>(&value)));
  return value;
}

TimeSpan GetStandardSteadyClockInternalOffset() {
  sf::SharedPointer<SteadyClockService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetStandardSteadyClockService(&service));
  TimeSpan offset = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetInternalOffset(sf::Out<TimeSpan>(&offset)));
  return offset;
}

TimeSpan GetStandardSteadyClockTestOffset() {
  sf::SharedPointer<SteadyClockService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetStandardSteadyClockService(&service));
  TimeSpan offset = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetTestOffset(sf::Out<TimeSpan>(&offset)));
  return offset;
}

void SetStandardSteadyClockInternalOffset(TimeSpan offset) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->SetStandardSteadyClockInternalOffset(offset));
}

}
