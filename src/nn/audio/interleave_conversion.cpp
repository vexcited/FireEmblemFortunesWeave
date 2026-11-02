#include "nn/audio/interleave_conversion.hpp"

#include <arm_neon.h>
#include <stdint.h>

namespace nn::audio::util {

float ScaleExponent(float value, int exponent) asm("ldexpf");

enum class Conversion {
  Narrow,
  Widen,
  FromFloat,
  ToFloat
};

template<class In, class Out, Conversion Kind, int Fraction = 0>
struct Converter {
  using Input = In;
  using Output = Out;
  static constexpr Conversion Operation = Kind;

  static Out Scalar(In value) {
    if constexpr (Kind == Conversion::Narrow) {
      int result = value;

      if (result < -32768) {
        result = -32768;
      }
      else if (result > 32767) {
        result = 32767;
      }

      return result;
    }
    else if constexpr (Kind == Conversion::Widen) {
      return value;
    }
    else if constexpr (Kind == Conversion::ToFloat) {
      float converted = vcvts_f32_s32(value);
      return ScaleExponent(converted, -Fraction);
    }
    else {
      float scaled = ScaleExponent(value, Fraction);
      constexpr int Minimum = sizeof(Out) == 2 ? -32768 : INT32_MIN;
      constexpr int Maximum = sizeof(Out) == 2 ? 32767 : INT32_MAX;

      if (scaled < float(Minimum)) {
        return Minimum;
      }
      bool above_maximum;

      if constexpr (sizeof(Out) == 4) {
        above_maximum = double(scaled) > double(Maximum);
      }
      else {
        above_maximum = scaled > float(Maximum);
      }

      if (above_maximum) {
        return Maximum;
      }

      return vcvts_s32_f32(scaled);
    }
  }

