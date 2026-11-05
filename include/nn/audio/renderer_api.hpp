#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/common/bit_array.hpp"
#include "nn/audio/common/revision.hpp"
#include "nn/audio/effect_api.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/audio/renderer_ipc.hpp"
#include "nn/audio/server/behavior_info.hpp"
#include "nn/span.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::audio {

namespace common {

enum SinkType {
  SinkType_Invalid,
  SinkType_Device,
  SinkType_CircularBuffer,
};

class NodeIdManager {
public:
  enum NodeIdType {
    NodeIdType_Voice = 1,
    NodeIdType_Mix = 2,
    NodeIdType_Sink = 3,
    NodeIdType_Invalid = 15,
  };

  static uint32_t GetNodeId(NodeIdType type, int base, int variation);
  static NodeIdType GetType(uint32_t nodeId);
  static int GetBase(uint32_t nodeId);
  static int GetVariation(uint32_t nodeId);
  static uint32_t GetInvalidNodeId();
};

}

namespace renderer::ipc {

struct Behavior {
  template <int Version>
  struct UpdateData;

  template <int Version>
  struct StatusData;
};

template <>
struct Behavior::UpdateData<0> {
  uint32_t revision;
  uint8_t reserved[4];
  uint64_t flags;
};

template <>
struct Behavior::StatusData<0> {
  common::BehaviorParameter::ErrorInfo errors[10];
  int errorCount;
  uint8_t reserved[12];
};

static_assert(sizeof(Behavior::UpdateData<0>) == 16);
static_assert(sizeof(Behavior::StatusData<0>) == 176);

}

class BehaviorManager {
public:
  using ErrorInfo = common::BehaviorParameter::ErrorInfo;

  static constexpr int ErrorCountMax = 10;

  explicit BehaviorManager(uint32_t revision);
  size_t UpdateInParameter(renderer::ipc::Behavior::UpdateData<0>* data) const;
  size_t UpdateOutStatus(const renderer::ipc::Behavior::StatusData<0>* status);
  void SetMemoryPoolForceMappingEnabled(bool isEnabled);
  bool GetMemoryPoolErrorAssertEnabled() const;
  Result CheckErrors();
  uint32_t GetRevision() const;

private:
  mutable os::SdkRecursiveMutexType m_Mutex;
  uint32_t m_Revision;
  uint64_t m_Flags;
  Span<ErrorInfo> m_Errors;
  union {
    ErrorInfo m_ErrorBuffer[ErrorCountMax];
  };
};

static_assert(sizeof(BehaviorManager) == 200);

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

  struct InParameter {
    uint64_t address;
    uint64_t size;
    uint32_t state;
    uint8_t reserved[12];
  };

  struct OutStatus {
    uint32_t state;
    uint8_t reserved[12];
  };

  MemoryPoolInfo();
  ~MemoryPoolInfo();
  void Initialize(void* address, size_t size);
  void Finalize();
  bool IsUsed() const;
  bool Contains(const void* address, size_t size) const;
  bool IsOverlapped(const void* address, size_t size) const;
  bool Attach();
  bool Detach();
  bool SetState(State state);
  bool IsAttached() const;
  bool IsInTransition() const;
  void* GetAddress() const;
  size_t GetSize() const;
  State GetState() const;
  size_t Prepare(renderer::ipc::MemoryPool::UpdateData<0>* data);
  size_t Store(const renderer::ipc::MemoryPool::StatusData<0>* status);

private:
  void* m_Address;
  size_t m_Size;
  State m_State;
  bool m_IsUsed;
};

static_assert(sizeof(MemoryPoolInfo) == 24);
static_assert(sizeof(MemoryPoolInfo::InParameter) == 32);
static_assert(sizeof(MemoryPoolInfo::OutStatus) == 16);

class MemoryPoolManager {
public:
  static size_t GetWorkBufferSize(const AudioRendererParameter& parameter);
  static MemoryPoolManager* CreateManager(
    common::WorkBufferAllocator& allocator,
    const AudioRendererParameter& parameter);

  MemoryPoolManager(MemoryPoolInfo* infos, int count, void* buffer,
    size_t size);
  int GetFreeCount() const;
  MemoryPoolInfo* Acquire(void* address, size_t size);
  void Release(MemoryPoolInfo* info);
  size_t UpdateInParameter(renderer::ipc::MemoryPool::UpdateData<0>* data);
  size_t UpdateOutStatus(
    const renderer::ipc::MemoryPool::StatusData<0>* status);
  bool IsOverlapped(void* address, size_t size) const;
  void Dump();

private:
  os::SdkMutexType m_Mutex;
  int m_Count;
  int m_FreeCount;
  MemoryPoolInfo* m_Infos;
  common::BitArray<uint32_t> m_UsedFlags;
};

