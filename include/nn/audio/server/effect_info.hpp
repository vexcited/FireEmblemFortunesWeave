#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/audio/auxiliary.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/audio/server/command_generator.hpp"
#include "nn/audio/server/effect_context.hpp"
#include "nn/util/string_builder.hpp"
#include "nn/util/string_util.hpp"

namespace nn::audio::renderer::ipc {

template <>
struct Effect::UpdateData<0> {
  uint8_t raw[192];
};

template <>
struct Effect::UpdateData<1> {
  uint8_t raw[192];
};

template <>
struct Effect::StatusData<0> {
  uint8_t usageState;
  uint8_t reserved[15];
};

static_assert(sizeof(Effect::UpdateData<0>) == 192);
static_assert(sizeof(Effect::StatusData<0>) == 16);

}

namespace nn::audio::server {

struct BiquadFilterParameterVersion1 {
  int8_t input[6];
  int8_t output[6];
  int16_t numerator[3];
  int16_t denominator[2];
  int8_t channelCount;
  uint8_t parameterStatus;
};

static_assert(sizeof(BiquadFilterParameterVersion1) == 24);

template <typename BiquadFilterParameter>
struct EffectInParameter {
  uint8_t type;
  bool isNew;
  bool isEnabled;
  uint8_t reserved0;
  int mixId;
  CpuAddr bufferAddress;
  uint64_t bufferSize;
  int processingOrder;
  uint32_t reserved1;
  union {
    EffectInfoVersion2::DelayParameter delay;
    EffectInfoVersion2::ReverbParameter reverb;
    EffectInfoVersion2::I3dl2ReverbParameter i3dl2Reverb;
    EffectInfoVersion2::LightLimiterParameter lightLimiter;
    EffectInfoVersion2::CompressorParameter compressor;
    BiquadFilterParameter biquadFilter;
    EffectInfoVersion2::BufferMixerParameter bufferMixer;
    EffectInfoVersion2::AuxParameter aux;
    uint8_t raw[160];
  } parameter;
};

static_assert(
  sizeof(EffectInParameter<BiquadFilterParameterVersion1>) == 192);

template <typename UpdateData>
struct EffectInParameterTraits {
  using Type = EffectInParameter<BiquadFilterParameterVersion1>;
};

template <>
struct EffectInParameterTraits<renderer::ipc::Effect::UpdateData<2>> {
  using Type = EffectInParameter<EffectInfoVersion2::BiquadFilterParameter>;
};

template <typename UpdateData>
using EffectInParameterOf = typename EffectInParameterTraits<UpdateData>::Type;

inline bool IsEffectChannelCountValid(int count) {
  return count == 1 || count == 2 || count == 4 || count == 6;
}

constexpr float Q14Scale = 1.0f / 16384.0f;

constexpr const char* ReverbEarlyModeNames[] = {
  "SmallRoom", "LargetRoom", "Hall", "Cavern", "NoEarlyReflection",
};

constexpr const char* ReverbLateModeNames[] = {
  "Room", "Hall", "MetalCorridor", "Cavern", "MaximumDelay",
};

inline CpuAddr ToCpuAddr(const void* address) {
  return static_cast<CpuAddr>(reinterpret_cast<uintptr_t>(address));
}

inline void CopyAuxParameter(EffectInfoVersion2::AuxParameter& parameter,
  const EffectInfoVersion2::AuxParameter& source) {
  EffectInfoVersion2::AuxParameter value;
  memcpy(value.input, source.input, sizeof(value.input));
  memcpy(value.output, source.output, sizeof(value.output));
  value.mixBufferCount = source.mixBufferCount;
  value.sampleRate = source.sampleRate;
  value.sampleCount = source.sampleCount;
  value.channelCountMax = source.channelCountMax;
  value.sendBufferInfo = source.sendBufferInfo;
  value.sendBuffer = source.sendBuffer;
  value.returnBufferInfo = source.returnBufferInfo;
  value.returnBuffer = source.returnBuffer;
  parameter = value;
}

inline void DumpAuxParameter(const EffectInfoVersion2::AuxParameter& parameter,
  char* buffer, int size) {
  util::SNPrintf(buffer, size, "SampleRate: %d SampleCount: %d "
    "MixBufferCount: %d SendAuxBufferInfo: 0x%016llx "
    "SendBufferBase: 0x%016llx ReturnAuxBufferInfo: 0x%016llx "
    "ReturnBufferBase: 0x%016llx",
    parameter.sampleRate, parameter.sampleCount, parameter.channelCountMax,
    parameter.sendBufferInfo, parameter.sendBuffer,
    parameter.returnBufferInfo, parameter.returnBuffer);
}

template <typename UpdateData>
class BufferMixerInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::BufferMixerParameter;

