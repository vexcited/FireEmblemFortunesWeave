#include "nn/audio/common/node_states.hpp"
#include "nn/audio/server/audio_render_system.hpp"
#include "nn/audio/server/command_generator.hpp"
#include "nn/audio/server/performance_manager.hpp"

namespace nn::audio::server {
namespace {

constexpr size_t Align(size_t value, size_t alignment) {
  return (value + alignment - 1) & ~(alignment - 1);
}

constexpr size_t Count(int value) {
  return static_cast<size_t>(value);
}

}

size_t AudioRenderSystem::GetWorkBufferSizeImpl(
  const audio::detail::AudioRendererParameterInternal& parameter) {
  BehaviorInfo behavior;
  behavior.SetUserLibRevision(parameter.revision);

  const size_t mixBufferCount = Count(parameter.mixBufferCount);
  const size_t subMixCount = Count(parameter.subMixCount);
  const size_t voiceCount = Count(parameter.voiceCount);
  const size_t sinkCount = Count(parameter.sinkCount);

  // Every sink and sub mix keeps 240 extra samples per mix buffer.
  const size_t mixBufferSize = Align(((subMixCount + sinkCount) * 960 +
    Count(parameter.sampleCount) * 4) * (mixBufferCount + 6), 64);
  const size_t depopSize = Align(mixBufferCount * 4, 64);
  const size_t voiceInfoSize =
    behavior.IsBiquadFilterParameterFloatSupported() ? 568 : 544;

  size_t size = depopSize + voiceCount * 464 + subMixCount * 1024 +
    Align(voiceInfoSize * voiceCount, 16) + Align(voiceCount * 8, 16) +
    (subMixCount + 1) * 2368 + mixBufferSize +
    Align((subMixCount + 1) * 8, 16);
  if (behavior.IsSplitterSupported()) {
    const size_t nodeStatesSize =
      common::NodeStates::GetWorkBufferSize(parameter.subMixCount + 1);
    size += Align(nodeStatesSize +
      common::EdgeMatrix::GetWorkBufferSize(parameter.subMixCount + 1), 16);
  }

  size += SplitterContext::CalcWorkBufferSizeForCompat(behavior, parameter) +
    (Count(parameter.effectCount) + voiceCount * 4) * 48 + 80;
  if (behavior.IsBiquadFilterParameterForSplitterEnabled() &&
    parameter.splitterCount > 0 && parameter.splitterSendChannelCount > 0) {
    const size_t stateSize =
      behavior.IsSplitterDepopBugFixEnabled() ? 224 : 128;
    size += Align(stateSize * Count(parameter.splitterSendChannelCount), 64);
  }

  const size_t effectCount = Count(parameter.effectCount);
  size += behavior.IsEffectInfoVersion2Supported() ? effectCount * 128 : 0;
  size = Align(size, 64);
  size += (sinkCount + subMixCount) * 640 + effectCount * 1216;
  size += behavior.IsEffectInfoVersion2Supported() ? effectCount * 128 : 0;
  size += sinkCount * 368 + voiceCount * 256 + 64;

  if (parameter.performanceFrameCount > 0) {
    const size_t frameSize =
      PerformanceManager::GetRequiredBufferSizeForPerformanceMetricsPerFrame(
        behavior, parameter);
    size += Align(frameSize + frameSize *
      Count(parameter.performanceFrameCount), 64) + 192;
  }

  const size_t commandBufferSize =
    behavior.IsVariadicCommandBufferSizeSupported()
    ? CommandGenerator::CalculateCommandBufferSize(parameter, behavior)
    : 0x18000;
  size += commandBufferSize + 126;
  return Align(size, 4096);
}

}