static_assert(sizeof(MemoryPoolManager) == 48);

struct MemoryPoolType {
  enum State {
    State_RequestAttach,
    State_Attached,
    State_RequestDetach,
    State_Detached,
  };

  MemoryPoolInfo* _pMemoryPoolInfo;
};

namespace renderer::ipc {

struct PerformanceMetrics {
  template <int Version>
  struct UpdateData;

  template <int Version>
  struct StatusData;
};

template <>
struct PerformanceMetrics::UpdateData<0> {
  uint32_t detailTarget;
  uint8_t reserved[12];
};

template <>
struct PerformanceMetrics::StatusData<0> {
  uint32_t historySize;
  uint8_t reserved[12];
};

}

class PerformanceBufferManager {
public:
  PerformanceBufferManager();
  void* GetCurrentPerformanceFrameBuffer();
  void SetPerformanceFrameBuffer(void* buffer, size_t size);
  void SetDetailTarget(uint32_t nodeId);
  void* GetBufferBase();
  size_t GetBufferSize();
  size_t UpdateInParameter(
    renderer::ipc::PerformanceMetrics::UpdateData<0>* data);
  size_t UpdateOutStatus(
    const renderer::ipc::PerformanceMetrics::StatusData<0>* status);

private:
  void* m_Buffer;
  size_t m_Size;
  os::SdkRecursiveMutexType m_Mutex;
  size_t m_Offset;
  uint32_t m_DetailTarget;
};

class SplitterDestinationData
  : public util::IntrusiveListBaseNode<SplitterDestinationData> {
public:
  static constexpr int MixVolumeCountMax = 24;
  static constexpr int BiquadFilterCountMax = 2;

  static size_t GetInParameterSize(int count);

  explicit SplitterDestinationData(int id);
  void Initialize();
  void Finalize();
  int GetId() const;
  void SetInUse(bool isInUse);
  bool IsInUse() const;
  void SetDestinationId(int id);
  int GetDestinationId() const;
  void ClearMixVolumes();
  void ClearBqfParameters();
  void SetMixVolume(float volume, int channel);
  float GetMixVolume(int channel) const;
  void SetBiquadFilterParameter(int index,
    TBiquadFilterParameter<float> parameter);
  TBiquadFilterParameter<float> GetBiquadFilterParameter(int index) const;
  bool NeedToUpdate() const;
  size_t StoreParameter(
    renderer::ipc::SplitterDestination::UpdateData<2>* data);

private:
  int m_Id;
  int m_DestinationId;
  float m_MixVolume[MixVolumeCountMax];
  TBiquadFilterParameter<float> m_BiquadFilter[BiquadFilterCountMax];
  bool m_IsInUse;
  bool m_NeedToUpdate;
  bool m_IsPrevVolumeResetRequired;
};

static_assert(sizeof(SplitterDestinationData) == 176);

class SplitterInfo : public util::IntrusiveListBaseNode<SplitterInfo> {
public:
  static size_t GetInParameterSize(int destinationCount);

  explicit SplitterInfo(int id);
  void Initialize(int id);
  void SetInUsed(bool isInUse);
  bool GetInUsed() const;
  void SetChannelCount(int count);
  int GetChannelCount() const;
  void SetSampleRate(int sampleRate);
  int GetSampleRate() const;
  int GetId() const;
  bool NeedToUpdate() const;
  int GetDestinationCount() const;
  SplitterDestinationData* GetDestinationData(int destination, int channel);
  void MarkAsUpdated();
  size_t StoreParameter(renderer::ipc::Splitter::UpdateData<0>* data);

private:
  friend class SplitterInfoManager;

  using DestinationList = util::IntrusiveList<SplitterDestinationData,
    util::IntrusiveListBaseNodeTraits<SplitterDestinationData>>;

  bool m_IsInUse;
  bool m_NeedToUpdate;
  int m_Id;
  int m_ChannelCount;
  int m_SampleRate;
  DestinationList m_Destinations;
};

static_assert(sizeof(SplitterInfo) == 48);

class SplitterInfoManager {
public:
  static size_t GetInParamterBufferSize(int infoCount, int destinationCount,
    int subMixCount);
  static size_t GetSplitterInfoWorkBufferSize(int count);
  static size_t GetSplitterDestinationWorkBufferSize(int count);

