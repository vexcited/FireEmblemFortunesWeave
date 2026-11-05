#pragma once

#include <time.h>

#include <chrono>

#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"

namespace nn::timesrv::detail::service {

class ISteadyClock : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetCurrentTimePoint(
    sf::Out<time::SteadyClockTimePoint> pOutTimePoint) = 0;
  virtual Result GetTestOffset(sf::Out<TimeSpan> pOutOffset) = 0;
  virtual Result SetTestOffset(TimeSpan offset) = 0;
  virtual Result GetRtcValue(sf::Out<int64_t> pOutValue) = 0;
  virtual Result IsRtcResetDetected(sf::Out<bool> pOutIsDetected) = 0;
  virtual Result GetSetupResultValue(sf::Out<Result> pOutResult) = 0;
  virtual Result GetInternalOffset(sf::Out<TimeSpan> pOutOffset) = 0;
};

}

namespace nn::time {

struct SteadyClockTraits {
  using rep = int64_t;
  using period = std::ratio<1>;
  using duration = std::chrono::duration<rep, period>;
  using time_point = std::chrono::time_point<SteadyClockTraits>;
};

class StandardSteadyClock {
public:
  using rep = SteadyClockTraits::rep;
  using period = SteadyClockTraits::period;
  using duration = SteadyClockTraits::duration;
  using time_point = SteadyClockTraits::time_point;

  static Result GetCurrentTimePoint(SteadyClockTimePoint* outValue);
  static time_point now();
};

Result GetStandardSteadyClockService(
  sf::SharedPointer<timesrv::detail::service::ISteadyClock>* pOutService);
Result GetStandardSteadyClockCurrentTimespec(timespec* outValue);
int64_t GetStandardSteadyClockRtcValue();
bool IsRtcResetDetected();
Result GetStandardSteadyClockSetupResultValue();
TimeSpan GetStandardSteadyClockInternalOffset();
TimeSpan GetStandardSteadyClockTestOffset();
void SetStandardSteadyClockInternalOffset(TimeSpan offset);

}
