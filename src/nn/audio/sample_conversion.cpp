#include "nn/audio/sample_conversion.hpp"

#include "nn/audio/interleave_conversion.hpp"

#include <arm_neon.h>
#include <stdint.h>

namespace nn::audio::util {
namespace {

template<int Shift>
struct WideningShift {
  void Four(int* output, const short* input) const {
    int32x4_t values = vmovl_s16(vld1_s16(input));
    vst1q_s32(output, vshlq_n_s32(values, Shift));
  }
};

template<int Shift>
struct NarrowingShift {
  void Four(short* output, const int* input) const {
    int32x4_t values = vld1q_s32(input);
    int16x4_t result;
    asm volatile("sqrshrn %0.4h, %1.4s, %2"
      : "=w"(result) : "w"(values), "i"(Shift));
    vst1_s16(output, result);
  }
};

struct VariableNarrowingShift {
  int32x4_t bias;
  int32x4_t shifts;

  void Four(short* output, const int* input) const {
    int32x4_t values = vld1q_s32(input);
    int32x4_t rounded;
    asm volatile("sqadd %0.4s, %1.4s, %2.4s"
      : "=w"(rounded) : "w"(values), "w"(bias));
    int32x4_t shifted = vshlq_s32(rounded, shifts);
    int16x4_t result;
    asm volatile("sqshrn %0.4h, %1.4s, #1"
      : "=w"(result) : "w"(shifted));
    vst1_s16(output, result);
  }
};

struct VariableShift {
  int32x4_t shifts;

  void Four(int* output, const int* input) const {
    int32x4_t values = vld1q_s32(input);
    int32x4_t result;
    asm volatile("sqrshl %0.4s, %1.4s, %2.4s"
      : "=w"(result) : "w"(values), "w"(shifts));
    vst1q_s32(output, result);
  }
};

template<unsigned Width, class Out, class In, class Operation>
static void Block(Out* output, const In* input, const Operation& operation) {
  Out values[Width];

  for (unsigned offset = 0; offset < Width; offset += 4) {
    operation.Four(values + offset, input + offset);
  }

  for (unsigned index = 0; index < Width; ++index) {
    output[index] = values[index];
  }
}

template<unsigned Width, class Out, class In, class Operation>
static void ShiftSamples(Out* output, const In* input, int count,
  const Operation& operation) {
  unsigned frames = count;

  if (frames >= Width) {
    unsigned blocks = frames / Width;

    for (unsigned index = 0; index < blocks; ++index) {
      unsigned offset = index * Width;
      Block<Width>(output + offset, input + offset, operation);
    }

    if (frames % Width != 0) {
      unsigned offset = frames - Width;
      Block<Width>(output + offset, input + offset, operation);
    }

    return;
  }

  Out values[4];
  operation.Four(values, input);

  while (frames >= 4) {
    for (unsigned index = 0; index < 4; ++index) {
      output[index] = values[index];
    }

    input += 4;
    output += 4;
    frames -= 4;
    operation.Four(values, input);
  }

  for (unsigned index = 0; index < frames; ++index) {
    output[index] = values[index];
  }
}

}

template<class T, int Fraction>
void VecConvertToFloat(float* output, const T* input, int count) {
  float* const __restrict planes[] = {output};
  VecDeinterleaveToFloat<T, Fraction>(planes, input, 1, count);
}

template<class T, int Fraction>
void VecConvertFromFloat(T* output, const float* input, int count) {
  T* const __restrict planes[] = {output};
  VecDeinterleaveFromFloat<T, Fraction>(planes, input, 1, count);
}

template<class Output, class Input>
void VecWideningCopy(Output* output, const Input* input, int count) {
  Output* const __restrict planes[] = {output};
  VecWideningDeinterleave<Output, Input>(planes, input, 1, count);
}

template<class Input, class Output>
void VecNarrowingCopy(Output* output, const Input* input, int count) {
  Output* const __restrict planes[] = {output};
  VecNarrowingDeinterleave<Input, Output>(planes, input, 1, count);
}

template<class Output, class Input, int Shift>
void VecWideningUpShift(Output* output, const Input* input, int count) {
  ShiftSamples<8>(output, input, count, WideningShift<Shift>{});
}

template<class Input, class Output, int Shift>
void VecNarrowingDownShift(Output* output, const Input* input, int count) {
  ShiftSamples<8>(output, input, count, NarrowingShift<Shift>{});
}

template<class Input, class Output>
void VecNarrowingDownShift(Output* output, const Input* input,
  int shift, int count) {
  uint32_t amount = shift;
  VariableNarrowingShift operation{
    vreinterpretq_s32_u32(vdupq_n_u32(1u << ((amount - 1) & 31))),
    vreinterpretq_s32_u32(vdupq_n_u32(1u - amount))
  };
  ShiftSamples<8>(output, input, count, operation);
}

template<class T>
void VecDownShift(T* output, const T* input, int shift, int count) {
  VariableShift operation{
    vreinterpretq_s32_u32(vdupq_n_u32(0u - uint32_t(shift)))
  };
  ShiftSamples<16>(output, input, count, operation);
}

template void VecConvertToFloat<short, 15>(float*, const short*, int);
template void VecConvertToFloat<int, 23>(float*, const int*, int);
template void VecConvertToFloat<int, 31>(float*, const int*, int);
template void VecConvertFromFloat<short, 15>(short*, const float*, int);
template void VecConvertFromFloat<int, 23>(int*, const float*, int);
template void VecConvertFromFloat<int, 31>(int*, const float*, int);
template void VecWideningCopy<int, short>(int*, const short*, int);
template void VecNarrowingCopy<int, short>(short*, const int*, int);
template void VecWideningUpShift<int, short, 8>(int*, const short*, int);
template void VecWideningUpShift<int, short, 15>(int*, const short*, int);
template void VecWideningUpShift<int, short, 16>(int*, const short*, int);
template void VecNarrowingDownShift<int, short, 8>(short*, const int*, int);
template void VecNarrowingDownShift<int, short, 15>(short*, const int*, int);
template void VecNarrowingDownShift<int, short, 16>(short*, const int*, int);
template void VecNarrowingDownShift<int, short>(short*, const int*, int, int);
template void VecDownShift<int>(int*, const int*, int, int);

}
