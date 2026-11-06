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
  uint8_t data[16];
};

struct PerformanceEntryVersion2 {
  uint8_t data[24];
};

struct PerformanceDetailVersion1 {
  uint8_t data[16];
};

struct PerformanceDetailVersion2 {
  uint8_t data[24];
};

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
  uint8_t* m_FrameBuffer;
  void* m_TranslatedFrameBuffer;
  uint32_t m_FrameIndex;
  uint8_t reserved0[4];
  FrameHeader* m_FrameHeader;
  Entry* m_Entries;
  SysDetail* m_SysDetails;
  int m_EntryCount;
  int m_SysDetailCount;
  uint8_t reserved1[56];
  size_t m_FrameSize;
  bool m_IsInitialized;
  uint8_t reserved2[31];
};

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
  IPerformanceManagerImpl* m_Impl;
  alignas(8) uint8_t m_ImplStorage[168];
};

}
}