  uint8_t GetType() const override {
    return Type_BufferMixer;
  }

  const char* GetTypeName() const override {
    return "BufferMixer";
  }

  void Dump(char* buffer, int size) const override {
    const Parameter& parameter = GetParameter<Parameter>();
    util::StringBuilder builder(buffer, size);
    for (int i = 0; i < parameter.mixCount; i++) {
      builder.AppendFormat("%d -> %d (%.2f) ", parameter.input[i],
        parameter.output[i], parameter.volume[i]);
    }
    builder.Fix();
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().mixCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.bufferMixer;
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    Parameter value;
    memcpy(value.input, source.input, sizeof(value.input));
    memcpy(value.output, source.output, sizeof(value.output));
    memcpy(value.volume, source.volume, sizeof(value.volume));
    value.mixCount = source.mixCount;
    parameter = value;
    m_IsEnabled = in.isEnabled;
    *error = {};
  }
};

template <typename UpdateData>
class DelayInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::DelayParameter;

  uint8_t GetType() const override {
    return Type_Delay;
  }

  const char* GetTypeName() const override {
    return "Delay";
  }

  void Dump(char* buffer, int size) const override {
    const Parameter& parameter = GetParameter<Parameter>();
    util::SNPrintf(buffer, size, "DelayTimeMax: %d [ms] DelayTime %d [ms] "
      "SampleRate: %.2f InGain: %.2f FeedbackGain: %.2f OutGain: %.2f "
      "DryGain: %.2f ChannelSpread: %.2f LowPassAmount: %.2f",
      parameter.delayTimeMax, parameter.delayTime,
      parameter.sampleRate * Q14Scale, parameter.inGain * Q14Scale,
      parameter.feedbackGain * Q14Scale, parameter.outGain * Q14Scale,
      parameter.dryGain * Q14Scale, parameter.channelSpread * Q14Scale,
      parameter.lowPassAmount * Q14Scale);
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().channelCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void UpdateForCommandGeneration() override {
    UpdateUsageState();
    EditParameter<Parameter>().parameterStatus = ParameterStatus_Updated;
  }

  void* GetWorkBuffer(int index) override {
    return GetSingleWorkBuffer();
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.delay;
    if (!IsEffectChannelCountValid(source.channelCountMax)) {
      return;
    }
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    const uint8_t status = parameter.parameterStatus;
    Parameter value;
    memcpy(value.input, source.input, sizeof(value.input));
    memcpy(value.output, source.output, sizeof(value.output));
    value.channelCountMax = source.channelCountMax;
    value.channelCount = source.channelCount;
    value.delayTimeMax = source.delayTimeMax;
    value.delayTime = source.delayTime;
    value.sampleRate = source.sampleRate;
    value.inGain = source.inGain;
    value.feedbackGain = source.feedbackGain;
    value.outGain = source.outGain;
    value.dryGain = source.dryGain;
    value.channelSpread = source.channelSpread;
    value.lowPassAmount = source.lowPassAmount;
    value.parameterStatus = source.parameterStatus;
    parameter = value;
    if (!IsEffectChannelCountValid(source.channelCount)) {
      parameter.channelCount = parameter.channelCountMax;
    }
    m_IsEnabled = in.isEnabled;
    if (status != ParameterStatus_Updated) {
      parameter.parameterStatus = status;
    }
    if (m_ShouldSkip | in.isNew) {
      m_UsageState = UsageState_New;
      parameter.parameterStatus = ParameterStatus_Initialized;
      m_ShouldSkip = !mapper.TryAttachBuffer(error, &m_WorkBuffers[0],
        in.bufferAddress, in.bufferSize);
    }
    else {
      *error = {};
    }
  }
};

