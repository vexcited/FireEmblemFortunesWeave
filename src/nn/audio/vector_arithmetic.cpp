#include "nn/audio/vector_arithmetic.hpp"

#include <arm_neon.h>
#include <stdint.h>

namespace nn::audio::util {
namespace {

template<class T>
struct Arithmetic;

#define INTEGER_ARITHMETIC(T, VECTOR, LOAD, STORE, LANES) \
  template<> struct Arithmetic<T> { \
    using Vector = VECTOR; \
    static Vector Load(const T* input) { return LOAD(input); } \
    static void Store(T* output, Vector value) { STORE(output, value); } \
    static Vector Add(Vector first, Vector second) { \
      Vector result; \
      asm volatile("sqadd %0." LANES ", %1." LANES ", %2." LANES \
        : "=w"(result) : "w"(first), "w"(second)); \
      return result; \
    } \
  }

INTEGER_ARITHMETIC(short, int16x8_t, vld1q_s16, vst1q_s16, "8h");
INTEGER_ARITHMETIC(int, int32x4_t, vld1q_s32, vst1q_s32, "4s");
INTEGER_ARITHMETIC(long, int64x2_t, vld1q_s64, vst1q_s64, "2d");

#undef INTEGER_ARITHMETIC

template<>
struct Arithmetic<float> {
  using Vector = float32x4_t;

  static Vector Load(const float* input) {
    return vld1q_f32(input);
  }

  static void Store(float* output, Vector value) {
    vst1q_f32(output, value);
  }

  static Vector Add(Vector first, Vector second) {
    Vector result;
    asm volatile("fadd %0.4s, %1.4s, %2.4s"
      : "=w"(result) : "w"(first), "w"(second));
    return result;
  }
};

template<class Out, class In>
static typename Arithmetic<Out>::Vector LoadInput(const In* input) {
  if constexpr (sizeof(Out) == sizeof(In)) {
    return Arithmetic<Out>::Load(input);
  }
  else if constexpr (sizeof(In) == 2) {
    return vmovl_s16(vld1_s16(input));
  }
  else {
    return vmovl_s32(vld1_s32(input));
  }
}

template<class Out, class In>
struct AddOperation {
  using Output = Out;
  using Vector = typename Arithmetic<Out>::Vector;
  static constexpr unsigned Lanes = 16 / sizeof(Out);
  const Out* first;
  const In* second;

  Vector Compute(unsigned offset) const {
    return Arithmetic<Out>::Add(Arithmetic<Out>::Load(first + offset),
      LoadInput<Out>(second + offset));
  }

  static void Store(Out* output, Vector value) {
    Arithmetic<Out>::Store(output, value);
  }
};

template<class Operation>
static void StorePartial(typename Operation::Output* output,
  typename Operation::Vector vector, unsigned count) {
  typename Operation::Output values[Operation::Lanes];
  Operation::Store(values, vector);

  for (unsigned index = 0; index < count; ++index) {
    output[index] = values[index];
  }
}

template<bool Accumulate, class Operation>
static void Run(typename Operation::Output* output, int count,
  const Operation& operation) {
  constexpr unsigned Lanes = Operation::Lanes;
  constexpr unsigned Width = Lanes * 2;
  unsigned frames = count;
  unsigned blocks = frames / Width;

  for (unsigned index = 0; index < blocks; ++index) {
    unsigned offset = index * Width;
    auto first = operation.Compute(offset);
    auto second = operation.Compute(offset + Lanes);
    Operation::Store(output + offset, first);
    Operation::Store(output + offset + Lanes, second);
  }

  if constexpr (!Accumulate) {
    if (blocks != 0) {
      if (frames % Width != 0) {
        unsigned offset = frames - Width;
        auto first = operation.Compute(offset);
        auto second = operation.Compute(offset + Lanes);
        Operation::Store(output + offset, first);
        Operation::Store(output + offset + Lanes, second);
      }

      return;
    }
  }

  unsigned offset = blocks * Width;
  unsigned remaining = frames % Width;

  if constexpr (Accumulate) {
    if (remaining == 0) {
      return;
    }
  }

  auto values = operation.Compute(offset);

  if (remaining >= Lanes) {
    Operation::Store(output + offset, values);
    remaining -= Lanes;
    offset += Lanes;

    if constexpr (Accumulate) {
      if (remaining == 0) {
        return;
      }
    }

    values = operation.Compute(offset);
  }

  StorePartial<Operation>(output + offset, values, remaining);
}

struct MultiplyOperation {
  using Output = int;
  using Vector = int32x4_t;
  static constexpr unsigned Lanes = 4;
  const short* input;
  short gain;

