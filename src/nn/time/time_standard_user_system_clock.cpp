#include "nn/time/time_standard_user_system_clock.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"

namespace nn::time {

namespace {

const Result ResultNotInitialized = {0x74};

}

Result StandardUserSystemClock::GetCurrentTime(PosixTime* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    g_SharedMemoryClient->GetStandardUserSystemClockCurrentTime(outValue);
    return Result();
  }
  return ResultNotInitialized;
}

Result StandardUserSystemClock::GetSystemClockContext(
  SystemClockContext* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    g_SharedMemoryClient->GetStandardUserSystemClockContext(outValue);
    return Result();
  }
  return ResultNotInitialized;
}

StandardUserSystemClock::time_point StandardUserSystemClock::now() {
  PosixTime time = {};
  if (GetCurrentTime(&time).IsFailure()) {
    return time_point();
  }
  return time_point(duration(time.value));
}

time_t StandardUserSystemClock::to_time_t(const time_point& timePoint) {
  return timePoint.time_since_epoch().count();
}

StandardUserSystemClock::time_point StandardUserSystemClock::from_time_t(
  time_t time) {
  return time_point(duration(time));
}

Result GetStandardUserSystemClockCurrentTimespec(timespec* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    return g_SharedMemoryClient->GetStandardUserSystemClockCurrentTimespec(
      outValue);
  }
  return ResultNotInitialized;
}

void SetStandardUserSystemClockAutomaticCorrectionEnabled(bool isEnabled) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->SetStandardUserSystemClockAutomaticCorrectionEnabled(
      isEnabled));
}

bool IsStandardUserSystemClockAutomaticCorrectionEnabled() {
  NN_ABORT_UNLESS(g_SharedMemoryClient.isInitialized);
  return g_SharedMemoryClient
    ->IsStandardUserSystemClockAutomaticCorrectionEnabled();
}

}
