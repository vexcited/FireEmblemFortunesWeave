#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/memory_pool_info.hpp"
#include "nn/audio/server/splitter_context.hpp"

namespace nn::audio {

enum PerformanceEntryType {
  PerformanceEntryType_Invalid,
  PerformanceEntryType_Voice,
  PerformanceEntryType_SubMix,
  PerformanceEntryType_FinalMix,
  PerformanceEntryType_Sink,
};

enum PerformanceDetailType {
  PerformanceDetailType_Invalid,
  PerformanceDetailType_Volume = 3,
  PerformanceDetailType_BiquadFilter,
  PerformanceDetailType_Mix,
  PerformanceDetailType_Delay,
  PerformanceDetailType_Aux,
  PerformanceDetailType_Reverb,
  PerformanceDetailType_I3dl2Reverb,
  PerformanceDetailType_LightLimiter = 11,
  PerformanceDetailType_Capture,
  PerformanceDetailType_Compressor,
  PerformanceDetailType_BiquadFilterAndMix,
};
enum PerformanceSysDetailType : uint8_t {};

struct PerformanceSysDetail {
  uint32_t nodeId;
  uint32_t startTime;
  uint32_t processingTime;
  PerformanceSysDetailType type;
  uint8_t reserved[3];
  uint32_t value[2];
};

static_assert(sizeof(PerformanceSysDetail) == 24);

namespace common {

constexpr uint32_t PerformanceFrameMagic = 0x46524550;

struct PerformanceFrameHeaderVersion1 {
  uint32_t magic;
  int entryCount;
  int detailCount;
  uint32_t nextOffset;
  uint32_t totalProcessingTime;
  uint32_t frameIndex;
};

struct PerformanceFrameHeaderVersion2 {
  uint32_t magic;
  int entryCount;
  int detailCount;
  uint32_t nextOffset;
  uint32_t totalProcessingTime;
  uint32_t voiceDropCount;
  int64_t startTime;
  uint32_t frameIndex;
  bool isRenderingTimeLimitExceeded;
  uint8_t reserved[11];
};

struct PerformanceEntryVersion1 {
  uint32_t nodeId;
  uint32_t startTime;
  uint32_t processingTime;
  uint8_t entryType;
  uint8_t reserved[3];
};

struct PerformanceEntryVersion2 {
  uint32_t nodeId;
  uint32_t startTime;
  uint32_t processingTime;
  uint8_t entryType;
  uint8_t reserved[11];
};

struct PerformanceDetailVersion1 {
  uint32_t nodeId;
  uint32_t startTime;
  uint32_t processingTime;
  uint8_t detailType;
  uint8_t entryType;
  uint8_t reserved[2];
};

struct PerformanceDetailVersion2 {
  uint32_t nodeId;
  uint32_t startTime;
  uint32_t processingTime;
  uint8_t detailType;
  uint8_t entryType;
  uint8_t reserved[10];
};

static_assert(sizeof(PerformanceEntryVersion1) == 16);
static_assert(sizeof(PerformanceEntryVersion2) == 24);
static_assert(sizeof(PerformanceDetailVersion1) == 16);
static_assert(sizeof(PerformanceDetailVersion2) == 24);

static_assert(sizeof(PerformanceFrameHeaderVersion1) == 24);
static_assert(sizeof(PerformanceFrameHeaderVersion2) == 48);

}

namespace server {

enum PerformanceMetricsDataFormat {
  PerformanceMetricsDataFormat_Invalid,
  PerformanceMetricsDataFormat_Version1,
  PerformanceMetricsDataFormat_Version2,
};

struct PerformanceEntryAddresses {
  void* translatedAddress;
  uint32_t entryStartTimeOffset;
  uint32_t headerEntryCountOffset;
  uint32_t entryProcessingTimeOffset;
};

struct PerformanceManagerImplVersion1Tag {};
struct PerformanceManagerImplVersion2Tag {};

class IPerformanceManagerImpl {
public:
  virtual ~IPerformanceManagerImpl() {}
  virtual void Initialize(void* buffer, size_t size,
    const audio::detail::AudioRendererParameterInternal& parameter,
    const BehaviorInfo& behavior, const MemoryPoolInfo& pool) = 0;
  virtual bool IsInitialized() const = 0;
  virtual size_t CopyHistories(void* buffer, size_t size) = 0;
  virtual bool GetNextEntry(PerformanceEntryAddresses* addresses,
    PerformanceEntryType type, uint32_t nodeId) = 0;
  virtual bool GetNextEntry(PerformanceEntryAddresses* addresses,
    PerformanceDetailType detailType, PerformanceEntryType entryType,
    uint32_t nodeId) = 0;
  virtual bool GetNextEntry(PerformanceEntryAddresses* addresses,
    uint32_t** value, PerformanceSysDetailType type, uint32_t nodeId) = 0;
  virtual void SetDetailTarget(uint32_t nodeId) = 0;
  virtual bool IsDetailTarget(uint32_t nodeId) const = 0;
  virtual void TapNewFrame() = 0;
  virtual void GetUsedEntryCounts(int* entryCount, int* detailCount) = 0;
  virtual void RecordVoiceDropCount(int count) = 0;
  virtual void RecordRenderingStartTime(int64_t time) = 0;
  virtual void RecordRenderingTimeLimitExceeded() = 0;
};

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
class PerformanceManagerImpl : public IPerformanceManagerImpl {
public:
  static constexpr int SysDetailCountMax = 100;

