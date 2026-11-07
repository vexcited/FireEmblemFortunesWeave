#include "nn/audio/server/command_generator.hpp"

#include <string.h>

#include <algorithm>

#include "nn/audio/commands.hpp"
#include "nn/audio/resample.hpp"
#include "nn/audio/server/mix_context.hpp"
#include "nn/audio/server/performance_manager.hpp"
#include "nn/audio/server/sink_info.hpp"
#include "nn/audio/server/upsampler_manager.hpp"
#include "nn/audio/server/voice_context.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::audio::server {

namespace {

const uint32_t InvalidNodeId = common::NodeIdManager::GetInvalidNodeId();

// The splitter biquad states keep the last mixed sample of each buffer here.
constexpr size_t BiquadFilterLastSampleOffset = 128;

// Voices with more destination buffers mix through one grouped command.
constexpr int VoiceMixRampCountMax = 8;

CpuAddr ToCpuAddr(const void* address) {
  return CpuAddr(reinterpret_cast<uintptr_t>(address));
}

template<class Command, class Parameter>
void SetEffectBuffers(Command* command, int bufferOffset,
  const Parameter& parameter) {
  for (size_t i = 0; i < parameter.channel_count; i++) {
    command->inputs[i] = bufferOffset + parameter.inputs[i];
    command->outputs[i] = bufferOffset + parameter.outputs[i];
  }
}

// Old renderers expect the center and LFE channels after the rear ones.
template<class Command, class Parameter>
void SetEffectBuffersWithChannelMapping(Command* command, int bufferOffset,
  const Parameter& parameter, bool isChannelMappingChanged) {
  SetEffectBuffers(command, bufferOffset, parameter);
  if (parameter.channel_count == 6 && !isChannelMappingChanged) {
    std::swap(command->inputs[2], command->inputs[4]);
    std::swap(command->inputs[3], command->inputs[5]);
  }
  if (parameter.channel_count == 6 && !isChannelMappingChanged) {
    std::swap(command->outputs[2], command->outputs[4]);
    std::swap(command->outputs[3], command->outputs[5]);
  }
}

}

inline void CommandBuffer::Setup(ClearMixBufferCommand* command) {
}

CommandGenerator::CommandGenerator(CommandBuffer* commandBuffer,
  const CommandListHeader* commandListHeader,
  RendererSystemContext* rendererSystemContext, VoiceContext* voiceContext,
  MixContext* mixContext, EffectContext* effectContext,
  SinkContext* sinkContext, SplitterContext* splitterContext,
  PerformanceManager* performanceManager, uint32_t parameter)
  : m_PerformanceManager(performanceManager),
    m_CommandBuffer(commandBuffer),
    m_CommandListHeader(commandListHeader),
    m_RendererSystemContext(rendererSystemContext),
    m_VoiceContext(voiceContext),
    m_MixContext(mixContext),
    m_EffectContext(effectContext),
    m_SinkContext(sinkContext),
    m_SplitterContext(splitterContext),
    m_Parameter(parameter),
    m_ProfileData() {
  m_CommandBuffer->Generate<ClearMixBufferCommand>(InvalidNodeId);
}

ISplitterDestinationData* CommandGenerator::GetDestinationData(int splitterId,
  int index) {
  if (splitterId == -1) {
    return nullptr;
  }
  return m_SplitterContext->GetDestinationData(splitterId, index);
}

bool CommandGenerator::UseMultiTapBiquadFilterProcessing() const {
  return m_RendererSystemContext->behavior->UseMultiTapBiquadFilterProcessing();
}

bool CommandGenerator::UseBiquadFilterFloatProcessing() const {
  return m_RendererSystemContext->behavior->UseBiquadFilterFloatProcessing();
}

int CommandGenerator::GetQForMixAndVolume() const {
  return m_RendererSystemContext->behavior
    ->IsVolumeMixParameterPrecisionQ23Supported() ? 23 : 15;
}

namespace {

// Effects that route a channel outside the mix buffers generate nothing.
bool IsEffectChannelValid(const MixInfo& mix, const EffectInfoBase& effect) {
  for (int i = 0; i < effect.GetChannelCount(); i++) {
    const int input = effect.GetInput(i);
    const int output = effect.GetOutput(i);
    if (output < 0 || output >= mix.m_BufferCount || input < 0 ||
      input >= mix.m_BufferCount) {
      return false;
    }
  }
  return true;
}

struct AspectParameter {
  CommandGenerator* generator;
  PerformanceEntryType entryType;
  PerformanceDetailType detailType;
  uint32_t nodeId;
};

template<class Target>
class BaseAspect {
public:
  explicit BaseAspect(Target* target) : m_Target(target) {
  }

  virtual ~BaseAspect() {
  }

  Target* operator->() const {
    return m_Target;
  }

protected:
  Target* m_Target;
};

// Brackets the commands of one node with performance start and end markers.
class EntryAspect final : public BaseAspect<CommandGenerator> {
public:
  explicit EntryAspect(const AspectParameter& parameter)
    : BaseAspect(parameter.generator), m_IsValid(false),
      m_NodeId(parameter.nodeId) {
    PerformanceManager* manager = m_Target->GetPerformanceManager();
    if (manager != nullptr && manager->IsInitialized() &&
      manager->GetNextEntry(&m_Entry, parameter.entryType, m_NodeId)) {
      m_IsValid = true;
      m_Target->GeneratePerformanceCommand(&m_Entry,
        PerformanceCommandType_Start, m_NodeId);
    }
  }

  ~EntryAspect() override {
    if (m_IsValid) {
      m_Target->GeneratePerformanceCommand(&m_Entry,
        PerformanceCommandType_End, m_NodeId);
    }
  }

private:
  PerformanceEntryAddresses m_Entry;
  bool m_IsValid;
  uint32_t m_NodeId;
};

// Same as EntryAspect, but only for the node selected as detail target.
class DetailAspect final : public BaseAspect<CommandGenerator> {
public:
  explicit DetailAspect(const AspectParameter& parameter)
    : BaseAspect(parameter.generator), m_NodeId(parameter.nodeId),
      m_IsValid(false) {
    PerformanceManager* manager = m_Target->GetPerformanceManager();
    if (manager != nullptr && manager->IsInitialized() &&
      manager->IsDetailTarget(m_NodeId) &&
      manager->GetNextEntry(&m_Entry, parameter.detailType,
        parameter.entryType, m_NodeId)) {
      m_IsValid = true;
      m_Target->GeneratePerformanceCommand(&m_Entry,
        PerformanceCommandType_Start, m_NodeId);
    }
  }

