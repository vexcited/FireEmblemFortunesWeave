#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/renderer_config.hpp"

namespace nn::audio {

struct DelayType {
  EffectInfoVersion2* _pEffectInfo;
};

struct DelayParameterSet {
  TimeSpan delayTime;
  float inGain;
  float feedbackGain;
  float dryGain;
  float channelSpread;
  float lowPassAmount;
};

struct ReverbType {
  enum EarlyMode {
    EarlyMode_SmallRoom,
    EarlyMode_LargeRoom,
    EarlyMode_Hall,
    EarlyMode_Cathedral,
    EarlyMode_NoEarlyReflection,
  };

  enum LateMode {
    LateMode_Room,
    LateMode_Hall,
    LateMode_MetalCorridor,
    LateMode_Cathedral,
    LateMode_MaximumDelay,
  };

  EffectInfoVersion2* _pEffectInfo;
};

struct ReverbParameterSet {
  ReverbType::EarlyMode earlyMode;
  float earlyGain;
  float predelayTimeMilliSeconds;
  ReverbType::LateMode lateMode;
  float lateGain;
  float decayTimeSeconds;
  float highFreqDecayRatio;
  float coloration;
  float reverbGain;
  float outGain;
  float dryGain;
};

struct I3dl2ReverbType {
  enum Preset {
    Preset_SmallRoom,
    Preset_LargeRoom,
    Preset_Hall,
    Preset_CavernousCathedral,
    Preset_MetalCorridor,
  };

  EffectInfoVersion2* _pEffectInfo;
};

struct I3dl2ReverbParameterSet {
  float roomGain;
  float roomHfGain;
  float lateReverbDecayTime;
  float lateReverbHfDecayRatio;
  float reflectionsGain;
  float reflectionDelayTime;
  float reverbGain;
  float lateReverbDelayTime;
  float lateReverbDiffusion;
  float lateReverbDensity;
  float hfReference;
  float dryGain;
};

struct LightLimiterType {
  enum ProcessingMode {
    ProcessingMode_Mode0,
    ProcessingMode_Mode1,
  };

