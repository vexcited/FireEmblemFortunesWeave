#include <new>
#include <string.h>

#include "nn/audio/renderer_api.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::audio {
namespace {

enum ExecutionMode {
  ExecutionMode_Auto,
  ExecutionMode_Manual,
};

enum RenderingDevice {
  RenderingDevice_AudioCoprocessor,
  RenderingDevice_Cpu,
};

constexpr size_t AlignUp(size_t value, size_t alignment) {
  return (value + alignment - 1) & ~(alignment - 1);
}

constexpr size_t BufferAlignment = 16;
constexpr size_t InParameterAlignment = 4096;
constexpr size_t UpdateDataHeaderSize = 64;
constexpr size_t MixInParameterHeaderSize = 32;
constexpr size_t PerformanceDataSize = 16;
constexpr size_t RendererInfoSize = 16;

int GetMemoryPoolCount(const AudioRendererParameter& parameter) {
  return parameter.effectCount + parameter.voiceCount * 4;
}

size_t GetInParameterSize(const AudioRendererParameter& parameter) {
  return UpdateDataHeaderSize +
    sizeof(renderer::ipc::Behavior::UpdateData<0>) +
    sizeof(renderer::ipc::MemoryPool::UpdateData<0>) *
      GetMemoryPoolCount(parameter) +
    sizeof(renderer::ipc::Voice::UpdateData<1>) * parameter.voiceCount +
    sizeof(renderer::ipc::VoiceChannelResource::UpdateData<0>) *
      parameter.voiceCount +
    sizeof(renderer::ipc::Effect::UpdateData<2>) * parameter.effectCount +
    MixInParameterHeaderSize + sizeof(MixInfo) * (parameter.subMixCount + 1) +
    sizeof(renderer::ipc::Sink::UpdateData<0>) * parameter.sinkCount +
    PerformanceDataSize +
    SplitterInfoManager::GetInParamterBufferSize(parameter.splitterCount,
      parameter.splitterSendChannelCount, parameter.subMixCount);
}

size_t GetOutStatusSize(const AudioRendererParameter& parameter) {
  return UpdateDataHeaderSize +
    sizeof(renderer::ipc::MemoryPool::StatusData<0>) *
      GetMemoryPoolCount(parameter) +
    sizeof(renderer::ipc::Voice::StatusData<0>) * parameter.voiceCount +
    sizeof(renderer::ipc::Effect::StatusData<1>) * parameter.effectCount +
    sizeof(renderer::ipc::Sink::StatusData<0>) * parameter.sinkCount +
    sizeof(renderer::ipc::Behavior::StatusData<0>) + PerformanceDataSize +
    RendererInfoSize;
}

}

bool IsValidAudioRendererParameter(const AudioRendererParameter& parameter) {
  bool isValidDevice =
    (parameter.executionMode == ExecutionMode_Manual &&
      parameter.renderingDevice == RenderingDevice_Cpu) ||
    (parameter.executionMode == ExecutionMode_Auto &&
      parameter.renderingDevice == RenderingDevice_AudioCoprocessor);
  if (parameter._magic != common::GetCurrentRevision()) {
    return false;
  }
  if (parameter.sampleRate != 48000 && parameter.sampleRate != 32000) {
    return false;
  }
  if (parameter.sampleCount != 240 && parameter.sampleCount != 160) {
    return false;
  }
  if (parameter.sampleCount != parameter.sampleRate / 200) {
    return false;
  }
  if (parameter.mixBufferCount <= 0 || parameter.voiceCount <= 0 ||
    parameter.sinkCount <= 0 || parameter.effectCount < 0) {
    return false;
  }
  return parameter.mixBufferCount <= 256 && parameter.voiceCount <= 1024 &&
    parameter.subMixCount >= 0 && parameter.sinkCount <= 256 &&
    parameter.effectCount <= 256 && parameter.subMixCount <= 256 &&
    isValidDevice;
}