template <typename UpdateData>
class ReverbInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::ReverbParameter;

  uint8_t GetType() const override {
    return Type_Reverb;
  }

  const char* GetTypeName() const override {
    return "Reverb";
  }

  void Dump(char* buffer, int size) const override {
    const Parameter& parameter = GetParameter<Parameter>();
    util::SNPrintf(buffer, size, "SampleRate: %.2f EarlyMode: %s "
      "EarlyGain: %.2f predelayTime: %.2f LateMode: %s LateGain: %.2f "
      "DecayTime: %.2f HighFrequencyDecayRatio: %.2f Coloration: %.2f "
      "ReverbGain: %.2f OutGain: %.2f DryGain: %.2f",
      parameter.sampleRate * Q14Scale, parameter.earlyMode < 5
        ? ReverbEarlyModeNames[parameter.earlyMode] : "Unknown",
      parameter.earlyGain * Q14Scale, parameter.predelayTime * Q14Scale,
      parameter.lateMode < 5
        ? ReverbLateModeNames[parameter.lateMode] : "Unknown",
      parameter.lateGain * Q14Scale, parameter.decayTime * Q14Scale,
      parameter.highFrequencyDecayRatio * Q14Scale,
      parameter.coloration * Q14Scale, parameter.reverbGain * Q14Scale,
      parameter.outGain * Q14Scale, parameter.dryGain * Q14Scale);
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().channelCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void UpdateForCommandGeneration() override {
    UpdateUsageState();
    EditParameter<Parameter>().parameterStatus = ParameterStatus_Updated;
  }

  void* GetWorkBuffer(int index) override {
    return GetSingleWorkBuffer();
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.reverb;
    if (!IsEffectChannelCountValid(source.channelCountMax)) {
      return;
    }
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    const uint8_t status = parameter.parameterStatus;
    Parameter value;
    memcpy(value.input, source.input, sizeof(value.input));
    memcpy(value.output, source.output, sizeof(value.output));
    value.channelCountMax = source.channelCountMax;
    value.channelCount = source.channelCount;
    value.sampleRate = source.sampleRate;
    value.earlyMode = source.earlyMode;
    value.earlyGain = source.earlyGain;
    value.predelayTime = source.predelayTime;
    value.lateMode = source.lateMode;
    value.lateGain = source.lateGain;
    value.decayTime = source.decayTime;
    value.highFrequencyDecayRatio = source.highFrequencyDecayRatio;
    value.coloration = source.coloration;
    value.reverbGain = source.reverbGain;
    value.outGain = source.outGain;
    value.dryGain = source.dryGain;
    value.parameterStatus = source.parameterStatus;
    parameter = value;
    if (!IsEffectChannelCountValid(source.channelCount)) {
      parameter.channelCount = parameter.channelCountMax;
    }
    m_IsEnabled = in.isEnabled;
    if (status != ParameterStatus_Updated) {
      parameter.parameterStatus = status;
    }
    if (m_ShouldSkip | in.isNew) {
      m_UsageState = UsageState_New;
      parameter.parameterStatus = ParameterStatus_Initialized;
      m_ShouldSkip = !mapper.TryAttachBuffer(error, &m_WorkBuffers[0],
        in.bufferAddress, in.bufferSize);
    }
    else {
      *error = {};
    }
  }
};

