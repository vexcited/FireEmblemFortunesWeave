#include <string.h>

#include <new>
#include <type_traits>

#include "nn/audio/server/effect_info.hpp"
#include "nn/audio/server/info_updater.hpp"

namespace nn::audio::server {
namespace {

constexpr Result ResultInvalidUpdateInfo() {
  return {0x5299};
}

enum EffectOutUsageState : uint8_t {
  EffectOutUsageState_Used = 3,
  EffectOutUsageState_Removable = 4,
};

template <typename Out>
constexpr bool HasEffectResultState =
  std::is_same_v<Out, renderer::ipc::Effect::StatusData<1>>;

}

template <typename In, typename Out>
Result InfoUpdater::UpdateEffectsImpl(bool isForceUpdate) {
  using InParameter = EffectInParameterOf<In>;
  PoolMapper mapper(m_MemoryPools.data, static_cast<int>(m_MemoryPools.size),
    m_BehaviorInfo);
  const InParameter* in = reinterpret_cast<const InParameter*>(m_Input);
  Out* out = reinterpret_cast<Out*>(m_Output);
  for (int i = 0; i < m_EffectContext->GetCount(); i++) {
    EffectInfoBase* info = m_EffectContext->GetInfo(i);
    if (in[i].type != info->GetType()) {
      switch (in[i].type) {
        case EffectInfoBase::Type_Invalid:
          new (info) EffectInfoBase();
          break;
        case EffectInfoBase::Type_BufferMixer:
          memset(info, 0, sizeof(BufferMixerInfo<In>));
          new (info) BufferMixerInfo<In>;
          break;
        case EffectInfoBase::Type_Aux:
          memset(info, 0, sizeof(AuxInfo<In>));
          new (info) AuxInfo<In>;
          break;
        case EffectInfoBase::Type_Delay:
          memset(info, 0, sizeof(DelayInfo<In>));
          new (info) DelayInfo<In>;
          break;
        case EffectInfoBase::Type_Reverb:
          memset(info, 0, sizeof(ReverbInfo<In>));
          new (info) ReverbInfo<In>;
          break;
        case EffectInfoBase::Type_I3dl2Reverb:
          memset(info, 0, sizeof(I3dl2ReverbInfo<In>));
          new (info) I3dl2ReverbInfo<In>;
          break;
        case EffectInfoBase::Type_BiquadFilter:
          memset(info, 0, sizeof(BiquadFilterInfo<In>));
          new (info) BiquadFilterInfo<In>;
          break;
        case EffectInfoBase::Type_LightLimiter:
          memset(info, 0, sizeof(LightLimiterInfo<In>));
          new (info) LightLimiterInfo<In>;
          break;
        case EffectInfoBase::Type_Capture:
          memset(info, 0, sizeof(CaptureInfo<In>));
          new (info) CaptureInfo<In>;
          break;
        case EffectInfoBase::Type_Compressor:
          memset(info, 0, sizeof(CompressorInfo<In>));
          new (info) CompressorInfo<In>;
          break;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    }
    common::BehaviorParameter::ErrorInfo error{};
    info->Update(&error, &in[i], mapper);
    if (error.result.IsFailure()) {
      m_BehaviorInfo->AppendError(error);
    }
    const EffectInfoBase::UsageState state = info->GetUsageState();
    if (isForceUpdate || state == EffectInfoBase::UsageState_New) {
      out[i].usageState = state == EffectInfoBase::UsageState_Disabled
        ? EffectOutUsageState_Removable : EffectOutUsageState_Used;
    }
    else {
      out[i].usageState = EffectOutUsageState_Removable;
    }
    if constexpr (HasEffectResultState<Out>) {
      if (in[i].isNew == true) {
        info->InitializeResultState(
          m_EffectContext->GetDspSharedResultState(i));
        info->InitializeResultState(m_EffectContext->GetResultState(i));
      }
      if (info->ShouldUpdateResultState()) {
        memcpy(out[i].resultState, m_EffectContext->GetResultState(i),
          sizeof(out[i].resultState));
      }
    }
  }
  size_t consumedSize = m_EffectContext->GetCount() * sizeof(InParameter);
  if (consumedSize != m_InHeader->effectSize) {
    return ResultInvalidUpdateInfo();
  }
  size_t outSize = m_EffectContext->GetCount() * sizeof(Out);
  m_OutHeader->effectSize = outSize;
  m_OutHeader->totalSize += outSize;
  m_Input += consumedSize;
  m_Output += outSize;
  return {0};
}

Result InfoUpdater::UpdateMemoryPools() {
  PoolMapper mapper(m_BehaviorInfo);
  const auto* in =
    reinterpret_cast<const audio::MemoryPoolInfo::InParameter*>(m_Input);
  auto* out = reinterpret_cast<audio::MemoryPoolInfo::OutStatus*>(m_Output);
  for (size_t i = 0; i < m_MemoryPools.size; i++) {
    Result result = mapper.Update(&m_MemoryPools.data[i], &in[i], &out[i]);
    if (result.IsFailure()) {
      return result;
    }
  }
  const size_t consumedSize =
    m_MemoryPools.size * sizeof(audio::MemoryPoolInfo::InParameter);
  if (consumedSize != m_InHeader->memoryPoolSize) {
    return ResultInvalidUpdateInfo();
  }
  const size_t outSize =
    m_MemoryPools.size * sizeof(audio::MemoryPoolInfo::OutStatus);
  m_OutHeader->memoryPoolSize = outSize;
  m_OutHeader->totalSize += outSize;
  m_Input += consumedSize;
  m_Output += outSize;
  return {0};
}

Result InfoUpdater::UpdateVoiceChannelResources() {
  const VoiceChannelResource::InParameter* in =
    reinterpret_cast<const VoiceChannelResource::InParameter*>(m_Input);
  for (int i = 0; i < m_VoiceContext->GetCount(); i++) {
    VoiceChannelResource* resource = m_VoiceContext->GetChannelResource(i);
    resource->isUsed = in[i].isUsed;
    if (in[i].isUsed) {
      memcpy(resource->mixVolume, in[i].mixVolume,
        sizeof(resource->mixVolume));
    }
  }
  size_t consumedSize =
    m_VoiceContext->GetCount() * sizeof(VoiceChannelResource::InParameter);
  if (consumedSize != m_InHeader->voiceResourceSize) {
    return ResultInvalidUpdateInfo();
  }
  m_Input += consumedSize;
  return {0};
}

Result InfoUpdater::UpdateEffects(bool isForceUpdate) {
  if (m_BehaviorInfo->IsBiquadFilterParameterFloatSupported()) {
    return UpdateEffectsImpl<renderer::ipc::Effect::UpdateData<2>,
      renderer::ipc::Effect::StatusData<1>>(isForceUpdate);
  }
  if (m_BehaviorInfo->IsEffectInfoVersion2Supported()) {
    return UpdateEffectsImpl<renderer::ipc::Effect::UpdateData<1>,
      renderer::ipc::Effect::StatusData<1>>(isForceUpdate);
  }
  return UpdateEffectsImpl<renderer::ipc::Effect::UpdateData<0>,
    renderer::ipc::Effect::StatusData<0>>(isForceUpdate);
}

Result InfoUpdater::UpdateMixes() {
  int mixCount;
  size_t consumedSize;
  const audio::MixInfo* in;
  if (m_BehaviorInfo->IsMixInParameterDirtyOnlyUpdateSupported()) {
    const MixInParameterDirtyOnlyHeader* header =
      reinterpret_cast<const MixInParameterDirtyOnlyHeader*>(m_Input);
    mixCount = header->mixCount;
    in = reinterpret_cast<const audio::MixInfo*>(m_Input + sizeof(*header));
    consumedSize = mixCount * sizeof(audio::MixInfo) + sizeof(*header);
  }
  else {
    mixCount = m_MixContext->GetCount();
    in = reinterpret_cast<const audio::MixInfo*>(m_Input);
    consumedSize = mixCount * sizeof(audio::MixInfo);
  }

  int contextCount = m_MixContext->GetCount();
  int bufferCount = 0;
  for (int i = 0; i < mixCount; i++) {
    const audio::MixInfo& mix = in[i];
    if (mix.isInUse == true) {
      bufferCount += mix.bufferCount;
      if (mix.destinationMixId > contextCount &&
        mix.destinationMixId != MixInfo::UnusedMixId &&
        mix.mixId != MixInfo::FinalMixId) {
        return ResultInvalidUpdateInfo();
      }
    }
  }
  if (bufferCount > m_MixBufferCount) {
    return ResultInvalidUpdateInfo();
  }

  bool isDirty = false;
  for (int i = 0; i < mixCount; i++) {
    int mixId = m_BehaviorInfo->IsMixInParameterDirtyOnlyUpdateSupported()
      ? in[i].mixId : i;
    if (mixId < 0 || mixId >= m_MixContext->GetCount()) {
      continue;
    }
    MixInfo* info = m_MixContext->GetInfo(mixId);
    isDirty |= info->Update(m_MixContext->GetEdgeMatrix(), in[i],
      *m_EffectContext, *m_SplitterContext, *m_BehaviorInfo);
  }
  if (isDirty) {
    Result result = m_MixContext->Sort(*m_SplitterContext, *m_BehaviorInfo);
    if (result.IsFailure()) {
      return result;
    }
  }
  if (consumedSize != m_InHeader->mixSize) {
    return ResultInvalidUpdateInfo();
  }
  m_IsMixUpdated = isDirty;
  m_UpdatedMixCount = mixCount;
  m_Input += consumedSize;
  return {0};
}

Result InfoUpdater::UpdateSinks() {
  PoolMapper mapper(m_MemoryPools.data, static_cast<int>(m_MemoryPools.size),
    m_BehaviorInfo);
  const SinkInfoBase::InParameter* in =
    reinterpret_cast<const SinkInfoBase::InParameter*>(m_Input);
  SinkInfoBase::OutStatus* out =
    reinterpret_cast<SinkInfoBase::OutStatus*>(m_Output);
  for (int i = 0; i < m_SinkContext->GetCount(); i++) {
    SinkInfoBase* info = m_SinkContext->GetInfo(i);
    if (in[i].type != info->GetType()) {
      info->CleanUp();
      switch (in[i].type) {
        case SinkInfoBase::Type_Invalid:
          new (info) SinkInfoBase();
          break;
        case SinkInfoBase::Type_Device:
          new (info) DeviceSinkInfo();
          break;
        case SinkInfoBase::Type_CircularBuffer:
          new (info) CircularBufferSinkInfo();
          break;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    }
    common::BehaviorParameter::ErrorInfo error{};
    info->Update(&error, &out[i], &in[i], mapper);
    if (error.result.IsFailure()) {
      m_BehaviorInfo->AppendError(error);
    }
  }
  size_t consumedSize =
    m_SinkContext->GetCount() * sizeof(SinkInfoBase::InParameter);
  if (consumedSize != m_InHeader->sinkSize) {
    return ResultInvalidUpdateInfo();
  }
  uint32_t outSize =
    m_SinkContext->GetCount() * sizeof(SinkInfoBase::OutStatus);
  m_OutHeader->sinkSize = outSize;
  m_OutHeader->totalSize += outSize;
  m_Input += consumedSize;
  m_Output += outSize;
  return {0};
}

Result InfoUpdater::UpdatePerformanceBuffer(Span<std::byte> buffer) {
  PerformanceOutStatus* out = reinterpret_cast<PerformanceOutStatus*>(m_Output);
  if (m_PerformanceManager != nullptr) {
    const PerformanceInParameter* in =
      reinterpret_cast<const PerformanceInParameter*>(m_Input);
    out->historySize = static_cast<uint32_t>(
      m_PerformanceManager->CopyHistories(buffer.data, buffer.size));
    m_PerformanceManager->SetDetailTarget(in->detailTarget);
  }
  else {
    out->historySize = 0;
  }
  if (m_InHeader->performanceBufferSize != sizeof(PerformanceInParameter)) {
    return ResultInvalidUpdateInfo();
  }
  m_OutHeader->performanceBufferSize = sizeof(PerformanceOutStatus);
  m_OutHeader->totalSize += sizeof(PerformanceOutStatus);
  m_Input += sizeof(PerformanceInParameter);
  m_Output += sizeof(PerformanceOutStatus);
  return {0};
}

Result InfoUpdater::UpdateBehaviorInfo() {
  const BehaviorInParameter* in =
    reinterpret_cast<const BehaviorInParameter*>(m_Input);
  if (!common::CheckValidRevision(in->revision)) {
    return ResultInvalidUpdateInfo();
  }
  if (in->revision != m_BehaviorInfo->m_UserLibRevision) {
    return ResultInvalidUpdateInfo();
  }
  m_BehaviorInfo->ClearError();
  m_BehaviorInfo->UpdateFlags(in->flags);
  if (m_InHeader->behaviorSize != sizeof(BehaviorInParameter)) {
    return ResultInvalidUpdateInfo();
  }
  m_Input += sizeof(BehaviorInParameter);
  return {0};
}

Result InfoUpdater::UpdateErrorInfo() {
  BehaviorOutStatus* out = reinterpret_cast<BehaviorOutStatus*>(m_Output);
  m_BehaviorInfo->CopyErrorInfo(out->errors, &out->errorCount);
  m_OutHeader->behaviorSize = sizeof(BehaviorOutStatus);
  m_OutHeader->totalSize += sizeof(BehaviorOutStatus);
  m_Output += sizeof(BehaviorOutStatus);
  return {0};
}

Result InfoUpdater::CheckConsumedSize() {
  if (static_cast<size_t>(m_Input - m_InputBase) != m_InputSize) {
    return ResultInvalidUpdateInfo();
  }
  if (static_cast<size_t>(m_Output - m_OutputBase) != m_OutputSize) {
    return ResultInvalidUpdateInfo();
  }
  return {0};
}

Result InfoUpdater::UpdateSplitterInfo() {
  size_t consumedSize = 0;
  if (!m_SplitterContext->Update(reinterpret_cast<uintptr_t>(m_Input),
    consumedSize)) {
    return ResultInvalidUpdateInfo();
  }
  m_Input += consumedSize;
  return {0};
}

Result InfoUpdater::UpdateRendererInfo(int64_t elapsedFrameCount) {
  RendererInfoOutStatus* out =
    reinterpret_cast<RendererInfoOutStatus*>(m_Output);
  out->elapsedFrameCount = elapsedFrameCount;
  m_Output += sizeof(RendererInfoOutStatus);
  m_OutHeader->rendererInfoSize = sizeof(RendererInfoOutStatus);
  m_OutHeader->totalSize += sizeof(RendererInfoOutStatus);
  return {0};
}

}
