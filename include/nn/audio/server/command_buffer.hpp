#pragma once

#include <stddef.h>
#include <stdint.h>

#include <utility>

#include "nn/audio/compressor.hpp"
#include "nn/audio/delay.hpp"
#include "nn/audio/i3dl2_reverb.hpp"
#include "nn/audio/light_limiter.hpp"
#include "nn/audio/reverb.hpp"
#include "nn/audio/server/memory_pool_info.hpp"

namespace nn::audio {

struct EffectResultState;
struct UpsamplerInfo;

enum PerformanceCommandType {
  PerformanceCommandType_Invalid,
  PerformanceCommandType_Start,
  PerformanceCommandType_End,
};

}

namespace nn::audio::server {

struct BiquadFilterEffectParameter;
struct PerformanceEntryAddresses;
class EffectInfoBase;
class SinkInfoBase;

struct BiquadFilterCoefficients {
  float numerator[3];
  float denominator[2];
};

struct BiquadFilterState {
  uint8_t state[32];
};

enum CommandId : uint8_t {
  CommandId_Volume = 7,
  CommandId_BiquadFilterFloatCoeff = 10,
  CommandId_Mix = 11,
  CommandId_DepopForMixBuffers = 15,
  CommandId_Delay = 16,
  CommandId_Upsample = 17,
  CommandId_DownMix6chTo2ch = 18,
  CommandId_Aux = 19,
  CommandId_DeviceSink = 20,
  CommandId_CircularBufferSink = 21,
  CommandId_Reverb = 22,
  CommandId_I3dl2Reverb = 23,
  CommandId_Performance = 24,
  CommandId_ClearMixBuffer = 25,
  CommandId_CopyMixBuffer = 26,
  CommandId_LightLimiterVersion1 = 27,
  CommandId_LightLimiterVersion2 = 28,
  CommandId_Capture = 31,
  CommandId_Compressor = 32,
  CommandId_AuxGrouped = 37,
};

struct alignas(8) CommandHeader {
  bool isEnabled : 1;
  uint8_t id;
  uint16_t size;
  uint32_t estimatedProcessingTime;
  uint32_t nodeId;
};

template<class Parameter>
struct EffectParameter {
  Parameter body;
  uint8_t status;
};

struct ClearMixBufferCommand {
  static constexpr CommandId Id = CommandId_ClearMixBuffer;

  CommandHeader header;
  uint8_t reserved[8];
};

struct MixCommand {
  static constexpr CommandId Id = CommandId_Mix;

  CommandHeader header;
  uint8_t reserved[7];
  bool isHighPrecision;
  int16_t input;
  int16_t output;
  float volume;
};

struct CopyMixBufferCommand {
  static constexpr CommandId Id = CommandId_CopyMixBuffer;

  CommandHeader header;
  uint8_t reserved[8];
  int16_t input;
  int16_t output;
};

struct BiquadFilterFloatCoeffCommand {
  static constexpr CommandId Id = CommandId_BiquadFilterFloatCoeff;

  CommandHeader header;
  uint8_t reserved0[8];
  int16_t input;
  int16_t output;
  BiquadFilterCoefficients coefficients;
  uint8_t reserved1[8];
  DspAddr state;
  bool needInitialization;
  bool useFloatProcessing;
};

struct EffectCommandBase {
  CommandHeader header;
  uint8_t reserved[8];
  int16_t inputs[6];
  int16_t outputs[6];
};

struct DelayCommand : EffectCommandBase {
  static constexpr CommandId Id = CommandId_Delay;

  EffectParameter<DelayParameter> parameter;
  DspAddr state;
  void* workBuffer;
  bool isEnabled;
};

struct ReverbCommand : EffectCommandBase {
  static constexpr CommandId Id = CommandId_Reverb;

  EffectParameter<ReverbParameter> parameter;
  DspAddr state;
  void* workBuffer;
  bool isEnabled;
  bool isLongSizePreDelaySupported;
};

struct I3dl2ReverbCommand : EffectCommandBase {
  static constexpr CommandId Id = CommandId_I3dl2Reverb;

  EffectParameter<I3dl2ReverbParameter> parameter;
  DspAddr state;
  void* workBuffer;
  bool isEnabled;
};

struct CompressorCommand : EffectCommandBase {
  static constexpr CommandId Id = CommandId_Compressor;

