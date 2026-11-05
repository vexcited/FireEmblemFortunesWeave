#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/span.hpp"

namespace nn::audio {

struct EffectResultState {
  uint8_t state[128];
};

namespace server {

class EffectInfoBase {
public:
  virtual int GetChannelCount() const;
  virtual const char* GetTypeName() const;
  virtual void Dump(char* buffer, int size) const;
  virtual void InitializeResultState(EffectResultState* state);
  virtual void UpdateResultState(EffectResultState* cpu,
    EffectResultState* dsp);
  virtual void* GetStateBuffer();
  virtual void ClearError(void* error);
  virtual void UpdateUsageState();
  virtual void UpdateForCommandGeneration();
  virtual bool ShouldUpdateResultState() const;
  virtual void* GetWorkBuffer(int index);

  int GetMixId() const {
    return m_MixId;
  }

  int GetProcessingOrder() const {
    return m_ProcessingOrder;
  }

private:
  uint8_t reserved0[40];
  int m_MixId;
  int m_ProcessingOrder;
  uint8_t reserved1[1160];
};

static_assert(sizeof(EffectInfoBase) == 1216);

class EffectContext {
public:
  EffectContext();

  void Initialize(EffectInfoBase* infos, int count,
    EffectResultState* resultStates,
    EffectResultState* dspSharedResultStates, int resultStateCount);
  EffectInfoBase* GetInfo(int index) const;
  EffectResultState* GetResultState(int index) const;
  EffectResultState* GetDspSharedResultState(int index) const;
  int GetCount() const;
  void UpdateStateByDspShared();

private:
  Span<EffectInfoBase> m_Infos;
  Span<EffectResultState> m_ResultStates;
  Span<EffectResultState> m_DspSharedResultStates;
};

}
}