template <typename UpdateData>
class I3dl2ReverbInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::I3dl2ReverbParameter;

  uint8_t GetType() const override {
    return Type_I3dl2Reverb;
  }

  const char* GetTypeName() const override {
    return "I3dl2Reverb";
  }

  void Dump(char* buffer, int size) const override {
    const Parameter& parameter = GetParameter<Parameter>();
    util::SNPrintf(buffer, size, "SampleRate: %u RoomHf: %.2f "
      "HfReference: %.2f DecayTime: %.2f HfDecayRatio: %.2f Room: %.2f "
      "Reflections: %.2f Reverb: %.2f Diffusion: %.2f "
      "ReflectionsDelay: %.2f ReverbDelay: %.2f Density: %.2f "
      "DryGain: %.2f",
      parameter.sampleRate, parameter.roomHfGain, parameter.hfReference,
      parameter.lateReverbDecayTime, parameter.lateReverbHfDecayRatio,
      parameter.roomGain, parameter.reflectionsGain, parameter.reverbGain,
      parameter.lateReverbDiffusion, parameter.reflectionDelayTime,
      parameter.lateReverbDelayTime, parameter.lateReverbDensity,
      parameter.dryGain);
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().channelCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void UpdateForCommandGeneration() override {
    UpdateUsageState();
    EditParameter<Parameter>().parameterStatus = ParameterStatus_Updated;
  }

  void* GetWorkBuffer(int index) override {
    return GetSingleWorkBuffer();
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.i3dl2Reverb;
    if (!IsEffectChannelCountValid(source.channelCountMax)) {
      return;
    }
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    const uint8_t status = parameter.parameterStatus;
    Parameter value;
    memcpy(value.input, source.input, sizeof(value.input));
    memcpy(value.output, source.output, sizeof(value.output));
    value.channelCountMax = source.channelCountMax;
    value.channelCount = source.channelCount;
    value.sampleRate = source.sampleRate;
    value.roomHfGain = source.roomHfGain;
    value.hfReference = source.hfReference;
    value.lateReverbDecayTime = source.lateReverbDecayTime;
    value.lateReverbHfDecayRatio = source.lateReverbHfDecayRatio;
    value.roomGain = source.roomGain;
    value.reflectionsGain = source.reflectionsGain;
    value.reverbGain = source.reverbGain;
    value.lateReverbDiffusion = source.lateReverbDiffusion;
    value.reflectionDelayTime = source.reflectionDelayTime;
    value.lateReverbDelayTime = source.lateReverbDelayTime;
    value.lateReverbDensity = source.lateReverbDensity;
    value.dryGain = source.dryGain;
    value.parameterStatus = source.parameterStatus;
    parameter = value;
    if (!IsEffectChannelCountValid(source.channelCount)) {
      parameter.channelCount = parameter.channelCountMax;
    }
    m_IsEnabled = in.isEnabled;
    if (status != ParameterStatus_Updated) {
      parameter.parameterStatus = status;
    }
    if (m_ShouldSkip | in.isNew) {
      m_UsageState = UsageState_New;
      parameter.parameterStatus = ParameterStatus_Initialized;
      m_ShouldSkip = !mapper.TryAttachBuffer(error, &m_WorkBuffers[0],
        in.bufferAddress, in.bufferSize);
    }
    else {
      *error = {};
    }
  }
};

