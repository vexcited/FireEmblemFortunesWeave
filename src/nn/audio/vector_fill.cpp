#include "nn/audio/vector_fill.hpp"

#include <arm_neon.h>
#include <math.h>
#include <string.h>

extern "C" void explicit_bzero(void* output, size_t size);

namespace nn::audio::util {
namespace {

template<class T>
struct Lanes;

template<>
struct Lanes<int8_t> {
  using Vector = int8x16_t;
  static Vector Dup(int8_t value) { return vdupq_n_s8(value); }
  static void Store(int8_t* output, Vector v) { vst1q_s8(output, v); }
};

template<>
struct Lanes<int16_t> {
  using Vector = int16x8_t;
  static Vector Dup(int16_t value) { return vdupq_n_s16(value); }
  static Vector Load(const int16_t* input) { return vld1q_s16(input); }
  static void Store(int16_t* output, Vector v) { vst1q_s16(output, v); }
};

template<>
struct Lanes<int32_t> {
  using Vector = int32x4_t;
  static Vector Dup(int32_t value) { return vdupq_n_s32(value); }
  static Vector Load(const int32_t* input) { return vld1q_s32(input); }
  static void Store(int32_t* output, Vector v) { vst1q_s32(output, v); }
  static Vector Widen(const int16_t* input) {
    return vmovl_s16(vld1_s16(input));
  }
};

template<>
struct Lanes<int64_t> {
  using Vector = int64x2_t;
  static Vector Dup(int64_t value) { return vdupq_n_s64(value); }
  static Vector Load(const int64_t* input) { return vld1q_s64(input); }
  static void Store(int64_t* output, Vector v) { vst1q_s64(output, v); }
  static Vector Widen(const int32_t* input) {
    return vmovl_s32(vld1_s32(input));
  }
};

template<>
struct Lanes<float> {
  using Vector = float32x4_t;
  static Vector Dup(float value) { return vdupq_n_f32(value); }
  static Vector Load(const float* input) { return vld1q_f32(input); }
  static void Store(float* output, Vector v) { vst1q_f32(output, v); }
};

template<class T>
struct Bits;

template<>
struct Bits<int16_t> {
  using Type = uint16_t;
  using Vector = uint16x8_t;
  static Vector Zero() { return vdupq_n_u16(0); }
  static Vector Load(const int16_t* input) {
    return vld1q_u16(reinterpret_cast<const uint16_t*>(input));
  }
  static Vector Max(Vector first, Vector second) {
    return vmaxq_u16(first, second);
  }
  static Type Reduce(Vector v) { return vmaxvq_u16(v); }
};

template<>
struct Bits<int32_t> {
  using Type = uint32_t;
  using Vector = uint32x4_t;
  static Vector Zero() { return vdupq_n_u32(0); }
  static Vector Load(const void* input) {
    return vld1q_u32(static_cast<const uint32_t*>(input));
  }
  static Vector Max(Vector first, Vector second) {
    return vmaxq_u32(first, second);
  }
  static Type Reduce(Vector v) { return vmaxvq_u32(v); }
};

template<>
struct Bits<float> : Bits<int32_t> {};

template<int Shift, class T>
void Fill(T* output, T value, int count) {
  using L = Lanes<T>;
  constexpr int kBlock = 1 << Shift;
  constexpr int kLanes = 16 / sizeof(T);
  int blocks = count >> Shift;
  const int rest = count & (kBlock - 1);

  if (blocks == 0) {
    do {
      *output++ = value;
    } while (--count != 0);
    return;
  }

  const auto vector = L::Dup(value);
  do {
    for (int i = 0; i < kBlock; i += kLanes) {
      L::Store(output + i, vector);
    }
    output += kBlock;
  } while (--blocks != 0);

  // The tail rewrites the last whole block, overlapping filled elements.
  if (rest != 0) {
    output -= kBlock - rest;
    for (int i = 0; i < kBlock; i += kLanes) {
      L::Store(output + i, vector);
    }
  }
}

template<class T>
void CopyElements(T* __restrict output, const T* __restrict input, int count) {
  do {
    *output++ = *input++;
  } while (--count != 0);
}

template<int Shift, class T>
void Copy(T* output, const T* input, int count) {
  using L = Lanes<T>;
  constexpr int kBlock = 1 << Shift;
  constexpr int kLanes = 16 / sizeof(T);
  constexpr int kVectors = kBlock / kLanes;
  int blocks = count >> Shift;
  const int rest = count & (kBlock - 1);

  if (blocks == 0) {
    CopyElements(output, input, count);
    return;
  }

  typename L::Vector vectors[kVectors];
  do {
    for (int i = 0; i < kVectors; ++i) {
      vectors[i] = L::Load(input + i * kLanes);
    }
    for (int i = 0; i < kVectors; ++i) {
      L::Store(output + i * kLanes, vectors[i]);
    }
    output += kBlock;
    input += kBlock;
  } while (--blocks != 0);

  if (rest != 0) {
    output -= kBlock - rest;
    input -= kBlock - rest;
    for (int i = 0; i < kVectors; ++i) {
      vectors[i] = L::Load(input + i * kLanes);
    }
    for (int i = 0; i < kVectors; ++i) {
      L::Store(output + i * kLanes, vectors[i]);
    }
  }
}

template<int Shift, class Output, class Input>
void WideningCopy(Output* output, const Input* input, int count) {
  using L = Lanes<Output>;
  constexpr int kBlock = 1 << Shift;
  constexpr int kLanes = 16 / sizeof(Output);
  int blocks = count >> Shift;
  const int rest = count & (kBlock - 1);

  if (blocks == 0) {
    do {
      *output++ = *input++;
    } while (--count != 0);
    return;
  }

  do {
    for (int i = 0; i < kBlock; i += kLanes) {
      L::Store(output + i, L::Widen(input + i));
    }
    output += kBlock;
    input += kBlock;
  } while (--blocks != 0);

  if (rest != 0) {
    output -= kBlock - rest;
    input -= kBlock - rest;
    for (int i = 0; i < kBlock; i += kLanes) {
      L::Store(output + i, L::Widen(input + i));
    }
  }
}

template<int Shift, class T>
bool IsZero(const T* input, int count) {
  using B = Bits<T>;
  constexpr int kBlock = 1 << Shift;
  constexpr int kLanes = 16 / sizeof(T);
  int blocks = count >> Shift;
  const int rest = count & (kBlock - 1);

  if (blocks == 0) {
    typename B::Type bits = 0;
    int i = 0;
    do {
      bits |= reinterpret_cast<const typename B::Type*>(input)[i];
    } while (++i < count);
    return bits == 0;
  }

  typename B::Vector maximum = B::Zero();
  do {
    for (int i = 0; i < kBlock; i += kLanes) {
      maximum = B::Max(maximum, B::Load(input + i));
    }
    input += kBlock;
  } while (--blocks != 0);

  if (rest != 0) {
    input -= kBlock - rest;
    for (int i = 0; i < kBlock; i += kLanes) {
      maximum = B::Max(maximum, B::Load(input + i));
    }
  }
  return B::Reduce(maximum) == 0;
}

int Clamp(float value) {
  if (value < -2147483648.0f) {
    return INT32_MIN;
  }
  if (static_cast<double>(value) > 2147483647.0) {
    return INT32_MAX;
  }
  return static_cast<int>(value);
}

}

int RoundInt32(int64_t value) {
  return static_cast<int>(
    static_cast<uint64_t>(value + 0x40000000) >> 31);
}

int MulInt32Int32(int first, int second) {
  return RoundInt32(static_cast<int64_t>(first) * second);
}

short RoundInt16(int value) {
  return static_cast<short>(static_cast<unsigned>(value + 0x4000) >> 15);
}

short MulInt16Int16(short first, short second) {
  return RoundInt16(first * second);
}

template<>
int CountRsb<short>(short value) {
  const int x = value;
  return __builtin_clz(x ^ (x >> 31)) - 17;
}

template<>
int CountRsb<int>(int value) {
  return __builtin_clz(value ^ (value >> 31)) - 1;
}

template<>
int CountRsb<long>(long value) {
  const unsigned long x = value ^ (value >> 63);
  const int high = static_cast<int>(x >> 32);
  if (high == 0) {
    const int low = static_cast<int>(x);
    return low < 0 ? 31 : __builtin_clz(low) + 31;
  }
  return CountRsb<int>(high);
}

template<>
NintType<short> NormalizeFloat<NintType<short>, 15>(float value) {
  const int x = Clamp(roundf(ldexpf(value, 15)));
  int shift = 16 - CountRsb<int>(x);
  if (shift < 0) {
    shift = 0;
  }
  return {static_cast<short>(x >> shift), static_cast<short>(15 - shift)};
}

template<>
NintType<int> NormalizeFloat<NintType<int>, 23>(float value) {
  return {Clamp(roundf(ldexpf(value, 23))), 23};
}

template<>
void VecFill<signed char>(signed char* output, signed char value, int count) {
  Fill<6>(reinterpret_cast<int8_t*>(output), value, count);
}

template<>
void VecFill<short>(short* output, short value, int count) {
  Fill<4>(output, value, count);
}

template<>
void VecFill<int>(int* output, int value, int count) {
  Fill<4>(output, value, count);
}

template<>
void VecFill<long>(long* output, long value, int count) {
  Fill<3>(reinterpret_cast<int64_t*>(output), value, count);
}

template<>
void VecFill<float>(float* output, float value, int count) {
  Fill<4>(output, value, count);
}

template<>
void VecCopy<short, short>(short* output, const short* input, int count) {
  Copy<4>(output, input, count);
}

template<>
void VecCopy<int, short>(int* output, const short* input, int count) {
  WideningCopy<4>(output, input, count);
}

template<>
void VecCopy<int, int>(int* output, const int* input, int count) {
  Copy<4>(output, input, count);
}

template<>
void VecCopy<long, int>(long* output, const int* input, int count) {
  WideningCopy<3>(reinterpret_cast<int64_t*>(output), input, count);
}

template<>
void VecCopy<long, long>(long* output, const long* input, int count) {
  Copy<3>(reinterpret_cast<int64_t*>(output),
    reinterpret_cast<const int64_t*>(input), count);
}

template<>
void VecCopy<float, float>(float* output, const float* input, int count) {
  Copy<4>(output, input, count);
}

template<>
bool VecIsZero<short>(const short* input, int count) {
  return IsZero<4>(input, count);
}

template<>
bool VecIsZero<int>(const int* input, int count) {
  return IsZero<4>(input, count);
}

template<>
bool VecIsZero<float>(const float* input, int count) {
  return IsZero<4>(input, count);
}

void MemSet(void* output, int value, size_t size) {
  if (size == 0) {
    return;
  }
  VecFill(static_cast<signed char*>(output), static_cast<signed char>(value),
    static_cast<int>(size));
}

void MemSet_Explicit(void* output, int value, size_t size) {
  if (size == 0) {
    return;
  }
  if (value == 0) {
    explicit_bzero(output, size);
    return;
  }
  VecFill(static_cast<signed char*>(output), static_cast<signed char>(value),
    static_cast<int>(size));
}

float GetMicBusWeight(int outputs, int output, int inputs, int input) {
  if (inputs == 1) {
    if (outputs == 1) {
      return 1.0f;
    }
    return output < 2 ? 0.5f : 0.0f;
  }
  if (outputs == 1) {
    return input < 2 ? 1.0f : 0.0f;
  }
  return output == input && output < 2 ? 1.0f : 0.0f;
}

}