  CompressorParameter parameter;
  DspAddr state;
  DspAddr statistics;
  bool isEnabled;
};

struct LightLimiterCommandBase {
  CommandHeader header;
  int16_t inputs[6];
  int16_t outputs[6];
  LightLimiterParameter parameter;
  DspAddr state;
  void* workBuffer;
};

struct LightLimiterVersion1Command : LightLimiterCommandBase {
  static constexpr CommandId Id = CommandId_LightLimiterVersion1;

  bool isEnabled;
};

struct LightLimiterVersion2Command : LightLimiterCommandBase {
  static constexpr CommandId Id = CommandId_LightLimiterVersion2;

  DspAddr statistics;
  bool isEnabled;
};

struct AuxCommand {
  static constexpr CommandId Id = CommandId_Aux;

  CommandHeader header;
  uint8_t reserved[8];
  int16_t input;
  int16_t output;
  DspAddr sendBufferInfo;
  DspAddr returnBufferInfo;
  DspAddr sendBuffer;
  DspAddr returnBuffer;
  uint32_t countMax;
  uint32_t writeOffset;
  uint32_t updateCount;
  bool isEnabled;
};

struct AuxGroupedCommand {
  static constexpr CommandId Id = CommandId_AuxGrouped;

  CommandHeader header;
  int8_t channelCount;
  uint8_t reserved0[7];
  int16_t inputs[6];
  int16_t outputs[6];
  uint8_t reserved1[8];
  DspAddr sendBufferInfo;
  DspAddr returnBufferInfo;
  DspAddr sendBuffer;
  DspAddr returnBuffer;
  uint32_t countMax;
  uint32_t writeOffset;
  uint32_t updateCount;
  bool isEnabled;
};

struct CaptureCommand {
  static constexpr CommandId Id = CommandId_Capture;

  CommandHeader header;
  uint8_t reserved[8];
  int16_t input;
  DspAddr sendBufferInfo;
  DspAddr sendBuffer;
  uint32_t countMax;
  uint32_t writeOffset;
  uint32_t updateCount;
  bool isEnabled;
};

struct VolumeCommand {
  static constexpr CommandId Id = CommandId_Volume;

  CommandHeader header;
  uint8_t reserved[7];
  int8_t precision;
  int16_t input;
  int16_t output;
  int32_t volume;
};

struct DepopForMixBuffersCommand {
  static constexpr CommandId Id = CommandId_DepopForMixBuffers;

  CommandHeader header;
  uint8_t reserved[8];
  int bufferOffset;
  int bufferCount;
  int32_t decay;
  DspAddr depopBuffer;
};

struct UpsampleCommand {
  static constexpr CommandId Id = CommandId_Upsample;

  CommandHeader header;
  int16_t bufferOffset;
  int8_t inputs[24];
  int8_t inputCount;
  uint8_t reserved[3];
  int16_t sampleCount;
  DspAddr buffer;
  DspAddr state;
};

struct DownMix6chTo2chCommand {
  static constexpr CommandId Id = CommandId_DownMix6chTo2ch;

  CommandHeader header;
  uint8_t reserved0[8];
  int16_t inputs[6];
  int16_t outputs[6];
  int32_t downMixParameter[4];
  uint8_t reserved1[8];
};

struct DeviceSinkCommand {
  static constexpr CommandId Id = CommandId_DeviceSink;

  CommandHeader header;
  uint8_t reserved[8];
  char name[256];
  int sessionId;
  int32_t* samples;
  int inputCount;
  int16_t inputs[6];
  uint8_t reserved1[8];
};

struct CircularBufferSinkCommand {
  static constexpr CommandId Id = CommandId_CircularBufferSink;

  CommandHeader header;
  uint8_t reserved[8];
  int inputCount;
  int16_t inputs[6];
  DspAddr address;
  uint32_t size;
  uint32_t position;
  uint8_t reserved1[8];
};

struct PerformanceCommand {
  static constexpr CommandId Id = CommandId_Performance;

