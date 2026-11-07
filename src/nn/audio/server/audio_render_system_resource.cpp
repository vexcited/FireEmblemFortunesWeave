#include <string.h>

#include <algorithm>
#include <new>

#include "nn/audio/common/revision.hpp"
#include "nn/audio/server/audio_render_system.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio::server {

namespace {

constexpr int UpsamplerSampleRate = 32000;
constexpr int TargetSampleRate = 48000;
constexpr int ReservedMixBufferCount = 6;

template <class T>
[[gnu::always_inline]] T* AllocateObjects(common::WorkBufferAllocator& allocator, int count,
  size_t alignment) {
  T* objects = static_cast<T*>(allocator.Allocate(sizeof(T) * count,
    alignment));
  for (int i = 0; i < count; i++) {
    new (&objects[i]) T();
  }
  return objects;
}

size_t GetUpsamplerWorkBufferSize(
  const renderer::server::RendererParameter& parameter) {
  if (parameter.executionMode != AudioRenderSystem::ExecutionMode_Auto ||
    parameter.sampleRate != UpsamplerSampleRate) {
    return 0;
  }
  const int channelCount =
    std::min(parameter.mixBufferCount, MixInfo::MixBufferCountMax);
  const int sampleCount =
    TargetSampleRate / (parameter.sampleRate / parameter.sampleCount);
  return static_cast<int>(sizeof(int32_t)) * channelCount * sampleCount;
}

int GetEffectResultStateCount(
  const renderer::server::RendererParameter& parameter) {
  if (!parameter.behavior->IsEffectInfoVersion2Supported()) {
    return 0;
  }
  return std::max(parameter.effectCount, 0);
}

size_t GetEffectResultStateBufferSize(
  const renderer::server::RendererParameter& parameter) {
  if (!parameter.behavior->IsEffectInfoVersion2Supported()) {
    return 0;
  }
  return sizeof(EffectResultState) *
    static_cast<uint32_t>(std::max(parameter.effectCount, 0));
}

size_t GetSplitterDestinationStateBufferSize(
  const renderer::server::RendererParameter& parameter) {
  if (!parameter.behavior->IsSplitterSupported() ||
    !parameter.behavior->IsBiquadFilterParameterForSplitterEnabled() ||
    parameter.splitterCount < 1) {
    return 0;
  }
  return (sizeof(SplitterDestinationState) *
    parameter.splitterSendChannelCount + 63) & ~size_t{63};
}

}

AudioRenderSystem::AudioRenderSystem(os::SystemEvent& event)
  : m_SystemEvent(event.GetBase()) {
}

void AudioRenderSystem::SetUpRendererParameter(
  const audio::detail::AudioRendererParameterInternal& parameter,
  BehaviorInfo* behavior) {
  m_Parameter.voiceCount = parameter.voiceCount;
  m_Parameter.subMixCount = parameter.subMixCount;
  m_Parameter.sinkCount = parameter.sinkCount;
  m_Parameter.effectCount = parameter.effectCount;
  m_Parameter.performanceFrameCount = parameter.performanceFrameCount;
  m_Parameter.splitterCount = parameter.splitterCount;
  m_Parameter.splitterSendChannelCount = parameter.splitterSendChannelCount;
  m_Parameter.isVoiceDropEnabled = parameter.isVoiceDropEnabled &&
    parameter.executionMode == ExecutionMode_Auto;
  m_Parameter.mixBufferCount = parameter.mixBufferCount;
  m_Parameter.sampleCount = parameter.sampleCount;
  m_Parameter.sampleRate = parameter.sampleRate;
  m_Parameter.memoryPoolCount =
    parameter.effectCount + parameter.voiceCount * 4;
  m_Parameter.executionMode = static_cast<int8_t>(parameter.executionMode);
  m_Parameter.renderingDevice =
    static_cast<int8_t>(parameter.renderingDevice);
  m_Parameter.parameter = parameter;
  m_Parameter.renderingTimeLimit = RenderingTimeLimitMax;
  m_Parameter.voiceDropParameter = 1.0f;
  m_Parameter.behavior = behavior;
}

