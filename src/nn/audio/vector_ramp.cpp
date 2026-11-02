#include "nn/audio/vector_ramp.hpp"

#include "nn/audio/interleave.hpp"
#include "nn/audio/sample_conversion.hpp"
#include "nn/audio/vector_arithmetic.hpp"

#include <arm_neon.h>
#include <stdint.h>

namespace nn::audio::util {
namespace {

template<class T>
struct Lanes;

template<>
struct Lanes<short> {
  using Vector = int16x4_t;

  static Vector Load(const short* input) {
    return vld1_s16(input);
  }

  static void Store(short* output, Vector value) {
    vst1_s16(output, value);
  }

  static Vector Broadcast(short value) {
    return vdup_n_s16(value);
  }

  static Vector Add(Vector first, Vector second) {
    Vector result;
    asm volatile("sqadd %0.4h, %1.4h, %2.4h"
      : "=w"(result) : "w"(first), "w"(second));
    return result;
  }
};

template<>
struct Lanes<int> {
  using Vector = int32x4_t;

  static Vector Load(const int* input) {
    return vld1q_s32(input);
  }

  static void Store(int* output, Vector value) {
    vst1q_s32(output, value);
  }

  static Vector Broadcast(int value) {
    return vdupq_n_s32(value);
  }

  static Vector Add(Vector first, Vector second) {
    Vector result;
    asm volatile("sqadd %0.4s, %1.4s, %2.4s"
      : "=w"(result) : "w"(first), "w"(second));
    return result;
  }
};

template<>
struct Lanes<float> {
  using Vector = float32x4_t;

  static Vector Load(const float* input) {
    return vld1q_f32(input);
  }

  static void Store(float* output, Vector value) {
    vst1q_f32(output, value);
  }

  static Vector Broadcast(float value) {
    return vdupq_n_f32(value);
  }

