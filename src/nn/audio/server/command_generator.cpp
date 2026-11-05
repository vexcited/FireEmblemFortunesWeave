#include "nn/audio/server/command_generator.hpp"

namespace nn::audio::server {

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