  CommandHeader header;
  void* translatedAddress;
  PerformanceCommandType type;
  uint32_t entryStartTimeOffset;
  uint32_t headerEntryCountOffset;
  uint32_t entryProcessingTimeOffset;
};

static_assert(sizeof(VolumeCommand) == 32);
static_assert(sizeof(DepopForMixBuffersCommand) == 48);
static_assert(sizeof(UpsampleCommand) == 64);
static_assert(sizeof(DownMix6chTo2chCommand) == 72);
static_assert(sizeof(DeviceSinkCommand) == 320);
static_assert(sizeof(CircularBufferSinkCommand) == 64);
static_assert(sizeof(PerformanceCommand) == 40);
static_assert(sizeof(ClearMixBufferCommand) == 24);
static_assert(sizeof(MixCommand) == 32);
static_assert(sizeof(CopyMixBufferCommand) == 32);
static_assert(sizeof(BiquadFilterFloatCoeffCommand) == 72);
static_assert(sizeof(DelayCommand) == 128);
static_assert(sizeof(ReverbCommand) == 144);
static_assert(sizeof(I3dl2ReverbCommand) == 152);
static_assert(sizeof(CompressorCommand) == 128);
static_assert(sizeof(LightLimiterVersion1Command) == 136);
static_assert(sizeof(LightLimiterVersion2Command) == 144);
static_assert(sizeof(AuxCommand) == 80);
static_assert(sizeof(AuxGroupedCommand) == 104);
static_assert(sizeof(CaptureCommand) == 64);

template<int Slot>
struct UnknownCommand;

// The estimator keeps one overload per command, mostly in command id order.
class ICommandProcessingTimeEstimator {
public:
  virtual uint32_t Estimate(const UnknownCommand<0>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<1>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<2>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<3>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<4>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<5>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<6>& command) const = 0;
  virtual uint32_t Estimate(const VolumeCommand& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<8>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<9>& command) const = 0;
  virtual uint32_t Estimate(const MixCommand& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<11>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<12>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<13>& command) const = 0;
  virtual uint32_t Estimate(const DepopForMixBuffersCommand& command) const = 0;
  virtual uint32_t Estimate(const DelayCommand& command) const = 0;
  virtual uint32_t Estimate(const UpsampleCommand& command) const = 0;
  virtual uint32_t Estimate(const DownMix6chTo2chCommand& command) const = 0;
  virtual uint32_t Estimate(const AuxCommand& command) const = 0;
  virtual uint32_t Estimate(const DeviceSinkCommand& command) const = 0;
  virtual uint32_t Estimate(const CircularBufferSinkCommand& command) const = 0;
  virtual uint32_t Estimate(const ReverbCommand& command) const = 0;
  virtual uint32_t Estimate(const I3dl2ReverbCommand& command) const = 0;
  virtual uint32_t Estimate(const PerformanceCommand& command) const = 0;
  virtual uint32_t Estimate(const ClearMixBufferCommand& command) const = 0;
  virtual uint32_t Estimate(const CopyMixBufferCommand& command) const = 0;
  virtual uint32_t Estimate(
    const LightLimiterVersion1Command& command) const = 0;
  virtual uint32_t Estimate(
    const LightLimiterVersion2Command& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<28>& command) const = 0;
  virtual uint32_t Estimate(const CaptureCommand& command) const = 0;
  virtual uint32_t Estimate(const CompressorCommand& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<31>& command) const = 0;
  virtual uint32_t Estimate(const UnknownCommand<32>& command) const = 0;
  virtual uint32_t Estimate(const AuxGroupedCommand& command) const = 0;
  virtual uint32_t Estimate(
    const BiquadFilterFloatCoeffCommand& command) const = 0;
};

template<class Derived>
class ICommandBuffer {
public:
  virtual ~ICommandBuffer() = default;

  template<class Command>
  Command* Allocate(uint32_t nodeId) {
    return static_cast<Derived*>(this)->template AllocateImpl<Command>(
      nodeId);
  }

  template<class Command>
  void Estimate(Command* command) {
    static_cast<Derived*>(this)->EstimateImpl(command);
  }
};

class CommandBuffer : public ICommandBuffer<CommandBuffer> {
public:
  template<class Command>
  Command* AllocateImpl(uint32_t nodeId) {
    auto* command = reinterpret_cast<Command*>(m_Buffer + m_Offset);
    command->header.size = sizeof(Command);
    command->header.id = Command::Id;
    command->header.nodeId = nodeId;
    command->header.isEnabled = true;
    m_Count++;
    m_Offset += sizeof(Command);
    return command;
  }

