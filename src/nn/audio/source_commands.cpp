#include "nn/audio/source_commands.hpp"

#include <stddef.h>

namespace nn::audio::dsp {

static_assert(sizeof(DataSourceCommandParameters) == 0x24);
static_assert(sizeof(DataSourceWaveBufferVersion1) == 40);
static_assert(offsetof(DataSourceWaveBufferVersion1, context) == 0x18);
static_assert(offsetof(PcmDataSourceCommandVersion1, buffers) == 0x30);
static_assert(offsetof(PcmDataSourceCommandVersion1, state) == 0xd0);
static_assert(offsetof(AdpcmDataSourceCommandVersion1, buffers) == 0x28);
static_assert(offsetof(AdpcmDataSourceCommandVersion1, state) == 0xc8);
static_assert(offsetof(AdpcmDataSourceCommandVersion1, coefficients) == 0xd0);
static_assert(offsetof(DataSourceCommandVersion2, buffers) == 0x30);
static_assert(offsetof(DataSourceCommandVersion2, state) == 0xf0);
static_assert(offsetof(DataSourceCommandVersion2, coefficients) == 0xf8);

static void ConvertBuffers(WaveDecodeBuffer (&output)[4],
  const DataSourceWaveBufferVersion1 (&input)[4]) {
  for (unsigned index = 0; index < 4; ++index) {
    auto& destination = output[index];
    const auto& source = input[index];
    destination.buffer = source.buffer;
    destination.context = source.context;
    destination.size = source.size;
    destination.reserved = source.reserved_20;
    destination.start = source.start;
    destination.end = source.end;
    destination.loop_start = source.start;
    destination.loop_end = source.end;
    destination.loop_limit = -int32_t(source.looping);
    destination.looping = source.looping;
    destination.end_of_stream = source.end_of_stream;
  }
}

static void Decode(CommandListProcessor* processor,
  const DataSourceCommandParameters& parameter, int format, int channel,
  int channels, const WaveDecodeBuffer* buffers, WaveDecodeState* state,
  const int16_t* coefficients) {
  DecodeFromWaveBuffersArgs argument = {};
  argument.format = format;
  argument.output = processor->GetMixBuffer(parameter.output);
  argument.state = state;
  argument.buffers = buffers;
  argument.channel = channel;
  argument.channels = channels;
  argument.mode = parameter.mode;
  argument.pitch = parameter.pitch;
  argument.source_rate = parameter.source_rate;
  argument.target_rate = processor->sample_rate;
  argument.count = processor->sample_count;
  argument.coefficients = coefficients;
  argument.reset_played_on_loop = parameter.flags & 1;
  argument.skip_resample = (parameter.flags >> 1) & 1;
  DecodeFromWaveBuffers(argument);
}

static void DecodePcmV1(CommandListProcessor* processor,
  const PcmDataSourceCommandVersion1* command, int format) {
  WaveDecodeBuffer buffers[4] = {};
  ConvertBuffers(buffers, command->buffers);
  Decode(processor, command->parameter, format, command->channel,
    command->channels, buffers, command->state, nullptr);
}

void ProcessPcm16SourceV1Impl(CommandListProcessor* processor,
  const PcmDataSourceCommandVersion1* command) {
  DecodePcmV1(processor, command, 2);
}

void ProcessPcmFloatSourceV1Impl(CommandListProcessor* processor,
  const PcmDataSourceCommandVersion1* command) {
  DecodePcmV1(processor, command, 5);
}

void ProcessAdpcmSourceV1Impl(CommandListProcessor* processor,
  const AdpcmDataSourceCommandVersion1* command) {
  WaveDecodeBuffer buffers[4] = {};
  ConvertBuffers(buffers, command->buffers);
  Decode(processor, command->parameter, 6, 0, 1, buffers, command->state,
    command->coefficients);
}

void ProcessPcm16SourceV1(CommandListProcessor* processor,
  const PcmDataSourceCommandVersion1* command) {
  ProcessPcm16SourceV1Impl(processor, command);
}

void ProcessPcmFloatSourceV1(CommandListProcessor* processor,
  const PcmDataSourceCommandVersion1* command) {
  ProcessPcmFloatSourceV1Impl(processor, command);
}

void ProcessAdpcmSourceV1(CommandListProcessor* processor,
  const AdpcmDataSourceCommandVersion1* command) {
  ProcessAdpcmSourceV1Impl(processor, command);
}

void ProcessPcm16SourceV2(CommandListProcessor* processor,
  const DataSourceCommandVersion2* command) {
  Decode(processor, command->parameter, 2, command->channel, command->channels,
    command->buffers, command->state, nullptr);
}

void ProcessPcmFloatSourceV2(CommandListProcessor* processor,
  const DataSourceCommandVersion2* command) {
  Decode(processor, command->parameter, 5, command->channel, command->channels,
    command->buffers, command->state, nullptr);
}

void ProcessAdpcmSourceV2(CommandListProcessor* processor,
  const DataSourceCommandVersion2* command) {
  Decode(processor, command->parameter, 6, 0, 1, command->buffers,
    command->state, command->coefficients);
}

}