  PerformanceManagerImpl() = default;

  void Initialize(void* buffer, size_t size,
    const audio::detail::AudioRendererParameterInternal& parameter,
    const BehaviorInfo& behavior, const MemoryPoolInfo& pool) override;
  bool IsInitialized() const override;
  size_t CopyHistories(void* buffer, size_t size) override;
  bool GetNextEntry(PerformanceEntryAddresses* addresses,
    PerformanceEntryType type, uint32_t nodeId) override;
  bool GetNextEntry(PerformanceEntryAddresses* addresses,
    PerformanceDetailType detailType, PerformanceEntryType entryType,
    uint32_t nodeId) override;
  bool GetNextEntry(PerformanceEntryAddresses* addresses, uint32_t** value,
    PerformanceSysDetailType type, uint32_t nodeId) override;
  void SetDetailTarget(uint32_t nodeId) override;
  bool IsDetailTarget(uint32_t nodeId) const override;
  void TapNewFrame() override;
  void GetUsedEntryCounts(int* entryCount, int* detailCount) override;
  void RecordVoiceDropCount(int count) override;
  void RecordRenderingStartTime(int64_t time) override;
  void RecordRenderingTimeLimitExceeded() override;

  void UpdateHeader(FrameHeader* destination, const FrameHeader* source,
    int totalProcessingTime, size_t nextOffset, int entryCount,
    int detailCount);
  void CopyFrame(FrameHeader* destination, const FrameHeader* source,
    bool isRenderingTimeLimitExceeded, int voiceDropCount,
    int64_t startTime);

private:
  struct Frame {
    FrameHeader* header;
    Entry* entries;
    Detail* details;
  };

  Frame GetHistoryFrame(int index) const;

  uint8_t* m_FrameBuffer = nullptr;
  void* m_TranslatedFrameBuffer = nullptr;
  uint32_t m_FrameIndex = 0;
  FrameHeader* m_FrameHeader = nullptr;
  Entry* m_Entries = nullptr;
  Detail* m_Details = nullptr;
  int m_EntryCount = 0;
  int m_DetailCount = 0;
  uint8_t* m_HistoryFrameBuffer = nullptr;
  FrameHeader* m_HistoryFrameHeader = nullptr;
  Entry* m_HistoryEntries = nullptr;
  Detail* m_HistoryDetails = nullptr;
  int m_HistoryWriteIndex = 0;
  int m_HistoryReadIndex = 0;
  int m_HistoryFrameCount = 0;
  int m_EntryCountMax = 0;
  int m_DetailCountMax = 0;
  size_t m_FrameSize = 0;
  bool m_IsInitialized = false;
  uint32_t m_DetailTarget = 0;
  PerformanceMetricsDataFormat m_DataFormat =
    PerformanceMetricsDataFormat_Invalid;
  int m_VoiceDropCount = 0;
  int64_t m_StartTime = 0;
  bool m_IsRenderingTimeLimitExceeded = false;
};

static_assert(sizeof(PerformanceManagerImpl<PerformanceManagerImplVersion1Tag,
  common::PerformanceFrameHeaderVersion1, common::PerformanceEntryVersion1,
  common::PerformanceDetailVersion1, PerformanceSysDetail>) == 160);

using PerformanceManagerImplVersion1 = PerformanceManagerImpl<
  PerformanceManagerImplVersion1Tag, common::PerformanceFrameHeaderVersion1,
  common::PerformanceEntryVersion1, common::PerformanceDetailVersion1,
  PerformanceSysDetail>;

using PerformanceManagerImplVersion2 = PerformanceManagerImpl<
  PerformanceManagerImplVersion2Tag, common::PerformanceFrameHeaderVersion2,
  common::PerformanceEntryVersion2, common::PerformanceDetailVersion2,
  PerformanceSysDetail>;

class PerformanceManager {
public:
  void Initialize(void* buffer, size_t size,
    const audio::detail::AudioRendererParameterInternal& parameter,
    const BehaviorInfo& behavior, const MemoryPoolInfo& pool);
  static size_t GetRequiredBufferSizeForPerformanceMetricsPerFrame(
    const BehaviorInfo& behavior,
    const audio::detail::AudioRendererParameterInternal& parameter);

  bool IsInitialized();
  size_t CopyHistories(void* buffer, size_t size);
  bool GetNextEntry(PerformanceEntryAddresses* addresses,
    PerformanceEntryType type, uint32_t nodeId);
  bool GetNextEntry(PerformanceEntryAddresses* addresses,
    PerformanceDetailType detailType, PerformanceEntryType entryType,
    uint32_t nodeId);
  bool GetNextEntry(PerformanceEntryAddresses* addresses, uint32_t** value,
    PerformanceSysDetailType type, uint32_t nodeId);
  void TapNewFrame();
  bool IsDetailTarget(uint32_t nodeId) const;
  void SetDetailTarget(uint32_t nodeId);
  void GetUsedEntryCounts(int* entryCount, int* detailCount);
  void RecordVoiceDropCount(int count);
  void RecordRenderingStartTime(int64_t time);
  void RecordRenderingTimeLimitExceeded();

private:
  IPerformanceManagerImpl* CreateImpl(PerformanceMetricsDataFormat format);

  IPerformanceManagerImpl* m_Impl = nullptr;
  alignas(8) uint8_t m_ImplStorage[168];
};

}
}
