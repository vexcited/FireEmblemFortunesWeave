#include <algorithm>

#include "nn/audio/server/audio_render_system.hpp"
#include "nn/crypto/detail/clear_memory.hpp"
#include "nn/os/time.hpp"

namespace nn::audio::server {

namespace {

constexpr int DspClockNX = 576000000;
constexpr int DspClockDefault = 750000000;

}

Result AudioRenderSystem::Initialize(
  const audio::detail::AudioRendererParameterInternal& parameter,
  uint32_t processHandle, void* workBuffer, size_t workBufferSize,
  const applet::AppletResourceUserId& id, int sessionId) {
  if (!common::CheckValidRevision(parameter.revision)) {
    return {0xc0299};
  }
  if (GetWorkBufferSizeImpl(parameter) > workBufferSize) {
    return {0x899};
  }
  Result result = InitializeImpl(parameter, processHandle, workBuffer,
    workBufferSize, id, sessionId);
  if (result.IsSuccess()) {
    m_IsInitialized = true;
  }
  else if (!m_IsInitialized) {
    crypto::detail::ClearMemoryImpl(workBuffer, workBufferSize);
  }
  return result;
}

void AudioRenderSystem::SetUpDspRenderingTimeBudgetInfo(
  const renderer::server::RendererParameter& parameter,
  const renderer::server::TClientInfo<false>& client) {
  const float ratio = parameter.renderingTimeLimit / 100.0f;
  const int clock = parameter.behavior->IsPlatformNX()
    ? DspClockNX : DspClockDefault;
  m_VoiceDropTimeBudget.renderingTimeLimitRatio = ratio;
  m_VoiceDropTimeBudget.cycleTime =
    clock / (parameter.sampleRate / parameter.sampleCount);
  float limit;
  if (client.behavior.IsAudioRenererProcessingTimeLimit90PercentSupported()) {
    limit = 0.9f;
  }
  else if (client.behavior.
    IsAudioRenererProcessingTimeLimit80PercentSupported()) {
    limit = 0.8f;
  }
  else if (client.behavior.
    IsAudioRenererProcessingTimeLimit75PercentSupported()) {
    limit = 0.75f;
  }
  else if (client.behavior.
    IsAudioRenererProcessingTimeLimit70PercentSupported()) {
    limit = 0.7f;
  }
  else {
    limit = 0.7f;
  }
  m_VoiceDropTimeBudget.renderingTimeMax =
    m_VoiceDropTimeBudget.renderingTimeDefault = static_cast<uint32_t>(
      limit * m_VoiceDropTimeBudget.cycleTime);
  m_VoiceDropTimeBudget.renderingTimeBudget = static_cast<uint32_t>(
    m_VoiceDropTimeBudget.renderingTimeLimitRatio *
    m_VoiceDropTimeBudget.renderingTimeMax);
  m_RenderingTimeBudget.renderingTimeLimitRatio = ratio;
  m_RenderingTimeBudget.cycleTime =
    DspClockDefault / (parameter.sampleRate / parameter.sampleCount);
  m_RenderingTimeBudget.renderingTimeMax =
    m_RenderingTimeBudget.renderingTimeDefault = static_cast<uint32_t>(
      m_RenderingTimeBudget.cycleTime * 0.9f);
  m_RenderingTimeBudget.renderingTimeBudget = static_cast<uint32_t>(
    m_RenderingTimeBudget.renderingTimeLimitRatio *
    m_RenderingTimeBudget.renderingTimeMax);
}

void AudioRenderSystem::SetUpClientInfo(
  const audio::detail::AudioRendererParameterInternal& parameter,
  uint32_t processHandle, applet::AppletResourceUserId id) {
  m_ProcessHandle = processHandle;
  m_AppletResourceUserId = id;
  m_Behavior.emplace();
  m_Behavior->SetUserLibRevision(parameter.revision);
}

void AudioRenderSystem::TeardownRenderResourceSet() {
  PoolMapper(&*m_Behavior).Unmap(&m_MemoryPool);
  PoolMapper::ClearUseState(m_MemoryPools.data,
    static_cast<int>(m_MemoryPools.size));
  for (size_t i = 0; i < m_MemoryPools.size; i++) {
    if (m_MemoryPools.data[i].IsMapped()) {
      PoolMapper(&*m_Behavior).Unmap(&m_MemoryPools.data[i]);
    }
  }
  dsp::FinalizeProcessSession(*m_ProcessHandle, m_SessionId);
}

void AudioRenderSystem::FinalizeImpl() {
  m_Mutex.Lock();
  if (!m_IsActive) {
    m_Mutex.Unlock();
  }
  else {
    m_IsActive = false;
    m_Mutex.Unlock();
    if (m_Parameter.executionMode == ExecutionMode_Auto) {
      m_TerminateEvent.Wait();
    }
  }
  TeardownRenderResourceSet();
  m_ProcessHandle.reset();
  m_AppletResourceUserId.reset();
  crypto::detail::ClearMemoryImpl(m_WorkBuffer, m_WorkBufferSize);
  m_IsInitialized = false;
}

void AudioRenderSystem::SendCommandToDsp() {
  m_Mutex.Lock();
  if (m_IsInitialized) {
    os::EventType* event = m_TerminateEvent.GetBase();
    if (!m_IsActive) {
      dsp::ClearRemainCommandCount(m_SessionId);
      os::SignalEvent(event);
    }
    else {
      os::ClearEvent(event);
      if (dsp::GetRemainCommandCount(m_SessionId) != 0) {
        if (m_PerformanceManager.IsInitialized() &&
          !m_SystemDebugControl.isVoiceDumpEnabled) {
          m_PerformanceManager.RecordRenderingTimeLimitExceeded();
        }
        ++m_DspBusyCount;
      }
      else {
        m_ProcessStartTick = os::GetSystemTick();
        m_CommandList = GenerateCommandImpl(m_CommandBuffer);
        const int64_t time =
          os::GetSystemTick().value - m_ProcessStartTick.value;
        m_GenerateCommandTime = time;
        m_GenerateCommandTimeMax = std::max(m_GenerateCommandTimeMax, time);
        ++m_GenerateCommandCount;
        os::SignalSystemEvent(m_SystemEvent);
        ++m_SignalCount;
      }
      const DspAddr address = m_MemoryPool.Translate(
        static_cast<CpuAddr>(reinterpret_cast<uintptr_t>(m_CommandList.data)),
        m_CommandList.size);
      dsp::SendCommandBuffer(m_SessionId, address, m_CommandList.size,
        m_RenderingTimeBudget.renderingTimeBudget,
        m_IsCommandBufferResetRequired, m_AppletResourceUserId->lower);
      m_IsCommandBufferResetRequired = false;
    }
  }
  m_Mutex.Unlock();
}

}
