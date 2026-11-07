#include <string.h>

#include <new>

#include "nn/audio/command_list_header.hpp"
#include "nn/audio/common/revision.hpp"
#include "nn/audio/server/audio_render_system.hpp"
#include "nn/audio/server/command_generator.hpp"
#include "nn/audio/server/info_updater.hpp"

namespace nn::audio::server {

Result InfoUpdater::Update(void* output, size_t outputSize, void* performance,
  size_t performanceSize, const void* input, size_t inputSize,
  int64_t elapsedFrameCount, bool isRendererActive) {
  memset(output, 0, outputSize);
  m_OutputBase = static_cast<uint8_t*>(output);
  m_OutputSize = outputSize;
  m_Output = static_cast<uint8_t*>(output);
  m_InputSize = inputSize;
  m_InHeader = static_cast<const renderer::ipc::UpdateDataHeader*>(input);
  m_Input = static_cast<const uint8_t*>(input) +
    sizeof(renderer::ipc::UpdateDataHeader);
  m_InputBase = static_cast<const uint8_t*>(input);
  m_OutHeader = new (output) renderer::ipc::UpdateDataHeader();
  reinterpret_cast<common::UpdateDataHeader*>(m_OutHeader)->Initialize(
    m_BehaviorInfo->GetProcessRevision());
  m_Output += sizeof(renderer::ipc::UpdateDataHeader);

  Result result = UpdateBehaviorInfo();
  if (result.IsFailure()) {
    return result;
  }
  result = UpdateMemoryPools();
  if (result.IsFailure()) {
    return result;
  }
  result = UpdateVoiceChannelResources();
  if (result.IsFailure()) {
    return result;
  }
  result = m_BehaviorInfo->IsBiquadFilterParameterFloatSupported()
    ? UpdateVoices<float>() : UpdateVoices<int16_t>();
  if (result.IsFailure()) {
    return result;
  }
  result = UpdateEffects(isRendererActive);
  if (result.IsFailure()) {
    return result;
  }
  if (m_BehaviorInfo->IsSplitterSupported()) {
    result = UpdateSplitterInfo();
    if (result.IsFailure()) {
      return result;
    }
  }
  result = UpdateMixes();
  if (result.IsFailure()) {
    return result;
  }
  result = UpdateSinks();
  if (result.IsFailure()) {
    return result;
  }
  result = UpdatePerformanceBuffer(
    {static_cast<std::byte*>(performance), performanceSize});
  if (result.IsFailure()) {
    return result;
  }
  result = UpdateErrorInfo();
  if (result.IsFailure()) {
    return result;
  }
  if (m_BehaviorInfo->IsElapsedFrameCountSupported()) {
    result = UpdateRendererInfo(elapsedFrameCount);
    if (result.IsFailure()) {
      return result;
    }
  }
  return CheckConsumedSize();
}

Result AudioRenderSystem::UpdateImpl(void* output, size_t outputSize,
  void* performance, size_t performanceSize, const void* input,
  size_t inputSize) {
  m_Mutex.Lock();
  PerformanceManager* performanceManager =
    m_PerformanceManager.IsInitialized() &&
    !m_SystemDebugControl.isVoiceDumpEnabled ? &m_PerformanceManager : nullptr;
  InfoUpdater updater(&m_VoiceContext, &m_EffectContext, &m_MixContext,
    &m_SinkContext, performanceManager, &m_SplitterContext, &*m_Behavior,
    m_MemoryPools, m_Parameter.mixBufferCount);
  Result result = updater.Update(output, outputSize, performance,
    performanceSize, input, inputSize, m_ElapsedFrameCount, m_IsActive);
  if (result.IsSuccess()) {
    if (updater.IsMixUpdated() == true) {
      m_Statistics.mixUpdateCount++;
    }
    m_Statistics.updatedMixCount.Record(updater.GetUpdatedMixCount());
    os::ClearSystemEvent(m_SystemEvent);
  }
  m_Mutex.Unlock();
  return result;
}

Span<std::byte> AudioRenderSystem::GenerateCommandImpl(
  Span<std::byte> buffer) {
  PoolMapper::ClearUseState(m_MemoryPools.data,
    static_cast<int>(m_MemoryPools.size));
  if (m_PerformanceManager.IsInitialized() &&
    !m_SystemDebugControl.isVoiceDumpEnabled) {
    m_PerformanceManager.TapNewFrame();
  }
  m_VoiceContext.SortInfo();

  auto* header = reinterpret_cast<CommandListHeader*>(buffer.data);
  header->mix_buffers = reinterpret_cast<int32_t*>(m_MemoryPool.Translate(
    static_cast<CpuAddr>(reinterpret_cast<uintptr_t>(m_MixBuffer.data)),
    sizeof(int32_t) * m_MixBuffer.size));
  header->mix_buffer_count = m_Parameter.mixBufferCount + 6;
  header->sample_count = m_Parameter.sampleCount;
  header->sample_rate = m_Parameter.sampleRate;

  RendererSystemContext context = {m_SessionId, 2,
    m_Parameter.mixBufferCount, {}, &*m_Behavior, m_DepopBuffer.data,
    m_UpsamplerManager, &m_MemoryPool, &m_SystemDebugControl};
  static_cast<void>(m_PerformanceManager.IsInitialized());
  CommandBuffer commandBuffer(buffer.data, buffer.size,
    sizeof(CommandListHeader), &m_MemoryPool,
    m_VoiceDropController.estimator, &*m_Behavior,
    m_Parameter.voiceDropParameter);
  CommandGenerator generator(&commandBuffer, header, &context,
    &m_VoiceContext, &m_MixContext, &m_EffectContext, &m_SinkContext,
    &m_SplitterContext,
    m_PerformanceManager.IsInitialized() &&
      !m_SystemDebugControl.isVoiceDumpEnabled ? &m_PerformanceManager
      : nullptr,
    *m_ProcessHandle);
  generator.GenerateCommands();
  header->buffer_size = commandBuffer.GetUsedSize();
  header->command_count = commandBuffer.GetCount();

  int droppedVoiceCount = 0;
  if (m_VoiceDropController.isEnabled == true &&
    m_VoiceDropController.isAutomatic &&
    !m_VoiceDropController.debug->isCommandDumpEnabled) {
    const CommandGeneratorProfileData& profile = generator.GetProfileData();
    const uint32_t otherTime =
      profile.estimatedProcessingTime - profile.voiceEndProcessingTime;
    const uint32_t budget = m_VoiceDropController.renderingTimeBudget;
    droppedVoiceCount = m_VoiceDropController.DropVoices(commandBuffer,
      budget < otherTime ? 0 : budget - otherTime);
  }

  m_VoiceContext.UpdateStateByDspShared();
  if (m_Behavior->IsEffectInfoVersion2Supported()) {
    m_EffectContext.UpdateStateByDspShared();
  }
  if (m_PerformanceManager.IsInitialized() &&
    !m_SystemDebugControl.isVoiceDumpEnabled) {
    m_PerformanceManager.RecordRenderingStartTime(
      dsp::GetRenderingStartTick(m_SessionId).value);
    m_PerformanceManager.RecordVoiceDropCount(droppedVoiceCount);
  }
  m_ElapsedFrameCount++;
  RecordStatisticsOnPostGenerateCommand(generator.GetProfileData(),
    commandBuffer.GetUsedSize(), droppedVoiceCount);
  return {buffer.data, commandBuffer.GetUsedSize()};
}

void AudioRenderSystem::RecordStatisticsOnPostGenerateCommand(
  const CommandGeneratorProfileData& profile, size_t commandBufferSize,
  int droppedVoiceCount) {
  const size_t memoryPoolCount = m_MemoryPools.size;
  m_Statistics.commandBufferSize.Record(commandBufferSize);
  m_Statistics.commandCount.Record(profile.commandCount);
  m_Statistics.voiceCommandCount.Record(profile.voiceCommandCount);
  m_Statistics.mixCommandCount.Record(profile.mixCommandCount);
  m_Statistics.sinkCommandCount.Record(profile.sinkCommandCount);
  m_Statistics.voiceCount.Record(profile.voiceCount);
  m_Statistics.voiceChannelCount.Record(profile.voiceChannelCount);
  m_Statistics.topPriorityVoiceCount.Record(profile.topPriorityVoiceCount);
  m_Statistics.splitterMixCount.Record(profile.splitterMixCount);
  m_Statistics.splitterMixBufferCount.Record(profile.splitterMixBufferCount);
  m_Statistics.effectCount.Record(profile.effectCount);
  m_Statistics.mixCount.Record(profile.mixCount);
  m_Statistics.sinkCount.Record(profile.sinkCount);

  // The system memory pool always counts as mapped.
  int mappedCount = 1;
  size_t mappedSize = 0;
  int usedCount = 0;
  for (size_t i = 0; i < memoryPoolCount; i++) {
    const MemoryPoolInfo& pool = m_MemoryPools.data[i];
    if (pool.IsMapped()) {
      mappedCount++;
      mappedSize += pool.GetSize();
    }
    usedCount += pool.IsUsed();
  }
  m_Statistics.mappedMemoryPoolCount.Record(mappedCount);
  m_Statistics.mappedMemoryPoolSize.Record(mappedSize);
  m_Statistics.usedMemoryPoolCount.Record(usedCount);

  int entryCount = 0;
  int detailCount = 0;
  if (m_PerformanceManager.IsInitialized() &&
    !m_SystemDebugControl.isVoiceDumpEnabled) {
    m_PerformanceManager.GetUsedEntryCounts(&entryCount, &detailCount);
  }
  m_Statistics.performanceEntryCount.Record(entryCount);
  m_Statistics.performanceDetailCount.Record(detailCount);
  m_Statistics.estimatedProcessingTime.Record(
    profile.estimatedProcessingTime);
  m_Statistics.voiceProcessingTime.Record(profile.voiceProcessingTime);
  m_Statistics.finalMixProcessingTime.Record(profile.finalMixProcessingTime);
  m_Statistics.otherProcessingTime.Record(profile.otherProcessingTime);
  m_Statistics.droppedVoiceCount.Record(droppedVoiceCount);
}

}
