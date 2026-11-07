#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/audio/server/behavior_info.hpp"
#include "nn/audio/server/memory_pool_info.hpp"
#include "nn/span.hpp"
#include "nn/util/string_util.hpp"

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
  using ErrorInfo = common::BehaviorParameter::ErrorInfo;

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

  enum UsageState : uint8_t {
    UsageState_Invalid,
    UsageState_New,
    UsageState_Enabled,
    UsageState_Disabled,
  };

  enum ParameterStatus : uint8_t {
    ParameterStatus_Initialized,
    ParameterStatus_Updating,
    ParameterStatus_Updated,
  };

  static constexpr int UnusedMixId = 0x7fffffff;
  static constexpr int WorkBufferCountMax = 2;

  EffectInfoBase()
    : m_WorkBuffers{AddressInfo(CpuAddr(), 0), AddressInfo(CpuAddr(), 0)},
      m_Parameter{} {
    m_MixId = UnusedMixId;
    m_ProcessingOrder = -1;
    m_IsEnabled = false;
    m_ShouldSkip = false;
    for (AddressInfo& buffer : m_WorkBuffers) {
      buffer.Setup(CpuAddr(), 0);
    }
  }

  virtual uint8_t GetType() const {
    return Type_Invalid;
  }

  virtual const char* GetTypeName() const {
    return "Invalid";
  }

  virtual void Dump(char* buffer, int size) const {
    util::Strlcpy(buffer, "Invalid", size);
  }

  virtual int GetChannelCount() const {
    return 0;
  }

  virtual int GetInput(int index) const {
    return 0;
  }

  virtual int GetOutput(int index) const {
    return 0;
  }

  virtual void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) {
    *error = {};
  }

  virtual void UpdateForCommandGeneration() {
    UpdateUsageState();
  }

  virtual void InitializeResultState(EffectResultState* state) {
  }

  virtual bool ShouldUpdateResultState() const {
    return false;
  }

  virtual void* GetWorkBuffer(int index) {
    return nullptr;
  }

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

  UsageState GetUsageState() const {
    return static_cast<UsageState>(m_UsageState);
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

protected:
  template<class Parameter>
  Parameter& EditParameter() {
    return *reinterpret_cast<Parameter*>(m_Parameter);
  }

  void UpdateUsageState() {
    m_UsageState = m_IsEnabled ? UsageState_Enabled : UsageState_Disabled;
  }

  void* GetSingleWorkBuffer() {
    if (m_IsEnabled) {
      return reinterpret_cast<void*>(m_WorkBuffers[0].GetReference(true));
    }
    if (m_UsageState != UsageState_Disabled) {
      m_WorkBuffers[0].InvalidateDspCache();
    }
    return nullptr;
  }

  DspAddr m_SendBufferInfo;
  DspAddr m_SendBuffer;
  DspAddr m_ReturnBufferInfo;
  DspAddr m_ReturnBuffer;
  uint8_t reserved0[4];
  bool m_IsEnabled;
  bool m_ShouldSkip;
  uint8_t m_UsageState;
  int m_MixId;
  int m_ProcessingOrder;
  uint8_t reserved1[8];
  AddressInfo m_WorkBuffers[WorkBufferCountMax];
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
