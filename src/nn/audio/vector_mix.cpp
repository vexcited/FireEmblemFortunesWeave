#include "nn/audio/vector_mix.hpp"

#include "nn/audio/vector_arithmetic.hpp"

#include <arm_neon.h>

namespace nn::audio::util {
namespace {

static int32x4_t Add(int32x4_t first, int32x4_t second) {
  int32x4_t result;
  asm volatile("sqadd %0.4s, %1.4s, %2.4s"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

template<int Fraction>
static int16x4_t Narrow(int32x4_t value) {
  int16x4_t result;
  asm volatile("sqrshrn %0.4h, %1.4s, %2"
    : "=w"(result) : "w"(value), "i"(Fraction));
  return result;
}

struct Sum {
  int32x4_t lower;
  int32x4_t upper;
};

static Sum Mix(const short* const __restrict* inputs, const short* gains,
  int channels, unsigned offset, bool repeatLast = false) {
  Sum sum = {
    vmull_n_s16(vld1_s16(inputs[0] + offset), gains[0]),
    vmull_n_s16(vld1_s16(inputs[0] + offset + 4), gains[0])
  };

  for (int channel = 1; channel < channels; ++channel) {
    auto lower = vmull_n_s16(vld1_s16(inputs[channel] + offset),
      gains[channel]);
    // The five-channel tail reuses its last input in both halves.
    unsigned upperOffset = repeatLast && channel == 4 ? offset : offset + 4;
    auto upper = vmull_n_s16(vld1_s16(inputs[channel] + upperOffset),
      gains[channel]);
    sum.lower = Add(sum.lower, lower);
    sum.upper = Add(sum.upper, upper);
  }

  return sum;
}

static void StorePartial(short* output, int16x4_t value, unsigned count) {
  short lanes[4];
  vst1_s16(lanes, value);

  for (unsigned index = 0; index < count; ++index) {
    output[index] = lanes[index];
  }
}

template<int Fraction, class Reader>
static void NarrowCopy(short* output, const Reader& read, unsigned count) {
  unsigned blocks = count / 8;

  for (unsigned index = 0; index < blocks; ++index) {
    unsigned offset = index * 8;
    Sum sum = read(offset, false);
    auto lower = Narrow<Fraction>(sum.lower);
    auto upper = Narrow<Fraction>(sum.upper);
    vst1_s16(output + offset, lower);
    vst1_s16(output + offset + 4, upper);
  }

  if (blocks != 0) {
    if (count % 8 != 0) {
      unsigned offset = count - 8;
      Sum sum = read(offset, true);
      auto lower = Narrow<Fraction>(sum.lower);
      auto upper = Narrow<Fraction>(sum.upper);
      vst1_s16(output + offset, lower);
      vst1_s16(output + offset + 4, upper);
    }

    return;
  }

  Sum sum = read(0, false);
  auto value = Narrow<Fraction>(sum.lower);

  if (count >= 4) {
    vst1_s16(output, value);
    output += 4;
    count -= 4;
    value = Narrow<Fraction>(sum.upper);
  }

  StorePartial(output, value, count);
}

}

template<class Output, class Input>
void VecWideningMix(Output* output, const Input* const __restrict* inputs,
  const Input* gains, int channels, int count, bool sequential) {
  if (channels == 1 || channels > 5 || sequential || count <= 7) {
    VecWideningMul<Output, Input>(output, inputs[0], gains[0], count);

    for (int channel = 1; channel < channels; ++channel) {
      VecWideningMac<Output, Input, 0>(output, inputs[channel],
        gains[channel], count);
    }

    return;
  }

  unsigned frames = count;

  for (unsigned index = 0; index < frames / 8; ++index) {
    unsigned offset = index * 8;
    Sum sum = Mix(inputs, gains, channels, offset);
    vst1q_s32(output + offset, sum.lower);
    vst1q_s32(output + offset + 4, sum.upper);
  }

  if (frames % 8 != 0) {
    unsigned offset = frames - 8;
    Sum sum = Mix(inputs, gains, channels, offset, channels == 5);
    vst1q_s32(output + offset, sum.lower);
    vst1q_s32(output + offset + 4, sum.upper);
  }
}

template<class Accumulator, class Sample, int Fraction>
void VecMix(Sample* output, const Sample* const __restrict* inputs,
  const Sample* gains, int channels, int count, Accumulator* scratch) {
  if (channels != 1 && scratch != nullptr) {
    VecWideningMix<Accumulator, Sample>(scratch, inputs, gains, channels,
      count, true);
    NarrowCopy<Fraction>(output, [scratch](unsigned offset, bool) {
      return Sum{vld1q_s32(scratch + offset),
        vld1q_s32(scratch + offset + 4)};
    }, count);
    return;
  }

  auto read = [inputs, gains, channels](unsigned offset, bool replay) {
    return Mix(inputs, gains, channels, offset, replay && channels == 5);
  };

  if (channels == 1 || count >= 8) {
    NarrowCopy<Fraction>(output, read, count);
    return;
  }

  Sum sum = read(0, false);
  auto lower = Narrow<Fraction>(sum.lower);
  unsigned frames = count;

  if (frames > 4) {
    vst1_s16(output, lower);
    auto upper = Narrow<Fraction>(sum.upper);
    StorePartial(output + 4, upper, frames - 4);
  }
  else {
    StorePartial(output, lower, frames);
  }
}

template void VecWideningMix<int, short>(int*,
  const short* const __restrict*, const short*, int, int, bool);
template void VecMix<int, short, 12>(short*,
  const short* const __restrict*, const short*, int, int, int*);

}
