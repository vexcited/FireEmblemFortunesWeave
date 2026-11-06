#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/span.hpp"

namespace nn::audio {

using DspAddr = uint64_t;

}

namespace nn::audio {

struct EffectResultState {
  uint8_t state[128];
};

namespace server {

class EffectInfoBase {
public:
  enum Type : uint8_t {
    Type_Invalid,
    Type_BufferMixer,
    Type_Aux,
    Type_Delay,
    Type_Reverb,
    Type_I3dl2Reverb,
    Type_BiquadFilter,
    Type_LightLimiter,
    Type_Capture,
    Type_Compressor,
  };

  virtual uint8_t GetType() const;
  virtual const char* GetTypeName() const;
  virtual void Dump(char* buffer, int size) const;
  virtual int GetChannelCount() const;
  virtual int GetInput(int index) const;
  virtual int GetOutput(int index) const;
  virtual void InitializeResultState(EffectResultState* state);
  virtual void UpdateForCommandGeneration();
  virtual void UpdateResultState(EffectResultState* cpu,
    EffectResultState* dsp);
  virtual bool ShouldUpdateResultState() const;
  virtual void* GetWorkBuffer(int index);

  int GetMixId() const {
    return m_MixId;
  }

  int GetProcessingOrder() const {
    return m_ProcessingOrder;
  }

  bool IsEnabled() const {
    return m_IsEnabled;
  }

  bool ShouldSkip() const {
    return m_ShouldSkip;
  }

  template<class Parameter>
  const Parameter& GetParameter() const {
    return *reinterpret_cast<const Parameter*>(m_Parameter);
  }

  template<class State>
  State* GetState() {
    return reinterpret_cast<State*>(m_State);
  }

  DspAddr GetSendBufferInfo() const {
    return m_SendBufferInfo;
  }

  DspAddr GetSendBuffer() const {
    return m_SendBuffer;
  }

  DspAddr GetReturnBufferInfo() const {
    return m_ReturnBufferInfo;
  }

  DspAddr GetReturnBuffer() const {
    return m_ReturnBuffer;
  }

private:
  DspAddr m_SendBufferInfo;
  DspAddr m_SendBuffer;
  DspAddr m_ReturnBufferInfo;
  DspAddr m_ReturnBuffer;
  uint8_t reserved0[4];
  bool m_IsEnabled;
  bool m_ShouldSkip;
  int m_MixId;
  int m_ProcessingOrder;
  uint8_t reserved1[72];
  alignas(8) uint8_t m_Parameter[192];
  alignas(8) uint8_t m_State[896];
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