  static Vector Add(Vector first, Vector second) {
    Vector result;
    asm volatile("fadd %0.4s, %1.4s, %2.4s"
      : "=w"(result) : "w"(first), "w"(second));
    return result;
  }
};

static float AddFloat(float first, float second) {
  float result;
  asm volatile("fadd %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float MultiplyFloat(float first, float second) {
  float result;
  asm volatile("fmul %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float LinearFloat(float gain, float step, int count) {
  float frames;
  asm volatile("scvtf %s0, %w1" : "=w"(frames) : "r"(count));
  float result;
  asm volatile("fmadd %s0, %s1, %s2, %s3"
    : "=w"(result) : "w"(step), "w"(frames), "w"(gain));
  return result;
}

template<class T>
static void StorePartial(T* output, typename Lanes<T>::Vector vector,
  unsigned count) {
  T values[4];
  Lanes<T>::Store(values, vector);

  for (unsigned index = 0; index < count; ++index) {
    output[index] = values[index];
  }
}

template<int Fraction>
static int16x4_t Narrow(int32x4_t value) {
  int16x4_t result;

  if constexpr (Fraction == 0) {
    asm volatile("sqxtn %0.4h, %1.4s"
      : "=w"(result) : "w"(value));
  }
  else {
    asm volatile("sqrshrn %0.4h, %1.4s, %2"
      : "=w"(result) : "w"(value), "i"(Fraction));
  }

  return result;
}

template<int Fraction>
static int32x2_t Narrow(int64x2_t value) {
  int32x2_t result;

  if constexpr (Fraction == 0) {
    asm volatile("sqxtn %0.2s, %1.2d"
      : "=w"(result) : "w"(value));
  }
  else {
    asm volatile("sqrshrn %0.2s, %1.2d, %2"
      : "=w"(result) : "w"(value), "i"(Fraction));
  }

  return result;
}

template<class Out, class In, int Fraction, bool Replace>
struct FixedOperation {
  using Vector = typename Lanes<Out>::Vector;

  static Vector Compute(const Out* output, const In* input, Vector gain) {
    Vector scaled;

    if constexpr (sizeof(Out) == 2) {
      scaled = Narrow<Fraction>(vmull_s16(vld1_s16(input), gain));
    }
    else {
      int32x4_t samples;

      if constexpr (sizeof(In) == 2) {
        samples = vmovl_s16(vld1_s16(input));
      }
      else {
        samples = vld1q_s32(input);
      }

      auto lower = vmull_s32(vget_low_s32(samples), vget_low_s32(gain));
      auto upper = vmull_high_s32(samples, gain);
      scaled = vcombine_s32(Narrow<Fraction>(lower), Narrow<Fraction>(upper));
    }

    if constexpr (Replace) {
      return scaled;
    }
    else {
      return Lanes<Out>::Add(Lanes<Out>::Load(output), scaled);
    }
  }
};

template<bool Replace, bool Ramped>
struct FloatOperation {
  static float32x4_t Compute(const float* output, const float* input,
    float32x4_t gain) {
    float32x4_t samples = vld1q_f32(input);
    float32x4_t first = Ramped ? gain : samples;
    float32x4_t second = Ramped ? samples : gain;
    float32x4_t result;

    if constexpr (Replace) {
      asm volatile("fmul %0.4s, %1.4s, %2.4s"
        : "=w"(result) : "w"(first), "w"(second));
    }
    else {
      result = vld1q_f32(output);
      asm volatile("fmla %0.4s, %1.4s, %2.4s"
        : "+w"(result) : "w"(first), "w"(second));
    }

    return result;
  }
};

template<class Out, class In, class Operation, bool Replay>
static void Constant(Out* output, const In* input, Out gain, int count) {
  auto gains = Lanes<Out>::Broadcast(gain);
  unsigned frames = count;
  unsigned blocks = frames / 8;

  for (unsigned index = 0; index < blocks; ++index) {
    unsigned offset = index * 8;
    auto lower = Operation::Compute(output + offset, input + offset, gains);
    auto upper = Operation::Compute(output + offset + 4, input + offset + 4,
      gains);
    Lanes<Out>::Store(output + offset, lower);
    Lanes<Out>::Store(output + offset + 4, upper);
  }

  if constexpr (Replay) {
    if (blocks != 0) {
      if (frames % 8 != 0) {
        unsigned offset = frames - 8;
        auto lower = Operation::Compute(output + offset, input + offset,
          gains);
        auto upper = Operation::Compute(output + offset + 4,
          input + offset + 4, gains);
        Lanes<Out>::Store(output + offset, lower);
        Lanes<Out>::Store(output + offset + 4, upper);
      }

      return;
    }
  }

  unsigned offset = blocks * 8;
  unsigned remaining = frames & 7;

  if constexpr (!Replay) {
    if (remaining == 0) {
      return;
    }
  }

  auto values = Operation::Compute(output + offset, input + offset, gains);

  if (remaining >= 4) {
    Lanes<Out>::Store(output + offset, values);
    remaining -= 4;
    offset += 4;

    if constexpr (!Replay) {
      if (remaining == 0) {
        return;
      }
    }

    values = Operation::Compute(output + offset, input + offset, gains);
  }

  StorePartial(output + offset, values, remaining);
}

template<class T>
struct GainState;

template<>
struct GainState<short> {
  int16x4_t first;
  int16x4_t second;
  int16x4_t increment;

  GainState(short gain, short step, unsigned count) {
    uint16x4_t indices = {0, 1, 2, 3};
    first = vreinterpret_s16_u16(vmla_n_u16(vdup_n_u16(uint16_t(gain)),
      indices, uint16_t(step)));
    auto delta = vreinterpret_s16_u16(
      vdup_n_u16(uint16_t(uint16_t(step) * 4u)));
    second = Lanes<short>::Add(first, delta);

    if (count >= 8) {
      increment = Lanes<short>::Add(delta, delta);
    }
  }

  int16x4_t First() const {
    return first;
  }

  int16x4_t Second() const {
    return second;
  }

  void FinishBlock() {
    first = Lanes<short>::Add(first, increment);
    second = Lanes<short>::Add(second, increment);
  }
};

template<>
struct GainState<int> {
  int32x4_t value;
  int32x4_t increment;

  GainState(int gain, int step, unsigned) {
    uint32x4_t indices = {0, 1, 2, 3};
    value = vreinterpretq_s32_u32(vmlaq_n_u32(vdupq_n_u32(uint32_t(gain)),
      indices, uint32_t(step)));
    increment = vreinterpretq_s32_u32(vdupq_n_u32(uint32_t(step) * 4u));
  }

  int32x4_t First() const {
    return value;
  }

  int32x4_t Second() {
    value = Lanes<int>::Add(value, increment);
    return value;
  }

  void FinishBlock() {
    value = Lanes<int>::Add(value, increment);
  }
};

template<>
struct GainState<float> {
  float32x4_t value;
  float32x4_t increment;

  GainState(float gain, float step, unsigned) {
    float second = AddFloat(gain, step);
    float third = AddFloat(step, second);
    float fourth = AddFloat(step, third);
    float delta = MultiplyFloat(step, 4.0f);
    value = {gain, second, third, fourth};
    increment = vdupq_n_f32(delta);
  }

  float32x4_t First() const {
    return value;
  }

  float32x4_t Second() {
    value = Lanes<float>::Add(increment, value);
    return value;
  }

  void FinishBlock() {
    value = Lanes<float>::Add(increment, value);
  }
};

template<class Out, class In, class Operation>
static void Ramped(Out* output, const In* input, Out gain, Out step,
  int count) {
  unsigned frames = count;
  GainState<Out> state(gain, step, frames);
  unsigned offset = 0;

  for (unsigned index = 0; index < frames / 8; ++index) {
    auto lower = Operation::Compute(output + offset, input + offset,
      state.First());
    auto upper = Operation::Compute(output + offset + 4, input + offset + 4,
      state.Second());
    state.FinishBlock();
    Lanes<Out>::Store(output + offset, lower);
    Lanes<Out>::Store(output + offset + 4, upper);
    offset += 8;
  }

  unsigned remaining = frames & 7;

  if (remaining != 0) {
    auto values = Operation::Compute(output + offset, input + offset,
      state.First());

    if (remaining >= 4) {
      Lanes<Out>::Store(output + offset, values);
      offset += 4;
      remaining -= 4;

      if (remaining == 0) {
        return;
      }

      values = Operation::Compute(output + offset, input + offset,
        state.Second());
    }

    StorePartial(output + offset, values, remaining);
  }
}

template<class Out, class In, class Gain, int Fraction, bool Replace>
static Gain Fixed(Out* output, const In* input, Gain gain, Gain step,
  int count) {
  using Operation = FixedOperation<Out, In, Fraction, Replace>;

  if (step != 0) {
    Ramped<Out, In, Operation>(output, input, gain, step, count);
    return Gain(uint32_t(gain) + uint32_t(step) * uint32_t(count));
  }

  if constexpr (Fraction < sizeof(Gain) * 8 - 1) {
    if (gain == (1 << Fraction)) {
      if constexpr (!Replace) {
        VecAcc<Out, In>(output, input, count);
      }
      else if constexpr (sizeof(Out) == sizeof(In)) {
        VecDeinterleaveToSingleBuffer<Out>(output, input, 1, count);
      }
      else {
        VecWideningCopy<Out, In>(output, input, count);
      }

      return gain;
    }
  }

  Constant<Out, In, Operation, Replace>(output, input, gain, count);
  return gain;
}

template<bool Replace>
static float Floating(float* output, const float* input, float gain,
  float step, int count) {
  if (step != 0.0f) {
    Ramped<float, float, FloatOperation<Replace, true>>(output, input, gain,
      step, count);
    return LinearFloat(gain, step, count);
  }

  if (gain == 1.0f) {
    if constexpr (Replace) {
      VecDeinterleaveToSingleBuffer<float>(output, input, 1, count);
    }
    else {
      VecAcc<float, float>(output, input, count);
    }
  }
  else {
    Constant<float, float, FloatOperation<Replace, false>, false>(output,
      input, gain, count);
  }

  return gain;
}

}

namespace internal {

template<class Accumulator, class Output, class Input, class Gain, int Fraction>
__attribute__((noinline))
Gain VecMacRampedFixedPoint(Output* output, const Input* input, Gain gain,
  Gain step, int count, bool replace) {
  if (replace) {
    return Fixed<Output, Input, Gain, Fraction, true>(output, input, gain,
      step, count);
  }
  else {
    return Fixed<Output, Input, Gain, Fraction, false>(output, input, gain,
      step, count);
  }
}

float VecMacRampedFloatingPoint(float*, const float*, float, float, int, bool)
  asm("_ZN2nn5audio4util8internal25VecMacRampedFloatingPointIfTnPNSt3__1"
      "9enable_ifIXsr3std17is_floating_pointIT_EE5valueEvE4typeELPv0EEES6_"
      "PS6_PKS6_S6_S6_ib");

__attribute__((noinline))
float VecMacRampedFloatingPoint(float* output, const float* input, float gain,
  float step, int count, bool replace) {
  if (replace) {
    return Floating<true>(output, input, gain, step, count);
  }
  else {
    return Floating<false>(output, input, gain, step, count);
  }
}

}

template<class Accumulator, class Output, class Input, class Gain, int Fraction>
Gain VecMacRamped(Output* output, const Input* input, Gain gain, Gain step,
  int count, bool replace) {
  return internal::VecMacRampedFixedPoint<Accumulator, Output, Input, Gain,
    Fraction>(output, input, gain, step, count, replace);
}

template<class T>
T VecMacRamped(T* output, const T* input, T gain, T step, int count,
  bool replace) {
  return internal::VecMacRampedFloatingPoint(output, input, gain, step,
    count, replace);
}

#define INSTANTIATE(A, O, I, G, F) \
  template G VecMacRamped<A, O, I, G, F>(O*, const I*, G, G, int, bool); \
  template G internal::VecMacRampedFixedPoint<A, O, I, G, F>( \
    O*, const I*, G, G, int, bool)

INSTANTIATE(int, short, short, short, 0);
INSTANTIATE(int, short, short, short, 7);
INSTANTIATE(int, short, short, short, 15);
INSTANTIATE(long, int, int, int, 0);
INSTANTIATE(long, int, short, int, 15);
INSTANTIATE(long, int, int, int, 23);
INSTANTIATE(long, int, int, int, 31);

#undef INSTANTIATE

template float VecMacRamped<float>(float*, const float*, float, float,
  int, bool);

}
