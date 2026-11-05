#include "nn/audio/server/effect_context.hpp"

namespace nn::audio::server {

EffectContext::EffectContext()
  : m_Infos{nullptr, 0}, m_ResultStates{nullptr, 0},
    m_DspSharedResultStates{nullptr, 0} {
}

void EffectContext::Initialize(EffectInfoBase* infos, int count,
  EffectResultState* resultStates, EffectResultState* dspSharedResultStates,
  int resultStateCount) {
  m_Infos = {infos, static_cast<uintptr_t>(count)};
  m_ResultStates = {resultStates, static_cast<uintptr_t>(resultStateCount)};
  m_DspSharedResultStates =
    {dspSharedResultStates, static_cast<uintptr_t>(resultStateCount)};
}

EffectInfoBase* EffectContext::GetInfo(int index) const {
  return &m_Infos.data[index];
}

EffectResultState* EffectContext::GetResultState(int index) const {
  return &m_ResultStates.data[index];
}

EffectResultState* EffectContext::GetDspSharedResultState(int index) const {
  return &m_DspSharedResultStates.data[index];
}

int EffectContext::GetCount() const {
  return static_cast<int>(m_Infos.size);
}

void EffectContext::UpdateStateByDspShared() {
  for (size_t i = 0; i < m_ResultStates.size; i++) {
    if (m_Infos.data[i].ShouldUpdateResultState()) {
      m_ResultStates.data[i] = m_DspSharedResultStates.data[i];
    }
  }
}

}
