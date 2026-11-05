#include <string.h>

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
  if (m_IsInitialized == false || m_SysDetailCount > SysDetailCountMax) {
    return false;
  }
  uint32_t base = static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(m_FrameBuffer));
  addresses->translatedAddress = m_TranslatedFrameBuffer;
  addresses->headerEntryCountOffset = static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(m_FrameHeader)) - base +
    offsetof(common::PerformanceFrameHeaderVersion2, detailCount);
  PerformanceSysDetail* detail = &m_SysDetails[m_SysDetailCount];
  uint32_t detailAddress =
    static_cast<uint32_t>(reinterpret_cast<uintptr_t>(detail));
  addresses->entryStartTimeOffset = detailAddress +
    offsetof(PerformanceSysDetail, startTime) - base;
  addresses->entryProcessingTimeOffset = detailAddress - base +
    offsetof(PerformanceSysDetail, processingTime);
  m_SysDetailCount++;
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

}
