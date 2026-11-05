#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/biquad.hpp"
#include "nn/audio/loudness_normalization.hpp"
#include "nn/audio/true_peak_limiter.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::audio {

struct AppletFilterParameter {
  bool isBypassed;
  float frequency;
  float q;
  float gain;
};

static_assert(sizeof(AppletFilterParameter) == 16);

class MasteringForRecording {
public:
  static constexpr int ChannelCountMax = 6;
  static constexpr int SampleRate = 48000;

  Result Initialize(void* buffer, size_t size, int channelCount,
    TimeSpan frameTime);
  void Finalize();
  void Process(int16_t* output, int32_t* input, int count);

private:
  int m_ChannelCount;
  int m_FrameCount;
  bool m_IsBypassed;
  bool m_IsInitialized;
  int32_t* m_pBuffers[ChannelCountMax];
  dsp::TruePeakLimiterState* m_pLimiterState;
};

static_assert(sizeof(MasteringForRecording) == 72);

class MasteringForRtcScreenSharing {
public:
  static constexpr int ChannelCountMax = 2;
  static constexpr int FrameSampleCountMax = 480;

  struct FilterCoefficients {
    float numerator[3];
    float denominator[2];
  };

  struct FilterState {
    BiquadFilterState biquad;
    uint64_t reserved[2];
  };

  void Initialize(int channelCount, int sampleRate);
  void ChangeFilterParameter(const AppletFilterParameter& parameter);
  void Process(int16_t* output, const int16_t* input, int count);
  void ProcessWrapperForFloat(int16_t* output, const int16_t* input,
    int count);
  void ProcessFloat(float* const* output, const float* const* input,
    int count);
  void SetLoudnessNormalizationEnabled(bool isEnabled, TimeSpan fadeTime);
  bool IsLoudnessNormalizationEnabled() const;
  bool IsLoudnessNormalizationProcessActive() const;
  void SetLoudnessNormalizationParameter(
    const LoudnessNormalization::Parameters& parameters);
  void GetLoudnessNormalizationParameter(
    LoudnessNormalization::Parameters* parameters) const;
  void GetLoudnessNormalizationStatistics(
    LoudnessNormalization::Statistics* statistics);
  FilterCoefficients CalcBiquadFilterParameter(
    const AppletFilterParameter& parameter);
  int GetChannelCount() const;
  void Reset();

private:
  AppletFilterParameter m_FilterParameter;
  FilterCoefficients m_FilterCoefficients;
  FilterState m_FilterState[ChannelCountMax];
  LoudnessNormalization m_LoudnessNormalization;
  float m_InputBuffer[ChannelCountMax][FrameSampleCountMax];
  float m_OutputBuffer[ChannelCountMax][FrameSampleCountMax];
};

static_assert(sizeof(MasteringForRtcScreenSharing) == 8408);

}