  ~DetailAspect() override {
    if (m_IsValid) {
      m_Target->GeneratePerformanceCommand(&m_Entry,
        PerformanceCommandType_End, m_NodeId);
    }
  }

private:
  PerformanceEntryAddresses m_Entry;
  uint32_t m_NodeId;
  bool m_IsValid;
};

}

void CommandGenerator::GenerateCommands() {
  GenerateVoiceCommands();
  GenerateSubMixCommands();
  GenerateFinalMixCommands();
  GenerateSinkCommands();
}

bool CommandGenerator::IsDelayChannelMappingChanged() const {
  return m_RendererSystemContext->behavior->IsDelayChannelMappingChanged();
}

bool CommandGenerator::IsReverbChannelMappingChanged() const {
  return m_RendererSystemContext->behavior->IsReverbChannelMappingChanged();
}

bool CommandGenerator::IsI3dl2ReverbChannelMappingChanged() const {
  return m_RendererSystemContext->behavior
    ->IsI3dl2ReverbChannelMappingChanged();
}

bool CommandGenerator::IsBiquadFilterEffectStateClearBugFixed() const {
  return m_RendererSystemContext->behavior
    ->IsBiquadFilterEffectStateClaerBugFixed();
}

size_t CommandGenerator::CalculateCommandBufferSize(
  const audio::detail::AudioRendererParameterInternal& parameter,
  const BehaviorInfo& behavior) {
  constexpr size_t VoiceCommandSize = 680;
  constexpr size_t VoiceCommandSizeForWaveBufferVer2 = 720;
  constexpr size_t SplitterCommandSize = 96;
  constexpr size_t EffectCommandSize = 1920;
  constexpr size_t SubMixCommandSize = 18480;
  constexpr size_t SinkCommandSize = 320;
  constexpr size_t SplitterSendCommandSize = 24;
  constexpr size_t PerformanceCommandSize = 40;
  constexpr int PerformanceCommandCountBase = 101;
  constexpr size_t FinalMixCommandSize = 816;
  size_t voiceSize = behavior.IsWaveBufferVer2Supported()
    ? VoiceCommandSizeForWaveBufferVer2 : VoiceCommandSize;
  int performanceCount = parameter.voiceCount + parameter.effectCount +
    parameter.subMixCount + parameter.sinkCount + PerformanceCommandCountBase;
  return parameter.voiceCount *
      (voiceSize + parameter.splitterCount * SplitterCommandSize) +
    parameter.effectCount * EffectCommandSize +
    parameter.subMixCount * SubMixCommandSize +
    parameter.sinkCount * SinkCommandSize +
    (parameter.splitterSendChannelCount * SplitterSendCommandSize +
      performanceCount) * PerformanceCommandSize +
    FinalMixCommandSize;
}

}

namespace nn::audio::server {

inline void CommandBuffer::Setup(BiquadFilterAndMixCommand* command,
  int input, int output, const TBiquadFilterParameter<float>& filter,
  uint8_t* state, DspAddr lastSample,
  float previousVolume, float volume, bool needInitialization,
  bool hasVolumeRamp, bool isFirstMixBuffer) {
  command->input = input;
  command->output = output;
  for (int i = 0; i < 3; i++) {
    command->coefficients.numerator[i] = filter.numerator[i];
  }
  for (int i = 0; i < 2; i++) {
    command->coefficients.denominator[i] = filter.denominator[i];
  }
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(BiquadFilterState));
  command->previousState = m_MemoryPool->Translate(
    ToCpuAddr(state + sizeof(BiquadFilterState) * 2),
    sizeof(BiquadFilterState));
  command->lastSample = lastSample;
  command->previousVolume = previousVolume;
  command->volume = volume;
  command->needInitialization = needInitialization;
  command->hasVolumeRamp = hasVolumeRamp;
  command->isFirstMixBuffer = isFirstMixBuffer;
}

inline void CommandBuffer::Setup(MultiTapBiquadFilterAndMixCommand* command,
  const TBiquadFilterParameter<float>* filters, uint8_t* states,
  DspAddr lastSample, int input, int output,
  const bool (&needInitialization)[2], float previousVolume, float volume,
  bool hasVolumeRamp, bool isFirstMixBuffer) {
  command->input = input;
  command->output = output;
  command->isFirstMixBuffer = isFirstMixBuffer;
  for (int i = 0; i < MultiTapBiquadFilterAndMixCommand::FilterCount; i++) {
    for (int j = 0; j < 3; j++) {
      command->numerator[i][j] = filters[i].numerator[j];
    }
    for (int j = 0; j < 2; j++) {
      command->denominator[i][j] = filters[i].denominator[j];
    }
    command->states[i] = m_MemoryPool->Translate(
      ToCpuAddr(states + sizeof(BiquadFilterState) * i),
      sizeof(BiquadFilterState));
    command->previousStates[i] = m_MemoryPool->Translate(
      ToCpuAddr(states + sizeof(BiquadFilterState) * (i + 2)),
      sizeof(BiquadFilterState));
    command->needInitialization[i] = needInitialization[i];
  }
  command->hasVolumeRamp = hasVolumeRamp;
  command->previousVolume = hasVolumeRamp ? previousVolume : 0.0f;
  command->volume = volume;
  command->lastSample = hasVolumeRamp ? lastSample : 0;
}

inline void CommandBuffer::Setup(MixRampCommand* command, int input,
  int output, float previousVolume, float volume, DspAddr lastSampleAddress,
  bool isHighPrecision) {
  command->input = input;
  command->output = output;
  command->volume0 = previousVolume;
  // Equal volumes keep the previous one, which only differs for signed zeros.
  command->volume1 = previousVolume == volume ? previousVolume : volume;
  command->lastSampleAddress = lastSampleAddress;
  command->isHighPrecision = isHighPrecision;
}

inline void CommandBuffer::Setup(MixRampGroupedCommand* command, int count,
  int input, int bufferOffset, const float* volumes,
  const float* previousVolumes, DspAddr lastSampleAddress,
  bool isHighPrecision) {
  command->count = count;
  for (int i = 0; i < count; i++) {
    command->inputs[i] = input;
    command->outputs[i] = bufferOffset + i;
    command->volume0[i] = previousVolumes[i];
    command->volume1[i] = previousVolumes[i] == volumes[i]
      ? previousVolumes[i] : volumes[i];
  }
  command->lastSampleAddress = lastSampleAddress;
  command->isHighPrecision = isHighPrecision;
}

