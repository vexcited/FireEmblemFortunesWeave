#pragma once

#include <stddef.h>
#include <stdint.h>

#include <cstddef>

#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/effect_context.hpp"
#include "nn/audio/server/memory_pool_info.hpp"
#include "nn/audio/server/mix_context.hpp"
#include "nn/audio/server/performance_manager.hpp"
#include "nn/audio/server/sink_info.hpp"
#include "nn/audio/server/splitter_context.hpp"
#include "nn/audio/server/voice_context.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"

namespace nn::audio::renderer::ipc {

struct UpdateDataHeader {
  uint32_t revision;
  uint32_t behaviorSize;
  uint32_t memoryPoolSize;
  uint32_t voiceSize;
  uint32_t voiceResourceSize;
  uint32_t effectSize;
  uint32_t mixSize;
  uint32_t sinkSize;
  uint32_t performanceBufferSize;
  uint32_t splitterSize;
  uint32_t rendererInfoSize;
  uint8_t reserved[16];
  uint32_t totalSize;
};

static_assert(sizeof(UpdateDataHeader) == 64);

}

namespace nn::audio::server {

class InfoUpdater {
public:
  struct BehaviorInParameter {
    uint32_t revision;
    uint8_t reserved[4];
    util::BitFlagSet<64, void> flags;
  };

  struct BehaviorOutStatus {
    common::BehaviorParameter::ErrorInfo errors[BehaviorInfo::ErrorCountMax];
    int errorCount;
    uint8_t reserved[12];
  };

  struct MixInParameterDirtyOnlyHeader {
    uint32_t magic;
    int mixCount;
    uint8_t reserved[24];
  };

  struct PerformanceInParameter {
    uint32_t detailTarget;
    uint8_t reserved[12];
  };

  struct PerformanceOutStatus {
    uint32_t historySize;
    uint8_t reserved[12];
  };

  struct RendererInfoOutStatus {
    int64_t elapsedFrameCount;
    uint8_t reserved[8];
  };

  Result UpdateVoiceChannelResources();
  Result UpdateEffects(bool isForceUpdate);
  template <typename In, typename Out>
  Result UpdateEffectsImpl(bool isForceUpdate);
  Result UpdateMixes();
  Result UpdateSinks();
  Result UpdatePerformanceBuffer(Span<std::byte> buffer);
  Result UpdateBehaviorInfo();
  Result UpdateErrorInfo();
  Result CheckConsumedSize();
  Result UpdateSplitterInfo();
  Result UpdateRendererInfo(int64_t elapsedFrameCount);

private:
  VoiceContext* m_VoiceContext;
  EffectContext* m_EffectContext;
  MixContext* m_MixContext;
  SinkContext* m_SinkContext;
  PerformanceManager* m_PerformanceManager;
  SplitterContext* m_SplitterContext;
  BehaviorInfo* m_BehaviorInfo;
  Span<MemoryPoolInfo> m_MemoryPools;
  const uint8_t* m_Input;
  const uint8_t* m_InputBase;
  size_t m_InputSize;
  const renderer::ipc::UpdateDataHeader* m_InHeader;
  renderer::ipc::UpdateDataHeader* m_OutHeader;
  uint8_t* m_Output;
  uint8_t* m_OutputBase;
  size_t m_OutputSize;
  int m_MixBufferCount;
  bool m_IsMixUpdated;
  int m_UpdatedMixCount;
};

}