  SplitterInfoManager();
  void Initialize(int infoCount, int destinationCount, int subMixCount,
    void* infoBuffer, size_t infoBufferSize, void* destinationBuffer,
    size_t destinationBufferSize);
  SplitterInfo* Allocate();
  SplitterInfo* AcquireSplitterInfo(int sampleRate, int channelCount,
    int destinationCount);
  void ReleaseSplitterInfo(SplitterInfo* info);
  size_t UpdateInParameter(void* data);

private:
  using InfoList = util::IntrusiveList<SplitterInfo,
    util::IntrusiveListBaseNodeTraits<SplitterInfo>>;
  using DestinationList = util::IntrusiveList<SplitterDestinationData,
    util::IntrusiveListBaseNodeTraits<SplitterDestinationData>>;

  SplitterInfo* m_Infos;
  size_t m_InfoCount;
  InfoList m_FreeInfos;
  SplitterDestinationData* m_Destinations;
  size_t m_DestinationCount;
  DestinationList m_FreeDestinations;
  os::SdkMutexType m_Mutex;
  int m_DestinationCountMax;
  bool m_IsInitialized;
};

static_assert(sizeof(SplitterInfoManager) == 80);

struct SplitterType {
  SplitterInfo* _pSplitterInfo;
};

struct VoiceChannelResource {
  explicit VoiceChannelResource(uint32_t id)
    : id(id), mixVolume(), isUsed(false) {}

  util::IntrusiveListNode node;
  uint32_t id;
  float mixVolume[24];
  bool isUsed;
};

static_assert(sizeof(VoiceChannelResource) == 120);

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
  const void* buffer = nullptr;
  size_t size;
  int startSampleOffset;
  int endSampleOffset;
  bool loop;
  bool isEndOfStream;
  bool isSentToServer;
  int loopCount;
  const void* pContext = nullptr;
  size_t contextSize;
  int loopStartSampleOffset;
  int loopEndSampleOffset;
};

static_assert(sizeof(WaveBuffer) == 64);
static_assert(sizeof(VoiceWaveBuffer) == 56);

struct VoiceInfo {
  util::IntrusiveListNode node;
  uint32_t id;
  uint32_t nodeId;
  bool isNew;
  bool isInUse = false;
  uint8_t playState;
  uint8_t sampleFormat;
  int sampleRate;
  int priority;
  int sortingOrder;
  int channelCount;
  float pitch;
  float volume;
  TBiquadFilterParameter<float> biquadFilter[2];
  int waveBufferCount;
  int16_t waveBufferHead;
  uint8_t biquadFilterCrossFadeCurveType;
  uint8_t reserved3[5];
  const void* pAdditionalParameter = nullptr;
  size_t additionalParameterSize;
  int destinationMixId;
  int destinationSplitterId;
  VoiceWaveBuffer waveBuffer[4];
  uint32_t channelResourceIds[6];
  uint8_t isDroppedFlagReset;
  uint8_t flushWaveBufferCount;
  struct {
    uint16_t isPlayedSampleCountResetAtLoopPoint : 1;
    uint16_t isPitchAndSrcSkipped : 1;
    uint16_t isLoopCountSpecified : 1;
    uint16_t reserved : 13;
  } behaviorFlags;
  uint8_t srcQuality;
  uint8_t reserved5[3];
  int64_t playedSampleCount;
  uint32_t consumedWaveBufferCount;
  uint8_t isVoiceDropped;
  uint8_t reserved6[3];
  int slotIndex;
  int slotReserved;
  uint32_t appendedWaveBufferCount;
  uint8_t reserved7[4];
  VoiceChannelResource* channelResources[6];
  const WaveBuffer* waveBuffers[4];
  uint32_t releasedWaveBufferCount;
  uint8_t reserved8[12];
};

static_assert(sizeof(VoiceInfo) == 520);
static_assert(offsetof(VoiceInfo, biquadFilter) == 52);
static_assert(offsetof(VoiceInfo, pAdditionalParameter) == 112);
static_assert(offsetof(VoiceInfo, destinationMixId) == 128);
static_assert(offsetof(VoiceInfo, waveBuffer) == 136);
static_assert(offsetof(VoiceInfo, channelResourceIds) == 360);
static_assert(offsetof(VoiceInfo, isDroppedFlagReset) == 384);
static_assert(offsetof(VoiceInfo, playedSampleCount) == 392);
static_assert(offsetof(VoiceInfo, isVoiceDropped) == 404);
static_assert(offsetof(VoiceInfo, slotIndex) == 408);
static_assert(offsetof(VoiceInfo, appendedWaveBufferCount) == 416);
static_assert(offsetof(VoiceInfo, channelResources) == 424);
static_assert(offsetof(VoiceInfo, waveBuffers) == 472);
static_assert(offsetof(VoiceInfo, releasedWaveBufferCount) == 504);