inline void CommandBuffer::Setup(CopyMixBufferCommand* command, int input,
  int output) {
  command->input = input;
  command->output = output;
}

inline void CommandBuffer::Setup(DelayCommand* command, int bufferOffset,
  const EffectParameter<DelayParameter>* parameter, DelayState* state,
  bool isEnabled, bool isChannelMappingChanged, void* workBuffer) {
  SetEffectBuffersWithChannelMapping(command, bufferOffset, parameter->body,
    isChannelMappingChanged);
  command->parameter = *parameter;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(DelayState));
  command->workBuffer = workBuffer;
  command->isEnabled = isEnabled;
}

inline void CommandBuffer::Setup(ReverbCommand* command, int bufferOffset,
  const EffectParameter<ReverbParameter>* parameter, ReverbState* state,
  bool isEnabled, bool isLongSizePreDelaySupported,
  bool isChannelMappingChanged, void* workBuffer) {
  SetEffectBuffersWithChannelMapping(command, bufferOffset, parameter->body,
    isChannelMappingChanged);
  command->parameter = *parameter;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(ReverbState));
  command->workBuffer = workBuffer;
  command->isEnabled = isEnabled;
  command->isLongSizePreDelaySupported = isLongSizePreDelaySupported;
}

inline void CommandBuffer::Setup(I3dl2ReverbCommand* command, int bufferOffset,
  const EffectParameter<I3dl2ReverbParameter>* parameter,
  I3dl2ReverbState* state, bool isEnabled, bool isChannelMappingChanged,
  void* workBuffer) {
  SetEffectBuffersWithChannelMapping(command, bufferOffset, parameter->body,
    isChannelMappingChanged);
  command->parameter = *parameter;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(I3dl2ReverbState));
  command->workBuffer = workBuffer;
  command->isEnabled = isEnabled;
}

inline void CommandBuffer::Setup(CompressorCommand* command, int bufferOffset,
  const CompressorParameter* parameter, EffectResultState* statistics,
  CompressorState* state, bool isEnabled) {
  SetEffectBuffers(command, bufferOffset, *parameter);
  command->parameter = *parameter;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(CompressorState));
  if (statistics != nullptr && command->parameter.statistics_enabled == 1) {
    command->statistics = m_MemoryPool->Translate(
      ToCpuAddr(statistics),
      sizeof(CompressorStatisticsInternal));
  }
  else {
    command->statistics = 0;
  }
  command->isEnabled = isEnabled;
}

inline void CommandBuffer::Setup(LightLimiterVersion1Command* command,
  int bufferOffset, const LightLimiterParameter* parameter,
  LightLimiterState* state, bool isEnabled, void* workBuffer) {
  SetEffectBuffers(command, bufferOffset, *parameter);
  command->parameter = *parameter;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(LightLimiterState));
  command->workBuffer = workBuffer;
  command->isEnabled = isEnabled;
}

inline void CommandBuffer::Setup(LightLimiterVersion2Command* command,
  int bufferOffset, const LightLimiterParameter* parameter,
  EffectResultState* statistics, LightLimiterState* state, bool isEnabled,
  void* workBuffer) {
  SetEffectBuffers(command, bufferOffset, *parameter);
  command->parameter = *parameter;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(LightLimiterState));
  command->workBuffer = workBuffer;
  if (statistics != nullptr && command->parameter.statistics_enabled == 1) {
    command->statistics = m_MemoryPool->Translate(
      ToCpuAddr(statistics),
      sizeof(LightLimiterStatisticsInternal));
  }
  else {
    command->statistics = 0;
  }
  command->isEnabled = isEnabled;
}

inline void CommandBuffer::Setup(BiquadFilterFloatCoeffCommand* command,
  int input, int output, const BiquadFilterCoefficients& coefficients,
  BiquadFilterState* state, bool needInitialization,
  bool useFloatProcessing) {
  command->input = input;
  command->output = output;
  command->coefficients = coefficients;
  command->state = m_MemoryPool->Translate(ToCpuAddr(state),
    sizeof(BiquadFilterState));
  command->useFloatProcessing = useFloatProcessing;
  command->needInitialization = needInitialization;
}

inline void CommandBuffer::Setup(AuxCommand* command, int input, int output,
  const EffectInfoBase& effect, uint32_t countMax, uint32_t writeOffset,
  uint32_t updateCount) {
  command->input = input;
  command->output = output;
  command->sendBufferInfo = effect.GetSendBufferInfo();
  command->sendBuffer = effect.GetSendBuffer();
  command->returnBufferInfo = effect.GetReturnBufferInfo();
  command->returnBuffer = effect.GetReturnBuffer();
  command->countMax = countMax;
  command->writeOffset = writeOffset;
  command->updateCount = updateCount;
  command->isEnabled = effect.IsEnabled();
}

inline void CommandBuffer::Setup(AuxGroupedCommand* command, int bufferOffset,
  const EffectInfoBase& effect, int8_t channelCount, uint32_t updateCount) {
  const auto& parameter = effect.GetParameter<AuxParameter>();
  command->channelCount = channelCount;
  for (int i = 0; i < channelCount; i++) {
    command->inputs[i] = bufferOffset + parameter.inputs[i];
    command->outputs[i] = bufferOffset + parameter.outputs[i];
  }
  command->sendBufferInfo = effect.GetSendBufferInfo();
  command->sendBuffer = effect.GetSendBuffer();
  command->returnBufferInfo = effect.GetReturnBufferInfo();
  command->returnBuffer = effect.GetReturnBuffer();
  command->countMax = parameter.countMax;
  command->writeOffset = 0;
  command->updateCount = updateCount;
  command->isEnabled = effect.IsEnabled();
}

inline void CommandBuffer::Setup(CaptureCommand* command, int input,
  const EffectInfoBase& effect, uint32_t countMax, uint32_t writeOffset,
  uint32_t updateCount) {
  command->input = input;
  command->sendBufferInfo = effect.GetSendBufferInfo();
  command->sendBuffer = effect.GetSendBuffer();
  command->countMax = countMax;
  command->writeOffset = writeOffset;
  command->updateCount = updateCount;
  command->isEnabled = effect.IsEnabled();
}

