#include <arm_neon.h>
#include <math.h>
#include <string.h>

#include <algorithm>

#include "nn/audio/common/time_interval_analyzer.hpp"
#include "nn/audio/driver/driver.hpp"

namespace nn::audio::common {

namespace {

constexpr int64_t ComputeInterval = 2000000000;

// The SDK inlines llround as a single rounding conversion even though the
// build keeps errno semantics for sqrt.
int64_t Llround(double value) {
  return vcvtad_s64_f64(value);
}

}

Result TimeIntervalAnalyzer::Start(const char* name, ClockStatistics::Id id,
  TimeSpanType expectedInterval) {
  if (m_IsRunning) {
    return {0xc8699};
  }
  if (name == nullptr) {
    return {0xc8899};
  }
  m_Statistics = {};
  m_TotalSquaredInterval = 0;
  strncpy(m_Statistics.name, name, ClockStatistics::NameLengthMax);
  m_Statistics.id = id;
  m_Statistics.minInterval = INT64_MAX;
  m_Statistics.maxInterval = INT64_MIN;
  m_StartTime = driver::GetSynchronizedTimeStamp().nanoseconds;
  m_ExpectedInterval = expectedInterval.nanoseconds;
  m_TickCount = 0;
  m_IntervalLowerBound = Llround(expectedInterval.nanoseconds * 0.8);
  m_IntervalUpperBound = Llround(expectedInterval.nanoseconds * 1.2);
  m_IsRunning = true;
  m_IsFirstTick = true;
  return {0};
}

Result TimeIntervalAnalyzer::Stop() {
  if (!m_IsRunning) {
    return {0xc8699};
  }
  Compute({driver::GetSynchronizedTimeStamp().nanoseconds});
  m_IsRunning = false;
  return {0};
}

void TimeIntervalAnalyzer::Compute(TimeSpanType now) {
  if (!m_IsRunning || m_TickCount == 0) {
    return;
  }
  const double count = static_cast<double>(m_TickCount);
  m_Statistics.elapsedTime = now.nanoseconds - m_StartTime;
  const double average =
    static_cast<double>(m_Statistics.totalInterval) / count;
  m_Statistics.averageInterval = Llround(average);
  const int64_t roundedAverage = static_cast<int64_t>(round(average));
  const int64_t variance = Llround(m_TotalSquaredInterval / count) -
    Llround(static_cast<double>(roundedAverage) *
      static_cast<double>(roundedAverage));
  m_Statistics.standardDeviation =
    Llround(sqrt(static_cast<double>(variance)));
}

Result TimeIntervalAnalyzer::Tick(TimeSpanType now) {
  if (!m_IsRunning) {
    return {0xc8699};
  }
  const int64_t last = m_LastTickTime;
  m_LastTickTime = now.nanoseconds;
  if (m_IsFirstTick == true) {
    m_IsFirstTick = false;
    return {0};
  }
  const int64_t interval = now.nanoseconds - last;
  m_TickCount++;
  m_TotalSquaredInterval += Llround(static_cast<double>(interval) *
    static_cast<double>(interval));
  m_Statistics.minInterval = std::min(m_Statistics.minInterval, interval);
  m_Statistics.maxInterval = std::max(m_Statistics.maxInterval, interval);
  m_Statistics.totalInterval += interval;
  if (interval < m_IntervalLowerBound || m_IntervalUpperBound < interval) {
    m_Statistics.outlierCount++;
    if (now.nanoseconds - m_LastComputeTime > ComputeInterval) {
      Compute(now);
      m_LastComputeTime = now.nanoseconds;
    }
  }
  return {0};
}

const ClockStatistics* TimeIntervalAnalyzer::GetStatistics() {
  Compute({driver::GetSynchronizedTimeStamp().nanoseconds});
  return &m_Statistics;
}

}
