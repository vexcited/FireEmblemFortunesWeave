#include <string.h>

#include <new>

#include "nn/audio/server/performance_manager.hpp"

namespace nn::audio::server {

size_t PerformanceManager::GetRequiredBufferSizeForPerformanceMetricsPerFrame(
  const BehaviorInfo& behavior,
  const audio::detail::AudioRendererParameterInternal& parameter) {
  int entryCount = parameter.voiceCount + parameter.effectCount +
    parameter.subMixCount + parameter.sinkCount + 1;
  switch (behavior.GetPerformanceMetricsDataFormat()) {
    case PerformanceMetricsDataFormat_Version1:
      return sizeof(common::PerformanceFrameHeaderVersion1) +
        entryCount * sizeof(common::PerformanceEntryVersion1) +
        PerformanceManagerImplVersion1::SysDetailCountMax *
          sizeof(common::PerformanceDetailVersion1);
    case PerformanceMetricsDataFormat_Version2:
      return sizeof(common::PerformanceFrameHeaderVersion2) +
        entryCount * sizeof(common::PerformanceEntryVersion2) +
        PerformanceManagerImplVersion2::SysDetailCountMax *
          sizeof(common::PerformanceDetailVersion2);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

IPerformanceManagerImpl* PerformanceManager::CreateImpl(
  PerformanceMetricsDataFormat format) {
  switch (format) {
    case PerformanceMetricsDataFormat_Version1:
      return new (m_ImplStorage) PerformanceManagerImplVersion1();
    case PerformanceMetricsDataFormat_Version2:
      return new (m_ImplStorage) PerformanceManagerImplVersion2();
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void PerformanceManager::Initialize(void* buffer, size_t size,
  const audio::detail::AudioRendererParameterInternal& parameter,
  const BehaviorInfo& behavior, const MemoryPoolInfo& pool) {
  switch (behavior.GetPerformanceMetricsDataFormat()) {
    case PerformanceMetricsDataFormat_Version1:
      m_Impl = new (m_ImplStorage) PerformanceManagerImplVersion1();
      break;
    case PerformanceMetricsDataFormat_Version2:
      m_Impl = new (m_ImplStorage) PerformanceManagerImplVersion2();
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  m_Impl->Initialize(buffer, size, parameter, behavior, pool);
}

bool PerformanceManager::IsInitialized() {
  if (m_Impl == nullptr) {
    return false;
  }
  return m_Impl->IsInitialized();
}

size_t PerformanceManager::CopyHistories(void* buffer, size_t size) {
  return m_Impl->CopyHistories(buffer, size);
}

bool PerformanceManager::GetNextEntry(PerformanceEntryAddresses* addresses,
  PerformanceEntryType type, uint32_t nodeId) {
  return m_Impl->GetNextEntry(addresses, type, nodeId);
}

bool PerformanceManager::GetNextEntry(PerformanceEntryAddresses* addresses,
  PerformanceDetailType detailType, PerformanceEntryType entryType,
  uint32_t nodeId) {
  return m_Impl->GetNextEntry(addresses, detailType, entryType, nodeId);
}

bool PerformanceManager::GetNextEntry(PerformanceEntryAddresses* addresses,
  uint32_t** value, PerformanceSysDetailType type, uint32_t nodeId) {
  return m_Impl->GetNextEntry(addresses, value, type, nodeId);
}

void PerformanceManager::TapNewFrame() {
  m_Impl->TapNewFrame();
}

bool PerformanceManager::IsDetailTarget(uint32_t nodeId) const {
  return m_Impl->IsDetailTarget(nodeId);
}

void PerformanceManager::SetDetailTarget(uint32_t nodeId) {
  m_Impl->SetDetailTarget(nodeId);
}

void PerformanceManager::GetUsedEntryCounts(int* entryCount,
  int* detailCount) {
  m_Impl->GetUsedEntryCounts(entryCount, detailCount);
}

void PerformanceManager::RecordVoiceDropCount(int count) {
  m_Impl->RecordVoiceDropCount(count);
}

void PerformanceManager::RecordRenderingStartTime(int64_t time) {
  m_Impl->RecordRenderingStartTime(time);
}

void PerformanceManager::RecordRenderingTimeLimitExceeded() {
  m_Impl->RecordRenderingTimeLimitExceeded();
}

template <>
void PerformanceManagerImplVersion1::UpdateHeader(
  common::PerformanceFrameHeaderVersion1* destination,
  const common::PerformanceFrameHeaderVersion1* source,
  int totalProcessingTime, size_t nextOffset, int entryCount,
  int detailCount) {
  destination->magic = common::PerformanceFrameMagic;
  destination->entryCount = entryCount;
  destination->detailCount = detailCount;
  destination->nextOffset = static_cast<uint32_t>(nextOffset);
  destination->totalProcessingTime = totalProcessingTime;
  destination->frameIndex = source->frameIndex;
}

template <>
void PerformanceManagerImplVersion2::UpdateHeader(
  common::PerformanceFrameHeaderVersion2* destination,
  const common::PerformanceFrameHeaderVersion2* source,
  int totalProcessingTime, size_t nextOffset, int entryCount,
  int detailCount) {
  destination->magic = common::PerformanceFrameMagic;
  destination->entryCount = entryCount;
  destination->detailCount = detailCount;
  destination->nextOffset = static_cast<uint32_t>(nextOffset);
  destination->totalProcessingTime = totalProcessingTime;
  destination->frameIndex = source->frameIndex;
  destination->isRenderingTimeLimitExceeded =
    source->isRenderingTimeLimitExceeded;
  destination->voiceDropCount = source->voiceDropCount;
  destination->startTime = source->startTime;
}

template <>
void PerformanceManagerImplVersion1::CopyFrame(
  common::PerformanceFrameHeaderVersion1* destination,
  const common::PerformanceFrameHeaderVersion1* source,
  bool isRenderingTimeLimitExceeded, int voiceDropCount, int64_t startTime) {
  memcpy(destination, source, m_FrameSize);
  destination->frameIndex = m_FrameIndex++;
}

template <>
void PerformanceManagerImplVersion2::CopyFrame(
  common::PerformanceFrameHeaderVersion2* destination,
  const common::PerformanceFrameHeaderVersion2* source,
  bool isRenderingTimeLimitExceeded, int voiceDropCount, int64_t startTime) {
  memcpy(destination, source, m_FrameSize);
  destination->isRenderingTimeLimitExceeded = isRenderingTimeLimitExceeded;
  destination->voiceDropCount = voiceDropCount;
  destination->startTime = startTime;
  destination->frameIndex = m_FrameIndex++;
}

template <>
bool PerformanceManagerImplVersion1::GetNextEntry(
  PerformanceEntryAddresses* addresses, uint32_t** value,
  PerformanceSysDetailType type, uint32_t nodeId) {
  return false;
}

template <>
bool PerformanceManagerImplVersion2::GetNextEntry(
  PerformanceEntryAddresses* addresses, uint32_t** value,
  PerformanceSysDetailType type, uint32_t nodeId) {
  if (m_IsInitialized == false || m_DetailCount > SysDetailCountMax) {
    return false;
  }
  uint32_t base = static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(m_FrameBuffer));
  addresses->translatedAddress = m_TranslatedFrameBuffer;
  addresses->headerEntryCountOffset = static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(m_FrameHeader)) - base +
    offsetof(common::PerformanceFrameHeaderVersion2, detailCount);
  PerformanceSysDetail* detail =
    reinterpret_cast<PerformanceSysDetail*>(&m_Details[m_DetailCount]);
  uint32_t detailAddress =
    static_cast<uint32_t>(reinterpret_cast<uintptr_t>(detail));
  addresses->entryStartTimeOffset = detailAddress +
    offsetof(PerformanceSysDetail, startTime) - base;
  addresses->entryProcessingTimeOffset = detailAddress - base +
    offsetof(PerformanceSysDetail, processingTime);
  m_DetailCount++;
  detail->startTime = 0;
  detail->processingTime = 0;
  detail->type = type;
  detail->reserved[0] = 0;
  detail->reserved[1] = 0;
  detail->reserved[2] = 0;
  detail->value[0] = 0;
  detail->value[1] = 0;
  detail->nodeId = nodeId;
  if (value != nullptr) {
    *value = detail->value;
  }
  return true;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  Initialize(void* buffer, size_t size,
  const audio::detail::AudioRendererParameterInternal& parameter,
  const BehaviorInfo& behavior, const MemoryPoolInfo& pool) {
  m_FrameBuffer = static_cast<uint8_t*>(buffer);
  m_EntryCountMax = parameter.voiceCount + parameter.effectCount +
    parameter.subMixCount + parameter.sinkCount + 1;
  m_DetailCountMax = SysDetailCountMax;
  m_FrameSize = sizeof(FrameHeader) + m_EntryCountMax * sizeof(Entry) +
    SysDetailCountMax * sizeof(Detail);
  const int frameCount = static_cast<int>(size / m_FrameSize);
  m_TranslatedFrameBuffer = reinterpret_cast<void*>(
    pool.Translate(CpuAddr(reinterpret_cast<uintptr_t>(buffer)), size));
  m_HistoryFrameCount = frameCount - 1;

  m_HistoryFrameBuffer = m_FrameBuffer + m_FrameSize;
  m_FrameHeader = reinterpret_cast<FrameHeader*>(m_FrameBuffer);
  m_Entries = reinterpret_cast<Entry*>(m_FrameBuffer + sizeof(FrameHeader));
  m_Details = reinterpret_cast<Detail*>(m_Entries + m_EntryCountMax);
  if (frameCount < 2) {
    m_HistoryFrameHeader = nullptr;
    m_HistoryEntries = nullptr;
    m_HistoryDetails = nullptr;
  }
  else {
    m_HistoryFrameHeader =
      reinterpret_cast<FrameHeader*>(m_HistoryFrameBuffer);
    m_HistoryEntries = reinterpret_cast<Entry*>(m_HistoryFrameBuffer +
      sizeof(FrameHeader));
    m_HistoryDetails = reinterpret_cast<Detail*>(m_HistoryEntries +
      m_EntryCountMax);
  }

  m_DetailTarget = 0;
  m_DataFormat = static_cast<PerformanceMetricsDataFormat>(
    behavior.GetPerformanceMetricsDataFormat());
  m_HistoryWriteIndex = 0;
  m_HistoryReadIndex = 0;
  m_EntryCount = 0;
  m_DetailCount = 0;
  m_FrameHeader->entryCount = 0;
  m_FrameHeader->detailCount = 0;
  m_IsInitialized = true;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
bool PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  IsInitialized() const {
  return m_IsInitialized;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
typename PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail,
  SysDetail>::Frame PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail,
  SysDetail>::GetHistoryFrame(int index) const {
  if (m_HistoryFrameCount <= 0) {
    return { nullptr, nullptr, nullptr };
  }
  uint8_t* frame = m_HistoryFrameBuffer + m_FrameSize * index;
  Entry* entries = reinterpret_cast<Entry*>(frame + sizeof(FrameHeader));
  return { reinterpret_cast<FrameHeader*>(frame), entries,
    reinterpret_cast<Detail*>(entries + m_EntryCountMax) };
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
size_t PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  CopyHistories(void* buffer, size_t size) {
  if (buffer == nullptr || size == 0 || m_IsInitialized == false) {
    return 0;
  }

  uint8_t* out = static_cast<uint8_t*>(buffer);
  size_t copiedSize = 0;
  bool isCopied = false;
  while (m_HistoryReadIndex != m_HistoryWriteIndex) {
    const Frame frame = GetHistoryFrame(m_HistoryReadIndex);
    const int entryCount = frame.header->entryCount;
    const int detailCount = frame.header->detailCount;
    if (size < entryCount * sizeof(Entry) + detailCount * sizeof(Detail) +
      sizeof(FrameHeader) * 2) {
      break;
    }

    size_t offset = sizeof(FrameHeader);
    int copiedEntryCount = 0;
    int totalProcessingTime = 0;
    for (int i = 0; i < frame.header->entryCount; i++) {
      const Entry& entry = frame.entries[i];
      if (entry.startTime != 0 || entry.processingTime != 0) {
        *reinterpret_cast<Entry*>(out + offset) = entry;
        offset += sizeof(Entry);
        copiedEntryCount++;
        totalProcessingTime += entry.processingTime;
      }
    }
    int copiedDetailCount = 0;
    for (int i = 0; i < frame.header->detailCount; i++) {
      const Detail& detail = frame.details[i];
      if (detail.startTime != 0 || detail.processingTime != 0) {
        *reinterpret_cast<Detail*>(out + offset) = detail;
        offset += sizeof(Detail);
        copiedDetailCount++;
      }
    }

    UpdateHeader(reinterpret_cast<FrameHeader*>(out), frame.header,
      totalProcessingTime, offset, copiedEntryCount, copiedDetailCount);
    size -= offset;
    copiedSize += offset;
    out += offset;
    m_HistoryReadIndex = (m_HistoryReadIndex + 1) % m_HistoryFrameCount;
    isCopied = true;
  }

  if (isCopied && size > sizeof(FrameHeader)) {
    memset(out, 0, sizeof(FrameHeader));
  }
  return copiedSize;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
bool PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  GetNextEntry(PerformanceEntryAddresses* addresses,
  PerformanceEntryType type, uint32_t nodeId) {
  if (m_IsInitialized == false) {
    return false;
  }
  const uint32_t base =
    static_cast<uint32_t>(reinterpret_cast<uintptr_t>(m_FrameBuffer));
  addresses->translatedAddress = m_TranslatedFrameBuffer;
  addresses->headerEntryCountOffset = static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(m_FrameHeader)) - base +
    offsetof(FrameHeader, entryCount);
  Entry* entry = &m_Entries[m_EntryCount];
  const uint32_t entryAddress =
    static_cast<uint32_t>(reinterpret_cast<uintptr_t>(entry));
  addresses->entryStartTimeOffset = entryAddress +
    offsetof(Entry, startTime) - base;
  addresses->entryProcessingTimeOffset = entryAddress - base +
    offsetof(Entry, processingTime);
  m_EntryCount++;
  *entry = {};
  entry->entryType = static_cast<uint8_t>(type);
  entry->nodeId = nodeId;
  return true;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
bool PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  GetNextEntry(PerformanceEntryAddresses* addresses,
  PerformanceDetailType detailType, PerformanceEntryType entryType,
  uint32_t nodeId) {
  if (m_IsInitialized == false || m_DetailCount > SysDetailCountMax) {
    return false;
  }
  const uint32_t base =
    static_cast<uint32_t>(reinterpret_cast<uintptr_t>(m_FrameBuffer));
  addresses->translatedAddress = m_TranslatedFrameBuffer;
  addresses->headerEntryCountOffset = static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(m_FrameHeader)) - base +
    offsetof(FrameHeader, detailCount);
  Detail* detail = &m_Details[m_DetailCount];
  const uint32_t detailAddress =
    static_cast<uint32_t>(reinterpret_cast<uintptr_t>(detail));
  addresses->entryStartTimeOffset = detailAddress +
    offsetof(Detail, startTime) - base;
  addresses->entryProcessingTimeOffset = detailAddress - base +
    offsetof(Detail, processingTime);
  m_DetailCount++;
  *detail = {};
  detail->detailType = static_cast<uint8_t>(detailType);
  detail->entryType = static_cast<uint8_t>(entryType);
  detail->nodeId = nodeId;
  return true;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  SetDetailTarget(uint32_t nodeId) {
  m_DetailTarget = nodeId;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
bool PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  IsDetailTarget(uint32_t nodeId) const {
  return nodeId == m_DetailTarget;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  TapNewFrame() {
  if (m_IsInitialized == false) {
    return;
  }
  if (m_HistoryFrameCount > 0) {
    const int index = m_HistoryWriteIndex;
    m_HistoryWriteIndex = (index + 1) % m_HistoryFrameCount;
    if (index >= 0 && m_HistoryFrameBuffer != nullptr &&
      m_FrameBuffer != nullptr) {
      CopyFrame(reinterpret_cast<FrameHeader*>(m_HistoryFrameBuffer +
        m_FrameSize * index), reinterpret_cast<FrameHeader*>(m_FrameBuffer),
        m_IsRenderingTimeLimitExceeded, m_VoiceDropCount, m_StartTime);
    }
  }
  m_EntryCount = 0;
  m_DetailCount = 0;
  m_FrameHeader->entryCount = 0;
  m_FrameHeader->detailCount = 0;
  m_IsRenderingTimeLimitExceeded = false;
  m_VoiceDropCount = 0;
  m_StartTime = 0;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  GetUsedEntryCounts(int* entryCount, int* detailCount) {
  *entryCount = m_EntryCount;
  *detailCount = m_DetailCount;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  RecordVoiceDropCount(int count) {
  m_VoiceDropCount = count;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  RecordRenderingStartTime(int64_t time) {
  m_StartTime = time;
}

template <typename Tag, typename FrameHeader, typename Entry,
  typename Detail, typename SysDetail>
void PerformanceManagerImpl<Tag, FrameHeader, Entry, Detail, SysDetail>::
  RecordRenderingTimeLimitExceeded() {
  m_IsRenderingTimeLimitExceeded = true;
}

}