inline void CommandBuffer::Setup(UpsampleCommand* command,
  UpsamplerInfo* upsampler, int inputCount, const int8_t (&inputs)[6],
  int bufferOffset) {
  upsampler->inputCount = inputCount;
  std::copy(inputs, inputs + 6, upsampler->inputIndices);
  command->sampleCount = upsampler->sampleCount;
  command->buffer = m_MemoryPool->Translate(ToCpuAddr(upsampler->buffer),
    sizeof(int32_t) * upsampler->sampleCount);
  command->inputCount = inputCount;
  command->bufferOffset = bufferOffset;
  for (int i = 0; i < inputCount; i++) {
    command->inputs[i] = inputs[i];
  }
  command->state = m_MemoryPool->Translate(ToCpuAddr(upsampler),
    sizeof(UpsamplerState));
}

inline void CommandBuffer::Setup(DownMix6chTo2chCommand* command,
  int bufferOffset, const int8_t (&inputs)[6], const int8_t (&outputs)[6],
  const int32_t (&downMixParameter)[4]) {
  for (int i = 0; i < 6; i++) {
    command->inputs[i] = bufferOffset + inputs[i];
  }
  for (int i = 0; i < 6; i++) {
    command->outputs[i] = bufferOffset + outputs[i];
  }
  for (int i = 0; i < 4; i++) {
    command->downMixParameter[i] = downMixParameter[i];
  }
}

inline void CommandBuffer::Setup(DeviceSinkCommand* command, int bufferOffset,
  const SinkInfoBase* sink, int sessionId, int32_t* mixBuffers) {
  const auto* parameter =
    static_cast<const renderer::ipc::Sink::DeviceParameter*>(
      sink->GetParameter());
  const auto* state =
    static_cast<const SinkInfoBase::DeviceState*>(sink->GetState());
  const bool isUpsamplerUsed = state->upsampler != nullptr;
  strncpy(command->name, parameter->name, sizeof(parameter->name));
  command->sessionId = sessionId;
  command->inputCount = parameter->channelCount;
  const int offset = isUpsamplerUsed ? 0 : bufferOffset;
  for (int i = 0; i < parameter->channelCount; i++) {
    command->inputs[i] = offset + parameter->input[i];
  }
  if (isUpsamplerUsed) {
    command->samples = reinterpret_cast<int32_t*>(m_MemoryPool->Translate(
      ToCpuAddr(state->upsampler->buffer),
      sizeof(int32_t) * state->upsampler->sampleCount *
        parameter->channelCount));
  }
  else {
    command->samples = mixBuffers;
  }
}

inline void CommandBuffer::Setup(CircularBufferSinkCommand* command,
  int bufferOffset, const SinkInfoBase* sink) {
  const auto* parameter =
    static_cast<const renderer::ipc::Sink::CircularBufferParameter*>(
      sink->GetParameter());
  const auto* state =
    static_cast<const CircularBufferSinkState*>(sink->GetState());
  command->inputCount = parameter->channelCount;
  for (int i = 0; i < parameter->channelCount; i++) {
    command->inputs[i] = bufferOffset + parameter->input[i];
  }
  command->address = state->m_Address.GetReference(true);
  command->size = parameter->size;
  command->position = state->m_CurrentWritePosition;
}

inline void CommandBuffer::Setup(PerformanceCommand* command,
  const PerformanceEntryAddresses* entry, PerformanceCommandType type) {
  command->translatedAddress = entry->translatedAddress;
  command->type = type;
  command->entryStartTimeOffset = entry->entryStartTimeOffset;
  command->headerEntryCountOffset = entry->headerEntryCountOffset;
  command->entryProcessingTimeOffset = entry->entryProcessingTimeOffset;
}

inline void CommandBuffer::Setup(VolumeCommand* command, int buffer,
  int32_t volume, int8_t precision) {
  command->input = buffer;
  command->output = buffer;
  command->precision = precision;
  command->volume = volume;
}

// The depop decay is a Q15 coefficient per output sample rate.
inline void CommandBuffer::Setup(DepopForMixBuffersCommand* command,
  int bufferOffset, int bufferCount, int sampleRate, int32_t* depopBuffer) {
  command->bufferOffset = bufferOffset;
  command->bufferCount = bufferCount;
  command->decay = sampleRate == 48000 ? 31529 : 30923;
  command->depopBuffer = m_MemoryPool->Translate(ToCpuAddr(depopBuffer),
    sizeof(int32_t) * bufferCount);
}

void CommandGenerator::GenerateBufferMixerCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId) {
  const bool isHighPrecision = m_RendererSystemContext->behavior
    ->IsVolumeMixParameterPrecisionQ23Supported();
  if (effect.IsEnabled()) {
    const auto& parameter = effect.GetParameter<BufferMixerParameter>();
    for (int i = 0; i < parameter.mixBufferCount; i++) {
      if (parameter.volumes[i] != 0.0f) {
        m_CommandBuffer->Generate<MixCommand>(nodeId,
          bufferOffset + parameter.inputs[i],
          bufferOffset + parameter.outputs[i], parameter.volumes[i],
          isHighPrecision);
      }
    }
  }
}

void CommandGenerator::GenerateDelayCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId) {
  void* workBuffer = effect.GetWorkBuffer(-1);
  m_CommandBuffer->Generate<DelayCommand>(nodeId, bufferOffset,
    &effect.GetParameter<EffectParameter<DelayParameter>>(),
    effect.GetState<DelayState>(), effect.IsEnabled(),
    IsDelayChannelMappingChanged(), workBuffer);
}

void CommandGenerator::GenerateReverbCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId, bool isLongSizePreDelaySupported) {
  void* workBuffer = effect.GetWorkBuffer(-1);
  m_CommandBuffer->Generate<ReverbCommand>(nodeId, bufferOffset,
    &effect.GetParameter<EffectParameter<ReverbParameter>>(),
    effect.GetState<ReverbState>(), effect.IsEnabled(),
    isLongSizePreDelaySupported, IsReverbChannelMappingChanged(),
    workBuffer);
}

void CommandGenerator::GenerateI3dl2ReverbEffectCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId) {
  void* workBuffer = effect.GetWorkBuffer(-1);
  m_CommandBuffer->Generate<I3dl2ReverbCommand>(nodeId, bufferOffset,
    &effect.GetParameter<EffectParameter<I3dl2ReverbParameter>>(),
    effect.GetState<I3dl2ReverbState>(), effect.IsEnabled(),
    IsI3dl2ReverbChannelMappingChanged(), workBuffer);
}

