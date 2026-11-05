#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/splitter_context.hpp"

namespace nn::audio::server {

class CommandBuffer;

struct RendererSystemContext {
  int sessionId;
  int channelCount;
  int mixBufferCount;
  uint8_t reserved[4];
  const BehaviorInfo* behavior;
};

class CommandGenerator {
public:
  static size_t CalculateCommandBufferSize(
    const audio::detail::AudioRendererParameterInternal& parameter,
    const BehaviorInfo& behavior);

  ISplitterDestinationData* GetDestinationData(int splitterId, int index);
  bool UseMultiTapBiquadFilterProcessing() const;
  bool UseBiquadFilterFloatProcessing() const;
  int GetQForMixAndVolume() const;
  void GenerateCommands();
  void GenerateVoiceCommands();
  void GenerateSubMixCommands();
  void GenerateFinalMixCommands();
  void GenerateSinkCommands();
  bool IsDelayChannelMappingChanged() const;
  bool IsReverbChannelMappingChanged() const;
  bool IsI3dl2ReverbChannelMappingChanged() const;
  bool IsBiquadFilterEffectStateClearBugFixed() const;

private:
  CommandBuffer* m_CommandBuffer;
  const void* m_CommandListHeader;
  uint8_t reserved0[8];
  RendererSystemContext* m_RendererSystemContext;
  uint8_t reserved1[32];
  SplitterContext* m_SplitterContext;
};

}
