#pragma once

#include <stddef.h>
#include <stdint.h>

#include <iterator>

#include "nn/audio/common/node_states.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/effect_context.hpp"
#include "nn/audio/server/splitter_context.hpp"
#include "nn/span.hpp"

namespace nn::audio::server {

class MixInfo {
public:
  static constexpr int FinalMixId = 0;
  static constexpr int UnusedMixId = 0x7fffffff;
  static constexpr int UnusedSplitterId = -1;
  static constexpr int InvalidDistanceFromFinalMix = INT32_MIN;
  static constexpr int MixBufferCountMax = 24;

  MixInfo(int* effectProcessingOrder, int effectCount,
    const BehaviorInfo& behavior);

  void CleanUp();
  void ClearEffectProcessingOrder();
  bool Update(common::EdgeMatrix& edges, const audio::MixInfo& in,
    const EffectContext& effects, const SplitterContext& splitters,
    const BehaviorInfo& behavior);
  bool UpdateConnection(common::EdgeMatrix& edges, const audio::MixInfo& in,
    const SplitterContext& splitters);
  void UpdateEffectProcessingOrder(const EffectContext& effects);
  bool HasAnyConnection() const;

  bool m_IsInUse;
  uint8_t reserved0[3];
  int m_MixId;
  uint32_t m_NodeId;
  float m_Volume;
  int m_SampleRate;
  int m_BufferCount;
  float m_MixVolume[MixBufferCountMax][MixBufferCountMax];
  int* m_EffectProcessingOrder;
  int64_t m_EffectCount;
  int m_DestinationMixId;
  int m_DestinationSplitterId;
  uint8_t reserved[8];
  int m_DistanceFromFinalMix;
  int m_BufferOffset;
};

static_assert(sizeof(MixInfo) == 2368);

class MixContext {
public:
  MixContext();

  void Initialize(MixInfo** sortedInfos, MixInfo* infos, int count,
    void* nodeStatesBuffer, size_t nodeStatesSize, void* edgeMatrixBuffer,
    size_t edgeMatrixSize);
  MixInfo* GetSortedInfo(int index) const;
  void SetSortedInfo(int index, MixInfo* info);
  MixInfo* GetInfo(int index) const;
  MixInfo* GetFinalMixInfo() const;
  int GetCount() const;
  void UpdateDistancesFromFinalMix();
  Result Sort(const SplitterContext& splitters, const BehaviorInfo& behavior);
  bool SortForSplitter(const SplitterContext& splitters);
  void SortForNonSplitter();
  void CalcMixBufferOffset();

  common::EdgeMatrix& GetEdgeMatrix() {
    return m_EdgeMatrix;
  }

  const Span<MixInfo*>& GetSortedInfos() const {
    return m_SortedInfos;
  }

private:
  common::NodeStates m_NodeStates;
  common::EdgeMatrix m_EdgeMatrix;
  Span<MixInfo*> m_SortedInfos;
  Span<MixInfo> m_Infos;
};

}
