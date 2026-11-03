#include "nn/audio/sample_decode.hpp"

#include <arm_neon.h>

extern "C" void* memcpy(void*, const void*, size_t);

namespace nn::audio::dsp {

void InvalidateDataCache(void*, size_t);

namespace {

static int32_t Add(int32_t first, int32_t second) {
  return uint32_t(first) + uint32_t(second);
}

static int32_t Subtract(int32_t first, int32_t second) {
  return uint32_t(first) - uint32_t(second);
}

static int16_t Clamp(int32_t value) {
  value = value > -32768 ? value : -32768;
  return value < 32767 ? value : 32767;
}

static int32_t Integer(float value) {
  int32_t result;
  asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
  return result;
}

static int32_t NibblePosition(int32_t sample) {
  int32_t block = sample / 14;
  int32_t remainder = sample % 14;
  return uint32_t(block) * 16 + remainder + (remainder != 0 ? 2 : 0);
}

static int16_t DecodeNibble(unsigned nibble, unsigned scale,
  int16_t first, int16_t second, int16_t previous, int16_t earlier) {
  int32_t expanded = uint32_t(nibble) << 28;
  expanded >>= (17 - scale) & 31;
  uint32_t prediction = uint32_t(int32_t(first) * previous) +
    uint32_t(int32_t(second) * earlier);
  int32_t rounded = prediction + uint32_t(expanded) + 1024;
  return Clamp(rounded >> 11);
}

}

int DecodePcm16(int16_t* output, const DecodeArg& argument) {
  if (!argument.buffer || !argument.buffer_size ||
    argument.end < argument.start) {
    return 0;
  }

  int32_t start = Add(argument.start, argument.offset);
  int32_t index = uint32_t(start) * uint32_t(argument.channels);
  auto* input = reinterpret_cast<const int16_t*>(uintptr_t(argument.buffer) +
    uint64_t(int64_t(index) * 2));
  int32_t remaining = Subtract(argument.end, start);
  int32_t count = argument.count < remaining ? argument.count : remaining;
  InvalidateDataCache(const_cast<int16_t*>(input),
    uint64_t(int64_t(count) * 2) * uint64_t(int64_t(argument.channels)));

  if (argument.channels == 1) {
    memcpy(output, input, uint64_t(int64_t(count) * 2));
  }
  else {
    for (int32_t sample = 0; sample < count; ++sample) {
      index = uint32_t(argument.channels) * uint32_t(sample) +
        argument.channel;
      output[sample] = input[index];
    }
  }

  return count;
}

int DecodePcmFloat(int16_t* output, const DecodeArg& argument) {
  if (!argument.buffer || !argument.buffer_size ||
    argument.end < argument.start) {
    return 0;
  }

  int64_t start = int64_t(argument.start) + argument.offset;
  uint64_t index = uint64_t(start) * uint64_t(int64_t(argument.channels));
  auto* input = reinterpret_cast<const float*>(uintptr_t(argument.buffer) +
    index * 4);
  int32_t remaining = uint32_t(argument.end) - uint32_t(start);
  int32_t count = argument.count < remaining ? argument.count : remaining;
  InvalidateDataCache(const_cast<float*>(input),
    uint64_t(int64_t(count) * argument.channels) * 4);
  int64_t stride = argument.channels;
  int64_t channel = stride == 1 ? 0 : argument.channel;
  int32_t sample = 0;

  for (; int64_t(sample) + 4 < count; sample += 4) {
    float32x4_t values = {input[sample * stride + channel],
      input[(sample + 1) * stride + channel],
      input[(sample + 2) * stride + channel],
      input[(sample + 3) * stride + channel]};
    auto factor = vdupq_n_f32(32767.0f);
    asm volatile("fmul %0.4s, %1.4s, %2.4s"
      : "=w"(values) : "w"(values), "w"(factor));
    int32x4_t integers = {Integer(vgetq_lane_f32(values, 0)),
      Integer(vgetq_lane_f32(values, 1)), Integer(vgetq_lane_f32(values, 2)),
      Integer(vgetq_lane_f32(values, 3))};
    auto minimum = vdupq_n_s32(-32768);
    auto maximum = vdupq_n_s32(32767);
    asm volatile("smin %0.4s, %1.4s, %2.4s\n"
      "smax %0.4s, %0.4s, %3.4s" : "=&w"(integers)
      : "w"(integers), "w"(maximum), "w"(minimum));
    vst1_s16(output + sample, vmovn_s32(integers));
  }

  for (; sample < count; ++sample) {
    float value = input[sample * stride + channel];
    float factor = 32767.0f;
    asm volatile("fmul %s0, %s1, %s2"
      : "=w"(value) : "w"(value), "w"(factor));
    output[sample] = Clamp(Integer(value));
  }

  return count;
}

int DecodeAdpcm(int16_t* output, const DecodeArg& argument) {
  if (!argument.buffer || !argument.buffer_size ||
    argument.end < argument.start) {
    return 0;
  }

  int32_t end = NibblePosition(argument.end);
  int32_t bytes = Add(end, 1) / 2;

  if (uint64_t(int64_t(bytes)) > argument.buffer_size) {
    return 0;
  }

  uint16_t predictor = argument.context->predictor_scale;
  int16_t previous = argument.context->history[0];
  int16_t earlier = argument.context->history[1];
  unsigned coefficient = (predictor >> 3) & 30;
  int16_t first = argument.coefficients[coefficient];
  int16_t second = argument.coefficients[coefficient + 1];
  int32_t start = Add(argument.start, argument.offset);
  int32_t remaining = Subtract(argument.end, start);
  int32_t count = argument.count < remaining ? argument.count : remaining;
  int32_t position = NibblePosition(start);
  auto* input = static_cast<const uint8_t*>(argument.buffer) + position / 2;
  bytes = Subtract(NibblePosition(Add(start, count)) / 2, position / 2);
  InvalidateDataCache(const_cast<uint8_t*>(input), int64_t(bytes));

  for (int32_t sample = 0; sample < count; ++sample) {
    if ((position & 15) == 0) {
      predictor = *input++;
      coefficient = predictor >> 4;
      first = argument.coefficients[coefficient * 2];
      second = argument.coefficients[coefficient * 2 + 1];
      if (count - sample >= 14) {
        for (unsigned pair = 0; pair < 7; ++pair) {
          uint8_t packed = *input++;
          int16_t high = DecodeNibble(packed >> 4, predictor & 15,
            first, second, previous, earlier);
          output[sample++] = high;
          int16_t low = DecodeNibble(packed, predictor & 15,
            first, second, high, previous);
          output[sample++] = low;
          earlier = high;
          previous = low;
        }

        position = Add(position, 16);
        --sample;
        continue;
      }

      position |= 2;
    }

    unsigned nibble = position & 1 ? *input++ : *input >> 4;
    position = Add(position, 1);
    int16_t value = DecodeNibble(nibble, predictor & 15, first, second,
      previous, earlier);
    output[sample] = value;
    earlier = previous;
    previous = value;
  }

  argument.context->predictor_scale = predictor;
  argument.context->history[0] = previous;
  argument.context->history[1] = earlier;
  return count;
}

}
