#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/command_buffer.hpp"
#include "nn/audio/server/effect_context.hpp"
#include "nn/audio/server/splitter_context.hpp"

namespace nn::audio {

struct CommandListHeader;

}

namespace nn::audio::server {

class VoiceContext;
class VoiceInfo;
class MixContext;
class MixInfo;
class SinkContext;
class SinkInfoBase;
class PerformanceManager;

struct BufferMixerParameter {
  int8_t inputs[24];
  int8_t outputs[24];
  float volumes[24];
  int mixBufferCount;
};

struct BiquadFilterEffectParameter {
  int8_t inputs[6];
  int8_t outputs[6];
  BiquadFilterCoefficients coefficients;
  int8_t channelCount;
  uint8_t status;
};

struct AuxParameter {
  int8_t inputs[24];
  int8_t outputs[24];
  int mixBufferCount;
  uint8_t reserved[4];
  uint32_t countMax;
};

struct CommandGeneratorProfileData {
  uint32_t voiceCount;
  uint32_t voiceChannelCount;
  uint32_t splitterMixCount;
  uint32_t splitterMixBufferCount;
  uint32_t effectCount;
  uint32_t mixCount;
  uint32_t sinkCount;
  uint32_t topPriorityVoiceCount;
  uint32_t commandCount;
  uint32_t voiceCommandCount;
  uint32_t mixCommandCount;
  uint32_t sinkCommandCount;
  uint32_t estimatedProcessingTime;
  uint32_t voiceProcessingTime;
  uint32_t voiceEndProcessingTime;
  uint32_t finalMixProcessingTime;
  uint32_t otherProcessingTime;
};

class UpsamplerManager;

}

namespace nn::audio::renderer::server {

struct SystemDebugControl;

}

namespace nn::audio::server {

struct RendererSystemContext {
  int sessionId;
  int channelCount;
  int mixBufferCount;
  uint8_t reserved0[4];
  const BehaviorInfo* behavior;
  int32_t* depopBuffer;
  UpsamplerManager* upsamplerManager;
  MemoryPoolInfo* memoryPool;
  renderer::server::SystemDebugControl* debugControl;
};

class CommandGenerator {
public:
  CommandGenerator(CommandBuffer* commandBuffer,
    const CommandListHeader* commandListHeader,
    RendererSystemContext* rendererSystemContext, VoiceContext* voiceContext,
    MixContext* mixContext, EffectContext* effectContext,
    SinkContext* sinkContext, SplitterContext* splitterContext,
    PerformanceManager* performanceManager, uint32_t parameter);

  static size_t CalculateCommandBufferSize(
    const audio::detail::AudioRendererParameterInternal& parameter,
    const BehaviorInfo& behavior);

  ISplitterDestinationData* GetDestinationData(int splitterId, int index);
  bool UseMultiTapBiquadFilterProcessing() const;
  bool UseBiquadFilterFloatProcessing() const;
  int GetQForMixAndVolume() const;
  PerformanceManager* GetPerformanceManager() const {
    return m_PerformanceManager;
  }

  const CommandGeneratorProfileData& GetProfileData() const {
    return m_ProfileData;
  }

  void GenerateCommands();
  void GenerateVoiceCommand(VoiceInfo& voice);
  void GenerateSubMixCommand(MixInfo& mix);
  void GenerateFinalMixCommand();
  void GenerateVoiceCommands();
  void GenerateSubMixCommands();
  void GenerateFinalMixCommands();
  void GenerateSinkCommands();
  bool IsDelayChannelMappingChanged() const;
  bool IsReverbChannelMappingChanged() const;
  bool IsI3dl2ReverbChannelMappingChanged() const;
  bool IsBiquadFilterEffectStateClearBugFixed() const;
  void GenerateBufferMixerCommand(int bufferOffset, EffectInfoBase& effect,
    uint32_t nodeId);
  void GenerateDelayCommand(int bufferOffset, EffectInfoBase& effect,
    uint32_t nodeId);
  void GenerateReverbCommand(int bufferOffset, EffectInfoBase& effect,
    uint32_t nodeId, bool isLongSizePreDelaySupported);
  void GenerateI3dl2ReverbEffectCommand(int bufferOffset,
    EffectInfoBase& effect, uint32_t nodeId);
  void GenerateAuxCommand(int bufferOffset, EffectInfoBase& effect,
    uint32_t nodeId);
  void GenerateBiquadFilterEffectCommand(int bufferOffset,
    EffectInfoBase& effect, uint32_t nodeId);
  void GenerateLightLimiterEffectCommand(int bufferOffset,
    EffectInfoBase& effect, uint32_t nodeId, int effectIndex);
  void GenerateCaptureCommand(int bufferOffset, EffectInfoBase& effect,
    uint32_t nodeId);
  void GenerateCompressorCommand(int bufferOffset, EffectInfoBase& effect,
    uint32_t nodeId, int effectIndex);
  void GenerateEffectCommand(const MixInfo& mix);
  void GenerateMixCommands(MixInfo& mix);
  void GenerateMixCommandsWithSplitter(int input, int output, float volume,
    ISplitterDestinationData* destination, bool& isFirst, uint32_t nodeId);
  void GenerateVoiceMixCommand(const float* volumes,
    const float* previousVolumes, int* lastSamples, int bufferOffset,
    int bufferCount, int input, uint32_t nodeId);
  void GenerateVoiceMixCommandsWithSplitter(
    ISplitterDestinationData* destination, int bufferOffset, int bufferCount,
    int input, uint32_t nodeId);
  void GenerateSinkCommand(int bufferOffset, SinkInfoBase* sink);
  void GenerateDeviceSinkCommand(int bufferOffset, SinkInfoBase* sink);
  void GenerateCircularBufferSinkCommand(int bufferOffset,
    SinkInfoBase* sink);
  void GeneratePerformanceCommand(const PerformanceEntryAddresses* entry,
    PerformanceCommandType type, uint32_t nodeId);

private:
  PerformanceManager* m_PerformanceManager;
  CommandBuffer* m_CommandBuffer;
  const CommandListHeader* m_CommandListHeader;
  RendererSystemContext* m_RendererSystemContext;
  VoiceContext* m_VoiceContext;
  MixContext* m_MixContext;
  EffectContext* m_EffectContext;
  SinkContext* m_SinkContext;
  SplitterContext* m_SplitterContext;
  uint32_t m_Parameter;
  CommandGeneratorProfileData m_ProfileData;
};

static_assert(sizeof(CommandGenerator) == 144);

}
