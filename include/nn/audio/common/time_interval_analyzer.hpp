#pragma once

#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::audio::common {

struct ClockStatistics {
  enum Id {};

  static constexpr int NameLengthMax = 16;

  char name[NameLengthMax];
  Id id;
  int outlierCount;
  int64_t elapsedTime;
  int64_t minInterval;
  int64_t maxInterval;
  int64_t totalInterval;
  int64_t averageInterval;
  int64_t standardDeviation;
};

class TimeIntervalAnalyzer {
public:
  Result Start(const char* name, ClockStatistics::Id id,
    TimeSpanType expectedInterval);
  Result Stop();
  void Compute(TimeSpanType now);
  Result Tick(TimeSpanType now);
  const ClockStatistics* GetStatistics();

private:
  bool m_IsRunning;
  bool m_IsFirstTick;
  int64_t m_StartTime;
  int64_t m_ExpectedInterval;
  int64_t m_IntervalLowerBound;
  int64_t m_IntervalUpperBound;
  int64_t m_LastTickTime;
  int64_t m_LastComputeTime;
  uint64_t m_TickCount;
  ClockStatistics m_Statistics;
  int64_t m_TotalSquaredInterval;
};

static_assert(sizeof(TimeIntervalAnalyzer) == 144);

}