  EffectInfoVersion2* _pEffectInfo;
};

struct LightLimiterParameterSet {
  TimeSpan attackTime;
  TimeSpan releaseTime;
  TimeSpan lookAheadTime;
  float threshold;
  float inputGain;
  float outputGain;
  LightLimiterType::ProcessingMode processingMode;
};

struct LightLimiterChannelStatistics {
  float maxSample;
  float compressionGainMin;
};

struct CompressorType {
  EffectInfoVersion2* _pEffectInfo;
};

struct CompressorParameterSet {
  float threshold;
  float ratio;
  TimeSpan attackTime;
  TimeSpan releaseTime;
  float outGain;
  bool isMakeupGainEnabled;
};

struct CompressorChannelStatistics {
  float maxMean;
  float compressionGainMin;
};

template<class T>
struct TBiquadFilterParameter {
  bool enable;
  T numerator[3];
  T denominator[2];
};

using BiquadFilterParameter = TBiquadFilterParameter<int16_t>;

struct BiquadFilterType {
  EffectInfoVersion2* _pEffectInfo;
};

struct BufferMixerType {
  EffectInfoVersion2* _pEffectInfo;
};

struct AuxType {
  EffectInfoVersion2* _pEffectInfo;
};

struct CaptureType {
  EffectInfoVersion2* _pEffectInfo;
};

struct AuxBufferStatistics {
  int sendBufferLostSampleCount;
  int returnBufferLostSampleCount;
};

static_assert(sizeof(TBiquadFilterParameter<int16_t>) == 12);
static_assert(sizeof(TBiquadFilterParameter<float>) == 24);
static_assert(sizeof(DelayParameterSet) == 32);
static_assert(sizeof(ReverbParameterSet) == 44);
static_assert(sizeof(I3dl2ReverbParameterSet) == 48);
static_assert(sizeof(LightLimiterParameterSet) == 40);
static_assert(sizeof(CompressorParameterSet) == 32);

size_t GetRequiredBufferSizeForDelay(TimeSpan delayTimeMax, int sampleRate,
  int channelCountMax);
Result AddDelay(AudioRendererConfig* config, DelayType* delay, void* buffer,
  size_t size, FinalMixType* mix, TimeSpan delayTimeMax,
  int channelCountMax);
Result AddDelay(AudioRendererConfig* config, DelayType* delay, void* buffer,
  size_t size, SubMixType* mix, TimeSpan delayTimeMax, int channelCountMax);
void* RemoveDelay(AudioRendererConfig* config, DelayType* delay,
  FinalMixType* mix);
void* RemoveDelay(AudioRendererConfig* config, DelayType* delay,
  SubMixType* mix);
bool IsDelayRemovable(const DelayType* delay);
bool IsDelayEnabled(const DelayType* delay);
void SetDelayEnabled(DelayType* delay, bool enabled);
void GetDelayInputOutput(const DelayType* delay, int8_t* input,
  int8_t* output, int* count, int countMax);
void SetDelayInputOutput(DelayType* delay, const int8_t* input,
  const int8_t* output, int count);
TimeSpan GetDelayTimeMax(const DelayType* delay);
int GetDelayChannelCountMax(const DelayType* delay);
TimeSpan GetDelayTime(const DelayType* delay);
void SetDelayTime(DelayType* delay, TimeSpan time);
float GetDelayFeedbackGain(const DelayType* delay);
void SetDelayFeedbackGain(DelayType* delay, float gain);
float GetDelayDryGain(const DelayType* delay);
void SetDelayDryGain(DelayType* delay, float gain);
float GetDelayInGain(const DelayType* delay);
void SetDelayInGain(DelayType* delay, float gain);
float GetDelayChannelSpread(const DelayType* delay);
void SetDelayChannelSpread(DelayType* delay, float spread);
float GetDelayLowPassAmount(const DelayType* delay);
void SetDelayLowPassAmount(DelayType* delay, float amount);
DelayParameterSet GetDelayParameters(const DelayType* delay);
void SetDelayParameters(DelayType* delay,
  const DelayParameterSet* parameter);

size_t GetRequiredBufferSizeForReverb(int sampleRate, int channelCountMax);
Result AddReverb(AudioRendererConfig* config, ReverbType* reverb,
  void* buffer, size_t size, FinalMixType* mix, int channelCountMax);
Result AddReverb(AudioRendererConfig* config, ReverbType* reverb,
  void* buffer, size_t size, SubMixType* mix, int channelCountMax);
void* RemoveReverb(AudioRendererConfig* config, ReverbType* reverb,
  FinalMixType* mix);
void* RemoveReverb(AudioRendererConfig* config, ReverbType* reverb,
  SubMixType* mix);
int GetReverbChannelCountMax(const ReverbType* reverb);
bool IsReverbRemovable(const ReverbType* reverb);
bool IsReverbEnabled(const ReverbType* reverb);
void SetReverbEnabled(ReverbType* reverb, bool enabled);
void GetReverbInputOutput(const ReverbType* reverb, int8_t* input,
  int8_t* output, int* count, int countMax);
void SetReverbInputOutput(ReverbType* reverb, const int8_t* input,
  const int8_t* output, int count);
void SetReverbReverbGain(ReverbType* reverb, float gain);
float GetReverbReverbGain(const ReverbType* reverb);
void SetReverbPredelayTime(ReverbType* reverb, TimeSpan time);
TimeSpan GetReverbPredelayTime(const ReverbType* reverb);
void SetReverbDecayTime(ReverbType* reverb, TimeSpan time);
TimeSpan GetReverbDecayTime(const ReverbType* reverb);
void SetReverbColoration(ReverbType* reverb, float coloration);
float GetReverbColoration(const ReverbType* reverb);
void SetReverbEarlyGain(ReverbType* reverb, float gain);
float GetReverbEarlyGain(const ReverbType* reverb);
void SetReverbLateGain(ReverbType* reverb, float gain);
float GetReverbLateGain(const ReverbType* reverb);
void SetReverbOutGain(ReverbType* reverb, float gain);
float GetReverbOutGain(const ReverbType* reverb);
void SetReverbDryGain(ReverbType* reverb, float gain);
float GetReverbDryGain(const ReverbType* reverb);
void SetReverbHighFrequencyDecayRatio(ReverbType* reverb, float ratio);
float GetReverbHighFrequencyDecayRatio(const ReverbType* reverb);
void SetReverbEarlyMode(ReverbType* reverb, ReverbType::EarlyMode mode);
ReverbType::EarlyMode GetReverbEarlyMode(const ReverbType* reverb);
void SetReverbLateMode(ReverbType* reverb, ReverbType::LateMode mode);
ReverbType::LateMode GetReverbLateMode(const ReverbType* reverb);
void SetReverbParameters(ReverbType* reverb,
  const ReverbParameterSet* parameter);
ReverbParameterSet GetReverbParameters(const ReverbType* reverb);

size_t GetRequiredBufferSizeForI3dl2Reverb(int sampleRate,
  int channelCountMax);
Result AddI3dl2Reverb(AudioRendererConfig* config, I3dl2ReverbType* reverb,
  void* buffer, size_t size, FinalMixType* mix, int channelCountMax);
Result AddI3dl2Reverb(AudioRendererConfig* config, I3dl2ReverbType* reverb,
  void* buffer, size_t size, SubMixType* mix, int channelCountMax);
void* RemoveI3dl2Reverb(AudioRendererConfig* config,
  I3dl2ReverbType* reverb, FinalMixType* mix);
void* RemoveI3dl2Reverb(AudioRendererConfig* config,
  I3dl2ReverbType* reverb, SubMixType* mix);
int GetI3dl2ReverbChannelCountMax(const I3dl2ReverbType* reverb);
bool IsI3dl2ReverbRemovable(const I3dl2ReverbType* reverb);
bool IsI3dl2ReverbEnabled(const I3dl2ReverbType* reverb);
void SetI3dl2ReverbEnabled(I3dl2ReverbType* reverb, bool enabled);
void GetI3dl2ReverbInputOutput(const I3dl2ReverbType* reverb, int8_t* input,
  int8_t* output, int* count, int countMax);
void SetI3dl2ReverbInputOutput(I3dl2ReverbType* reverb, const int8_t* input,
  const int8_t* output, int count);
void LoadI3dl2ReverbPreset(I3dl2ReverbParameterSet* parameter,
  I3dl2ReverbType::Preset preset);
void SetI3dl2ReverbParameters(I3dl2ReverbType* reverb,
  const I3dl2ReverbParameterSet* parameter);
I3dl2ReverbParameterSet GetI3dl2ReverbParameters(
  const I3dl2ReverbType* reverb);

size_t GetRequiredBufferSizeForLightLimiter(TimeSpan lookAheadTimeMax,
  int sampleRate, int channelCountMax);
Result AddLightLimiter(AudioRendererConfig* config, LightLimiterType* limiter,
  void* buffer, size_t size, FinalMixType* mix, TimeSpan lookAheadTimeMax,
  int channelCountMax);
Result AddLightLimiter(AudioRendererConfig* config, LightLimiterType* limiter,
  void* buffer, size_t size, SubMixType* mix, TimeSpan lookAheadTimeMax,
  int channelCountMax);
void* RemoveLightLimiter(AudioRendererConfig* config,
  LightLimiterType* limiter, FinalMixType* mix);
void* RemoveLightLimiter(AudioRendererConfig* config,
  LightLimiterType* limiter, SubMixType* mix);
LightLimiterParameterSet GetLightLimiterParameters(
  const LightLimiterType* limiter);
void SetLightLimiterParameters(LightLimiterType* limiter,
  const LightLimiterParameterSet* parameter);

Result AddCompressor(AudioRendererConfig* config, CompressorType* compressor,
  FinalMixType* mix, int channelCountMax);
Result AddCompressor(AudioRendererConfig* config, CompressorType* compressor,
  SubMixType* mix, int channelCountMax);
void* RemoveCompressor(AudioRendererConfig* config,
  CompressorType* compressor, FinalMixType* mix);
void* RemoveCompressor(AudioRendererConfig* config,
  CompressorType* compressor, SubMixType* mix);
CompressorParameterSet GetCompressorParameters(
  const CompressorType* compressor);
void SetCompressorParameters(CompressorType* compressor,
  const CompressorParameterSet* parameter);

void SetBiquadFilterEnabled(BiquadFilterType* filter, bool enabled);

size_t ReverbGetRequiredDelayLineBufferSize(int sampleRate, int channels);
size_t GetRequiredI3dl2ReverbEffectWorkBufferSize(int sampleRate,
  int channels);

}
