#include "nn/time/detail/time_util.hpp"
#include "nn/time/time_api.hpp"

namespace nn::time {

Result GetSpanBetween(int64_t* pOutSeconds, const SteadyClockTimePoint& from,
  const SteadyClockTimePoint& to) {
  return detail::util::GetSpanBetween(pOutSeconds, from, to);
}

Result GetElapsedSecondsBetween(int64_t* pOutSeconds,
  const SteadyClockTimePoint& from, const SteadyClockTimePoint& to) {
  return detail::util::GetSpanBetween(pOutSeconds, from, to);
}

Result GetSpanFromCorrection(
  int64_t* pOutSeconds, const SystemClockContext& context) {
  if (pOutSeconds == nullptr) {
    return Result{0x70a74};
  }

  SteadyClockTimePoint current = {};
  const Result result = GetStandardSteadyClockCurrentTimePoint(&current);
  if (result.IsFailure()) {
    return result;
  }

  int64_t seconds = 0;
  const Result spanResult =
    detail::util::GetSpanBetween(&seconds, context.timeStamp, current);
  if (spanResult.IsFailure()) {
    return spanResult;
  }

  *pOutSeconds = seconds;
  return spanResult;
}

bool IsLeapYear(int year) {
  return detail::util::IsLeapYear(year);
}

bool IsValidDate(int year, int month, int day) {
  return detail::util::IsValidDate(year, month, day);
}

int GetDaysInMonth(int year, int month) {
  return detail::util::GetDaysInMonth(year, month);
}

int DateToDays(int year, int month, int day) {
  return detail::util::DateToDays(year, month, day);
}

void DaysToDate(int* pOutYear, int* pOutMonth, int* pOutDay, int days) {
  detail::util::DaysToDate(pOutYear, pOutMonth, pOutDay, days);
}

int GetDayOfWeek(int year, int month, int day) {
  return detail::util::GetDayOfWeek(year, month, day);
}

}
