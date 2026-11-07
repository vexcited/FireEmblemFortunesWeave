#pragma once

#include <stdint.h>

#include "nn/audio/command_list_header.hpp"
#include "nn/audio/depop.hpp"

namespace nn::audio {

struct CommandHeader {
  uint8_t enabled;
  uint8_t id;
  int16_t size;
  uint32_t estimated_ticks;
  int32_t node_id;
  uint8_t reserved_0c[4];
};

struct VolumeCommand {
  CommandHeader header;
  uint8_t reserved_10[7];
  int8_t fraction;
  int16_t input;
  int16_t output;
  int32_t gain;
};

struct VolumeRampCommand {
  CommandHeader header;
  uint8_t reserved_10[3];
  int8_t fraction;
  int16_t input;
  int16_t output;
  int32_t start_gain;
  int32_t end_gain;
};

struct MixCommand {
  CommandHeader header;
  uint8_t reserved_10[7];
  uint8_t high_precision;
  int16_t input;
  int16_t output;
  float gain;
};

struct MixRampCommand {
  CommandHeader header;
  int32_t* last_sample;
  uint8_t reserved_18[3];
  uint8_t high_precision;
  int16_t input;
  int16_t output;
  float start_gain;
  float end_gain;
};

struct MixRampGroupedCommand {
  CommandHeader header;
  int32_t* last_samples;
  uint8_t reserved_18[3];
  uint8_t high_precision;
  int32_t count;
  int16_t inputs[24];
  int16_t outputs[24];
  float start_gains[24];
  float end_gains[24];
};

struct ClearMixBufferCommand {
  CommandHeader header;
};

struct CopyMixBufferCommand {
  CommandHeader header;
  uint8_t reserved_10[8];
  int16_t input;
  int16_t output;
};

struct FillMixBufferCommand {
  CommandHeader header;
  int16_t first_buffer;
  int16_t last_buffer_offset;
  int32_t value;
};

struct FillBufferU8Command {
  CommandHeader header;
  void* buffer;
  uint8_t reserved_18[4];
  uint32_t size;
  uint8_t value;
};

namespace dsp {

class CommandListProcessor {
public:
  const CommandListHeader* list;
  const CommandHeader* current;
  uint64_t list_size;
  uint32_t process_time_max;
  int32_t command_count;
  int32_t sample_count;
  int32_t sample_count_copy;
  int32_t sample_rate;
  uint8_t reserved_2c[4];
  int32_t* mix_buffers;
  int32_t mix_buffer_count;
  int32_t processed_count;
  int64_t start_time_ns;
  uint64_t last_tick;
  uint64_t time_adjustment;
  uint64_t idle_ticks;

  CommandListProcessor();
  void Setup(const void* buffer, uint64_t size);
  void SetProcessTimeMax(uint32_t ticks);
  int32_t* GetMixBuffer(int index);
  int GetSampleCount() const;
  int GetProcessedCommandCount() const;
  int GetRemainCommandCount() const;
  void PreProcessCommands();
  void PostProcessCommands();
  uint64_t Process();
  uint64_t ProcessCommands();
  void DispatchCommand(const CommandHeader* command);

  template<class T>
  void ProcessCommand(const T* command);
};

#define NN_AUDIO_COMMAND_SPECIALIZATION(Type) \
  template<> void CommandListProcessor::ProcessCommand<Type>(const Type*);

NN_AUDIO_COMMAND_SPECIALIZATION(VolumeCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(VolumeRampCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(MixCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(MixRampCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(MixRampGroupedCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(DepopPrepareCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(DepopForMixBuffersCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(ClearMixBufferCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(CopyMixBufferCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(FillMixBufferCommand)
NN_AUDIO_COMMAND_SPECIALIZATION(FillBufferU8Command)

#undef NN_AUDIO_COMMAND_SPECIALIZATION

}
}
