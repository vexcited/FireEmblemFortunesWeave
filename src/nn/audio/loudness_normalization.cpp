#include "nn/audio/loudness_normalization.hpp"

#include <string.h>

#include <algorithm>

#include "nn/audio/audio_math.hpp"
#include "nn/audio/vector_fill.hpp"
#include "nn/audio/vector_filter.hpp"
#include "nn/audio/vector_ramp.hpp"

namespace nn::audio {

namespace driver {

TimeSpan GetSynchronizedTimeStamp();

}

namespace {

const float ChannelWeights[LoudnessNormalization::ChannelCountMax] = {
  1.0f, 1.0f, 1.0f, 0.0f, 1.41f, 1.41f, 1.41f, 1.41f,
};

constexpr int LfeChannel = 3;
constexpr int AnalyzeBufferSize = 480;

int64_t GetMilliSeconds(TimeSpan time) {
  return time.nanoseconds / 1000000;
}

float ToSeconds(TimeSpan time) {
  return static_cast<float>(GetMilliSeconds(time)) / 1000.0f;
}

int CalcSampleCount(TimeSpan time, int sampleRate) {
  return (time.nanoseconds * sampleRate + 999999999) / 1000000000;
}

template<class T, size_t N>
void Rotate(T (&values)[N]) {
  std::rotate(values, values + 1, values + N);
}

float ToLoudness(float power) {
  return detail::Log10(power) * 10.0f + -0.691f;
}

}

float LoudnessNormalization::MomentaryLoudnessCalculator::
  s_KWeightingFilterCoefficients[2][6] = {
  {
    1.53512485958697f, -2.69169618940638f, 1.19839281085285f,
    1.0f, -1.69065929318241f, 0.73248077421585f,
  },
  {
    1.0f, -2.0f, 1.0f,
    1.0f, -1.99004745483398f, 0.99007225036621f,
  },
};

bool LoudnessNormalization::IsInitialized() const {
  return m_IsInitialized;
}

void LoudnessNormalization::Initialize(int channelCount, int sampleRate,
  TimeSpan frameTime) {
  const Parameters parameters = {
    -24.0f,
    {100000000},
    {200000000},
    {5000000000},
    {10000000},
    0.2f,
  };
  m_ChannelCount = channelCount;
  m_SampleRate = sampleRate;
  m_MomentaryLoudnessCalculator.Initialize(channelCount);
  m_ProcessFrameCount = CalcSampleCount(frameTime, sampleRate);
  m_LevelDetector.Initialize(
    1000.0f / static_cast<float>(GetMilliSeconds(frameTime)),
    parameters);
  m_IsInitialized = true;
  SetParameters(parameters);
  m_IsEnabled = false;
  Reset();
  m_GainDb = 0.0f;
  m_Gain = 1.0f;
  m_Volume = 1.0f;
}

void LoudnessNormalization::MomentaryLoudnessCalculator::Initialize(
  int channelCount) {
  m_ChannelCount = channelCount;
  // One minus exp of minus one over 40 frames, a 400 millisecond constant.
  m_LpfCoefficient = 0.024690091609954834f;
  Reset();
}

void LoudnessNormalization::LevelDetector::Initialize(float frameRate,
  const Parameters& parameters) {
  m_FrameRate = frameRate;
  Reset();
  UpdateSettings(parameters);
}

void LoudnessNormalization::SetParameters(const Parameters& parameters) {
  m_Parameters = parameters;
  m_LevelDetector.UpdateSettings(m_Parameters);
  m_MomentaryLoudnessCalculator.SetMomentaryLoudnessLpfTc(
    m_Parameters.momentaryLoudnessTimeConstant);
}

void LoudnessNormalization::Reset() {
  m_IsInTransition = false;
  m_TransitionPosition = 0;
  m_TransitionLength = 0;
  m_MomentaryLoudnessCalculator.Reset();
  m_LevelDetector.Reset();
  memset(&m_Statistics, 0, sizeof(m_Statistics));
}

void LoudnessNormalization::CalcGain(const float* const* input, int count) {
  float gain = 0.0f;
  if (m_IsEnabled || m_IsInTransition) {
    m_MomentaryLoudnessCalculator.Analyze(input, count);
    float level = m_LevelDetector.Process(
      m_MomentaryLoudnessCalculator.GetMomentaryLoudnessRm());
    float excess = ToLoudness(level) - m_Parameters.targetLoudness;
    gain = excess < 0.0f ? 0.0f : -excess;
  }
  m_GainDb = gain;
}

bool LoudnessNormalization::GetIsProcessActive() const {
  return m_IsEnabled || m_IsInTransition;
}

void LoudnessNormalization::MomentaryLoudnessCalculator::Analyze(
  const float* const* input, int count) {
  float total = 0.0f;
  for (int channel = 0; channel < m_ChannelCount; ++channel) {
    if (channel == LfeChannel) {
      continue;
    }
    float buffer[AnalyzeBufferSize] = {};
    util::VecSos(buffer, input[channel], s_KWeightingFilterCoefficients[0],
      m_FilterState[channel][0], count);
    util::VecSos(buffer, buffer, s_KWeightingFilterCoefficients[1],
      m_FilterState[channel][1], count);
    float power = 0.0f;
    for (int i = 0; i < count; ++i) {
      power += buffer[i] * buffer[i];
    }
    total += power / static_cast<float>(count) * ChannelWeights[channel];
  }
  m_MomentaryLoudnessRm =
    m_MomentaryLoudnessRm + m_LpfCoefficient * (total - m_MomentaryLoudnessRm);
  if (m_MomentaryLoudnessRm == 0.0f) {
    m_MomentaryLoudness = -100.0f;
  }
  else {
    float loudness = ToLoudness(m_MomentaryLoudnessRm);
    m_MomentaryLoudness = loudness < -100.0f ? -100.0f : loudness;
  }
}

float LoudnessNormalization::LevelDetector::Process(float input) {
  Coefficient coefficient = SelectCoef(input);
  m_Output = coefficient.rate * input + coefficient.decay * m_LastOutput;
  m_LastInput = input;
  m_LastOutput = m_Output;
  return m_Output;
}

float LoudnessNormalization::MomentaryLoudnessCalculator::
  GetMomentaryLoudnessRm() const {
  return m_MomentaryLoudnessRm;
}

void LoudnessNormalization::ApplyGain(float* const* output,
  const float* const* input, int count, float volume) {
  if (!m_IsEnabled && !m_IsInTransition) {
    for (int channel = 0; channel < m_ChannelCount; ++channel) {
      util::VecCopy(output[channel], input[channel], count);
    }
    return;
  }
  float ratio = 1.0f;
  if (m_IsInTransition) {
    CalcTransition(count);
    ratio = static_cast<float>(m_TransitionPosition) /
      static_cast<float>(m_TransitionLength);
  }
  float gainDb = ratio * m_GainDb;
  float gain = detail::Pow(10.0f, gainDb / 20.0f);
  if (m_ChannelCount >= 1) {
    float start = m_Volume * m_Gain;
    float step = (volume * gain - start) / static_cast<float>(count);
    for (int channel = 0; channel < m_ChannelCount; ++channel) {
      util::VecMacRamped(output[channel], input[channel], start, step, count,
        true);
    }
  }
  m_Gain = gain;
  m_Volume = volume;
  AppendStatistics(ToLoudness(m_LevelDetector.GetOutput()), gainDb);
}

void LoudnessNormalization::CalcTransition(int count) {
  int position = m_TransitionPosition + (m_IsEnabled ? count : -count);
  if (position < 0) {
    position = 0;
  }
  else if (position > m_TransitionLength) {
    position = m_TransitionLength;
  }
  m_TransitionPosition = position;
  float ratio =
    static_cast<float>(position) / static_cast<float>(m_TransitionLength);
  m_IsInTransition = ratio < 1.0f && ratio > 0.0f;
}

void LoudnessNormalization::AppendStatistics(float levelLoudness,
  float gain) {
  float momentary = m_MomentaryLoudnessCalculator.GetMomentaryLoudness();
  int count = m_Statistics.count;
  TimeSpan timeStamp = driver::GetSynchronizedTimeStamp();
  if (count >= StatisticsCountMax) {
    Rotate(m_Statistics.momentaryLoudness);
    Rotate(m_Statistics.levelLoudness);
    Rotate(m_Statistics.gain);
    Rotate(m_Statistics.timeStamp);
    --count;
  }
  m_Statistics.momentaryLoudness[count] = momentary;
  m_Statistics.levelLoudness[count] = levelLoudness;
  m_Statistics.gain[count] = gain;
  m_Statistics.timeStamp[count] = timeStamp;
  m_Statistics.count = count + 1;
}

void LoudnessNormalization::SetIsEnabled(bool isEnabled, TimeSpan fadeTime,
  float volume) {
  bool wasEnabled = m_IsEnabled;
  float ratio = wasEnabled ? 1.0f : 0.0f;
  if (m_IsInTransition) {
    CalcTransition(0);
    ratio = static_cast<float>(m_TransitionPosition) /
      static_cast<float>(m_TransitionLength);
  }
  m_IsEnabled = isEnabled;
  m_IsInTransition = fadeTime.nanoseconds > 0;
  if (fadeTime.nanoseconds > 0) {
    int length = CalcSampleCount(fadeTime, m_SampleRate);
    m_TransitionPosition =
      static_cast<int>(ratio * static_cast<float>(length));
    m_TransitionLength = length;
  }
  if (wasEnabled != isEnabled) {
    m_Volume = volume;
  }
}

bool LoudnessNormalization::GetIsEnabled() const {
  return m_IsEnabled;
}

void LoudnessNormalization::LevelDetector::UpdateSettings(
  const Parameters& parameters) {
  m_SmoothingCoefficient = 1.0f - detail::Exp(
    -1.0f / m_FrameRate / ToSeconds(parameters.detectorTimeConstant));
  m_Attack.rate = 1.0f / (m_FrameRate * ToSeconds(parameters.attackTime));
  m_Attack.decay = detail::Exp(-m_Attack.rate);
  m_Release.rate = 1.0f / (m_FrameRate * ToSeconds(parameters.releaseTime));
  m_Release.decay = detail::Exp(-m_Release.rate);
  m_Threshold = parameters.attackThreshold;
}

void LoudnessNormalization::MomentaryLoudnessCalculator::
  SetMomentaryLoudnessLpfTc(TimeSpan timeConstant) {
  // The calculator assumes one analysis frame every 10 milliseconds.
  m_LpfCoefficient = 1.0f - detail::Exp(-1.0f /
    (static_cast<float>(100 * GetMilliSeconds(timeConstant)) / 1000.0f));
}

void LoudnessNormalization::GetParameters(Parameters* parameters) const {
  *parameters = m_Parameters;
}

void LoudnessNormalization::GetStatistics(Statistics* statistics) {
  memcpy(statistics, &m_Statistics, sizeof(Statistics));
}

int LoudnessNormalization::GetChannelCount() const {
  return m_ChannelCount;
}

int LoudnessNormalization::GetSampleRate() const {
  return m_SampleRate;
}

int LoudnessNormalization::GetProcessFrameCount() const {
  return m_ProcessFrameCount;
}

void LoudnessNormalization::MomentaryLoudnessCalculator::Reset() {
  for (auto& channel : m_FilterState) {
    for (auto& stage : channel) {
      for (float& value : stage) {
        value = 0.0f;
      }
    }
  }
  m_MomentaryLoudnessRm = 0.0f;
  m_MomentaryLoudness = -100.0f;
}

void LoudnessNormalization::LevelDetector::Reset() {
  m_Output = 0.0f;
  m_LastInput = 0.0f;
  m_LastOutput = 0.0f;
  m_LastLevel = -100.0f;
}

float LoudnessNormalization::MomentaryLoudnessCalculator::
  GetMomentaryLoudness() const {
  return m_MomentaryLoudness;
}

int LoudnessNormalization::MomentaryLoudnessCalculator::GetChannelCount()
  const {
  return m_ChannelCount;
}

float LoudnessNormalization::MomentaryLoudnessCalculator::CalcKWeightingFilter(
  int channel, float sample) {
  float* state = m_FilterState[channel][0];
  for (const float* coefficients : s_KWeightingFilterCoefficients) {
    float x1 = state[0];
    float x2 = state[1];
    float y1 = state[2];
    float y2 = state[3];
    float output = coefficients[0] * sample + coefficients[1] * x1 +
      coefficients[2] * x2 - coefficients[4] * y1 - coefficients[5] * y2;
    state[0] = sample;
    state[1] = x1;
    state[2] = output;
    state[3] = y1;
    sample = output;
    state += 4;
  }
  return sample;
}

LoudnessNormalization::LevelDetector::Coefficient
LoudnessNormalization::LevelDetector::SelectCoef(float input) {
  m_Smoothed = m_Smoothed + m_SmoothingCoefficient * (input - m_Smoothed);
  float level = detail::Log10(m_Smoothed);
  float previous = m_LastLevel;
  m_LastLevel = level;
  if ((level > previous ? level - previous : previous - level) * 10.0f >
    m_Threshold) {
    return m_Attack;
  }
  return m_Release;
}

}