template<class T>
struct MemberNodeTraits {
  static util::IntrusiveListNode* GetNode(T* item) {
    return &item->node;
  }

  static T* GetItem(util::IntrusiveListNode* node) {
    return reinterpret_cast<T*>(node);
  }
};

class VoiceInfoManager {
public:
  static size_t GetWorkBufferSize(int count);

  VoiceInfoManager();
  void Initialize(int count, void* buffer, size_t size);
  VoiceInfo* GetFreeVoiceInfo();
  VoiceInfo* AcquireVoiceInfo(int priority, int channelCount);
  void InsertToUsedList(VoiceInfo* info);
  void ReleaseVoiceInfo(VoiceInfo* info);
  bool IsVoiceInfoValid(const VoiceInfo* info) const;
  void FlushVoiceDataCache(const VoiceInfo* info);
  void UpdateVoiceRelatedParameters(void* data, size_t* voiceSize,
    size_t* channelResourceSize);
  size_t UpdateVoiceChannelResourceInParameter(
    renderer::ipc::VoiceChannelResource::UpdateData<0>* data);
  size_t UpdateVoiceInParameter(renderer::ipc::Voice::UpdateData<1>* data);
  size_t UpdateVoiceOutStatus(
    const renderer::ipc::Voice::StatusData<0>* status);

private:
  using VoiceList = util::IntrusiveList<VoiceInfo,
    MemberNodeTraits<VoiceInfo>>;
  using ChannelResourceList = util::IntrusiveList<VoiceChannelResource,
    MemberNodeTraits<VoiceChannelResource>>;

  int m_VoiceCount;
  int m_UsedVoiceCount;
  VoiceInfo* m_Infos;
  VoiceList m_UsedList;
  VoiceList m_FreeList;
  int m_ChannelResourceCount;
  int m_UsedChannelResourceCount;
  VoiceChannelResource* m_ChannelResources;
  ChannelResourceList m_FreeChannelResources;
  os::SdkMutexType m_Mutex;
};

static_assert(sizeof(VoiceInfoManager) == 88);

struct VoiceType {
  enum PlayState : uint8_t {
    PlayState_Start,
    PlayState_Stop,
    PlayState_Pause,
  };
  enum SrcQuality : uint8_t {};

  struct BehaviorOptions {
    bool isPlayedSampleCountResetAtLoopPoint;
    bool isPitchAndSrcSkipped;
    bool isLoopCountSpecified;
  };

  VoiceInfo* _pVoiceInfo;
};

struct SinkInfo {
  SinkInfo();
  void CleanUp();
  common::SinkType GetType() const;
  size_t StoreInParameter(renderer::ipc::Sink::UpdateData<0>& data);
  size_t StoreOutStatus(const renderer::ipc::Sink::StatusData<0>& status);
  bool IsUsed() const;

  uint8_t type;
  bool isUsed;
  uint8_t reserved0[2];
  uint32_t nodeId;
  uint64_t reserved1;
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
  uint8_t reserved2[12];
};

static_assert(sizeof(SinkInfo) == 320);
static_assert(offsetof(SinkInfo, device.channelCount) == 272);
static_assert(offsetof(SinkInfo, device.downMixParameter) == 284);
static_assert(offsetof(SinkInfo, circularBuffer.input) == 44);
static_assert(offsetof(SinkInfo, writeOffset) == 304);

class SinkManager {
public:
  SinkManager(int count, SinkInfo* infos, int sampleCount, int sampleRate);
  SinkInfo* Allocate(common::SinkType type);
  void Free(SinkInfo* info);
  int GetSampleCount() const;
  int GetSampleRate() const;
  bool IsValidSinkInfo(const SinkInfo* info) const;
  size_t UpdateSinkInParameter(renderer::ipc::Sink::UpdateData<0>* data);
  size_t UpdateSinkOutStatus(const renderer::ipc::Sink::StatusData<0>* status);

private:
  int m_Count;
  int m_SampleCount;
  int m_SampleRate;
  SinkInfo* m_Infos;
  os::SdkRecursiveMutexType m_Mutex;
};

struct DeviceSinkType {
  struct DownMixParameter {
    float coefficient[16];
  };

  SinkInfo* _pSinkInfo;
};

struct CircularBufferSinkType {
  enum InterleavingFormat {
    InterleavingFormat_Blocked,
    InterleavingFormat_Interleaved,
  };

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
size_t GetSampleByteSize(SampleFormat format);
size_t GetRequiredBufferSizeForPerformanceFrames(
  const AudioRendererParameter& parameter);

}
