#pragma once

#include <stdint.h>

namespace nn::audio {

struct DepopPrepareCommand {
  uint8_t header[0x18];
  int16_t output_indices[24];
  int32_t* last_samples;
  int32_t mix_buffer_count;
  uint8_t reserved_54[4];
  int32_t* depop_buffer;
};

struct DepopForMixBuffersCommand {
  uint8_t header[0x18];
  int32_t mix_buffer_offset;
  int32_t mix_buffer_count;
  int32_t decay;
  uint8_t reserved_24[4];
  int32_t* depop_buffer;
};

namespace dsp {

class CommandListProcessor;

int ApplyDepop(int32_t* output, int value, int decay, int count);
int ApplyDepopMix1(int32_t* output, int value, int decay, int count);
int ApplyDepopMix2(int32_t* output, int value, int decay, int count);
int ApplyDepopMix(int32_t* output, int value, int decay, int count);

void ProcessDepopPrepareCommand(CommandListProcessor* processor,
  const DepopPrepareCommand* command)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_19DepopPrepareCommandEEEvPKT_");
void ProcessDepopForMixBuffersCommand(CommandListProcessor* processor,
  const DepopForMixBuffersCommand* command)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_25DepopForMixBuffersCommandEEEvPKT_");

}
}
