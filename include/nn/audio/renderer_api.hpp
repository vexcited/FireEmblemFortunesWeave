#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/renderer_config.hpp"

namespace nn::audio {

namespace common {

enum SinkType {
  SinkType_Invalid,
  SinkType_Device,
  SinkType_CircularBuffer,
};

class NodeIdManager {
public:
  enum NodeIdType {};

  static uint32_t GetNodeId(NodeIdType type, int base, int index);
  static uint32_t GetInvalidNodeId();
};

}

class MemoryPoolInfo {
public:
  enum State {
    State_Invalid,
    State_Allocated,
    State_RequestDetach,
    State_Detached,
    State_RequestAttach,
    State_Attached,
    State_Released,
  };

  bool Attach();
  bool Detach();
  bool IsAttached() const;
  void* GetAddress() const;
  size_t GetSize() const;
  State GetState() const;
};

class MemoryPoolManager {
public:
  MemoryPoolInfo* Acquire(void* address, size_t size);
  void Release(MemoryPoolInfo* info);
  int GetFreeCount() const;
};

struct MemoryPoolType {
  enum State {
    State_RequestAttach,
    State_Attached,
    State_RequestDetach,
    State_Detached,
  };

  MemoryPoolInfo* _pMemoryPoolInfo;
};

class PerformanceBufferManager {
public:
  void* GetCurrentPerformanceFrameBuffer();
  void SetPerformanceFrameBuffer(void* buffer, size_t size);
  void SetDetailTarget(uint32_t nodeId);
};

class SplitterDestinationData {
public:
  void SetDestinationId(int id);
  void SetMixVolume(float volume, int channel);
  float GetMixVolume(int channel) const;
  void SetBiquadFilterParameter(int index,
    TBiquadFilterParameter<float> parameter);
  TBiquadFilterParameter<float> GetBiquadFilterParameter(int index) const;
};

class SplitterInfo {
public:
  int GetChannelCount() const;
  SplitterDestinationData* GetDestinationData(int destination, int channel);
  void MarkAsUpdated();
  int GetDestinationCount() const;
  int GetSampleRate() const;
  int GetId() const;
};

class SplitterInfoManager {
public:
  SplitterInfo* AcquireSplitterInfo(int sampleRate, int channelCount,
    int destinationCount);
  void ReleaseSplitterInfo(SplitterInfo* info);
};

struct SplitterType {
  SplitterInfo* _pSplitterInfo;
};

struct VoiceChannelResource {
  uint8_t reserved[20];
  float mixVolume[24];
};

struct WaveBuffer {
  struct MemberOptions {
    bool isLoopParameterSpecified;
  };

  const void* buffer;
  size_t size;
  int startSampleOffset;
  int endSampleOffset;
  bool loop;
  bool isEndOfStream;
  const void* pContext;
  size_t contextSize;
  int loopStartSampleOffset;
  int loopEndSampleOffset;
  int loopCount;
};

struct VoiceWaveBuffer {
  const void* buffer;
  size_t size;
  int startSampleOffset;
  int endSampleOffset;
  bool loop;
  bool isEndOfStream;
  bool isSentToServer;
  int loopCount;
  const void* pContext;
  size_t contextSize;
  int loopStartSampleOffset;
  int loopEndSampleOffset;
};

static_assert(sizeof(WaveBuffer) == 64);
static_assert(sizeof(VoiceWaveBuffer) == 56);

struct VoiceInfo {
  uint8_t reserved0[20];
  uint32_t nodeId;
  uint8_t reserved1[2];
  uint8_t playState;
  uint8_t sampleFormat;
  int sampleRate;
  int priority;
  uint8_t reserved2[4];
  int channelCount;
  float pitch;
  float volume;
  TBiquadFilterParameter<float> biquadFilter[2];
  int waveBufferCount;
  int16_t waveBufferHead;
  uint8_t biquadFilterCrossFadeCurveType;
  uint8_t reserved3[21];
  int destinationMixId;
  int destinationSplitterId;
  VoiceWaveBuffer waveBuffer[4];
  uint8_t reserved4[24];
  uint8_t isDroppedFlagReset;
  uint8_t flushWaveBufferCount;
  uint16_t behaviorFlags;
  uint8_t srcQuality;
  uint8_t reserved5[3];
  int64_t playedSampleCount;
  uint32_t consumedWaveBufferCount;
  uint8_t isVoiceDropped;
  uint8_t reserved6[11];
  uint32_t appendedWaveBufferCount;
  uint8_t reserved7[4];
  VoiceChannelResource* channelResources[6];
  const WaveBuffer* waveBuffers[4];
  uint32_t releasedWaveBufferCount;
};

static_assert(offsetof(VoiceInfo, biquadFilter) == 52);
static_assert(offsetof(VoiceInfo, destinationMixId) == 128);
static_assert(offsetof(VoiceInfo, waveBuffer) == 136);
static_assert(offsetof(VoiceInfo, isDroppedFlagReset) == 384);
static_assert(offsetof(VoiceInfo, playedSampleCount) == 392);
static_assert(offsetof(VoiceInfo, isVoiceDropped) == 404);
static_assert(offsetof(VoiceInfo, appendedWaveBufferCount) == 416);
static_assert(offsetof(VoiceInfo, channelResources) == 424);
static_assert(offsetof(VoiceInfo, waveBuffers) == 472);
static_assert(offsetof(VoiceInfo, releasedWaveBufferCount) == 504);

class VoiceInfoManager {
public:
  VoiceInfo* AcquireVoiceInfo(int priority, int channelCount);
  void ReleaseVoiceInfo(VoiceInfo* info);
};

struct VoiceType {
  enum PlayState : uint8_t {};
  enum SrcQuality : uint8_t {};

