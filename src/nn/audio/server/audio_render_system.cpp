#include <algorithm>

#include "nn/audio/server/audio_render_system.hpp"
#include "nn/audio/server/command_generator.hpp"
#include "nn/audio/server/performance_manager.hpp"

namespace nn::audio::server {

size_t AudioRenderSystem::GetRequiredBufferSizeForPerformanceMetricsPerFrame(
  const BehaviorInfo& behavior,
  const audio::detail::AudioRendererParameterInternal& parameter) {
  return PerformanceManager::GetRequiredBufferSizeForPerformanceMetricsPerFrame(
    behavior, parameter);
}

void AudioRenderSystem::DumpRendererProperties() {
}

void AudioRenderSystem::DumpRendererMemoryMap() {
}

void AudioRenderSystem::SetUpSystemDebugControl() {
  m_SystemDebugControl.isPerformanceDumpEnabled = false;
  m_SystemDebugControl.isCommandDumpEnabled = false;
  m_SystemDebugControl.isVoiceDumpEnabled = false;
}

Result AudioRenderSystem::SetUpDependencies() {
  return {0};
}

void AudioRenderSystem::SetUpStaticVoiceDropController(
  const renderer::server::RendererParameter& parameter,
  const renderer::server::DspRenderingTimeBudgetInfo& budget,
  const renderer::server::TClientInfo<false>& client, VoiceContext* voices,
  renderer::server::SystemDebugControl* debug) {
  bool isEnabled = parameter.isVoiceDropEnabled;
  uint8_t executionMode = parameter.executionMode;
  StaticVoiceDropController& controller = m_VoiceDropController;
  controller.isEnabled = isEnabled;
  controller.isAutomatic = executionMode == 0;
  controller.renderingTimeBudget = budget.renderingTimeBudget;
  controller.voices = voices;
  if (!isEnabled || executionMode != 0) {
    controller.droppedVoiceCount = 0;
  }
  controller.debug = debug;
}

void AudioRenderSystem::Finalize() {
  FinalizeImpl();
}

void AudioRenderSystem::DumpStatistics() {
}

void AudioRenderSystem::TeardownDependencies() {
}

Result AudioRenderSystem::Start() {
  m_Mutex.Lock();
  m_RenderingTime = 0;
  m_IsActive = true;
  m_Mutex.Unlock();
  return {0};
}

int AudioRenderSystem::GetOutputChannelCount() {
  return 2;
}

void AudioRenderSystem::SignalSystemEvent() {
  os::SignalSystemEvent(m_SystemEvent);
  m_SignalCount++;
}

int AudioRenderSystem::GetSessionId() const {
  return m_SessionId;
}

Result AudioRenderSystem::QuerySystemEvent(uint32_t* handle) {
  // Manual execution mode renders without a system event.
  if (m_ExecutionMode != 0) {
    return {0x40299};
  }
  *handle = os::GetReadableHandleOfSystemEvent(m_SystemEvent);
  return {0};
}

void AudioRenderSystem::SetVoiceDropParameter(float parameter) {
  m_VoiceDropParameter = std::clamp(parameter, 0.0f, VoiceDropParameterMax);
}

Result AudioRenderSystem::GetWorkBufferSize(size_t* size,
  const audio::detail::AudioRendererParameterInternal& parameter) {
  if (!common::CheckValidRevision(parameter.revision)) {
    return {0xc0299};
  }
  *size = GetWorkBufferSizeImpl(parameter);
  return {0};
}

size_t AudioRenderSystem::CalculateCommandBufferSize(
  const audio::detail::AudioRendererParameterInternal& parameter,
  const BehaviorInfo& behavior) {
  if (behavior.IsVariadicCommandBufferSizeSupported()) {
    return CommandGenerator::CalculateCommandBufferSize(parameter, behavior);
  }
  return 0x18000;
}

void AudioRenderSystem::Stop() {
  m_Mutex.Lock();
  if (!m_IsActive) {
    m_Mutex.Unlock();
    return;
  }
  m_IsActive = false;
  m_Mutex.Unlock();
  if (m_ExecutionMode == ExecutionMode_Auto) {
    os::WaitEvent(reinterpret_cast<os::EventType*>(m_TerminateEvent));
  }
}

void AudioRenderSystem::SetRenderingTimeLimit(int limit) {
  m_RenderingTimeLimit = std::min(static_cast<uint32_t>(std::max(limit, 0)),
    RenderingTimeLimitMax);
  float ratio = m_RenderingTimeLimit / 100.0f;
  m_RenderingTimeBudget.renderingTimeLimitRatio = ratio;
  m_VoiceDropTimeBudget.renderingTimeLimitRatio = ratio;
  m_RenderingTimeBudget.renderingTimeBudget = static_cast<uint32_t>(
    ratio * m_RenderingTimeBudget.renderingTimeMax);
  m_VoiceDropTimeBudget.renderingTimeBudget = static_cast<uint32_t>(
    ratio * m_VoiceDropTimeBudget.renderingTimeMax);
  m_VoiceDropController.renderingTimeBudget =
    m_VoiceDropTimeBudget.renderingTimeBudget;
}

Result AudioRenderSystem::Update(void* output, size_t outputSize,
  void* performance, size_t performanceSize, const void* input,
  size_t inputSize) {
  m_ProcessStartTick = os::GetSystemTick();
  Result result = UpdateImpl(output, outputSize, performance,
    performanceSize, input, inputSize);
  int64_t time = os::GetSystemTick().value - m_ProcessStartTick.value;
  m_UpdateTime = time;
  m_UpdateTimeMax = std::max(m_UpdateTimeMax, time);
  m_UpdateCount++;
  return result;
}

Span<std::byte> AudioRenderSystem::GenerateCommand(Span<std::byte> buffer) {
  m_ProcessStartTick = os::GetSystemTick();
  Span<std::byte> commands = GenerateCommandImpl(buffer);
  int64_t time = os::GetSystemTick().value - m_ProcessStartTick.value;
  m_GenerateCommandTime = time;
  m_GenerateCommandTimeMax = std::max(m_GenerateCommandTimeMax, time);
  m_GenerateCommandCount++;
  return commands;
}

Result AudioRenderSystem::ExecuteAudioRendererRendering() {
  if (m_ExecutionMode != ExecutionMode_Manual ||
    m_RenderingDevice != RenderingDevice_Cpu) {
    return {0x40299};
  }
  dsp::CommandListProcessor processor;
  Span<std::byte> commands = GenerateCommand(m_CommandBuffer);
  processor.SetProcessTimeMax(0xffffffff);
  processor.Setup(commands.data, commands.size);
  processor.Process();
  return {0};
}

}
