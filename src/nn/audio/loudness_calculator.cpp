#include "nn/audio/loudness_calculator.hpp"

#include <math.h>
#include <string.h>

#include "nn/audio/audio_math.hpp"

namespace nn::audio::detail {
namespace {

const float ChannelWeights[LoudnessCalculatorImpl::ChannelCountMax] = {
  1.0f, 1.0f, 1.0f, 0.0f, 1.41f, 1.41f,
};

float ToLoudness(float power) {
  return Log10(power) * 10.0f + -0.691f;
}

float ToClampedLoudness(float power) {
  if (power == 0.0f) {
    return -100.0f;
  }
  const float loudness = ToLoudness(power);
  return loudness < -100.0f ? -100.0f : loudness;
}

}

Result LoudnessCalculatorImpl::Initialize(void* buffer, size_t size,
  int channelCount) {
  m_ChannelCount = channelCount;
  for (int i = 0; i < HistogramSize; ++i) {
    m_HistogramPower[i] =
      Pow(10.0f, ((static_cast<float>(i) * 0.05f + -70.0f) + 0.691f) / 10.0f);
  }
  // One minus exp of minus one over 80 blocks, a 400 millisecond constant.
  m_MomentaryCoefficient = 0.012422204f;
  m_Gain = 1.0f;
  Reset();
  return Result{0};
}

void LoudnessCalculatorImpl::Reset() {
  memset(m_FilterState, 0, sizeof(m_FilterState) + sizeof(m_MomentaryPower)
    + sizeof(m_ShortTermPower) + sizeof(m_ShortTermIndex));
  for (int i = 0; i < BlockPhaseCount; ++i) {
    m_BlockPowerSum[i] = 0.0f;
    // The four gating blocks overlap by 75 percent.
    m_BlockCounter[i] = -20 * i;
  }
  m_BlockPower = 0.0f;
  memset(&m_RangePowerSum, 0, reinterpret_cast<uint8_t*>(m_BlockPowerSum)
    - reinterpret_cast<uint8_t*>(&m_RangePowerSum));
  m_MomentaryLoudness = -100.0f;
  m_ShortTermLoudness = -100.0f;
  m_IntegratedLoudness = -100.0f;
  m_LoudnessRangeLow = -100.0f;
  m_LoudnessRangeHigh = -100.0f;
}

void LoudnessCalculatorImpl::Finalize() {
  Reset();
}

float LoudnessCalculatorImpl::CalcKWeightingFilter(int channel,
  float sample) {
  float* state = m_FilterState[channel];
  const float x1 = state[0];
  const float x2 = state[1];
  const float y = sample + x1 * 1.69065929318241f + x2 * -0.73248077421585f;
  state[0] = y;
  state[1] = x1;
  const float shelf = y * 1.53512485958697f + x1 * -2.69169618940638f
    + x2 * 1.19839281085285f;
  const float z1 = state[2];
  const float z2 = state[3];
  const float z = shelf + z1 * 1.99004745483398f + z2 * -0.99007225036621f;
  state[2] = z;
  state[3] = z1;
  return z2 + (z - (z1 + z1));
}

void LoudnessCalculatorImpl::Analyze(const int16_t* samples,
  int sampleCount) {
  const int channelCount = m_ChannelCount;
  float power[ChannelCountMax] = {};
  if (sampleCount >= 1 && channelCount >= 1) {
    const float gain = m_Gain;
    for (int i = 0; i < sampleCount; ++i) {
      for (int channel = 0; channel < channelCount; ++channel) {
        const float sample =
          gain * (static_cast<float>(*samples++) / 32768.0f);
        const float filtered = CalcKWeightingFilter(channel, sample);
        power[channel] += filtered * filtered;
      }
    }
  }

  float total = 0.0f;
  for (uint32_t channel = 0; channel < static_cast<uint32_t>(channelCount);
    ++channel) {
    power[channel] = power[channel] / static_cast<float>(sampleCount)
      * ChannelWeights[channel];
    total = total + power[channel];
  }

  m_MomentaryPower = m_MomentaryPower
    + m_MomentaryCoefficient * (total - m_MomentaryPower);
  m_MomentaryLoudness = ToClampedLoudness(m_MomentaryPower);
  m_ShortTermPower[m_ShortTermIndex] = total;
  m_ShortTermIndex = static_cast<uint32_t>(m_ShortTermIndex + 1)
    < ShortTermBlockCount ? m_ShortTermIndex + 1 : 0;

  for (int i = 0; i < BlockPhaseCount; ++i) {
    const int counter = m_BlockCounter[i];
    if (counter < 0) {
      m_BlockCounter[i] = counter + 1;
      continue;
    }
    m_BlockCounter[i] = counter + 1;
    m_BlockPowerSum[i] = total + m_BlockPowerSum[i];
    if (counter >= 79) {
      m_BlockPower = m_BlockPowerSum[i] / 80.0f;
      Calc();
      m_BlockPowerSum[i] = 0.0f;
      m_BlockCounter[i] = 0;
    }
  }
}

void LoudnessCalculatorImpl::Calc() {
  float shortTermSum = 0.0f;
  for (int i = 0; i < ShortTermBlockCount; ++i) {
    shortTermSum = shortTermSum + m_ShortTermPower[i];
  }
  const float shortTermPower = shortTermSum / 600.0f;
  m_ShortTermLoudness = ToClampedLoudness(shortTermPower);

  const float blockLoudness = ToLoudness(m_BlockPower);
  if (blockLoudness > -70.0f) {
    int index = static_cast<int>((blockLoudness + 70.0f) / 0.05f);
    if (index >= HistogramSize - 1) {
      index = HistogramSize - 1;
    }
    ++m_IntegratedHistogram[index];
    ++m_IntegratedHistogramCount;

    float power = 0.0f;
    int count = 0;
    for (int i = 0; i < HistogramSize; ++i) {
      power = power + m_HistogramPower[i]
        * static_cast<float>(m_IntegratedHistogram[i]);
      count += m_IntegratedHistogram[i];
    }
    if (count > 0) {
      power = power / static_cast<float>(count);
    }

    // The relative gate sits ten LU below the absolute gated loudness.
    float gate = ToLoudness(power) + -10.0f;
    if (gate < -70.0f) {
      gate = -70.0f;
    }
    int start = static_cast<int>((gate + 70.0f) / 0.05f);
    if (start >= HistogramSize - 1) {
      start = HistogramSize - 1;
    }
    power = 0.0f;
    count = 0;
    for (int i = start; i < HistogramSize; ++i) {
      count += m_IntegratedHistogram[i];
      power = power + m_HistogramPower[i]
        * static_cast<float>(m_IntegratedHistogram[i]);
    }
    if (count > 0) {
      power = power / static_cast<float>(count);
    }
    const float integrated = ToLoudness(power);
    m_IntegratedLoudness = integrated < -100.0f ? -100.0f : integrated;
  }

  if (m_ShortTermLoudness <= -70.0f) {
    return;
  }

  ++m_RangeBlockCount;
  m_RangePowerSum = shortTermPower + m_RangePowerSum;
  float relative = ToLoudness(m_RangePowerSum
    / static_cast<float>(m_RangeBlockCount)) + -20.0f;
  if (relative < -70.0f) {
    relative = -70.0f;
  }
  const float relativeIndex = (relative + 70.0f) / 0.05f;
  size_t shortTermIndex =
    static_cast<size_t>((m_ShortTermLoudness + 70.0f) / 0.05f);
  if (shortTermIndex >= HistogramSize - 1) {
    shortTermIndex = HistogramSize - 1;
  }
  ++m_RangeHistogram[shortTermIndex];
  int total = ++m_RangeHistogramCount;

  size_t index = static_cast<size_t>(relativeIndex);
  for (size_t i = 0; i <= index; ++i) {
    total -= m_RangeHistogram[i];
  }

  const float last = static_cast<float>(total - 1);
  const int64_t low = llroundf(last * 0.1f);
  const int64_t high = llroundf(last * 0.95f);
  int accumulated = 0;
  float rangeLow = -100.0f;
  while (index < HistogramSize - 1) {
    ++index;
    accumulated += m_RangeHistogram[index];
    if (rangeLow == -100.0f && accumulated >= low) {
      rangeLow = static_cast<float>(index) * 0.05f + -70.0f;
    }
    if (accumulated >= high) {
      m_LoudnessRangeLow = rangeLow;
      m_LoudnessRangeHigh = static_cast<float>(index) * 0.05f + -70.0f;
      return;
    }
  }
  m_LoudnessRangeLow = rangeLow;
  m_LoudnessRangeHigh = -100.0f;
}

}