template <typename UpdateData>
class LightLimiterInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::LightLimiterParameter;
  using Statistics = EffectInfoVersion2::LightLimiterStatistics;

  uint8_t GetType() const override {
    return Type_LightLimiter;
  }

  const char* GetTypeName() const override {
    return "LightLimiter";
  }

  void Dump(char* buffer, int size) const override {
    const Parameter& parameter = GetParameter<Parameter>();
    util::SNPrintf(buffer, size, "SampleRate: %d LookAheadTimeMax: %d "
      "AttackTime: %d ReleaseTime: %d LookAheadTime: %d "
      "AttackCoefficients: %d ReleaseCoefficients: %d Threshold: %.2f "
      "InputGain: %.2f OutputGain: %.2f LookAheadDelaySampleCount: %d "
      "LookAheadDelaySampleCountMax: %d IsStatisticsEnabled: %s "
      "IsStatisticsResetRequested: %s ProcessingMode: %s",
      parameter.sampleRate, parameter.lookAheadTimeMax, parameter.attackTime,
      parameter.releaseTime, parameter.lookAheadTime,
      static_cast<int>(parameter.attackCoefficient),
      static_cast<int>(parameter.releaseCoefficient), parameter.threshold,
      parameter.inputGain, parameter.outputGain,
      parameter.lookAheadSampleCount, parameter.lookAheadSampleCountMax,
      parameter.isStatisticsEnabled ? "Enabled" : "Disabled",
      parameter.isStatisticsResetRequired ? "Requested" : "Not Requested",
      parameter.processingMode < 2 ? "Accuracy" : "Unknown");
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().channelCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void UpdateForCommandGeneration() override {
    Parameter& parameter = EditParameter<Parameter>();
    parameter.isStatisticsResetRequired = false;
    UpdateUsageState();
    parameter.parameterStatus = ParameterStatus_Updated;
  }

  void InitializeResultState(EffectResultState* state) override {
    Statistics* statistics = reinterpret_cast<Statistics*>(state);
    for (float& sample : statistics->channelMaxSample) {
      sample = 0.0f;
    }
    for (float& gain : statistics->channelCompressionGainMin) {
      gain = 1.0f;
    }
  }

  bool ShouldUpdateResultState() const override {
    return true;
  }

  void* GetWorkBuffer(int index) override {
    return GetSingleWorkBuffer();
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.lightLimiter;
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    // The status kept across updates is read from the input instead of the
    // stored parameter.
    const uint8_t status = source.parameterStatus;
    Parameter value;
    memcpy(value.input, source.input, sizeof(value.input));
    memcpy(value.output, source.output, sizeof(value.output));
    value.channelCountMax = source.channelCountMax;
    value.channelCount = source.channelCount;
    value.sampleRate = source.sampleRate;
    value.lookAheadTimeMax = source.lookAheadTimeMax;
    value.attackTime = source.attackTime;
    value.releaseTime = source.releaseTime;
    value.lookAheadTime = source.lookAheadTime;
    value.attackCoefficient = source.attackCoefficient;
    value.releaseCoefficient = source.releaseCoefficient;
    value.threshold = source.threshold;
    value.inputGain = source.inputGain;
    value.outputGain = source.outputGain;
    value.lookAheadSampleCount = source.lookAheadSampleCount;
    value.lookAheadSampleCountMax = source.lookAheadSampleCountMax;
    value.parameterStatus = source.parameterStatus;
    value.isStatisticsEnabled = source.isStatisticsEnabled;
    value.isStatisticsResetRequired = source.isStatisticsResetRequired;
    value.processingMode = source.processingMode;
    parameter = value;
    m_IsEnabled = in.isEnabled;
    if (status != ParameterStatus_Updated) {
      parameter.parameterStatus = status;
    }
    if (m_ShouldSkip | in.isNew) {
      m_UsageState = UsageState_New;
      parameter.parameterStatus = ParameterStatus_Initialized;
      m_ShouldSkip = !mapper.TryAttachBuffer(error, &m_WorkBuffers[0],
        in.bufferAddress, in.bufferSize);
    }
    else {
      *error = {};
    }
  }
};

template <typename UpdateData>
class AuxInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::AuxParameter;

  uint8_t GetType() const override {
    return Type_Aux;
  }

  const char* GetTypeName() const override {
    return "Aux";
  }

  void Dump(char* buffer, int size) const override {
    DumpAuxParameter(GetParameter<Parameter>(), buffer, size);
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().mixBufferCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void* GetWorkBuffer(int index) override {
    return reinterpret_cast<void*>(m_WorkBuffers[index].GetReference(true));
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.aux;
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    CopyAuxParameter(parameter, source);
    m_IsEnabled = in.isEnabled;
    if (m_ShouldSkip | in.isNew) {
      const size_t size =
        sizeof(AuxBufferInfo) + parameter.sampleCount * sizeof(int32_t);
      const bool isSendAttached = mapper.TryAttachBuffer(error,
        &m_WorkBuffers[0], ToCpuAddr(parameter.sendBufferInfo), size);
      const bool isReturnAttached = mapper.TryAttachBuffer(error,
        &m_WorkBuffers[1], ToCpuAddr(parameter.returnBufferInfo), size);
      m_ShouldSkip = !(isSendAttached && isReturnAttached);
      if (isSendAttached && isReturnAttached) {
        m_SendBufferInfo = m_WorkBuffers[0].GetReference(false);
        m_SendBuffer = m_SendBufferInfo + sizeof(AuxBufferInfo);
        m_ReturnBufferInfo = m_WorkBuffers[1].GetReference(false);
        m_ReturnBuffer = m_ReturnBufferInfo + sizeof(AuxBufferInfo);
      }
    }
    else {
      *error = {};
    }
  }
};

