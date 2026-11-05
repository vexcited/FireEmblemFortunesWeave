#include <string.h>

#include "nn/audio/renderer_config.hpp"
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
  m_IsNew = false;
  m_WasPlaying = false;
  m_Pitch = 0.0f;
  m_Volume = 0.0f;
  m_PrevVolume = 0.0f;
  m_PlayState = ServerPlayState_Stopped;
  m_Priority = LowestPriority;
  memset(m_Parameter, 0, sizeof(m_Parameter));
  m_WaveBufferCount = 0;
  m_SampleFormat = 0;
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

void VoiceContext::UpdateStateByDspShared() {
  memcpy(m_States.data, m_DspSharedStates.data,
    m_Infos.size * sizeof(VoiceState));
}

}