  template<class Command>
  void EstimateImpl(Command* command) {
    float time = m_Estimator != nullptr
      ? static_cast<float>(m_Estimator->Estimate(*command)) : 0.0f;
    uint32_t ticks = static_cast<uint32_t>(time * m_ProcessingTimeRatio);
    command->header.estimatedProcessingTime = ticks;
    m_EstimatedProcessingTime += ticks;
  }

  int GetCount() const {
    return m_Count;
  }

  uint32_t GetEstimatedProcessingTime() const {
    return m_EstimatedProcessingTime;
  }

  template<class Command, class... Args>
  Command* Generate(uint32_t nodeId, Args&&... args) {
    Command* command = Allocate<Command>(nodeId);
    Setup(command, std::forward<Args>(args)...);
    Estimate(command);
    return command;
  }

  void Setup(ClearMixBufferCommand* command);
  void Setup(MixCommand* command, int input, int output, float volume,
    bool isHighPrecision);
  void Setup(CopyMixBufferCommand* command, int input, int output);
  void Setup(DelayCommand* command, int bufferOffset,
    const EffectParameter<DelayParameter>* parameter, DelayState* state,
    bool isEnabled, bool isChannelMappingChanged, void* workBuffer);
  void Setup(ReverbCommand* command, int bufferOffset,
    const EffectParameter<ReverbParameter>* parameter, ReverbState* state,
    bool isEnabled, bool isLongSizePreDelaySupported,
    bool isChannelMappingChanged, void* workBuffer);
  void Setup(I3dl2ReverbCommand* command, int bufferOffset,
    const EffectParameter<I3dl2ReverbParameter>* parameter,
    I3dl2ReverbState* state, bool isEnabled, bool isChannelMappingChanged,
    void* workBuffer);
  void Setup(CompressorCommand* command, int bufferOffset,
    const CompressorParameter* parameter, EffectResultState* statistics,
    CompressorState* state, bool isEnabled);
  void Setup(LightLimiterVersion1Command* command, int bufferOffset,
    const LightLimiterParameter* parameter, LightLimiterState* state,
    bool isEnabled, void* workBuffer);
  void Setup(LightLimiterVersion2Command* command, int bufferOffset,
    const LightLimiterParameter* parameter, EffectResultState* statistics,
    LightLimiterState* state, bool isEnabled, void* workBuffer);
  void Setup(BiquadFilterFloatCoeffCommand* command, int input, int output,
    const BiquadFilterCoefficients& coefficients, BiquadFilterState* state,
    bool needInitialization, bool useFloatProcessing);
  void Setup(AuxCommand* command, int input, int output,
    const EffectInfoBase& effect, uint32_t countMax, uint32_t writeOffset,
    uint32_t updateCount);
  void Setup(AuxGroupedCommand* command, int bufferOffset,
    const EffectInfoBase& effect, int8_t channelCount, uint32_t updateCount);
  void Setup(CaptureCommand* command, int input, const EffectInfoBase& effect,
    uint32_t countMax, uint32_t writeOffset, uint32_t updateCount);
  void Setup(UpsampleCommand* command, UpsamplerInfo* upsampler,
    int inputCount, const int8_t (&inputs)[6], int bufferOffset);
  void Setup(DownMix6chTo2chCommand* command, int bufferOffset,
    const int8_t (&inputs)[6], const int8_t (&outputs)[6],
    const int32_t (&downMixParameter)[4]);
  void Setup(DeviceSinkCommand* command, int bufferOffset,
    const SinkInfoBase* sink, int sessionId, int32_t* mixBuffers);
  void Setup(CircularBufferSinkCommand* command, int bufferOffset,
    const SinkInfoBase* sink);
  void Setup(VolumeCommand* command, int buffer, int32_t volume,
    int8_t precision);
  void Setup(DepopForMixBuffersCommand* command, int bufferOffset,
    int bufferCount, int sampleRate, int32_t* depopBuffer);
  void Setup(PerformanceCommand* command,
    const PerformanceEntryAddresses* entry, PerformanceCommandType type);

private:
  uint8_t* m_Buffer;
  size_t m_Size;
  size_t m_Offset;
  int m_Count;
  uint32_t m_EstimatedProcessingTime;
  const MemoryPoolInfo* m_MemoryPool;
  const ICommandProcessingTimeEstimator* m_Estimator;
  uint8_t reserved[8];
  float m_ProcessingTimeRatio;
};

}