template <typename UpdateData>
class BiquadFilterInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = BiquadFilterEffectParameter;

  uint8_t GetType() const override {
    return Type_BiquadFilter;
  }

  const char* GetTypeName() const override {
    return "BiquadFilter";
  }

  void Dump(char* buffer, int size) const override {
    const BiquadFilterCoefficients& coefficients =
      GetParameter<Parameter>().coefficients;
    util::SNPrintf(buffer, size,
      "Numerator: %.2f %.2f %.2f Denominator: %.2f %.2f",
      coefficients.numerator[0], coefficients.numerator[1],
      coefficients.numerator[2], coefficients.denominator[0],
      coefficients.denominator[1]);
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().channelCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().inputs[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().outputs[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void UpdateForCommandGeneration() override {
    UpdateUsageState();
    EditParameter<Parameter>().status = ParameterStatus_Updated;
  }

private:
  void UpdateParameter(
    const EffectInfoVersion2::BiquadFilterParameter& source) {
    Parameter value;
    memcpy(value.inputs, source.input, sizeof(value.inputs));
    memcpy(value.outputs, source.output, sizeof(value.outputs));
    for (int i = 0; i < 3; i++) {
      value.coefficients.numerator[i] = source.numerator[i];
    }
    for (int i = 0; i < 2; i++) {
      value.coefficients.denominator[i] = source.denominator[i];
    }
    value.channelCount = source.channelCount;
    value.status = source.parameterStatus;
    EditParameter<Parameter>() = value;
  }

  void UpdateParameter(const BiquadFilterParameterVersion1& source) {
    Parameter& parameter = EditParameter<Parameter>();
    // The status kept across updates is read from the input instead of the
    // stored parameter.
    const uint8_t status = source.parameterStatus;
    Parameter value;
    memcpy(value.inputs, source.input, sizeof(value.inputs));
    memcpy(value.outputs, source.output, sizeof(value.outputs));
    for (int i = 0; i < 3; i++) {
      value.coefficients.numerator[i] = source.numerator[i] / 16384.0f;
    }
    for (int i = 0; i < 2; i++) {
      value.coefficients.denominator[i] = source.denominator[i] / 16384.0f;
    }
    value.channelCount = source.channelCount;
    value.status = source.parameterStatus;
    parameter = value;
    if (status != ParameterStatus_Updated) {
      parameter.status = status;
    }
  }

  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    UpdateParameter(in.parameter.biquadFilter);
    m_IsEnabled = in.isEnabled;
    *error = {};
  }
};

template <typename UpdateData>
class CaptureInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::AuxParameter;

  uint8_t GetType() const override {
    return Type_Capture;
  }

  const char* GetTypeName() const override {
    return "Capture";
  }

  void Dump(char* buffer, int size) const override {
    DumpAuxParameter(GetParameter<Parameter>(), buffer, size);
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().mixBufferCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  // Captures have no outputs and report their inputs instead.
  int GetOutput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void* GetWorkBuffer(int index) override {
    return reinterpret_cast<void*>(m_WorkBuffers[index].GetReference(true));
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.aux;
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    CopyAuxParameter(parameter, source);
    m_IsEnabled = in.isEnabled;
    if (m_ShouldSkip | in.isNew) {
      const size_t size =
        sizeof(AuxBufferInfo) + parameter.sampleCount * sizeof(int32_t);
      const bool isAttached = mapper.TryAttachBuffer(error,
        &m_WorkBuffers[0], ToCpuAddr(parameter.sendBufferInfo), size);
      m_ShouldSkip = !isAttached;
      if (isAttached) {
        m_SendBufferInfo = m_WorkBuffers[0].GetReference(false);
        m_SendBuffer = m_SendBufferInfo + sizeof(AuxBufferInfo);
        m_ReturnBufferInfo = 0;
        m_ReturnBuffer = 0;
      }
    }
    else {
      *error = {};
    }
  }
};

template <typename UpdateData>
class CompressorInfo : public EffectInfoBase {
public:
  using InParameter = EffectInParameterOf<UpdateData>;
  using Parameter = EffectInfoVersion2::CompressorParameter;
  using Statistics = EffectInfoVersion2::CompressorStatistics;

  uint8_t GetType() const override {
    return Type_Compressor;
  }

  const char* GetTypeName() const override {
    return "Compressor";
  }

  void Dump(char* buffer, int size) const override {
    const Parameter& parameter = GetParameter<Parameter>();
    util::SNPrintf(buffer, size, "SampleRate: %d Threshold: %.2f "
      "Ratio: %.2f AttackTime: %d ReleaseTime: %d RmsTav: %.2f EnvAT: %.2f "
      "EnvRT: %.2f OutGain: %.2f IsMakeupGainEnabled: %s "
      "IsStatisticsEnabled: %s IsStatisticsResetRequested: %s",
      parameter.sampleRate, parameter.threshold, parameter.ratio,
      parameter.attackTime, parameter.releaseTime,
      parameter.gainSmoothingCoefficient, parameter.attackCoefficient,
      parameter.releaseCoefficient, parameter.outGain,
      parameter.isMakeupGainEnabled ? "Enabled" : "Disabled",
      parameter.isStatisticsEnabled ? "Enabled" : "Disabled",
      parameter.isStatisticsResetRequired ? "Requested" : "Not Requested");
  }

  int GetChannelCount() const override {
    return GetParameter<Parameter>().channelCount;
  }

  int GetInput(int index) const override {
    return GetParameter<Parameter>().input[index];
  }

  int GetOutput(int index) const override {
    return GetParameter<Parameter>().output[index];
  }

  void Update(ErrorInfo* error, const void* in, PoolMapper& mapper) override {
    UpdateImpl(error, *static_cast<const InParameter*>(in), mapper);
  }

  void UpdateForCommandGeneration() override {
    Parameter& parameter = EditParameter<Parameter>();
    parameter.isStatisticsResetRequired = false;
    UpdateUsageState();
    parameter.parameterStatus = ParameterStatus_Updated;
  }

  void InitializeResultState(EffectResultState* state) override {
    Statistics* statistics = reinterpret_cast<Statistics*>(state);
    statistics->reserved = 0.0f;
    statistics->compressionGainMin = 1.0f;
    for (float& mean : statistics->channelMaxMean) {
      mean = 0.0f;
    }
  }

  bool ShouldUpdateResultState() const override {
    return true;
  }

  void* GetWorkBuffer(int index) override {
    return GetSingleWorkBuffer();
  }

private:
  void UpdateImpl(ErrorInfo* error, const InParameter& in,
    PoolMapper& mapper) {
    const Parameter& source = in.parameter.compressor;
    Parameter& parameter = EditParameter<Parameter>();
    m_MixId = in.mixId;
    m_ProcessingOrder = in.processingOrder;
    // The status kept across updates is read from the input instead of the
    // stored parameter.
    const uint8_t status = source.parameterStatus;
    Parameter value;
    memcpy(value.input, source.input, sizeof(value.input));
    memcpy(value.output, source.output, sizeof(value.output));
    value.channelCountMax = source.channelCountMax;
    value.channelCount = source.channelCount;
    value.sampleRate = source.sampleRate;
    value.threshold = source.threshold;
    value.ratio = source.ratio;
    value.attackTime = source.attackTime;
    value.releaseTime = source.releaseTime;
    value.gainSmoothingCoefficient = source.gainSmoothingCoefficient;
    value.attackCoefficient = source.attackCoefficient;
    value.releaseCoefficient = source.releaseCoefficient;
    value.outGain = source.outGain;
    value.parameterStatus = source.parameterStatus;
    value.isMakeupGainEnabled = source.isMakeupGainEnabled;
    value.isStatisticsEnabled = source.isStatisticsEnabled;
    value.isStatisticsResetRequired = source.isStatisticsResetRequired;
    parameter = value;
    m_IsEnabled = in.isEnabled;
    if (status != ParameterStatus_Updated) {
      parameter.parameterStatus = status;
    }
    *error = {};
  }
};

// Version 1 parameters have no compressor, so its update does nothing.
template <>
inline void CompressorInfo<renderer::ipc::Effect::UpdateData<0>>::Update(
  ErrorInfo* error, const void* in, PoolMapper& mapper) {
}

}
