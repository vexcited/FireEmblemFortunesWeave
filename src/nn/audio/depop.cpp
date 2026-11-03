#include "nn/audio/depop.hpp"

#include <arm_neon.h>
#include <stddef.h>

namespace nn::audio::dsp {

static_assert(offsetof(DepopPrepareCommand, last_samples) == 0x48);
static_assert(offsetof(DepopPrepareCommand, mix_buffer_count) == 0x50);
static_assert(offsetof(DepopPrepareCommand, depop_buffer) == 0x58);
static_assert(offsetof(DepopForMixBuffersCommand, decay) == 0x20);
static_assert(offsetof(DepopForMixBuffersCommand, depop_buffer) == 0x28);

static uint32_t Decay(uint32_t value, int decay) {
  return uint64_t(int64_t(int32_t(value)) * decay) >> 15;
}

template<bool Mix>
static int ScalarDepop(int32_t* output, int value, int decay, int count) {
  bool negative = value <= 0;
  uint32_t magnitude = negative ? 0u - uint32_t(value) : uint32_t(value);

  for (int index = 0; index < count; ++index) {
    magnitude = Decay(magnitude, decay);
    uint32_t sample = negative ? 0u - magnitude : magnitude;

    if constexpr (Mix) {
      sample += uint32_t(output[index]);
    }

    output[index] = sample;
  }

  return negative ? 0u - magnitude : magnitude;
}

int ApplyDepop(int32_t* output, int value, int decay, int count) {
  return ScalarDepop<false>(output, value, decay, count);
}

int ApplyDepopMix1(int32_t* output, int value, int decay, int count) {
  return ScalarDepop<true>(output, value, decay, count);
}

int ApplyDepopMix2(int32_t* output, int value, int decay, int count) {
  bool negative = value <= 0;
  uint32_t magnitude = negative ? 0u - uint32_t(value) : uint32_t(value);

  // The first multiplication zero-extends the magnitude, even for INT_MIN.
  uint32_t lanes[2];
  lanes[0] = (uint64_t(int64_t(decay)) * magnitude) >> 15;
  lanes[1] = Decay(lanes[0], decay);
  int32x2_t current = vreinterpret_s32_u32(vld1_u32(lanes));
  int32x2_t samples = vld1_s32(output);
  samples = negative ? vsub_s32(samples, current) : vadd_s32(samples, current);
  vst1_s32(output, samples);
  output += 2;

  // Later pairs saturate both the decayed value and its addition to output.
  int32_t squared_decay = uint32_t(decay) * uint32_t(decay);

  for (uint32_t remaining = uint32_t(count) - 2; remaining != 0;
       remaining -= 2) {
    current = vqshrn_n_s64(vmull_n_s32(current, squared_decay), 30);
    samples = vld1_s32(output);

    // Only the selected operation may update FPSR.QC.
    if (negative) {
      asm volatile("sqsub %0.2s, %1.2s, %2.2s" : "=w"(samples)
                   : "w"(samples), "w"(current));
    }
    else {
      asm volatile("sqadd %0.2s, %1.2s, %2.2s" : "=w"(samples)
                   : "w"(samples), "w"(current));
    }
    vst1_s32(output, samples);
    output += 2;
  }

  uint32_t result = vget_lane_u32(vreinterpret_u32_s32(current), 1);
  return negative ? 0u - result : result;
}

int ApplyDepopMix(int32_t* output, int value, int decay, int count) {
  if ((count & 1) != 0) {
    return ApplyDepopMix1(output, value, decay, count);
  }

  return ApplyDepopMix2(output, value, decay, count);
}

template<class T>
static T& Field(CommandListProcessor* processor, unsigned offset) {
  return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(processor) + offset);
}

void ProcessDepopPrepareCommand(CommandListProcessor*,
  const DepopPrepareCommand* command) {
  for (int index = 0; index < command->mix_buffer_count; ++index) {
    uint32_t value = command->last_samples[index];

    if (value != 0) {
      int16_t target = command->output_indices[index];
      command->depop_buffer[target] =
        uint32_t(command->depop_buffer[target]) + value;
      command->last_samples[index] = 0;
    }
  }
}

void ProcessDepopForMixBuffersCommand(CommandListProcessor* processor,
  const DepopForMixBuffersCommand* command) {
  int32_t end = uint32_t(command->mix_buffer_offset)
    + uint32_t(command->mix_buffer_count);
  int32_t buffer_count = Field<int32_t>(processor, 0x38);

  if (end > buffer_count) {
    end = buffer_count;
  }

  int32_t decay = command->decay;
  int32_t* depop = command->depop_buffer;

  for (int64_t index = command->mix_buffer_offset; index < end; ++index) {
    int32_t value = depop[index];

    if (value != 0) {
      int32_t count = Field<int32_t>(processor, 0x20);
      int32_t* output = Field<int32_t*>(processor, 0x30);
      depop[index] = ApplyDepopMix(output + index * count, value, decay, count);
    }
  }
}

}