  struct BehaviorOptions {
    bool isPlayedSampleCountResetAtLoopPoint;
    bool isPitchAndSrcSkipped;
    bool isLoopCountSpecified;
  };

  VoiceInfo* _pVoiceInfo;
};

struct SinkInfo {
  uint8_t type;
  uint8_t reserved0[3];
  uint32_t nodeId;
  uint8_t reserved1[8];
  union {
    struct {
      char name[255];
      uint8_t reserved;
      int channelCount;
      int8_t input[6];
      uint8_t reserved2;
      bool isDownMixParameterEnabled;
      float downMixParameter[4];
    } device;
    struct {
      void* buffer;
      int size;
      int channelCount;
      int sampleCount;
      int readOffset;
      int format;
      int8_t input[6];
    } circularBuffer;
  };
  int writeOffset;
};

static_assert(offsetof(SinkInfo, device.channelCount) == 272);
static_assert(offsetof(SinkInfo, device.downMixParameter) == 284);
static_assert(offsetof(SinkInfo, circularBuffer.input) == 44);
static_assert(offsetof(SinkInfo, writeOffset) == 304);

class SinkManager {
public:
  SinkInfo* Allocate(common::SinkType type);
  void Free(SinkInfo* info);
  int GetSampleCount() const;
};

struct DeviceSinkType {
  struct DownMixParameter {
    float coefficient[16];
  };

  SinkInfo* _pSinkInfo;
};

struct CircularBufferSinkType {
  SinkInfo* _pSinkInfo;
};

enum AudioRendererFadeCurveType : uint8_t {};

enum SampleFormat {
  SampleFormat_Invalid,
  SampleFormat_PcmInt8,
  SampleFormat_PcmInt16,
  SampleFormat_PcmInt24,
  SampleFormat_PcmInt32,
  SampleFormat_PcmFloat,
  SampleFormat_Adpcm,
};

struct PerformanceFrameHeader {
  uint32_t magic;
  int entryCount;
  int detailCount;
  int nextOffset;
  uint32_t totalProcessingTime;
  uint32_t voiceDropCount;
  int64_t startTime;
  uint32_t frameIndex;
  bool isRenderingTimeLimitExceeded;
  uint8_t reserved[11];
};

struct PerformanceEntry {
  uint8_t data[24];
};

struct PerformanceDetail {
  uint8_t data[24];
};

static_assert(sizeof(PerformanceFrameHeader) == 48);

class PerformanceInfo {
public:
  PerformanceInfo();
  ~PerformanceInfo();
  bool SetBuffer(const void* buffer, size_t size);
  uint32_t GetTotalProcessingTime() const;
  bool IsRenderingTimeLimitExceeded() const;
  uint32_t GetVoiceDropCount() const;
  int64_t GetStartTime() const;
  uint32_t GetFrameIndex() const;
  const PerformanceEntry* GetEntries(int* count) const;
  const PerformanceDetail* GetDetails(int* count) const;
  bool MoveToNextFrame();

private:
  bool SetFrame(const void* frame);

  const void* m_Buffer;
  size_t m_Size;
  const PerformanceFrameHeader* m_Header;
  const PerformanceEntry* m_Entries;
  const PerformanceDetail* m_Details;
};

uint32_t GetFinalMixNodeId(const FinalMixType* mix);
uint32_t GetSubMixNodeId(const SubMixType* mix);
uint32_t GetVoiceNodeId(const VoiceType* voice);

}
