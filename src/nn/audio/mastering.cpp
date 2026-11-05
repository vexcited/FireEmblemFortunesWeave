#include "nn/audio/mastering.hpp"

#include <math.h>
#include <string.h>

#include "nn/audio/audio_math.hpp"
#include "nn/audio/interleave.hpp"
#include "nn/audio/interleave_conversion.hpp"
#include "nn/audio/sample_conversion.hpp"
#include "nn/audio/vector_fill.hpp"

namespace nn::audio {
namespace {

int CalcSampleCount(TimeSpan time, int sampleRate) {
  return (sampleRate * time.nanoseconds + 999999999) / 1000000000;
}

uintptr_t AlignUp(uintptr_t value, size_t alignment) {
  return (value + alignment - 1) & ~(alignment - 1);
}

}

Result MasteringForRecording::Initialize(void* buffer, size_t size,
  int channelCount, TimeSpan frameTime) {
  m_IsBypassed = false;
  int frameCount = CalcSampleCount(frameTime, SampleRate);
  m_ChannelCount = channelCount;
  m_FrameCount = frameCount;
  uintptr_t cursor = AlignUp(reinterpret_cast<uintptr_t>(buffer), 4);
  for (int i = 0; i < channelCount; ++i) {
    m_pBuffers[i] = reinterpret_cast<int32_t*>(cursor);
    cursor += sizeof(int32_t) * frameCount;
  }
  uintptr_t state = AlignUp(cursor, 64);
  m_pLimiterState = reinterpret_cast<dsp::TruePeakLimiterState*>(state);

  dsp::TruePeakLimiterParameter parameter;
  parameter.channel_count = static_cast<uint16_t>(channelCount);
  parameter.reserved = 0;
  parameter.sample_rate = SampleRate;
  parameter.threshold_db = -1.0f;
  parameter.attack_ms = 0.01f;
  parameter.release_ms = 2.0f;
  parameter.lookahead_ms = 0.5f;
  uintptr_t workBuffer = state + sizeof(dsp::TruePeakLimiterState);
  // The SDK passes the remaining size with swapped operands.
  dsp::InitializeTruePeakLimiterEffect(parameter, m_pLimiterState,
    reinterpret_cast<void*>(workBuffer),
    workBuffer - (reinterpret_cast<uintptr_t>(buffer) + size));
  m_IsInitialized = true;
  return Result{0};
}

void MasteringForRecording::Finalize() {
  m_IsBypassed = false;
  m_IsInitialized = false;
  m_ChannelCount = 0;
  m_FrameCount = 0;
  for (int32_t*& pointer : m_pBuffers) {
    pointer = nullptr;
  }
}

void MasteringForRecording::Process(int16_t* output, int32_t* input,
  int count) {
  if (count < 1) {
    return;
  }
  if (!m_IsBypassed) {
    util::VecDeinterleave<int32_t>(m_pBuffers, input, m_ChannelCount, count);
    dsp::ApplyTruePeakLimiterEffect(m_pLimiterState, true,
      const_cast<const int32_t**>(m_pBuffers), m_pBuffers, count);
    util::VecInterleave<int32_t>(input, m_pBuffers, m_ChannelCount, count);
  }
  util::VecNarrowingDownShift<int32_t, int16_t, 8>(output, input,
    m_ChannelCount * count);
}

void MasteringForRtcScreenSharing::Initialize(int channelCount,
  int sampleRate) {
  m_LoudnessNormalization.Initialize(channelCount, sampleRate, {10000000});
  memset(&m_FilterParameter, 0, sizeof(m_FilterParameter));
  m_FilterParameter.isBypassed = true;
  m_FilterCoefficients = CalcBiquadFilterParameter(m_FilterParameter);
}

void MasteringForRtcScreenSharing::ChangeFilterParameter(
  const AppletFilterParameter& parameter) {
  m_FilterParameter = parameter;
  m_FilterCoefficients = CalcBiquadFilterParameter(m_FilterParameter);
}

void MasteringForRtcScreenSharing::Process(int16_t* output,
  const int16_t* input, int count) {
  int frameCount = m_LoudnessNormalization.GetProcessFrameCount();
  int channelCount = m_LoudnessNormalization.GetChannelCount();
  float* inputs[ChannelCountMax] = {};
  float* outputs[ChannelCountMax] = {};
  for (int i = 0; i < channelCount; ++i) {
    inputs[i] = m_InputBuffer[i];
    outputs[i] = m_OutputBuffer[i];
  }
  for (int remaining = count; remaining > 0; remaining -= frameCount) {
    int sampleCount = remaining < frameCount ? remaining : frameCount;
    util::VecDeinterleaveToFloat<int16_t, 15>(inputs, input, channelCount,
      sampleCount);
    m_LoudnessNormalization.CalcGain(inputs, sampleCount);
    for (int i = 0; i < channelCount; ++i) {
      FilterState state = m_FilterState[i];
      dsp::ApplyBiquadFilterFloat(inputs[i], inputs[i],
        m_FilterCoefficients.numerator, m_FilterCoefficients.denominator,
        &state.biquad, sampleCount);
      m_FilterState[i] = state;
    }
    m_LoudnessNormalization.ApplyGain(outputs, inputs, sampleCount, 1.0f);
    util::VecInterleaveFromFloat<int16_t, 15>(output, outputs, channelCount,
      sampleCount);
    input += sampleCount * channelCount;
    output += sampleCount * channelCount;
  }
}

void MasteringForRtcScreenSharing::ProcessWrapperForFloat(int16_t* output,
  const int16_t* input, int count) {
  int frameCount = m_LoudnessNormalization.GetProcessFrameCount();
  int channelCount = m_LoudnessNormalization.GetChannelCount();
  float* inputs[ChannelCountMax] = {};
  float* outputs[ChannelCountMax] = {};
  for (int i = 0; i < channelCount; ++i) {
    inputs[i] = m_InputBuffer[i];
    outputs[i] = m_OutputBuffer[i];
  }
  for (int remaining = count; remaining > 0; remaining -= frameCount) {
    int sampleCount = remaining < frameCount ? remaining : frameCount;
    util::VecDeinterleaveToFloat<int16_t, 15>(inputs, input, channelCount,
      sampleCount);
    m_LoudnessNormalization.CalcGain(inputs, sampleCount);
    m_LoudnessNormalization.ApplyGain(outputs, inputs, sampleCount, 1.0f);
    util::VecInterleaveFromFloat<int16_t, 15>(output, outputs, channelCount,
      sampleCount);
    input += sampleCount * channelCount;
    output += sampleCount * channelCount;
  }
}

void MasteringForRtcScreenSharing::ProcessFloat(float* const* output,
  const float* const* input, int count) {
  int frameCount = m_LoudnessNormalization.GetProcessFrameCount();
  int channelCount = m_LoudnessNormalization.GetChannelCount();
  const float* inputs[ChannelCountMax] = {};
  float* outputs[ChannelCountMax] = {};
  for (int i = 0; i < channelCount; ++i) {
    inputs[i] = input[i];
  }
  for (int i = 0; i < channelCount; ++i) {
    outputs[i] = output[i];
  }
  for (int remaining = count; remaining > 0; remaining -= frameCount) {
    int sampleCount = remaining < frameCount ? remaining : frameCount;
    m_LoudnessNormalization.CalcGain(inputs, sampleCount);
    m_LoudnessNormalization.ApplyGain(outputs, inputs, sampleCount, 1.0f);
    for (int i = 0; i < channelCount; ++i) {
      inputs[i] += sampleCount;
      outputs[i] += sampleCount;
    }
  }
}

void MasteringForRtcScreenSharing::SetLoudnessNormalizationEnabled(
  bool isEnabled, TimeSpan fadeTime) {
  m_LoudnessNormalization.SetIsEnabled(isEnabled, fadeTime, 1.0f);
}

bool MasteringForRtcScreenSharing::IsLoudnessNormalizationEnabled() const {
  return m_LoudnessNormalization.GetIsEnabled();
}

bool MasteringForRtcScreenSharing::IsLoudnessNormalizationProcessActive()
  const {
  return m_LoudnessNormalization.GetIsProcessActive();
}

void MasteringForRtcScreenSharing::SetLoudnessNormalizationParameter(
  const LoudnessNormalization::Parameters& parameters) {
  m_LoudnessNormalization.SetParameters(parameters);
}

void MasteringForRtcScreenSharing::GetLoudnessNormalizationParameter(
  LoudnessNormalization::Parameters* parameters) const {
  m_LoudnessNormalization.GetParameters(parameters);
}

void MasteringForRtcScreenSharing::GetLoudnessNormalizationStatistics(
  LoudnessNormalization::Statistics* statistics) {
  m_LoudnessNormalization.GetStatistics(statistics);
}

MasteringForRtcScreenSharing::FilterCoefficients
MasteringForRtcScreenSharing::CalcBiquadFilterParameter(
  const AppletFilterParameter& parameter) {
  int sampleRate = m_LoudnessNormalization.GetSampleRate();
  FilterCoefficients coefficients;
  if (parameter.isBypassed) {
    coefficients.numerator[0] = 1.0f;
    coefficients.numerator[1] = 0.0f;
    coefficients.numerator[2] = 0.0f;
    coefficients.denominator[0] = 0.0f;
    coefficients.denominator[1] = 0.0f;
    return coefficients;
  }
  // A peaking equalizer from the audio EQ cookbook.
  float amplitude = sqrtf(detail::Pow(10.0f, parameter.gain / 20.0f));
  float omega = parameter.frequency * 6.2831853f /
    static_cast<float>(sampleRate);
  float alpha = sinf(omega) / (parameter.q + parameter.q);
  float a0 = alpha / amplitude + 1.0f;
  float cosine = cosf(omega);
  coefficients.numerator[0] = (alpha * amplitude + 1.0f) / a0;
  coefficients.numerator[1] = cosine * -2.0f / a0;
  coefficients.numerator[2] = (1.0f - alpha * amplitude) / a0;
  coefficients.denominator[0] = (cosine + cosine) / a0;
  coefficients.denominator[1] = -(1.0f - alpha / amplitude) / a0;
  return coefficients;
}

int MasteringForRtcScreenSharing::GetChannelCount() const {
  return m_LoudnessNormalization.GetChannelCount();
}

void MasteringForRtcScreenSharing::Reset() {
  m_LoudnessNormalization.Reset();
  util::MemSet(m_FilterState, 0, sizeof(m_FilterState));
}

}
