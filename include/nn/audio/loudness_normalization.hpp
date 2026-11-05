#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/time.hpp"

namespace nn::audio {

class LoudnessNormalization {
public:
  static constexpr int ChannelCountMax = 8;
  static constexpr int StatisticsCountMax = 10;

  struct Parameters {
    float targetLoudness;
    TimeSpan momentaryLoudnessTimeConstant;
    TimeSpan attackTime;
    TimeSpan releaseTime;
    TimeSpan detectorTimeConstant;
    float attackThreshold;
  };

  struct Statistics {
    int count;
    float momentaryLoudness[StatisticsCountMax];
    float levelLoudness[StatisticsCountMax];
    float gain[StatisticsCountMax];
    TimeSpan timeStamp[StatisticsCountMax];
  };

  class MomentaryLoudnessCalculator {
  public:
    void Initialize(int channelCount);
    void Analyze(const float* const* input, int count);
    float GetMomentaryLoudnessRm() const;
    void SetMomentaryLoudnessLpfTc(TimeSpan timeConstant);
    void Reset();
    float GetMomentaryLoudness() const;
    int GetChannelCount() const;
    float CalcKWeightingFilter(int channel, float sample);

  private:
    static float s_KWeightingFilterCoefficients[2][6];

    int m_ChannelCount;
    float m_LpfCoefficient;
    float m_FilterState[ChannelCountMax][2][4];
    float m_MomentaryLoudnessRm;
    float m_MomentaryLoudness;
  };

  class LevelDetector {
  public:
    struct Coefficient {
      float rate;
      float decay;
    };

    void Initialize(float frameRate, const Parameters& parameters);
    float Process(float input);
    void UpdateSettings(const Parameters& parameters);
    void Reset();
    Coefficient SelectCoef(float input);

    float GetOutput() const {
      return m_Output;
    }

  private:
    float m_Output;
    float m_Smoothed;
    float m_SmoothingCoefficient;
    float m_FrameRate;
    float m_LastInput;
    float m_LastOutput;
    Coefficient m_Attack;
    Coefficient m_Release;
    float m_LastLevel;
    float m_Threshold;
  };

  bool IsInitialized() const;
  void Initialize(int channelCount, int sampleRate, TimeSpan frameTime);
  void SetParameters(const Parameters& parameters);
  void Reset();
  void CalcGain(const float* const* input, int count);
  bool GetIsProcessActive() const;
  void ApplyGain(float* const* output, const float* const* input, int count,
    float volume);
  void CalcTransition(int count);
  void AppendStatistics(float levelLoudness, float gain);
  void SetIsEnabled(bool isEnabled, TimeSpan fadeTime, float volume);
  bool GetIsEnabled() const;
  void GetParameters(Parameters* parameters) const;
  void GetStatistics(Statistics* statistics);
  int GetChannelCount() const;
  int GetSampleRate() const;
  int GetProcessFrameCount() const;

private:
  bool m_IsInitialized;
  int m_ChannelCount;
  int m_SampleRate;
  int m_ProcessFrameCount;
  bool m_IsEnabled;
  bool m_IsInTransition;
  int m_TransitionPosition;
  int m_TransitionLength;
  Parameters m_Parameters;
  Statistics m_Statistics;
  MomentaryLoudnessCalculator m_MomentaryLoudnessCalculator;
  LevelDetector m_LevelDetector;
  float m_GainDb;
  float m_Gain;
  float m_Volume;
};

static_assert(sizeof(LoudnessNormalization::Parameters) == 48);
static_assert(sizeof(LoudnessNormalization::Statistics) == 208);
static_assert(sizeof(LoudnessNormalization) == 624);

}