void CommandGenerator::GenerateLightLimiterEffectCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId, int effectIndex) {
  void* workBuffer = effect.GetWorkBuffer(-1);
  const auto* parameter = &effect.GetParameter<LightLimiterParameter>();
  auto* state = effect.GetState<LightLimiterState>();
  if (m_RendererSystemContext->behavior->IsEffectInfoVersion2Supported()) {
    EffectResultState* statistics =
      m_EffectContext->GetDspSharedResultState(effectIndex);
    m_CommandBuffer->Generate<LightLimiterVersion2Command>(nodeId,
      bufferOffset, parameter, statistics, state, effect.IsEnabled(),
      workBuffer);
  }
  else {
    m_CommandBuffer->Generate<LightLimiterVersion1Command>(nodeId,
      bufferOffset, parameter, state, effect.IsEnabled(), workBuffer);
  }
}

void CommandGenerator::GenerateCompressorCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId, int effectIndex) {
  m_CommandBuffer->Generate<CompressorCommand>(nodeId, bufferOffset,
    &effect.GetParameter<CompressorParameter>(),
    m_EffectContext->GetDspSharedResultState(effectIndex),
    effect.GetState<CompressorState>(), effect.IsEnabled());
}

void CommandGenerator::GenerateAuxCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId) {
  if (effect.IsEnabled()) {
    effect.GetWorkBuffer(0);
    effect.GetWorkBuffer(1);
  }
  if (effect.GetSendBuffer() == 0 || effect.GetReturnBuffer() == 0) {
    return;
  }
  const auto& parameter = effect.GetParameter<AuxParameter>();
  const int8_t channelCount = parameter.mixBufferCount;
  if (m_RendererSystemContext->behavior->IsAuxGroupCommandSupported() &&
    channelCount <= 6) {
    m_CommandBuffer->Generate<AuxGroupedCommand>(nodeId, bufferOffset, effect,
      channelCount, m_CommandListHeader->sample_count * channelCount);
    return;
  }
  uint32_t writeOffset = 0;
  for (int i = 0; i < channelCount; i++) {
    uint32_t nextOffset = writeOffset + m_CommandListHeader->sample_count;
    uint32_t updateCount = i == channelCount - 1 ? nextOffset : 0;
    m_CommandBuffer->Generate<AuxCommand>(nodeId,
      bufferOffset + parameter.inputs[i], bufferOffset + parameter.outputs[i],
      effect, parameter.countMax, writeOffset, updateCount);
    writeOffset = nextOffset;
  }
}

void CommandGenerator::GenerateBiquadFilterEffectCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId) {
  const auto& parameter = effect.GetParameter<BiquadFilterEffectParameter>();
  const int8_t channelCount = parameter.channelCount;
  if (effect.IsEnabled()) {
    const bool needInitialization = parameter.status == 0 ||
      (!IsBiquadFilterEffectStateClearBugFixed() && parameter.status == 1);
    const BiquadFilterCoefficients coefficients = parameter.coefficients;
    auto* states = effect.GetState<BiquadFilterState>();
    for (int i = 0; i < channelCount; i++) {
      m_CommandBuffer->Generate<BiquadFilterFloatCoeffCommand>(nodeId,
        bufferOffset + parameter.inputs[i], bufferOffset + parameter.outputs[i],
        coefficients, &states[i], needInitialization,
        UseBiquadFilterFloatProcessing());
    }
  }
  else {
    for (int i = 0; i < channelCount; i++) {
      m_CommandBuffer->Generate<CopyMixBufferCommand>(nodeId,
        bufferOffset + parameter.inputs[i],
        bufferOffset + parameter.outputs[i]);
    }
  }
}

void CommandGenerator::GenerateCaptureCommand(int bufferOffset,
  EffectInfoBase& effect, uint32_t nodeId) {
  if (effect.IsEnabled()) {
    effect.GetWorkBuffer(0);
  }
  if (effect.GetSendBuffer() == 0) {
    return;
  }
  const auto& parameter = effect.GetParameter<AuxParameter>();
  const int channelCount = parameter.mixBufferCount;
  uint32_t writeOffset = 0;
  for (int i = 0; i < channelCount; i++) {
    uint32_t nextOffset = writeOffset + m_CommandListHeader->sample_count;
    uint32_t updateCount = i == channelCount - 1 ? nextOffset : 0;
    m_CommandBuffer->Generate<CaptureCommand>(nodeId,
      bufferOffset + parameter.inputs[i], effect, parameter.countMax,
      writeOffset, updateCount);
    writeOffset = nextOffset;
  }
}