  // Padded lanes still update FPSR when their output is discarded.
  static void Four(Out* output, const In* input) {
    int32x4_t integers;

    if constexpr (Kind == Conversion::FromFloat) {
      float32x4_t values = vld1q_f32(input);
      asm volatile("fcvtzs %0.4s, %1.4s, %2"
        : "=w"(integers) : "w"(values), "i"(Fraction));
    }
    else if constexpr (sizeof(In) == 2) {
      integers = vmovl_s16(vld1_s16(input));
    }
    else {
      integers = vld1q_s32(input);
    }

    if constexpr (Kind == Conversion::ToFloat) {
      float32x4_t values;
      asm volatile("scvtf %0.4s, %1.4s, %2"
        : "=w"(values) : "w"(integers), "i"(Fraction));
      vst1q_f32(output, values);
    }
    else if constexpr (sizeof(Out) == 2) {
      int16x4_t values;
      asm volatile("sqxtn %0.4h, %1.4s"
        : "=w"(values) : "w"(integers));
      vst1_s16(output, values);
    }
    else {
      vst1q_s32(output, integers);
    }
  }
};

template<class C, unsigned Channels, unsigned Width>
struct Samples {
  typename C::Output values[Channels][Width];
};

template<class C, unsigned Channels, unsigned Width, bool Deinterleave>
static Samples<C, Channels, Width> ConvertBlock(
  const typename C::Input* packed,
  const typename C::Input* const __restrict* planes, unsigned offset) {
  typename C::Input input[Channels][Width];
  Samples<C, Channels, Width> output;

  for (unsigned channel = 0; channel < Channels; ++channel) {
    for (unsigned frame = 0; frame < Width; ++frame) {
      if constexpr (Deinterleave) {
        input[channel][frame] = packed[(offset + frame) * Channels + channel];
      }
      else {
        input[channel][frame] = planes[channel][offset + frame];
      }
    }
  }

  for (unsigned channel = 0; channel < Channels; ++channel) {
    for (unsigned frame = 0; frame < Width; frame += 4) {
      C::Four(output.values[channel] + frame, input[channel] + frame);
    }
  }

  return output;
}

template<class C, unsigned Channels, unsigned Width, bool Deinterleave>
static void StoreBlock(typename C::Output* packed,
  typename C::Output* const __restrict* planes, unsigned offset,
  const Samples<C, Channels, Width>& block, unsigned count = Width) {
  if constexpr (Deinterleave) {
    for (unsigned index = 0; index < Channels; ++index) {
      unsigned channel = index;

      if constexpr (Channels == 6 || Channels == 8) {
        channel = index / 2 + (index % 2) * (Channels / 2);
      }

      for (unsigned frame = 0; frame < count; ++frame) {
        planes[channel][offset + frame] = block.values[channel][frame];
      }
    }
  }
  else {
    for (unsigned frame = 0; frame < count; ++frame) {
      for (unsigned channel = 0; channel < Channels; ++channel) {
        packed[(offset + frame) * Channels + channel]
          = block.values[channel][frame];
      }
    }
  }
}

template<class C, unsigned Channels, bool Deinterleave>
static constexpr unsigned BlockWidth() {
  if constexpr (Channels == 1) {
    return 8;
  }
  else if constexpr (Deinterleave) {
    return C::Operation == Conversion::ToFloat && Channels <= 4 ? 8 : 4;
  }
  else if constexpr (C::Operation == Conversion::FromFloat) {
    return Channels <= 4 ? 8 : 4;
  }
  else if constexpr (C::Operation == Conversion::Narrow) {
    return 8;
  }
  else {
    return 4;
  }
}

template<class C, unsigned Channels, bool Deinterleave>
static void ConvertChannels(typename C::Output* packed_output,
  typename C::Output* const __restrict* output_planes,
  const typename C::Input* packed_input,
  const typename C::Input* const __restrict* input_planes, int count) {
  constexpr unsigned Width = BlockWidth<C, Channels, Deinterleave>();
  constexpr bool Eager = Channels == 1 ||
    (!Deinterleave && C::Operation == Conversion::Narrow && Channels <= 4);
  unsigned frames = count;

  if (frames >= Width) {
    unsigned blocks = frames / Width;

    for (unsigned index = 0; index < blocks; ++index) {
      unsigned offset = index * Width;
      auto values = ConvertBlock<C, Channels, Width, Deinterleave>(
        packed_input, input_planes, offset);
      StoreBlock<C, Channels, Width, Deinterleave>(packed_output,
        output_planes, offset, values);
    }

    if (frames % Width != 0) {
      unsigned offset = frames - Width;
      auto values = ConvertBlock<C, Channels, Width, Deinterleave>(
        packed_input, input_planes, offset);
      StoreBlock<C, Channels, Width, Deinterleave>(packed_output,
        output_planes, offset, values);
    }

    return;
  }

  unsigned offset = 0;

  if constexpr (Width == 8) {
    if (frames >= 4) {
      auto values = ConvertBlock<C, Channels, 4, Deinterleave>(
        packed_input, input_planes, 0);
      StoreBlock<C, Channels, 4, Deinterleave>(packed_output,
        output_planes, 0, values);
      offset = 4;
    }
  }

  if (frames != offset || Eager) {
    auto values = ConvertBlock<C, Channels, 4, Deinterleave>(
      packed_input, input_planes, offset);
    StoreBlock<C, Channels, 4, Deinterleave>(packed_output,
      output_planes, offset, values, frames - offset);
  }
}

template<class C, bool Deinterleave>
static void Dispatch(typename C::Output* packed_output,
  typename C::Output* const __restrict* output_planes,
  const typename C::Input* packed_input,
  const typename C::Input* const __restrict* input_planes,
  int channels, int count) {
  switch (channels) {
#define CHANNEL_CASE(N) \
    case N: \
      ConvertChannels<C, N, Deinterleave>(packed_output, output_planes, \
        packed_input, input_planes, count); \
      return
    CHANNEL_CASE(1);
    CHANNEL_CASE(2);
    CHANNEL_CASE(3);
    CHANNEL_CASE(4);
    CHANNEL_CASE(6);
    CHANNEL_CASE(8);
#undef CHANNEL_CASE
  }

  int frames = count > 1 ? count : 1;
  int planes = channels > 1 ? channels : 1;

  if constexpr (Deinterleave) {
    for (int frame = 0; frame < frames; ++frame) {
      for (int channel = 0; channel < planes; ++channel) {
        output_planes[channel][frame] = C::Scalar(*packed_input++);
      }
    }
  }
  else {
    for (int channel = 0; channel < planes; ++channel) {
      for (int frame = 0; frame < frames; ++frame) {
        packed_output[int64_t(frame) * channels + channel]
          = C::Scalar(input_planes[channel][frame]);
      }
    }
  }
}

template<class Input, class Output>
void VecNarrowingDeinterleave(Output* const __restrict* output,
  const Input* input, int channels, int count) {
  using C = Converter<Input, Output, Conversion::Narrow>;
  Dispatch<C, true>(nullptr, output, input, nullptr, channels, count);
}

template<class Output, class Input>
void VecWideningDeinterleave(Output* const __restrict* output,
  const Input* input, int channels, int count) {
  using C = Converter<Input, Output, Conversion::Widen>;
  Dispatch<C, true>(nullptr, output, input, nullptr, channels, count);
}

template<class Input, class Output>
void VecNarrowingInterleave(Output* output,
  const Input* const __restrict* input, int channels, int count) {
  using C = Converter<Input, Output, Conversion::Narrow>;
  Dispatch<C, false>(output, nullptr, nullptr, input, channels, count);
}

template<class Output, class Input>
void VecWideningInterleave(Output* output,
  const Input* const __restrict* input, int channels, int count) {
  using C = Converter<Input, Output, Conversion::Widen>;
  Dispatch<C, false>(output, nullptr, nullptr, input, channels, count);
}

template<class T, int Fraction>
void VecDeinterleaveFromFloat(T* const __restrict* output,
  const float* input, int channels, int count) {
  using C = Converter<float, T, Conversion::FromFloat, Fraction>;
  Dispatch<C, true>(nullptr, output, input, nullptr, channels, count);
}

template<class T, int Fraction>
void VecDeinterleaveToFloat(float* const __restrict* output,
  const T* input, int channels, int count) {
  using C = Converter<T, float, Conversion::ToFloat, Fraction>;
  Dispatch<C, true>(nullptr, output, input, nullptr, channels, count);
}

template<class T, int Fraction>
void VecInterleaveFromFloat(T* output,
  const float* const __restrict* input, int channels, int count) {
  using C = Converter<float, T, Conversion::FromFloat, Fraction>;
  Dispatch<C, false>(output, nullptr, nullptr, input, channels, count);
}

template<class T, int Fraction>
void VecInterleaveToFloat(float* output,
  const T* const __restrict* input, int channels, int count) {
  using C = Converter<T, float, Conversion::ToFloat, Fraction>;
  Dispatch<C, false>(output, nullptr, nullptr, input, channels, count);
}

template void VecNarrowingDeinterleave<int, short>(
  short* const __restrict*, const int*, int, int);
template void VecWideningDeinterleave<int, short>(
  int* const __restrict*, const short*, int, int);
template void VecNarrowingInterleave<int, short>(
  short*, const int* const __restrict*, int, int);
template void VecWideningInterleave<int, short>(
  int*, const short* const __restrict*, int, int);

#define FLOAT_CONVERSIONS(T, F) \
  template void VecDeinterleaveFromFloat<T, F>( \
    T* const __restrict*, const float*, int, int); \
  template void VecDeinterleaveToFloat<T, F>( \
    float* const __restrict*, const T*, int, int); \
  template void VecInterleaveFromFloat<T, F>( \
    T*, const float* const __restrict*, int, int); \
  template void VecInterleaveToFloat<T, F>( \
    float*, const T* const __restrict*, int, int)

FLOAT_CONVERSIONS(short, 15);
FLOAT_CONVERSIONS(int, 23);
FLOAT_CONVERSIONS(int, 31);

#undef FLOAT_CONVERSIONS

}
