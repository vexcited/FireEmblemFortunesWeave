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

  InfoUpdater(VoiceContext* voices, EffectContext* effects, MixContext* mixes,
    SinkContext* sinks, PerformanceManager* performanceManager,
    SplitterContext* splitters, BehaviorInfo* behavior,
    Span<MemoryPoolInfo> memoryPools, int mixBufferCount)
    : m_VoiceContext(voices), m_EffectContext(effects), m_MixContext(mixes),
      m_SinkContext(sinks), m_PerformanceManager(performanceManager),
      m_SplitterContext(splitters), m_BehaviorInfo(behavior),
      m_MemoryPools(memoryPools), m_Input(nullptr), m_InputBase(nullptr),
      m_InputSize(0), m_InHeader(nullptr), m_OutHeader(nullptr),
      m_Output(nullptr), m_OutputBase(nullptr), m_OutputSize(0),
      m_MixBufferCount(mixBufferCount), m_IsMixUpdated(false),
      m_UpdatedMixCount(0) {
  }

  Result Update(void* output, size_t outputSize, void* performance,
    size_t performanceSize, const void* input, size_t inputSize,
    int64_t elapsedFrameCount, bool isRendererActive);
  Result UpdateMemoryPools();
  template <typename BiquadFilterCoefficient>
  Result UpdateVoices();
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

  bool IsMixUpdated() const {
    return m_IsMixUpdated;
  }

  int GetUpdatedMixCount() const {
    return m_UpdatedMixCount;
  }

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