void CommandGenerator::GenerateSinkCommand(int bufferOffset,
  SinkInfoBase* sink) {
  if (sink->ShouldSkip()) {
    return;
  }
  switch (sink->GetType()) {
    case SinkInfoBase::Type_Device:
      GenerateDeviceSinkCommand(bufferOffset, sink);
      break;
    case SinkInfoBase::Type_CircularBuffer:
      GenerateCircularBufferSinkCommand(bufferOffset, sink);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  sink->UpdateForCommandGeneration();
  m_ProfileData.sinkCount++;
}

void CommandGenerator::GenerateDeviceSinkCommand(int bufferOffset,
  SinkInfoBase* sink) {
  const auto* state =
    static_cast<const SinkInfoBase::DeviceState*>(sink->GetState());
  const auto* parameter =
    static_cast<const renderer::ipc::Sink::DeviceParameter*>(
      sink->GetParameter());
  // Both values are read before the down mix decision.
  const bool isDownMixParameterEnabled = parameter->isDownMixParameterEnabled;
  const int channelCount = m_RendererSystemContext->channelCount;
  if (isDownMixParameterEnabled && channelCount <= 2) {
    m_CommandBuffer->Generate<DownMix6chTo2chCommand>(InvalidNodeId,
      bufferOffset, parameter->input, parameter->input,
      state->downMixParameter);
  }
  if (state->upsampler != nullptr) {
    UpsamplerInfo* upsampler = state->upsampler;
    m_CommandBuffer->Generate<UpsampleCommand>(InvalidNodeId, upsampler,
      parameter->channelCount, parameter->input, bufferOffset);
  }
  m_CommandBuffer->Generate<DeviceSinkCommand>(InvalidNodeId, bufferOffset,
    sink, m_RendererSystemContext->sessionId,
    m_CommandListHeader->mix_buffers);
}

void CommandGenerator::GenerateCircularBufferSinkCommand(int bufferOffset,
  SinkInfoBase* sink) {
  m_CommandBuffer->Generate<CircularBufferSinkCommand>(InvalidNodeId,
    bufferOffset, sink);
}

void CommandGenerator::GeneratePerformanceCommand(
  const PerformanceEntryAddresses* entry, PerformanceCommandType type,
  uint32_t nodeId) {
  m_CommandBuffer->Generate<PerformanceCommand>(nodeId, entry, type);
}

void CommandGenerator::GenerateVoiceCommands() {
  const int commandCount = m_CommandBuffer->GetCount();
  const uint32_t processingTime = m_CommandBuffer->GetEstimatedProcessingTime();
  for (int i = 0; i < m_VoiceContext->GetCount(); i++) {
    VoiceInfo* voice = m_VoiceContext->GetSortedInfo(i);
    if (!voice->ShouldSkip() &&
      voice->UpdateForCommandGeneration(m_VoiceContext)) {
      EntryAspect({this, PerformanceEntryType_Voice,
        PerformanceDetailType_Invalid, voice->GetNodeId()})
        ->GenerateVoiceCommand(*voice);
    }
  }
  m_SplitterContext->UpdateInternalState();
  m_ProfileData.commandCount = m_CommandBuffer->GetCount();
  m_ProfileData.voiceCommandCount +=
    m_CommandBuffer->GetCount() - commandCount;
  m_ProfileData.estimatedProcessingTime =
    m_CommandBuffer->GetEstimatedProcessingTime();
  m_ProfileData.voiceEndProcessingTime =
    m_CommandBuffer->GetEstimatedProcessingTime();
  m_ProfileData.voiceProcessingTime +=
    m_CommandBuffer->GetEstimatedProcessingTime() - processingTime;
}

void CommandGenerator::GenerateSubMixCommands() {
  const int commandCount = m_CommandBuffer->GetCount();
  const uint32_t processingTime = m_CommandBuffer->GetEstimatedProcessingTime();
  const auto& infos = m_MixContext->GetSortedInfos();
  const size_t count = infos.size;
  for (size_t i = 0; i != count; i++) {
    MixInfo* mix = infos.data[i];
    if (mix->m_IsInUse && mix->m_MixId != MixInfo::FinalMixId) {
      EntryAspect({this, PerformanceEntryType_SubMix,
        PerformanceDetailType_Invalid, mix->m_NodeId})
        ->GenerateSubMixCommand(*mix);
    }
  }
  m_ProfileData.commandCount = m_CommandBuffer->GetCount();
  m_ProfileData.mixCommandCount += m_CommandBuffer->GetCount() - commandCount;
  m_ProfileData.estimatedProcessingTime =
    m_CommandBuffer->GetEstimatedProcessingTime();
  m_ProfileData.otherProcessingTime +=
    m_CommandBuffer->GetEstimatedProcessingTime() - processingTime;
}

void CommandGenerator::GenerateFinalMixCommands() {
  const int commandCount = m_CommandBuffer->GetCount();
  const uint32_t processingTime = m_CommandBuffer->GetEstimatedProcessingTime();
  EntryAspect({this, PerformanceEntryType_FinalMix,
    PerformanceDetailType_Invalid, m_MixContext->GetFinalMixInfo()->m_NodeId})
    ->GenerateFinalMixCommand();
  m_ProfileData.commandCount = m_CommandBuffer->GetCount();
  m_ProfileData.mixCommandCount += m_CommandBuffer->GetCount() - commandCount;
  m_ProfileData.estimatedProcessingTime =
    m_CommandBuffer->GetEstimatedProcessingTime();
  m_ProfileData.finalMixProcessingTime +=
    m_CommandBuffer->GetEstimatedProcessingTime() - processingTime;
}

void CommandGenerator::GenerateSinkCommands() {
  const int commandCount = m_CommandBuffer->GetCount();
  const uint32_t processingTime = m_CommandBuffer->GetEstimatedProcessingTime();
  // Circular buffer sinks read the mix buffers before device sinks.
  const uint8_t sinkTypes[] = {
    SinkInfoBase::Type_CircularBuffer,
    SinkInfoBase::Type_Device,
  };
  for (const uint8_t type : sinkTypes) {
    for (int i = 0; i < m_SinkContext->GetCount(); i++) {
      SinkInfoBase* sink = m_SinkContext->GetInfo(i);
      if (!sink->IsUsed() || type != sink->GetType()) {
        continue;
      }
      const int sampleRate = m_CommandListHeader->sample_rate;
      if (sink->GetType() == SinkInfoBase::Type_Device) {
        const auto* state =
          static_cast<const SinkInfoBase::DeviceState*>(sink->GetState());
        if (sampleRate != 48000 && state->upsampler == nullptr) {
          static_cast<SinkInfoBase::DeviceState*>(sink->GetDeviceState())
            ->upsampler = m_RendererSystemContext->upsamplerManager->Allocate();
        }
      }
      EntryAspect({this, PerformanceEntryType_Sink,
        PerformanceDetailType_Invalid, sink->GetNodeId()})
        ->GenerateSinkCommand(m_MixContext->GetFinalMixInfo()->m_BufferOffset,
          sink);
    }
  }
  m_ProfileData.commandCount = m_CommandBuffer->GetCount();
  m_ProfileData.sinkCommandCount += m_CommandBuffer->GetCount() - commandCount;
  m_ProfileData.estimatedProcessingTime =
    m_CommandBuffer->GetEstimatedProcessingTime();
  m_ProfileData.otherProcessingTime +=
    m_CommandBuffer->GetEstimatedProcessingTime() - processingTime;
}

void CommandGenerator::GenerateEffectCommand(const MixInfo& mix) {
  const int bufferOffset = mix.m_BufferOffset;
  const bool isLongSizePreDelaySupported =
    m_RendererSystemContext->behavior->IsLongSizePreDelaySupported();
  const int count = m_EffectContext->GetCount();
  const int* processingOrder = mix.m_EffectProcessingOrder;
  for (int i = 0; i < count; i++) {
    const int index = processingOrder[i];
    if (index == -1) {
      break;
    }
    EffectInfoBase* effect = m_EffectContext->GetInfo(index);
    if (!effect->ShouldSkip() && IsEffectChannelValid(mix, *effect)) {
      const uint32_t nodeId = mix.m_NodeId;
      const PerformanceEntryType entryType =
        mix.m_MixId != MixInfo::FinalMixId
          ? PerformanceEntryType_SubMix : PerformanceEntryType_FinalMix;
      switch (effect->GetType()) {
        case EffectInfoBase::Type_BufferMixer:
          DetailAspect({this, entryType, PerformanceDetailType_Mix,
            nodeId})->GenerateBufferMixerCommand(bufferOffset, *effect,
              nodeId);
          break;
        case EffectInfoBase::Type_Aux:
          DetailAspect({this, entryType, PerformanceDetailType_Aux, nodeId})
            ->GenerateAuxCommand(bufferOffset, *effect, nodeId);
          break;
        case EffectInfoBase::Type_Delay:
          DetailAspect({this, entryType, PerformanceDetailType_Delay, nodeId})
            ->GenerateDelayCommand(bufferOffset, *effect, nodeId);
          break;
        case EffectInfoBase::Type_Reverb:
          DetailAspect({this, entryType, PerformanceDetailType_Reverb,
            nodeId})->GenerateReverbCommand(bufferOffset, *effect, nodeId,
              isLongSizePreDelaySupported);
          break;
        case EffectInfoBase::Type_I3dl2Reverb:
          DetailAspect({this, entryType, PerformanceDetailType_I3dl2Reverb,
            nodeId})->GenerateI3dl2ReverbEffectCommand(bufferOffset, *effect,
              nodeId);
          break;
        case EffectInfoBase::Type_BiquadFilter:
          DetailAspect({this, entryType, PerformanceDetailType_BiquadFilter,
            nodeId})->GenerateBiquadFilterEffectCommand(bufferOffset, *effect,
              nodeId);
          break;
        case EffectInfoBase::Type_LightLimiter:
          DetailAspect({this, entryType, PerformanceDetailType_LightLimiter,
            nodeId})->GenerateLightLimiterEffectCommand(bufferOffset, *effect,
              nodeId, index);
          break;
        case EffectInfoBase::Type_Capture:
          DetailAspect({this, entryType, PerformanceDetailType_Capture,
            nodeId})->GenerateCaptureCommand(bufferOffset, *effect, nodeId);
          break;
        case EffectInfoBase::Type_Compressor:
          DetailAspect({this, entryType, PerformanceDetailType_Compressor,
            nodeId})->GenerateCompressorCommand(bufferOffset, *effect, nodeId,
              index);
          break;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
      m_ProfileData.effectCount++;
    }
    effect->UpdateForCommandGeneration();
  }
}

void CommandGenerator::GenerateSubMixCommand(MixInfo& mix) {
  m_CommandBuffer->Generate<DepopForMixBuffersCommand>(mix.m_NodeId,
    mix.m_BufferOffset, mix.m_BufferCount, mix.m_SampleRate,
    m_RendererSystemContext->depopBuffer);
  GenerateEffectCommand(mix);
  DetailAspect({this, PerformanceEntryType_SubMix, PerformanceDetailType_Mix,
    mix.m_NodeId})->GenerateMixCommands(mix);
  m_ProfileData.mixCount++;
}

void CommandGenerator::GenerateFinalMixCommand() {
  MixInfo* mix = m_MixContext->GetFinalMixInfo();
  m_CommandBuffer->Generate<DepopForMixBuffersCommand>(mix->m_NodeId,
    mix->m_BufferOffset, mix->m_BufferCount, mix->m_SampleRate,
    m_RendererSystemContext->depopBuffer);
  GenerateEffectCommand(*mix);
  const uint32_t nodeId = mix->m_NodeId;
  const int8_t precision = GetQForMixAndVolume();
  for (int i = 0; i < mix->m_BufferCount; i++) {
    DetailAspect({this, PerformanceEntryType_FinalMix,
      PerformanceDetailType_Volume, nodeId})
      ->m_CommandBuffer->Generate<VolumeCommand>(nodeId,
      mix->m_BufferOffset + i,
      static_cast<int32_t>(mix->m_Volume * static_cast<float>(1u << precision)),
      precision);
  }
  m_ProfileData.mixCount++;
}

void CommandGenerator::GenerateMixCommands(MixInfo& mix) {
  const bool isHighPrecision = m_RendererSystemContext->behavior->
    IsVolumeMixParameterPrecisionQ23Supported();
  if (!mix.HasAnyConnection()) {
    return;
  }

  if (mix.m_DestinationSplitterId == MixInfo::UnusedSplitterId) {
    for (int i = 0; i < mix.m_BufferCount; i++) {
      MixInfo* destination = m_MixContext->GetInfo(mix.m_DestinationMixId);
      for (int j = 0; j < destination->m_BufferCount; j++) {
        const float volume = mix.m_Volume * mix.m_MixVolume[i][j];
        if (volume != 0.0f) {
          m_CommandBuffer->Generate<MixCommand>(mix.m_NodeId,
            mix.m_BufferOffset + i, destination->m_BufferOffset + j, volume,
            isHighPrecision);
        }
      }
    }
    return;
  }

  for (int i = 0; mix.m_DestinationSplitterId != MixInfo::UnusedSplitterId;
    i++) {
    ISplitterDestinationData* destination =
      m_SplitterContext->GetDestinationData(mix.m_DestinationSplitterId, i);
    if (destination == nullptr) {
      break;
    }
    if (!destination->IsConfigured()) {
      continue;
    }
    if (destination->GetMixId() >= m_MixContext->GetCount() ||
      destination->GetMixId() == MixInfo::UnusedMixId) {
      continue;
    }
    MixInfo* destinationMix = m_MixContext->GetInfo(destination->GetMixId());
    const int input = mix.m_BufferOffset + i % mix.m_BufferCount;
    bool isFirst = true;
    for (int j = 0; j < destinationMix->m_BufferCount; j++) {
      const float volume = mix.m_Volume * destination->GetMixVolume(j);
      if (volume != 0.0f) {
        const int output = j + destinationMix->m_BufferOffset;
        if (destination->IsBiquadFilterEnabled()) {
          GenerateMixCommandsWithSplitter(input, output, volume, destination,
            isFirst, mix.m_NodeId);
        }
        else {
          m_CommandBuffer->Generate<MixCommand>(mix.m_NodeId, input, output,
            volume, isHighPrecision);
        }
      }
      m_ProfileData.splitterMixBufferCount++;
    }
  }
  m_ProfileData.splitterMixCount++;
}

void CommandGenerator::GenerateMixCommandsWithSplitter(int input, int output,
  float volume, ISplitterDestinationData* destination, bool& isFirst,
  uint32_t nodeId) {
  auto* data = static_cast<SplitterDestinationDataVer2*>(destination);
  const auto* filters = static_cast<const TBiquadFilterParameter<float>*>(
    data->SplitterDestinationDataVer2::GetBiquadFilterParameter());
  if (filters[0].enable && filters[1].enable) {
    const bool needInitialization[] = {
      !data->IsBiquadFilterEnabledPrev(0),
      !data->IsBiquadFilterEnabledPrev(1),
    };
    DetailAspect({this, PerformanceEntryType_SubMix,
      PerformanceDetailType_BiquadFilterAndMix, nodeId})
      ->m_CommandBuffer->Generate<MultiTapBiquadFilterAndMixCommand>(
      nodeId, filters, data->m_BiquadFilterState, 0,
      static_cast<int8_t>(input), static_cast<int8_t>(output),
      needInitialization, 0.0f, volume, false, isFirst);
    data->m_IsBiquadFilterEnabledPrev[0] = filters[0].enable;
    data->m_IsBiquadFilterEnabledPrev[1] = filters[1].enable;
    isFirst = false;
    return;
  }

  for (int i = 0; i < SplitterDestinationDataVer2::BiquadFilterCount; i++) {
    if (filters[i].enable) {
      const bool needInitialization = !data->IsBiquadFilterEnabledPrev(i);
      uint8_t* state =
        data->m_BiquadFilterState + sizeof(BiquadFilterState) * i;
      DetailAspect({this, PerformanceEntryType_SubMix,
        PerformanceDetailType_BiquadFilterAndMix, nodeId})
        ->m_CommandBuffer->Generate<BiquadFilterAndMixCommand>(nodeId,
        input, output, filters[i], state, 0, 0.0f, volume,
        needInitialization, false, isFirst);
      isFirst = false;
    }
    data->m_IsBiquadFilterEnabledPrev[i] = filters[i].enable;
  }
}

void CommandGenerator::GenerateVoiceMixCommandsWithSplitter(
  ISplitterDestinationData* destination, int bufferOffset, int bufferCount,
  int input, uint32_t nodeId) {
  const float* volumes = destination->GetMixVolume();
  const float* previousVolumes = destination->GetMixVolumePrev();
  auto* data = static_cast<SplitterDestinationDataVer2*>(destination);
  const auto* filters = static_cast<const TBiquadFilterParameter<float>*>(
    data->SplitterDestinationDataVer2::GetBiquadFilterParameter());
  bool isFirst = true;
  // The second flag is only tested on its low bit.
  const bool isSecondEnabled =
    (*reinterpret_cast<const uint8_t*>(&filters[1].enable) & 1) != 0;
  if (filters[0].enable && isSecondEnabled) {
    for (int i = 0; i < bufferCount; i++) {
      int output = bufferOffset + i;
      int source = input;
      float previousVolume = previousVolumes[i];
      float volume = volumes[i];
      DspAddr lastSample = m_RendererSystemContext->memoryPool->Translate(
        ToCpuAddr(data->m_BiquadFilterState + BiquadFilterLastSampleOffset +
          sizeof(float) * i), sizeof(float));
      if (previousVolume == 0.0f && volume == 0.0f) {
        continue;
      }
      bool needInitialization[] = {
        !data->IsBiquadFilterEnabledPrev(0),
        !data->IsBiquadFilterEnabledPrev(1),
      };
      DetailAspect({this, PerformanceEntryType_Voice,
        PerformanceDetailType_BiquadFilterAndMix, nodeId})
        ->m_CommandBuffer->Generate<MultiTapBiquadFilterAndMixCommand>(
        nodeId, filters, static_cast<uint8_t*>(data->m_BiquadFilterState),
        lastSample, source,
        output, needInitialization, previousVolume, volume, true, isFirst);
      isFirst = false;
      data->m_IsBiquadFilterEnabledPrev[0] = filters[0].enable;
      data->m_IsBiquadFilterEnabledPrev[1] = filters[1].enable;
    }
    return;
  }

  for (int i = 0; i < bufferCount; i++) {
    const float volume = volumes[i];
    const float previousVolume = previousVolumes[i];
    const DspAddr lastSample = m_RendererSystemContext->memoryPool->Translate(
      ToCpuAddr(data->m_BiquadFilterState + BiquadFilterLastSampleOffset +
        sizeof(float) * i), sizeof(float));
    if (previousVolume == 0.0f && volume == 0.0f) {
      continue;
    }
    for (int j = 0; j < SplitterDestinationDataVer2::BiquadFilterCount; j++) {
      if (!filters[j].enable) {
        data->m_IsBiquadFilterEnabledPrev[j] = false;
        continue;
      }
      const bool needInitialization = !data->IsBiquadFilterEnabledPrev(j);
      uint8_t* state =
        data->m_BiquadFilterState + sizeof(BiquadFilterState) * j;
      DetailAspect({this, PerformanceEntryType_Voice,
        PerformanceDetailType_BiquadFilterAndMix, nodeId})
        ->m_CommandBuffer->Generate<BiquadFilterAndMixCommand>(nodeId,
        input, bufferOffset + i, filters[j], state, lastSample,
        previousVolume, volume, needInitialization, true, isFirst);
      isFirst = false;
      data->m_IsBiquadFilterEnabledPrev[j] = filters[j].enable;
    }
  }
}

void CommandGenerator::GenerateVoiceMixCommand(const float* volumes,
  const float* previousVolumes, int* lastSamples, int bufferOffset,
  int bufferCount, int input, uint32_t nodeId) {
  const bool isHighPrecision = m_RendererSystemContext->behavior->
    IsVolumeMixParameterPrecisionQ23Supported();
  if (bufferCount > VoiceMixRampCountMax) {
    const DspAddr address = m_RendererSystemContext->memoryPool->Translate(
      ToCpuAddr(lastSamples), sizeof(int32_t) * bufferCount);
    m_CommandBuffer->Generate<MixRampGroupedCommand>(nodeId, bufferCount,
      input, bufferOffset, volumes, previousVolumes, address,
      isHighPrecision);
    return;
  }

  for (int i = 0; i < bufferCount; i++) {
    const float previousVolume = previousVolumes[i];
    const float volume = volumes[i];
    const DspAddr address = m_RendererSystemContext->memoryPool->Translate(
      ToCpuAddr(&lastSamples[i]), sizeof(int32_t));
    if (previousVolume != 0.0f || volume != 0.0f) {
      m_CommandBuffer->Generate<MixRampCommand>(nodeId, input,
        bufferOffset + i, previousVolume, volume, address, isHighPrecision);
    }
  }
}

}