void InitializeAudioRendererParameter(AudioRendererParameter* parameter) {
  *parameter = {};
  parameter->_magic = common::GetCurrentRevision();
  parameter->effectCount = 0;
  parameter->performanceFrameCount = 0;
  parameter->isVoiceDropEnabled = false;
  parameter->splitterCount = 0;
  parameter->splitterSendChannelCount = 0;
  parameter->executionMode = ExecutionMode_Auto;
  parameter->renderingDevice = RenderingDevice_AudioCoprocessor;
  parameter->sampleRate = 48000;
  parameter->sampleCount = 240;
  parameter->mixBufferCount = 1;
  parameter->subMixCount = 0;
  parameter->voiceCount = 1;
  parameter->sinkCount = 1;
}

size_t GetAudioRendererConfigWorkBufferSize(
  const AudioRendererParameter& parameter) {
  size_t size = AlignUp(sizeof(VoiceInfoManager), BufferAlignment);
  size += AlignUp(VoiceInfoManager::GetWorkBufferSize(parameter.voiceCount),
    BufferAlignment);
  size += sizeof(EffectInfoVersion2) * parameter.effectCount;
  size += AlignUp(sizeof(EffectManager), BufferAlignment);
  size += sizeof(MixInfo) * (parameter.subMixCount + 1);
  size += AlignUp(sizeof(MixManager), BufferAlignment);
  size += sizeof(SinkInfo) * parameter.sinkCount;
  size += AlignUp(sizeof(SinkManager), BufferAlignment);
  size += AlignUp(sizeof(PerformanceBufferManager), BufferAlignment);
  size += AlignUp(MemoryPoolManager::GetWorkBufferSize(parameter),
    BufferAlignment);
  size += AlignUp(sizeof(BehaviorManager), BufferAlignment);
  size += AlignUp(sizeof(SplitterInfoManager), BufferAlignment);
  size += AlignUp(
    SplitterInfoManager::GetSplitterInfoWorkBufferSize(
      parameter.splitterCount),
    BufferAlignment);
  size += AlignUp(
    SplitterInfoManager::GetSplitterDestinationWorkBufferSize(
      parameter.splitterSendChannelCount),
    BufferAlignment);
  size += AlignUp(sizeof(uint64_t), BufferAlignment);
  size = AlignUp(size, InParameterAlignment);
  size += GetInParameterSize(parameter);
  size += GetOutStatusSize(parameter);
  size = AlignUp(size, BufferAlignment);
  return AlignUp(size, InParameterAlignment);
}

