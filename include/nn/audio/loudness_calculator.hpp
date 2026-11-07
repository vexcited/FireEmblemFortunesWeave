#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::audio {

namespace detail {

class LoudnessCalculatorImpl {
public:
  static constexpr int ChannelCountMax = 6;
  static constexpr int ShortTermBlockCount = 600;
  static constexpr int HistogramSize = 1400;
  static constexpr int BlockPhaseCount = 4;

  Result Initialize(void* buffer, size_t size, int channelCount);
  void Reset();
  void Finalize();
  void Analyze(const int16_t* samples, int sampleCount);
  float CalcKWeightingFilter(int channel, float sample);
  void Calc();

  int m_ChannelCount;
  float m_Gain;
  float m_MomentaryLoudness;
  float m_ShortTermLoudness;
  float m_IntegratedLoudness;
  float m_LoudnessRangeLow;
  float m_LoudnessRangeHigh;
  float m_MomentaryCoefficient;
  float m_FilterState[ChannelCountMax][4];
  float m_MomentaryPower;
  float m_ShortTermPower[ShortTermBlockCount];
  int m_ShortTermIndex;
  float m_RangePowerSum;
  int m_RangeBlockCount;
  uint32_t m_RangeHistogram[HistogramSize];
  uint32_t m_RangeHistogramCount;
  uint32_t m_IntegratedHistogram[HistogramSize];
  uint32_t m_IntegratedHistogramCount;
  float m_BlockPowerSum[BlockPhaseCount];
  int m_BlockCounter[BlockPhaseCount];
  float m_BlockPower;
  float m_HistogramPower[HistogramSize];
};

static_assert(sizeof(LoudnessCalculatorImpl) == 19388);

}

struct LoudnessCalculatorType {
  void* _pBuffer;
  size_t _size;
};

struct LoudnessRange {
  float low;
  float high;
};

void InitializeLoudnessCalculator(LoudnessCalculatorType* calculator,
  int channelCount, void* buffer, size_t size);
void FinalizeLoudnessCalculator(LoudnessCalculatorType* calculator);
void ResetLoudnessCalculator(LoudnessCalculatorType* calculator);
void AnalyzeLoudness(LoudnessCalculatorType* calculator,
  const int16_t* samples, int sampleCount);
float GetMomentaryLoudness(const LoudnessCalculatorType* calculator);
float GetShortTermLoudness(const LoudnessCalculatorType* calculator);
float GetIntegratedLoudness(const LoudnessCalculatorType* calculator);
LoudnessRange GetLoudnessRange(const LoudnessCalculatorType* calculator);
void SetMomentaryLoudnessLpfTc(LoudnessCalculatorType* calculator,
  TimeSpan timeConstant);

}
