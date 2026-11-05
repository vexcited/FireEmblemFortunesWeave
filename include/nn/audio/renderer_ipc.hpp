#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

enum CpuAddr : uintptr_t {};

}

namespace nn::audio::renderer::ipc {

struct MemoryPool {
  template <int Version>
  struct UpdateData;

  template <int Version>
  struct StatusData;
};

template <>
struct MemoryPool::UpdateData<0> {
  CpuAddr address;
  uint64_t size;
  uint32_t state;
  uint8_t reserved[12];
};

template <>
struct MemoryPool::StatusData<0> {
  uint32_t state;
  uint8_t reserved[12];
};

static_assert(sizeof(MemoryPool::UpdateData<0>) == 32);
static_assert(sizeof(MemoryPool::StatusData<0>) == 16);

struct Effect {
  template <int Version>
  struct UpdateData;

  template <int Version>
  struct StatusData;
};

struct Sink {
  struct DeviceParameter {
    char name[255];
    uint8_t reserved0;
    int channelCount;
    int8_t input[6];
    uint8_t reserved1;
    bool isDownMixParameterEnabled;
    float downMixParameter[4];
  };

  struct CircularBufferParameter {
    CpuAddr address;
    uint32_t size;
    int channelCount;
    int sampleCount;
    int previousPosition;
    int format;
    int8_t input[6];
    uint8_t reserved[2];
  };

  template <int Version>
  struct UpdateData;

  template <int Version>
  struct StatusData;
};

template <>
struct Sink::UpdateData<0> {
  uint8_t type;
  bool isUsed;
  uint8_t reserved0[2];
  uint32_t nodeId;
  uint8_t reserved1[24];
  union {
    DeviceParameter device;
    CircularBufferParameter circularBuffer;
    uint8_t raw[288];
  } parameter;
};

template <>
struct Sink::StatusData<0> {
  uint32_t writeOffset;
  uint8_t reserved[28];
};

static_assert(sizeof(Sink::DeviceParameter) == 284);
static_assert(sizeof(Sink::CircularBufferParameter) == 40);
static_assert(sizeof(Sink::UpdateData<0>) == 320);
static_assert(sizeof(Sink::StatusData<0>) == 32);

struct Splitter {
  template <int Version>
  struct UpdateData;
};

template <>
struct Splitter::UpdateData<0> {
  uint32_t magic;
  int id;
  int sampleRate;
  int destinationCount;
  int destinationIds[1];
  uint8_t reserved[8];
};

static_assert(sizeof(Splitter::UpdateData<0>) == 28);

struct SplitterDestination {
  struct BiquadFilterParameter {
    bool enable;
    uint8_t reserved[3];
    float numerator[3];
    float denominator[2];
  };

  template <int Version>
  struct UpdateData;
};

template <>
struct SplitterDestination::UpdateData<2> {
  uint32_t magic;
  int id;
  float mixVolume[24];
  int destinationId;
  BiquadFilterParameter biquadFilter[2];
  bool isInUse;
  bool isPrevVolumeResetRequired;
  uint8_t reserved[10];
};

static_assert(sizeof(SplitterDestination::UpdateData<2>) == 168);

struct Voice {
  template <int Version>
  struct UpdateData;

  template <int Version>
  struct StatusData;

  struct WaveBuffer {
    CpuAddr address;
    uint64_t size;
    int startSampleOffset;
    int endSampleOffset;
    bool isLoop;
    bool isEndOfStream;
    uint8_t isSentToServer;
    uint8_t reserved0;
    int loopCount;
    CpuAddr contextAddress;
    uint64_t contextSize;
    int loopStartSampleOffset;
    int loopEndSampleOffset;
  };

  struct BiquadFilterParameter {
    bool enable;
    uint8_t reserved[3];
    float numerator[3];
    float denominator[2];
  };

  struct BehaviorFlags {
    uint16_t isPlayedSampleCountResetAtLoopPoint : 1;
    uint16_t isPitchAndSrcSkipped : 1;
    uint16_t isLoopCountSpecified : 1;
    uint16_t reserved : 13;
  };
};

template <>
struct Voice::UpdateData<1> {
  uint32_t id;
  uint32_t nodeId;
  bool isNew;
  bool isInUse;
  uint8_t playState;
  uint8_t sampleFormat;
  int sampleRate;
  int priority;
  int sortingOrder;
  int channelCount;
  float pitch;
  float volume;
  BiquadFilterParameter biquadFilter[2];
  int waveBufferCount;
  int16_t waveBufferHead;
  uint8_t reserved0[6];
  CpuAddr additionalParameterAddress;
  uint64_t additionalParameterSize;
  int destinationMixId;
  int destinationSplitterId;
  WaveBuffer waveBuffer[4];
  uint32_t channelResourceIds[6];
  bool isDroppedFlagReset;
  uint8_t flushWaveBufferCount;
  uint8_t reserved1[2];
  BehaviorFlags behaviorFlags;
  uint8_t srcQuality;
  uint8_t biquadFilterCrossFadeCurveType;
  uint8_t reserved2[16];
};

template <>
struct Voice::StatusData<0> {
  int64_t playedSampleCount;
  uint32_t consumedWaveBufferCount;
  bool isVoiceDropped;
  uint8_t reserved[3];
};

static_assert(sizeof(Voice::WaveBuffer) == 56);
static_assert(sizeof(Voice::UpdateData<1>) == 392);
static_assert(offsetof(Voice::UpdateData<1>, waveBuffer) == 120);
static_assert(offsetof(Voice::UpdateData<1>, behaviorFlags) == 372);
static_assert(sizeof(Voice::StatusData<0>) == 16);

struct VoiceChannelResource {
  template <int Version>
  struct UpdateData;
};

template <>
struct VoiceChannelResource::UpdateData<0> {
  uint32_t id;
  float mixVolume[24];
  bool isUsed;
  uint8_t reserved[11];
};

static_assert(sizeof(VoiceChannelResource::UpdateData<0>) == 112);

}
