#include <string.h>

#include <algorithm>

#include "nn/audio/renderer_config.hpp"
#include "nn/audio/server/span_iterator.hpp"
#include "nn/audio/server/voice_context.hpp"

namespace nn::audio::server {

WaveBuffer::WaveBuffer()
  : m_Buffer(CpuAddr(), 0), m_Context(CpuAddr(), 0) {
  Initialize();
}

void WaveBuffer::Initialize() {
  m_StartSampleOffset = 0;
  m_EndSampleOffset = 0;
  m_IsLoop = false;
  m_IsEndOfStream = false;
  m_Buffer.Setup(CpuAddr(), 0);
  m_Context.Setup(CpuAddr(), 0);
  m_IsSentToServer = true;
  m_LoopStartSampleOffset = 0;
  m_LoopEndSampleOffset = 0;
  m_LoopCount = 0;
}

VoiceInfo::VoiceInfo() : m_DataAddress(CpuAddr(), 0) {
  Initialize();
}

void VoiceInfo::Initialize() {
  m_Flags = 0;
  m_NodeId = 0;
  m_SampleRate = 0;
  m_Id = 0;
  m_SrcQuality = 0;
  m_ChannelCount = 0;
  m_WasPlaying = false;
  m_Pitch = 0.0f;
  m_Volume = 0.0f;
  m_PrevVolume = 0.0f;
  m_PlayState = ServerPlayState_Stopped;
  m_Priority = LowestPriority;
  memset(m_Parameter, 0, sizeof(m_Parameter));
  m_WaveBufferCount = 0;
  m_WaveBufferHead = 0;
  m_DataAddress.Setup(CpuAddr(), 0);
  m_DestinationMixId = UnusedMixId;
  m_DestinationSplitterId = UnusedSplitterId;
  for (int i = 0; i < WaveBufferCountMax; i++) {
    m_WaveBuffers[i].Initialize();
  }
  m_WaveBufferIndex = 0;
  m_WaveBufferConsumed = 0;
  m_BehaviorFlags = 0;
  m_BiquadFilterCrossFadeCurveType = 0;
  m_FlushWaveBufferCount = 0;
}

namespace {

constexpr int AdpcmFrameSampleCount = 14;
constexpr size_t AdpcmFrameSize = 8;

size_t GetAdpcmDataSize(int sampleCount) {
  const int frameCount = sampleCount / AdpcmFrameSampleCount;
  const int8_t remainder = sampleCount % AdpcmFrameSampleCount;
  const size_t tail = remainder != 0
    ? static_cast<int>(remainder / 2 + (remainder & 1) + 1) : 0;
  return tail + frameCount * AdpcmFrameSize;
}

size_t GetWaveBufferDataSize(uint8_t sampleFormat, int sampleCount) {
  switch (sampleFormat) {
    case SampleFormat_PcmInt16:
      return sampleCount * sizeof(int16_t);
    case SampleFormat_PcmFloat:
      return sampleCount * sizeof(float);
    case SampleFormat_Adpcm:
      return GetAdpcmDataSize(sampleCount);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

void VoiceInfo::UpdateWaveBuffer(common::BehaviorParameter::ErrorInfo* errors,
  WaveBuffer* waveBuffer, const renderer::ipc::Voice::WaveBuffer* in,
  uint8_t sampleFormat, bool isValid, PoolMapper& mapper,
  const BehaviorInfo& behavior) {
  if (!isValid && waveBuffer->m_IsSentToServer) {
    if (waveBuffer->m_Buffer.GetCpuAddr() != 0) {
      waveBuffer->m_Buffer.Setup(CpuAddr(), 0);
    }
  }
  if (in->isSentToServer != 0 && !IsFlagSet(Flag_IsBufferUnmapped)) {
    return;
  }
  if (in->size < GetWaveBufferDataSize(sampleFormat, in->startSampleOffset) ||
    in->size < GetWaveBufferDataSize(sampleFormat, in->endSampleOffset) ||
    in->startSampleOffset < 0 || in->endSampleOffset < 0) {
    errors[0].result = {0x5299};
    errors[0].info = in->address;
    return;
  }
  waveBuffer->m_IsSentToServer = false;
  waveBuffer->m_StartSampleOffset = in->startSampleOffset;
  waveBuffer->m_EndSampleOffset = in->endSampleOffset;
  waveBuffer->m_IsLoop = in->isLoop;
  waveBuffer->m_IsEndOfStream = in->isEndOfStream;
  waveBuffer->m_LoopCount = in->loopCount;
  waveBuffer->m_LoopStartSampleOffset = in->loopStartSampleOffset;
  waveBuffer->m_LoopEndSampleOffset = in->loopEndSampleOffset;
  SetFlag(Flag_IsBufferUnmapped, !mapper.TryAttachBuffer(&errors[0],
    &waveBuffer->m_Buffer, in->address, in->size));
  if (behavior.IsAdpcmLoopContextBugFixed() &&
    sampleFormat == SampleFormat_Adpcm && in->contextAddress != 0) {
    const bool isAttached = mapper.TryAttachBuffer(&errors[1],
      &waveBuffer->m_Context, in->contextAddress, in->contextSize);
    SetFlag(Flag_IsBufferUnmapped,
      IsFlagSet(Flag_IsBufferUnmapped) || !isAttached);
  }
  else {
    waveBuffer->m_Context.Setup(CpuAddr(), 0);
  }
}

bool VoiceInfo::ShouldUpdateWaveBuffer(
  const renderer::ipc::Voice::WaveBuffer* waveBuffer) const {
  return !waveBuffer->isSentToServer || IsFlagSet(Flag_IsBufferUnmapped);
}

bool VoiceInfo::ShouldSkip() const {
  return !IsFlagSet(Flag_IsInUse) || m_WaveBufferCount == 0 ||
    IsFlagSet(Flag_IsDataUnmapped) || IsFlagSet(Flag_IsBufferUnmapped) ||
    IsFlagSet(Flag_IsVoiceDropped);
}

void VoiceInfo::UpdatePlayState(uint8_t state) {
  m_PrevPlayState = m_PlayState;
  switch (state) {
    case PlayState_Start:
      m_PlayState = ServerPlayState_Started;
      break;
    case PlayState_Stop:
      if (m_PlayState != ServerPlayState_Stopped) {
        m_PlayState = ServerPlayState_RequestStop;
      }
      break;
    case PlayState_Pause:
      m_PlayState = ServerPlayState_Paused;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

bool VoiceInfo::UpdateForCommandGeneration(VoiceContext* context) {
  VoiceState* states[ChannelCountMax] = {};
  if (IsFlagSet(Flag_IsNew)) {
    ResetResources(context);
    m_PrevVolume = m_Volume;
    m_Flags &= ~Flag_IsNew;
  }

  const int channelCount = m_ChannelCount;
  for (int i = 0; i < channelCount; i++) {
    states[i] = context->GetDspSharedState(m_ChannelResourceIds[i]);
  }
  return UpdateParametersForCommandGeneration(states);
}

void VoiceInfo::ResetResources(VoiceContext* context) {
  const int channelCount = m_ChannelCount;
  for (int i = 0; i < channelCount; i++) {
    const int id = m_ChannelResourceIds[i];
    memset(context->GetDspSharedState(id), 0, sizeof(VoiceState));
    VoiceChannelResource* resource = context->GetChannelResource(id);
    memcpy(resource->mixVolumePrev, resource->mixVolume,
      sizeof(resource->mixVolumePrev));
  }
}

void VoiceInfo::FlushWaveBuffers(int flushCount, VoiceState** states,
  int channelCount) {
  int8_t index = m_WaveBufferHead;
  for (int i = 0; i < flushCount; i++) {
    for (int channel = 0; channel < channelCount; channel++) {
      VoiceState* state = states[channel];
      if (!m_WaveBuffers[index].m_IsSentToServer ||
        state->isWaveBufferValid[index] == true) {
        state->waveBufferIndex =
          (state->waveBufferIndex + 1) % WaveBufferCountMax;
        state->waveBufferConsumed++;
      }
      state->isWaveBufferValid[index] = false;
    }
    m_WaveBuffers[index].m_IsSentToServer = true;
    index = static_cast<int8_t>((index + 1) % WaveBufferCountMax);
  }
}

VoiceContext::VoiceContext()
  : m_Infos{nullptr, 0}, m_SortedInfos{nullptr, 0},
    m_ChannelResources{nullptr, 0}, m_States{nullptr, 0},
    m_DspSharedStates{nullptr, 0} {
}

void VoiceContext::Initialize(VoiceInfo** sortedInfos, VoiceInfo* infos,
  VoiceChannelResource* channelResources, VoiceState* states,
  VoiceState* dspSharedStates, int count) {
  uintptr_t size = static_cast<uintptr_t>(count);
  m_SortedInfos = {sortedInfos, size};
  m_Infos = {infos, size};
  m_ChannelResources = {channelResources, size};
  m_States = {states, size};
  m_DspSharedStates = {dspSharedStates, size};
  m_ActiveCount = 0;
}

VoiceState* VoiceContext::GetDspSharedState(int index) const {
  return &m_DspSharedStates.data[index];
}

VoiceChannelResource* VoiceContext::GetChannelResource(int index) const {
  return &m_ChannelResources.data[index];
}

VoiceInfo* VoiceContext::GetSortedInfo(int index) const {
  return m_SortedInfos.data[index];
}

VoiceInfo* VoiceContext::GetInfo(int index) const {
  return &m_Infos.data[index];
}

VoiceState* VoiceContext::GetState(int index) const {
  return &m_States.data[index];
}

int VoiceContext::GetCount() const {
  return static_cast<int>(m_Infos.size);
}

void VoiceContext::SortInfo() {
  for (size_t i = 0; i < m_Infos.size; i++) {
    m_SortedInfos.data[i] = &m_Infos.data[i];
  }

  SpanIterator<VoiceInfo*> begin(&m_SortedInfos, 0);
  SpanIterator<VoiceInfo*> end(&m_SortedInfos,
    static_cast<ptrdiff_t>(m_SortedInfos.size));
  const int usedCount = static_cast<int>(std::partition(begin, end,
    [](const VoiceInfo* info) { return info->IsInUse(); }) - begin);
  m_ActiveCount = std::max(m_ActiveCount, usedCount);

  const int count =
    std::min(m_ActiveCount, static_cast<int>(m_SortedInfos.size));
  if (count != 0) {
    std::sort(begin, begin + count,
      [](const VoiceInfo* lhs, const VoiceInfo* rhs) {
        if (lhs->GetPriority() != rhs->GetPriority()) {
          return lhs->GetPriority() > rhs->GetPriority();
        }
        return lhs->GetSortingOrder() > rhs->GetSortingOrder();
      });
  }
}

void VoiceContext::UpdateStateByDspShared() {
  memcpy(m_States.data, m_DspSharedStates.data,
    m_Infos.size * sizeof(VoiceState));
}

}
