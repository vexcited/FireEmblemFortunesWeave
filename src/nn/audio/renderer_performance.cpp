#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace {

constexpr uint32_t PerformanceFrameMagic = 0x46524550;

}

PerformanceInfo::PerformanceInfo()
  : m_Buffer(nullptr), m_Size(0), m_Header(nullptr), m_Entries(nullptr),
    m_Details(nullptr) {}

PerformanceInfo::~PerformanceInfo() {
  m_Buffer = nullptr;
  m_Size = 0;
  m_Header = nullptr;
  m_Entries = nullptr;
  m_Details = nullptr;
}

bool PerformanceInfo::SetFrame(const void* frame) {
  const auto* header = static_cast<const PerformanceFrameHeader*>(frame);
  if (header->magic != PerformanceFrameMagic) {
    m_Buffer = nullptr;
    m_Header = nullptr;
    m_Entries = nullptr;
    m_Details = nullptr;
    return false;
  }
  const auto* entries = reinterpret_cast<const PerformanceEntry*>(header + 1);
  m_Entries = header->entryCount != 0 ? entries : nullptr;
  m_Details = header->detailCount != 0
    ? reinterpret_cast<const PerformanceDetail*>(entries + header->entryCount)
    : nullptr;
  return true;
}

bool PerformanceInfo::SetBuffer(const void* buffer, size_t size) {
  m_Buffer = buffer;
  m_Size = size;
  m_Header = static_cast<const PerformanceFrameHeader*>(buffer);
  return SetFrame(buffer);
}

uint32_t PerformanceInfo::GetTotalProcessingTime() const {
  return m_Header->totalProcessingTime;
}

bool PerformanceInfo::IsRenderingTimeLimitExceeded() const {
  return m_Header->isRenderingTimeLimitExceeded;
}

uint32_t PerformanceInfo::GetVoiceDropCount() const {
  return m_Header->voiceDropCount;
}

int64_t PerformanceInfo::GetStartTime() const {
  return m_Header->startTime;
}

uint32_t PerformanceInfo::GetFrameIndex() const {
  return m_Header->frameIndex;
}

const PerformanceEntry* PerformanceInfo::GetEntries(int* count) const {
  *count = m_Header->entryCount;
  return m_Entries;
}

const PerformanceDetail* PerformanceInfo::GetDetails(int* count) const {
  *count = m_Header->detailCount;
  return m_Details;
}

bool PerformanceInfo::MoveToNextFrame() {
  const int nextOffset = m_Header->nextOffset;
  if (nextOffset < 1) {
    return false;
  }
  const void* frame =
    reinterpret_cast<const uint8_t*>(m_Header) + nextOffset;
  m_Buffer = frame;
  m_Header = static_cast<const PerformanceFrameHeader*>(frame);
  return SetFrame(frame);
}

void* SetPerformanceFrameBuffer(AudioRendererConfig* config, void* buffer,
  size_t size) {
  void* previous =
    config->_pPerformanceBufferManager->GetCurrentPerformanceFrameBuffer();
  config->_pPerformanceBufferManager->SetPerformanceFrameBuffer(buffer, size);
  return previous;
}

void SetPerformanceDetailTarget(AudioRendererConfig* config,
  const VoiceType* voice) {
  config->_pPerformanceBufferManager->SetDetailTarget(GetVoiceNodeId(voice));
}

void SetPerformanceDetailTarget(AudioRendererConfig* config,
  const SubMixType* mix) {
  config->_pPerformanceBufferManager->SetDetailTarget(GetSubMixNodeId(mix));
}

void SetPerformanceDetailTarget(AudioRendererConfig* config,
  const FinalMixType* mix) {
  config->_pPerformanceBufferManager->SetDetailTarget(
    GetFinalMixNodeId(mix));
}

void ClearPerformanceDetailTarget(AudioRendererConfig* config) {
  config->_pPerformanceBufferManager->SetDetailTarget(
    common::NodeIdManager::GetInvalidNodeId());
}

}