void InitializeAudioRendererConfig(AudioRendererConfig* config,
  const AudioRendererParameter& parameter, void* buffer, size_t size) {
  common::WorkBufferAllocator allocator(buffer, size);
  memset(buffer, 0, size);

  auto* voiceInfoManager = new (
    allocator.Allocate(sizeof(VoiceInfoManager), BufferAlignment))
    VoiceInfoManager();
  size_t voiceWorkBufferSize =
    VoiceInfoManager::GetWorkBufferSize(parameter.voiceCount);
  void* voiceWorkBuffer =
    allocator.Allocate(voiceWorkBufferSize, BufferAlignment);
  NN_ABORT_UNLESS(voiceWorkBuffer != nullptr);

  auto* effectInfos = static_cast<EffectInfoVersion2*>(allocator.Allocate(
    sizeof(EffectInfoVersion2) * parameter.effectCount, BufferAlignment));
  for (int i = 0; i < parameter.effectCount; ++i) {
    new (&effectInfos[i]) EffectInfoVersion2();
  }
  NN_ABORT_UNLESS(effectInfos != nullptr || parameter.effectCount == 0);
  auto* effectManager = new (
    allocator.Allocate(sizeof(EffectManager), BufferAlignment))
    EffectManager(parameter.effectCount, effectInfos);

  auto* mixInfos = static_cast<MixInfo*>(allocator.Allocate(
    sizeof(MixInfo) * (parameter.subMixCount + 1), BufferAlignment));
  NN_ABORT_UNLESS(mixInfos != nullptr);
  auto* mixManager = new (
    allocator.Allocate(sizeof(MixManager), BufferAlignment))
    MixManager(mixInfos, parameter.subMixCount + 1, parameter.sampleRate,
      parameter.mixBufferCount, parameter.sampleCount);

  auto* sinkInfos = static_cast<SinkInfo*>(allocator.Allocate(
    sizeof(SinkInfo) * parameter.sinkCount, BufferAlignment));
  for (int i = 0; i < parameter.sinkCount; ++i) {
    new (&sinkInfos[i]) SinkInfo();
  }
  NN_ABORT_UNLESS(sinkInfos != nullptr);
  auto* sinkManager = new (
    allocator.Allocate(sizeof(SinkManager), BufferAlignment))
    SinkManager(parameter.sinkCount, sinkInfos, parameter.sampleCount,
      parameter.sampleRate);

  auto* performanceBufferManager = new (
    allocator.Allocate(sizeof(PerformanceBufferManager), BufferAlignment))
    PerformanceBufferManager();

  MemoryPoolManager* memoryPoolManager =
    MemoryPoolManager::CreateManager(allocator, parameter);
  NN_ABORT_UNLESS(memoryPoolManager != nullptr);

  auto* behaviorManager = new (
    allocator.Allocate(sizeof(BehaviorManager), BufferAlignment))
    BehaviorManager(common::GetCurrentRevision());

  auto* splitterInfoManager = new (
    allocator.Allocate(sizeof(SplitterInfoManager), BufferAlignment))
    SplitterInfoManager();
  size_t splitterInfoSize = SplitterInfoManager::GetSplitterInfoWorkBufferSize(
    parameter.splitterCount);
  auto* splitterInfos = static_cast<SplitterInfo*>(
    allocator.Allocate(splitterInfoSize, BufferAlignment));
  for (int i = 0; i < parameter.splitterCount; ++i) {
    new (&splitterInfos[i]) SplitterInfo(i);
  }
  NN_ABORT_UNLESS(splitterInfos != nullptr || parameter.splitterCount == 0);
  size_t destinationSize =
    SplitterInfoManager::GetSplitterDestinationWorkBufferSize(
      parameter.splitterSendChannelCount);
  auto* destinations = static_cast<SplitterDestinationData*>(
    allocator.Allocate(destinationSize, BufferAlignment));
  for (int i = 0; i < parameter.splitterSendChannelCount; ++i) {
    new (&destinations[i]) SplitterDestinationData(i);
  }
  NN_ABORT_UNLESS(destinations != nullptr ||
    parameter.splitterSendChannelCount == 0);
  splitterInfoManager->Initialize(parameter.splitterCount,
    parameter.splitterSendChannelCount, parameter.subMixCount, splitterInfos,
    splitterInfoSize, destinations, destinationSize);

  auto* elapsedFrameCount = static_cast<uint64_t*>(
    allocator.Allocate(sizeof(uint64_t) * 2, BufferAlignment));
  NN_ABORT_UNLESS(elapsedFrameCount != nullptr);

  size_t inParameterSize = GetInParameterSize(parameter);
  void* inParameter = allocator.Allocate(inParameterSize,
    InParameterAlignment);
  NN_ABORT_UNLESS(inParameter != nullptr);
  size_t outStatusSize = GetOutStatusSize(parameter);
  void* outStatus = allocator.Allocate(outStatusSize, BufferAlignment);
  NN_ABORT_UNLESS(outStatus != nullptr);

  voiceInfoManager->Initialize(parameter.voiceCount, voiceWorkBuffer,
    voiceWorkBufferSize);

  config->_pVoiceInfoManager = voiceInfoManager;
  config->_pMixManager = mixManager;
  config->_pEffectManager = effectManager;
  config->_pSinkManager = sinkManager;
  config->_pPerformanceBufferManager = performanceBufferManager;
  config->_pMemoryPoolManager = memoryPoolManager;
  config->_pBehaviorManager = behaviorManager;
  config->_pSplitterInfoManager = splitterInfoManager;
  config->_pElapsedFrameCount = elapsedFrameCount;
  config->_pInParameter = inParameter;
  config->_inParameterSize = inParameterSize;
  config->_pOutStatus = outStatus;
  config->_outStatusSize = outStatusSize;
  config->_pWorkBuffer = buffer;
  config->_workBufferSize = size;
}

uint64_t GetAudioRendererElapsedFrameCount(const AudioRendererConfig* config) {
  return *config->_pElapsedFrameCount;
}

}