Result AudioRenderSystem::SetUpRenderResourceSet(
  const renderer::server::RendererParameter& parameter,
  uint32_t processHandle, void* workBuffer, size_t workBufferSize) {
  common::WorkBufferAllocator allocator(workBuffer, workBufferSize);
  memset(workBuffer, 0, workBufferSize);

  m_WorkBuffer = nullptr;
  m_WorkBufferSize = 0;
  m_DspSharedWorkBuffer = {};
  m_MixBuffer = {};
  m_DepopBuffer = {};
  m_PerformanceBuffer = {};
  m_MemoryPools = {};
  m_UpsamplerManager = nullptr;
  m_UpsamplerInfos = {};

  dsp::InitializeProcessSession(processHandle, m_SessionId, false);
  m_MemoryPool.SetUp(os::GetCurrentProcessHandle(), *m_Behavior,
    std::nullopt);
  PoolMapper(&*m_Behavior).InitializeSystemPool(&m_MemoryPool, workBuffer,
    workBufferSize);
  m_WorkBuffer = workBuffer;
  m_WorkBufferSize = workBufferSize;

  const int mixBufferSampleCount =
    (parameter.mixBufferCount + ReservedMixBufferCount) *
    parameter.sampleCount;
  int32_t* mixBuffer = static_cast<int32_t*>(allocator.Allocate(
    sizeof(int32_t) * mixBufferSampleCount, 16));
  m_MixBuffer = {mixBuffer, static_cast<uintptr_t>(mixBufferSampleCount)};
  if (mixBufferSampleCount == 0) {
    goto Failure;
  }

  {
    int8_t* upsamplerBuffer = nullptr;
    if (m_Parameter.sampleRate == UpsamplerSampleRate &&
      m_Parameter.executionMode == ExecutionMode_Auto) {
      upsamplerBuffer = static_cast<int8_t*>(allocator.Allocate(
        GetUpsamplerWorkBufferSize(parameter), 16));
      if (upsamplerBuffer == nullptr) {
        goto Failure;
      }
    }

    int32_t* depopBuffer = static_cast<int32_t*>(allocator.Allocate(
      (sizeof(int32_t) * parameter.mixBufferCount + 63) & ~size_t{63}, 64));
    const int depopCount = parameter.mixBufferCount;
    m_DepopBuffer = {depopBuffer, static_cast<uintptr_t>(depopCount)};
    if (depopCount == 0) {
      goto Failure;
    }

    const size_t usedSize = allocator.GetUsedSize();
    dsp::InvalidateDspCache(os::GetCurrentProcessHandle(), -1,
      m_MemoryPool.Translate(
        static_cast<CpuAddr>(reinterpret_cast<uintptr_t>(mixBuffer)),
        usedSize),
      usedSize);

    VoiceInfo* voiceInfos =
      AllocateObjects<VoiceInfo>(allocator, parameter.voiceCount, 16);
    if (voiceInfos == nullptr) {
      goto Failure;
    }
    VoiceInfo** sortedVoiceInfos = static_cast<VoiceInfo**>(
      allocator.Allocate(sizeof(VoiceInfo*) * parameter.voiceCount, 16));
    if (sortedVoiceInfos == nullptr) {
      goto Failure;
    }
    VoiceChannelResource* channelResources =
      static_cast<VoiceChannelResource*>(allocator.Allocate(
        sizeof(VoiceChannelResource) * parameter.voiceCount, 16));
    for (int i = 0; i < parameter.voiceCount; i++) {
      new (&channelResources[i]) VoiceChannelResource(i);
    }
    if (channelResources == nullptr) {
      goto Failure;
    }
    VoiceState* voiceStates = static_cast<VoiceState*>(allocator.Allocate(
      sizeof(VoiceState) * parameter.voiceCount, 16));
    if (voiceStates == nullptr) {
      goto Failure;
    }

    const int subMixCount = parameter.subMixCount;
    const int mixCount = subMixCount + 1;
    MixInfo* mixInfos = static_cast<MixInfo*>(
      allocator.Allocate(sizeof(MixInfo) * mixCount, 16));
    if (mixInfos == nullptr) {
      goto Failure;
    }
    const int effectOrderCount =
      parameter.effectCount + parameter.effectCount * parameter.subMixCount;
    if (effectOrderCount <= 0) {
      for (int i = 0; i < mixCount; i++) {
        new (&mixInfos[i]) MixInfo(nullptr, 0, *m_Behavior);
      }
    }
    else {
      int* effectOrders = static_cast<int*>(allocator.Allocate(
        sizeof(int) * static_cast<uint32_t>(effectOrderCount), 16));
      if (effectOrders == nullptr) {
        goto Failure;
      }
      for (int i = 0; i < mixCount; i++) {
        new (&mixInfos[i])
          MixInfo(effectOrders, parameter.effectCount, *m_Behavior);
        effectOrders += parameter.effectCount;
      }
    }
    mixInfos[0].m_MixId = MixInfo::FinalMixId;

    MixInfo** sortedMixInfos = static_cast<MixInfo**>(
      allocator.Allocate(sizeof(MixInfo*) * mixCount, 16));
    if (sortedMixInfos == nullptr) {
      goto Failure;
    }
    if (m_Behavior->IsSplitterSupported()) {
      const size_t nodeStatesSize =
        common::NodeStates::GetWorkBufferSize(mixCount);
      void* nodeStates = allocator.Allocate(nodeStatesSize, 1);
      const size_t edgeMatrixSize =
        common::EdgeMatrix::GetWorkBufferSize(mixCount);
      void* edgeMatrix = allocator.Allocate(edgeMatrixSize, 1);
      if (nodeStates == nullptr || edgeMatrix == nullptr) {
        goto Failure;
      }
      m_MixContext.Initialize(sortedMixInfos, mixInfos, mixCount, nodeStates,
        nodeStatesSize, edgeMatrix, edgeMatrixSize);
    }
    else {
      m_MixContext.Initialize(sortedMixInfos, mixInfos, mixCount, nullptr, 0,
        nullptr, 0);
    }

    if (m_Parameter.sampleRate == UpsamplerSampleRate &&
      m_Parameter.executionMode == ExecutionMode_Auto) {
      m_UpsamplerManager = static_cast<UpsamplerManager*>(
        allocator.Allocate(sizeof(UpsamplerManager), 16));
      if (m_UpsamplerManager == nullptr) {
        goto Failure;
      }
    }

    MemoryPoolInfo* memoryPools = AllocateObjects<MemoryPoolInfo>(allocator,
      parameter.memoryPoolCount, 16);
    m_MemoryPools = {memoryPools,
      static_cast<uintptr_t>(parameter.memoryPoolCount)};
    if (memoryPools == nullptr && parameter.memoryPoolCount != 0) {
      goto Failure;
    }
    for (size_t i = 0; i < m_MemoryPools.size; i++) {
      m_MemoryPools.data[i].SetUp(processHandle, *m_Behavior, m_SessionId);
    }

    const size_t splitterSize = SplitterContext::CalcWorkBufferSize(
      *m_Behavior, parameter.GetParameterInternal());
    void* splitterBuffer = allocator.Allocate(splitterSize, 16);

    EffectResultState* effectResultStates = nullptr;
    if (m_Parameter.behavior->IsEffectInfoVersion2Supported() &&
      m_Parameter.effectCount > 0) {
      effectResultStates = static_cast<EffectResultState*>(
        allocator.Allocate(GetEffectResultStateBufferSize(m_Parameter), 16));
      if (effectResultStates == nullptr) {
        goto Failure;
      }
    }

    allocator.Allocate(64 - (allocator.GetUsedSize() & 63), 1);
    m_DspSharedWorkBuffer = {
      static_cast<std::byte*>(m_WorkBuffer) + allocator.GetUsedSize(),
      allocator.GetFreeSize()};

    if (m_Parameter.sampleRate == UpsamplerSampleRate &&
      m_Parameter.executionMode == ExecutionMode_Auto) {
      UpsamplerInfo* upsamplerInfos = static_cast<UpsamplerInfo*>(
        allocator.Allocate(sizeof(UpsamplerInfo), 64));
      new (upsamplerInfos) UpsamplerInfo();
      m_UpsamplerInfos = {upsamplerInfos, 1};
      new (m_UpsamplerManager)
        UpsamplerManager(1, upsamplerInfos, upsamplerBuffer);
    }

    EffectInfoBase* effectInfos = AllocateObjects<EffectInfoBase>(allocator,
      parameter.effectCount, 64);
    if (effectInfos == nullptr && parameter.effectCount != 0) {
      goto Failure;
    }
    EffectResultState* dspSharedResultStates = nullptr;
    int dspSharedResultStateCount = 0;
    if (parameter.behavior->IsEffectInfoVersion2Supported() &&
      parameter.effectCount > 0) {
      dspSharedResultStates = static_cast<EffectResultState*>(
        allocator.Allocate(GetEffectResultStateBufferSize(parameter), 64));
      if (dspSharedResultStates == nullptr) {
        goto Failure;
      }
      dspSharedResultStateCount = GetEffectResultStateCount(parameter);
    }
    m_EffectContext.Initialize(effectInfos, parameter.effectCount,
      effectResultStates, dspSharedResultStates, dspSharedResultStateCount);

    SinkInfoBase* sinkInfos =
      AllocateObjects<SinkInfoBase>(allocator, parameter.sinkCount, 16);
    if (sinkInfos == nullptr) {
      goto Failure;
    }
    m_SinkContext.Initialize(sinkInfos, parameter.sinkCount);

    VoiceState* dspSharedVoiceStates = static_cast<VoiceState*>(
      allocator.Allocate(sizeof(VoiceState) * parameter.voiceCount, 64));
    if (dspSharedVoiceStates == nullptr) {
      goto Failure;
    }
    m_VoiceContext.Initialize(sortedVoiceInfos, voiceInfos, channelResources,
      voiceStates, dspSharedVoiceStates, parameter.voiceCount);

    SplitterDestinationState* splitterStates = nullptr;
    if (m_Parameter.behavior->IsSplitterSupported() &&
      m_Parameter.behavior->IsBiquadFilterParameterForSplitterEnabled() &&
      m_Parameter.splitterCount > 0 &&
      m_Parameter.splitterSendChannelCount > 0) {
      splitterStates = static_cast<SplitterDestinationState*>(
        allocator.Allocate(
          GetSplitterDestinationStateBufferSize(m_Parameter), 16));
      if (splitterStates == nullptr) {
        goto Failure;
      }
    }

    if (!m_SplitterContext.Initialize(*m_Behavior,
      parameter.GetParameterInternal(), splitterBuffer, splitterSize,
      splitterStates)) {
      goto Failure;
    }

    if (parameter.performanceFrameCount > 0) {
      const size_t frameSize = PerformanceManager::
        GetRequiredBufferSizeForPerformanceMetricsPerFrame(*m_Behavior,
          parameter.GetParameterInternal());
      const size_t performanceSize =
        frameSize + frameSize * parameter.performanceFrameCount + 12;
      void* performanceBuffer = allocator.Allocate(performanceSize, 64);
      m_PerformanceBuffer = {static_cast<std::byte*>(performanceBuffer),
        performanceSize};
      if (performanceSize == 0) {
        goto Failure;
      }
      m_PerformanceManager.Initialize(performanceBuffer, performanceSize,
        parameter.GetParameterInternal(), *m_Behavior, m_MemoryPool);
    }

    const size_t commandBufferSize = allocator.GetFreeSize() & ~size_t{63};
    m_CommandBuffer = {
      static_cast<std::byte*>(allocator.Allocate(commandBufferSize, 64)),
      commandBufferSize};
    if (commandBufferSize == 0) {
      goto Failure;
    }
    m_CommandList = {};
    dsp::FlushDataCache(workBuffer, workBufferSize);
    return {0};
  }

Failure:
  TeardownRenderResourceSet();
  return {0x899};
}

}
