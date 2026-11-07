#include <string.h>

#include <algorithm>

#include "nn/audio/server/mix_context.hpp"
#include "nn/audio/server/span_iterator.hpp"

namespace nn::audio::server {

MixInfo::MixInfo(int* effectProcessingOrder, int effectCount,
  const BehaviorInfo& behavior)
  : m_IsInUse(false), reserved0{}, m_MixId(UnusedMixId), m_NodeId(0),
    m_Volume(0.0f), m_SampleRate(0), m_BufferCount(0),
    m_EffectProcessingOrder(effectProcessingOrder),
    m_EffectCount(effectCount), m_DestinationMixId(UnusedMixId),
    m_DestinationSplitterId(UnusedSplitterId), reserved{},
    m_DistanceFromFinalMix(InvalidDistanceFromFinalMix), m_BufferOffset(0) {
  memset(m_MixVolume, 0, sizeof(m_MixVolume));
  ClearEffectProcessingOrder();
}

void MixInfo::CleanUp() {
  m_IsInUse = false;
  memset(reserved0, 0, sizeof(reserved0));
  m_MixId = UnusedMixId;
  m_NodeId = 0;
  m_Volume = 0.0f;
  m_SampleRate = 0;
  m_BufferCount = 0;
  m_EffectProcessingOrder = nullptr;
  m_EffectCount = 0;
  m_DestinationMixId = UnusedMixId;
  m_BufferOffset = 0;
  memset(m_MixVolume, 0, sizeof(m_MixVolume));
  m_DestinationSplitterId = UnusedSplitterId;
  memset(reserved, 0, sizeof(reserved));
}

void MixInfo::ClearEffectProcessingOrder() {
  for (int64_t i = 0; i < m_EffectCount; i++) {
    m_EffectProcessingOrder[i] = -1;
  }
}

bool MixInfo::Update(common::EdgeMatrix& edges, const audio::MixInfo& in,
  const EffectContext& effects, const SplitterContext& splitters,
  const BehaviorInfo& behavior) {
  bool wasInUse = m_IsInUse;
  m_IsInUse = in.isInUse;
  if (!m_IsInUse) {
    if (m_IsInUse == wasInUse) {
      return false;
    }
    ClearEffectProcessingOrder();
    return true;
  }
  m_Volume = in.volume;
  m_SampleRate = in.sampleRate;
  m_BufferCount = in.bufferCount;
  m_MixId = in.mixId;
  m_NodeId = in.nodeId;
  memcpy(m_MixVolume, in.mixVolume, sizeof(m_MixVolume));
  bool isDirty;
  if (behavior.IsSplitterSupported()) {
    isDirty = UpdateConnection(edges, in, splitters);
  }
  else {
    isDirty = m_DestinationMixId != in.destinationMixId;
    if (isDirty) {
      m_DestinationMixId = in.destinationMixId;
    }
    m_DestinationSplitterId = UnusedSplitterId;
  }
  UpdateEffectProcessingOrder(effects);
  return m_IsInUse != wasInUse || isDirty;
}

bool MixInfo::UpdateConnection(common::EdgeMatrix& edges,
  const audio::MixInfo& in, const SplitterContext& splitters) {
  bool hasNewConnection = m_DestinationSplitterId != UnusedSplitterId &&
    splitters.GetInfo(m_DestinationSplitterId)->HasNewConnection();
  bool isDirty = m_DestinationMixId != in.destinationMixId ||
    m_DestinationSplitterId != in.destinationSplitterId || hasNewConnection;
  if (!isDirty) {
    return false;
  }
  edges.RemoveEdges(m_MixId);
  if (in.destinationMixId == UnusedMixId) {
    if (in.destinationSplitterId != UnusedSplitterId) {
      SplitterInfo* splitter = splitters.GetInfo(in.destinationSplitterId);
      for (int i = 0; i < splitter->GetDestinationCount(); i++) {
        ISplitterDestinationData* data =
          splitters.GetDestinationData(in.destinationSplitterId, i);
        if (data != nullptr && data->GetMixId() != UnusedMixId) {
          edges.Connect(m_MixId, data->GetMixId());
        }
      }
    }
  }
  else {
    edges.Connect(m_MixId, in.destinationMixId);
  }
  m_DestinationMixId = in.destinationMixId;
  m_DestinationSplitterId = in.destinationSplitterId;
  if (m_DestinationMixId != UnusedMixId && in.mixId != FinalMixId) {
    m_DestinationSplitterId = UnusedSplitterId;
  }
  return true;
}

void MixInfo::UpdateEffectProcessingOrder(const EffectContext& effects) {
  if (m_EffectCount == 0) {
    return;
  }
  ClearEffectProcessingOrder();
  for (int i = 0; i < effects.GetCount(); i++) {
    EffectInfoBase* effect = effects.GetInfo(i);
    if (effect->GetMixId() == m_MixId) {
      m_EffectProcessingOrder[effect->GetProcessingOrder()] = i;
    }
  }
}

bool MixInfo::HasAnyConnection() const {
  return m_DestinationMixId != UnusedMixId ||
    m_DestinationSplitterId != UnusedSplitterId;
}

MixContext::MixContext()
  : m_SortedInfos{nullptr, 0}, m_Infos{nullptr, 0} {
}

void MixContext::Initialize(MixInfo** sortedInfos, MixInfo* infos, int count,
  void* nodeStatesBuffer, size_t nodeStatesSize, void* edgeMatrixBuffer,
  size_t edgeMatrixSize) {
  m_SortedInfos = {sortedInfos, static_cast<uintptr_t>(count)};
  m_Infos = {infos, static_cast<uintptr_t>(count)};
  if (nodeStatesBuffer != nullptr && edgeMatrixBuffer != nullptr) {
    m_NodeStates.Initialize(nodeStatesBuffer, nodeStatesSize, count);
    m_EdgeMatrix.Initialize(edgeMatrixBuffer, edgeMatrixSize, count);
  }
  for (size_t i = 0; i < m_Infos.size; i++) {
    m_SortedInfos.data[i] = &m_Infos.data[i];
  }
}

MixInfo* MixContext::GetSortedInfo(int index) const {
  return m_SortedInfos.data[index];
}

void MixContext::SetSortedInfo(int index, MixInfo* info) {
  m_SortedInfos.data[index] = info;
}

MixInfo* MixContext::GetInfo(int index) const {
  return &m_Infos.data[index];
}

MixInfo* MixContext::GetFinalMixInfo() const {
  return &m_Infos.data[MixInfo::FinalMixId];
}

int MixContext::GetCount() const {
  return static_cast<int>(m_Infos.size);
}

void MixContext::UpdateDistancesFromFinalMix() {
  for (int i = 0; i < GetCount(); i++) {
    GetInfo(i)->m_DistanceFromFinalMix = MixInfo::InvalidDistanceFromFinalMix;
  }
  for (int i = 0; i < GetCount(); i++) {
    MixInfo* info = GetInfo(i);
    m_SortedInfos.data[i] = info;
    if (!info->m_IsInUse) {
      continue;
    }
    int mixId = info->m_MixId;
    int distance = 0;
    while (distance < GetCount() && mixId != MixInfo::FinalMixId) {
      if (mixId == MixInfo::UnusedMixId) {
        distance = MixInfo::InvalidDistanceFromFinalMix;
        break;
      }
      MixInfo* destination = GetInfo(mixId);
      if (destination->m_DistanceFromFinalMix !=
        MixInfo::InvalidDistanceFromFinalMix) {
        distance = destination->m_DistanceFromFinalMix + 1;
        break;
      }
      distance++;
      mixId = destination->m_DestinationMixId;
    }
    if (distance >= GetCount()) {
      distance = MixInfo::InvalidDistanceFromFinalMix;
    }
    info->m_DistanceFromFinalMix = distance;
  }
}

Result MixContext::Sort(const SplitterContext& splitters,
  const BehaviorInfo& behavior) {
  if (behavior.IsSplitterSupported() && splitters.UsingSplitter()) {
    if (!SortForSplitter(splitters)) {
      return {0x5699};
    }
  }
  else {
    SortForNonSplitter();
  }
  return {0};
}

// The sorts are reached through their exported symbols.
[[gnu::noinline]] bool MixContext::SortForSplitter(
  const SplitterContext& splitters) {
  if (!m_NodeStates.Tsort(m_EdgeMatrix)) {
    return false;
  }
  int i = 0;
  for (common::NodeStates::ResultIterator it = m_NodeStates.ResultBegin();
    it != m_NodeStates.ResultEnd() && i < m_Infos.size; ++it, ++i) {
    m_SortedInfos.data[i] = GetInfo(*it);
  }
  CalcMixBufferOffset();
  return true;
}

[[gnu::noinline]] void MixContext::SortForNonSplitter() {
  UpdateDistancesFromFinalMix();
  SpanIterator<MixInfo*> begin(&m_SortedInfos, 0);
  SpanIterator<MixInfo*> end(&m_SortedInfos,
    static_cast<ptrdiff_t>(m_SortedInfos.size));
  std::stable_sort(begin, end, [](const MixInfo* lhs, const MixInfo* rhs) {
    return lhs->m_DistanceFromFinalMix > rhs->m_DistanceFromFinalMix;
  });
  CalcMixBufferOffset();
}

void MixContext::CalcMixBufferOffset() {
  int offset = 0;
  for (int i = 0; i < m_Infos.size; i++) {
    MixInfo* info = m_SortedInfos.data[i];
    if (info->m_IsInUse == true) {
      info->m_BufferOffset = offset;
      offset += info->m_BufferCount;
    }
  }
}

}
