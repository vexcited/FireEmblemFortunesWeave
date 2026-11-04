#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct SdkMutexType {
  uint32_t value;

  void Lock();
  void Unlock();
};

struct SdkRecursiveMutexType {
  uint32_t value;
  uint32_t count;

  void Lock();
  void Unlock();
};

}

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::audio {

enum EffectType : uint8_t {
  EffectType_Invalid,
  EffectType_BufferMixer,
  EffectType_Aux,
  EffectType_Delay,
  EffectType_Reverb,
  EffectType_I3dl2Reverb,
  EffectType_BiquadFilter,
  EffectType_LightLimiter,
  EffectType_Capture,
  EffectType_Compressor,
};

struct AudioRendererParameter {
  int sampleRate;
  int sampleCount;
  int mixBufferCount;
  int subMixCount;
  int voiceCount;
  int sinkCount;
  int effectCount;
  int performanceFrameCount;
  bool isVoiceDropEnabled;
  int splitterCount;
  int splitterSendChannelCount;
  int executionMode;
  int renderingDevice;
  uint32_t _magic;
};

static_assert(sizeof(AudioRendererParameter) == 56);

struct MixInfo {
  float volume;
  int sampleRate;
  int bufferCount;
  bool isInUse;
  bool isDirty;
  uint8_t reserved0[2];
  int mixId;
  int effectCount;
  int nodeId;
  uint8_t reserved1[8];
  float mixVolume[24][24];
  int destinationMixId;
  int destinationSplitterId;
  uint8_t reserved2[4];
};

static_assert(sizeof(MixInfo) == 2352);
static_assert(offsetof(MixInfo, mixVolume) == 36);
static_assert(offsetof(MixInfo, destinationMixId) == 2340);

struct AuxBufferInfo;

struct EffectInfoVersion2 {
  struct DelayParameter {
    int8_t input[6];
    int8_t output[6];
    uint16_t channelCountMax;
    uint16_t channelCount;
    int delayTimeMax;
    int delayTime;
    int sampleRate;
    int inGain;
    int feedbackGain;
    int outGain;
    int dryGain;
    int channelSpread;
    int lowPassAmount;
    uint8_t parameterStatus;
  };

  struct ReverbParameter {
    int8_t input[6];
    int8_t output[6];
    uint16_t channelCountMax;
    uint16_t channelCount;
    int sampleRate;
    uint32_t earlyMode;
    int earlyGain;
    int predelayTime;
    uint32_t lateMode;
    int lateGain;
    int decayTime;
    int highFrequencyDecayRatio;
    int coloration;
    int reverbGain;
    int outGain;
    int dryGain;
    uint8_t parameterStatus;
  };

  struct I3dl2ReverbParameter {
    int8_t input[6];
    int8_t output[6];
    uint16_t channelCountMax;
    uint16_t channelCount;
    uint32_t reserved;
    int sampleRate;
    float roomHfGain;
    float hfReference;
    float lateReverbDecayTime;
    float lateReverbHfDecayRatio;
    float roomGain;
    float reflectionsGain;
    float reverbGain;
    float lateReverbDiffusion;
    float reflectionDelayTime;
    float lateReverbDelayTime;
    float lateReverbDensity;
    float dryGain;
    uint8_t parameterStatus;
  };

  struct LightLimiterParameter {
    int8_t input[6];
    int8_t output[6];
    uint16_t channelCountMax;
    uint16_t channelCount;
    int sampleRate;
    int lookAheadTimeMax;
    int attackTime;
    int releaseTime;
    int lookAheadTime;
    float attackCoefficient;
    float releaseCoefficient;
    float threshold;
    float inputGain;
    float outputGain;
    int lookAheadSampleCount;
    int lookAheadSampleCountMax;
    uint8_t parameterStatus;
    bool isStatisticsEnabled;
    bool isStatisticsResetRequired;
    uint8_t processingMode;
  };

  struct CompressorParameter {
    int8_t input[6];
    int8_t output[6];
    uint16_t channelCountMax;
    uint16_t channelCount;
    int sampleRate;
    float threshold;
    float ratio;
    int attackTime;
    int releaseTime;
    float gainSmoothingCoefficient;
    float attackCoefficient;
    float releaseCoefficient;
    float outGain;
    uint8_t parameterStatus;
    bool isMakeupGainEnabled;
    bool isStatisticsEnabled;
    bool isStatisticsResetRequired;
  };

  struct BiquadFilterParameter {
    int8_t input[6];
    int8_t output[6];
    uint8_t reserved[4];
    float numerator[3];
    float denominator[2];
    int8_t channelCount;
    uint8_t parameterStatus;
  };

  struct BufferMixerParameter {
    int8_t input[24];
    int8_t output[24];
    float volume[24];
    int mixCount;
  };

  struct AuxParameter {
    int8_t input[24];
    int8_t output[24];
    int mixBufferCount;
    int sampleRate;
    int sampleCount;
    int channelCountMax;
    AuxBufferInfo* sendBufferInfo;
    int32_t* sendBuffer;
    AuxBufferInfo* returnBufferInfo;
    int32_t* returnBuffer;
    int bufferChannelCountMax;
    uint32_t bufferSampleCountMax;
    int mixBufferSampleCount;
  };

  struct LightLimiterStatistics {
    float channelMaxSample[6];
    float channelCompressionGainMin[6];
  };

  struct CompressorStatistics {
    float reserved;
    float compressionGainMin;
    float channelMaxMean[6];
  };

  EffectType type;
  bool isNew;
  bool isEnabled;
  uint8_t reserved0;
  int mixId;
  void* buffer;
  size_t bufferSize;
  int processingOrder;
  uint32_t reserved1;
  union {
    DelayParameter delay;
    ReverbParameter reverb;
    I3dl2ReverbParameter i3dl2Reverb;
    LightLimiterParameter lightLimiter;
    CompressorParameter compressor;
    BiquadFilterParameter biquadFilter;
    BufferMixerParameter bufferMixer;
    AuxParameter aux;
    uint8_t raw[160];
  } parameter;
  uint8_t usageState;
  uint8_t reserved2[15];
  union {
    LightLimiterStatistics lightLimiter;
    CompressorStatistics compressor;
    uint8_t raw[128];
  } resultState;
  uint64_t reserved3;
  uint8_t reserved4[8];
};

static_assert(sizeof(EffectInfoVersion2) == 352);
static_assert(sizeof(EffectInfoVersion2::DelayParameter) == 56);
static_assert(sizeof(EffectInfoVersion2::ReverbParameter) == 68);
static_assert(sizeof(EffectInfoVersion2::I3dl2ReverbParameter) == 76);
static_assert(sizeof(EffectInfoVersion2::LightLimiterParameter) == 68);
static_assert(sizeof(EffectInfoVersion2::CompressorParameter) == 56);
static_assert(sizeof(EffectInfoVersion2::BiquadFilterParameter) == 40);
static_assert(sizeof(EffectInfoVersion2::BufferMixerParameter) == 148);
static_assert(sizeof(EffectInfoVersion2::AuxParameter) == 112);
static_assert(offsetof(EffectInfoVersion2, usageState) == 192);
static_assert(offsetof(EffectInfoVersion2, resultState) == 208);

class EffectManager {
public:
  bool IsInitialized(const EffectInfoVersion2* info) const;
  Result Add(EffectInfoVersion2** info, EffectType type, void* buffer,
    size_t size, MixInfo* mix);
  void* Remove(EffectInfoVersion2* info, MixInfo* mix);

private:
  int m_Count;
  EffectInfoVersion2* m_Infos;
  os::SdkRecursiveMutexType m_Mutex;
};

struct FinalMixType;
struct SubMixType;

class MixManager {
public:
  bool Acquire(FinalMixType* mix, int bufferCount);
  void Release(FinalMixType* mix);
  bool Acquire(SubMixType* mix, int bufferCount);
  void Release(SubMixType* mix);
  int GetFinalMixSampleRate() const;
  int GetMixBufferSampleCount() const;
};

class VoiceInfoManager;
class SinkManager;
class PerformanceBufferManager;
class MemoryPoolManager;
class BehaviorManager;
class SplitterInfoManager;

struct AudioRendererConfig {
  VoiceInfoManager* _pVoiceInfoManager;
  MixManager* _pMixManager;
  EffectManager* _pEffectManager;
  SinkManager* _pSinkManager;
  PerformanceBufferManager* _pPerformanceBufferManager;
  MemoryPoolManager* _pMemoryPoolManager;
  BehaviorManager* _pBehaviorManager;
  SplitterInfoManager* _pSplitterInfoManager;
};

struct FinalMixType {
  MixInfo* _pMixInfo;
};

struct SubMixType {
  MixInfo* _pMixInfo;
};

namespace detail {

struct ResourceExclusionChecker;

extern std::atomic<bool> g_IsResourceExclusionCheckEnabled;

ResourceExclusionChecker* FindResourceExclusionCheckerFromRegionInConfigImpl(
  void* region);

// Release builds only look the checker up and drop its verdict.
inline void CheckResourceExclusion(const void* region) {
  if (g_IsResourceExclusionCheckEnabled.load(std::memory_order_acquire)) {
    FindResourceExclusionCheckerFromRegionInConfigImpl(
      const_cast<void*>(region));
  }
}

inline int ConvertToQ14(float value) {
  return static_cast<int>(value * 16384.0f);
}

inline float ConvertFromQ14(int value) {
  return static_cast<float>(value) * (1.0f / 16384.0f);
}

inline int64_t GetMicroSeconds(TimeSpan time) {
  return time.nanoseconds / 1000;
}

inline int64_t GetMilliSeconds(TimeSpan time) {
  return time.nanoseconds / 1000000;
}

inline TimeSpan FromMicroSeconds(int64_t value) {
  return {value * 1000};
}

inline TimeSpan FromMilliSeconds(int64_t value) {
  return {value * 1000000};
}

}
}