  Vector Compute(unsigned offset) const {
    return vmull_n_s16(vld1_s16(input + offset), gain);
  }

  static void Store(int* output, Vector value) {
    vst1q_s32(output, value);
  }
};

template<int Fraction, bool Double>
static int32x4_t MultiplyAccumulate(const int* output, const short* input,
  int16x4_t gain) {
  int32x4_t value = vld1q_s32(output);
  int16x4_t samples = vld1_s16(input);

  if constexpr (Double) {
    asm volatile("sqdmlal %0.4s, %1.4h, %2.4h"
      : "+w"(value) : "w"(samples), "w"(gain));
    return value;
  }
  else {
    int32x4_t product = vmull_s16(samples, gain);

    if constexpr (Fraction != 0) {
      product = vrshrq_n_s32(product, Fraction);
    }

    return Arithmetic<int>::Add(value, product);
  }
}

template<int Fraction, bool Double>
struct MacOperation {
  using Output = int;
  using Vector = int32x4_t;
  static constexpr unsigned Lanes = 4;
  int* output;
  const short* input;
  int16x4_t gain;

  Vector Compute(unsigned offset) const {
    return MultiplyAccumulate<Fraction, Double>(output + offset,
      input + offset, gain);
  }

  static void Store(int* output, Vector value) {
    vst1q_s32(output, value);
  }
};

static int16x4_t AddGain(int16x4_t first, int16x4_t second) {
  int16x4_t result;
  asm volatile("sqadd %0.4h, %1.4h, %2.4h"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

template<int Fraction, bool Double>
static short Ramp(int* output, const short* input, short gain, short step,
  int count) {
  uint16x4_t indices = {0, 1, 2, 3};
  uint16x4_t initial = vmla_n_u16(vdup_n_u16(uint16_t(gain)), indices,
    uint16_t(step));
  int16x4_t first = vreinterpret_s16_u16(initial);
  int16x4_t four_steps = vreinterpret_s16_u16(
    vdup_n_u16(uint16_t(uint16_t(step) * 4u)));
  int16x4_t second = AddGain(first, four_steps);
  unsigned frames = count;
  unsigned offset = 0;

  if (frames >= 8) {
    int16x4_t eight_steps = AddGain(four_steps, four_steps);
    unsigned blocks = frames / 8;

    for (unsigned index = 0; index < blocks; ++index) {
      auto lower = MultiplyAccumulate<Fraction, Double>(output + offset,
        input + offset, first);
      auto upper = MultiplyAccumulate<Fraction, Double>(output + offset + 4,
        input + offset + 4, second);
      first = AddGain(first, eight_steps);
      second = AddGain(second, eight_steps);
      vst1q_s32(output + offset, lower);
      vst1q_s32(output + offset + 4, upper);
      offset += 8;
    }
  }

  unsigned remaining = frames & 7;

  if (remaining != 0) {
    auto values = MultiplyAccumulate<Fraction, Double>(output + offset,
      input + offset, first);

    if (remaining >= 4) {
      vst1q_s32(output + offset, values);
      remaining -= 4;
      offset += 4;

      if (remaining != 0) {
        values = MultiplyAccumulate<Fraction, Double>(output + offset,
          input + offset, second);
      }
    }

    StorePartial<MacOperation<Fraction, Double>>(output + offset, values,
      remaining);
  }

  return short(uint16_t(uint32_t(uint16_t(gain)) +
    uint32_t(uint16_t(step)) * uint32_t(count)));
}

template<int Fraction>
struct VectorMultiplyOperation {
  using Output = short;
  using Vector = int16x4_t;
  static constexpr unsigned Lanes = 4;
  const short* first;
  const short* second;

  Vector Compute(unsigned offset) const {
    int32x4_t product = vmull_s16(vld1_s16(first + offset),
      vld1_s16(second + offset));
    Vector result;
    asm volatile("sqrshrn %0.4h, %1.4s, %2"
      : "=w"(result) : "w"(product), "i"(Fraction));
    return result;
  }

  static void Store(short* output, Vector value) {
    vst1_s16(output, value);
  }
};

}

template<class T>
void VecAdd(T* output, const T* first, const T* second, int count) {
  Run<false>(output, count, AddOperation<T, T>{first, second});
}

template<class Output, class Input>
void VecAcc(Output* output, const Input* input, int count) {
  Run<true>(output, count, AddOperation<Output, Input>{output, input});
}

template<class Output, class Input>
void VecWideningAcc(Output* output, const Input* input, int count) {
  VecAcc<Output, Input>(output, input, count);
}

template<class Output, class Input>
void VecWideningMul(Output* output, const Input* input, Input gain, int count) {
  Run<false>(output, count, MultiplyOperation{input, gain});
}

template<class Output, class Input, int Fraction>
void VecWideningMac(Output* output, const Input* input, Input gain, int count) {
  if (gain == (1 << Fraction)) {
    VecWideningAcc(output, input, count);
  }
  else {
    Run<true>(output, count, MacOperation<Fraction, false>{output, input,
      vdup_n_s16(gain)});
  }
}

template<class Output, class Input, int Fraction>
Input VecWideningMacRamped(Output* output, const Input* input,
  Input gain, Input step, int count) {
  if (step == 0) {
    VecWideningMac<Output, Input, Fraction>(output, input, gain, count);
    return gain;
  }

  return Ramp<Fraction, false>(output, input, gain, step, count);
}

template<class Output, class Input>
void VecWideningDoublingMac(Output* output, const Input* input,
  Input gain, int count) {
  Run<true>(output, count, MacOperation<0, true>{output, input,
    vdup_n_s16(gain)});
}

template<class Output, class Input>
Input VecWideningDoublingMacRamped(Output* output, const Input* input,
  Input gain, Input step, int count) {
  if (step == 0) {
    VecWideningDoublingMac<Output, Input>(output, input, gain, count);
    return gain;
  }

  return Ramp<0, true>(output, input, gain, step, count);
}

template<class Accumulator, class T, int Fraction>
void VecMulByVector(T* output, const T* first, const T* second, int count) {
  Run<false>(output, count,
    VectorMultiplyOperation<Fraction>{first, second});
}

template void VecAdd<short>(short*, const short*, const short*, int);
template void VecAdd<int>(int*, const int*, const int*, int);
template void VecAdd<long>(long*, const long*, const long*, int);
template void VecAdd<float>(float*, const float*, const float*, int);
template void VecAcc<short, short>(short*, const short*, int);
template void VecAcc<int, short>(int*, const short*, int);
template void VecAcc<int, int>(int*, const int*, int);
template void VecAcc<long, int>(long*, const int*, int);
template void VecAcc<long, long>(long*, const long*, int);
template void VecAcc<float, float>(float*, const float*, int);
template void VecWideningAcc<int, short>(int*, const short*, int);
template void VecWideningAcc<long, int>(long*, const int*, int);
template void VecWideningMul<int, short>(int*, const short*, short, int);
template void VecWideningMac<int, short, 0>(int*, const short*, short, int);
template void VecWideningMac<int, short, 7>(int*, const short*, short, int);
template short VecWideningMacRamped<int, short, 0>(int*, const short*,
  short, short, int);
template short VecWideningMacRamped<int, short, 7>(int*, const short*,
  short, short, int);
template void VecWideningDoublingMac<int, short>(int*, const short*,
  short, int);
template short VecWideningDoublingMacRamped<int, short>(int*, const short*,
  short, short, int);
template void VecMulByVector<int, short, 12>(short*, const short*,
  const short*, int);
template void VecMulByVector<int, short, 14>(short*, const short*,
  const short*, int);

}
