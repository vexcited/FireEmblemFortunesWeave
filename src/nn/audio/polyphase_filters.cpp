#include "nn/audio/polyphase_resampler.hpp"

#include <arm_neon.h>

namespace {

using nn::audio::PolyphaseResamplerState;

static int16_t Round(int32_t accumulator) {
  int32x2_t value = vdup_n_s32(accumulator);
  int16x4_t result;
  asm volatile("sqrshrn %h0, %s1, #15" : "=w"(result) : "w"(value));
  return vget_lane_s16(result, 0);
}

template<unsigned Channels, unsigned Taps>
static int16_t* History(PolyphaseResamplerState& state, unsigned channel) {
  if constexpr (Channels == 2 && Taps == 16) {
    return state.history[channel];
  }
  else {
    return state.history[0] + channel * Taps;
  }
}

template<unsigned Channels, unsigned Taps, bool Interpolate>
static uint32_t Filter(PolyphaseResamplerState& state, const int16_t* input,
  int16_t* output, uint32_t count) {
  if (!count) {
    return 0;
  }

  int16_t history[Channels][Taps];

  for (unsigned channel = 0; channel < Channels; ++channel) {
    const int16_t* source = History<Channels, Taps>(state, channel);

    for (unsigned tap = 0; tap < Taps; ++tap) {
      history[channel][tap] = source[tap];
    }
  }

  uint32_t numerator = state.numerator;
  uint32_t consumed = uint8_t(state.consumed);
  uint32_t next_consumed = uint8_t(state.next_consumed);
  uint32_t phase = state.phase;
  int32_t increment = int16_t(state.increment);
  int32_t remainder = int16_t(state.remainder);
  uint32_t produced = 0;
  uint32_t lower = state.lower;
  uint32_t upper = state.upper;
  const int16_t* coefficients = state.coefficients[0];

  do {
    int16_t row[Taps];

    for (unsigned tap = 0; tap < Taps; ++tap) {
      row[tap] = coefficients[phase * Taps + tap];
    }

    if constexpr (Interpolate) {
      ++phase;
      phase = phase >= numerator ? 0 : phase;
    }

    if (!Interpolate || consumed < next_consumed) {
      do {
        int16_t incoming[Channels];

        for (unsigned channel = 0; channel < Channels; ++channel) {
          incoming[channel] = input[channel];
        }

        input += Channels;

        for (unsigned channel = 0; channel < Channels; ++channel) {
          for (unsigned tap = 0; tap + 1 < Taps; ++tap) {
            history[channel][tap] = history[channel][tap + 1];
          }

          history[channel][Taps - 1] = incoming[channel];
        }

        --count;

        if constexpr (Interpolate) {
          break;
        }
        else {
          ++consumed;

          if (!count && consumed != next_consumed) {
            goto finish;
          }
        }
      } while (consumed < next_consumed);
    }

    if constexpr (!Interpolate) {
      consumed = 0;
      ++phase;
      phase = phase >= numerator ? 0 : phase;
    }

    for (unsigned channel = 0; channel < Channels; ++channel) {
      uint32_t accumulator = 0;

      for (unsigned tap = 0; tap < Taps; ++tap) {
        accumulator += int32_t(row[tap]) * history[channel][tap];
      }

      output[channel] = Round(accumulator);
    }

    remainder = uint32_t(remainder) + uint32_t(increment);

    if constexpr (Interpolate) {
      bool consume = uint32_t(remainder) >= numerator;
      next_consumed = consume;
      remainder = consume ? uint32_t(remainder) - numerator : remainder;
    }
    else {
      bool negative = remainder < 0;
      next_consumed = negative ? lower : upper;
      remainder = negative ? uint32_t(remainder) + numerator : remainder;
    }

    ++produced;
    output += Channels;
  } while (count);

finish:
  if constexpr (!Interpolate) {
    state.consumed = consumed;
  }

  state.next_consumed = next_consumed;
  state.phase = phase;
  state.remainder = remainder;

  for (unsigned channel = 0; channel < Channels; ++channel) {
    int16_t* destination = History<Channels, Taps>(state, channel);

    for (unsigned tap = 0; tap < Taps; ++tap) {
      destination[tap] = history[channel][tap];
    }
  }

  return produced;
}

}

extern "C" {

#define DEFINE_DECIMATE(channels, taps) \
  uint32_t decimating##channels##Ch##taps##TapFilter( \
    PolyphaseResamplerState* state, const int16_t* input, \
    int16_t* output, uint32_t count) { \
    return Filter<channels, taps, false>(*state, input, output, count); \
  }

DEFINE_DECIMATE(1, 16)
DEFINE_DECIMATE(1, 32)
DEFINE_DECIMATE(2, 16)
DEFINE_DECIMATE(2, 32)
DEFINE_DECIMATE(6, 16)
DEFINE_DECIMATE(6, 32)

#undef DEFINE_DECIMATE

uint32_t interpolating2Ch16TapFilter(PolyphaseResamplerState* state,
  const int16_t* input, int16_t* output, uint32_t count) {
  return Filter<2, 16, true>(*state, input, output, count);
}

#define DEFINE_POSITIVE(channels, taps) \
  __attribute__((used, noinline)) static uint32_t \
  Interpolate##channels##Ch##taps##Positive(PolyphaseResamplerState* state, \
    const int16_t* input, int16_t* output, uint32_t count) { \
    return Filter<channels, taps, true>(*state, input, output, count); \
  }

DEFINE_POSITIVE(1, 16)
DEFINE_POSITIVE(1, 32)
DEFINE_POSITIVE(2, 32)
DEFINE_POSITIVE(6, 16)
DEFINE_POSITIVE(6, 32)

#undef DEFINE_POSITIVE

}
// Zero-count entries retain their incoming register dependence.
extern "C" __attribute__((naked)) uint32_t interpolating1Ch16TapFilter(
  PolyphaseResamplerState*, const int16_t*, int16_t*, uint32_t) {
  asm volatile(
    "cbnz w3, Interpolate1Ch16Positive\n"
    "prfm pldl1strm, [x1]\n"
    "ldr x10, [x0, #0x18]\n"
    "ldrb w4, [x0]\n"
    "ldrb w5, [x0, #0x2]\n"
    "ldrb w6, [x0, #0x3]\n"
    "ldrb w7, [x0, #0x5]\n"
    "ldrsh w8, [x0, #0x8]\n"
    "ldrsh w9, [x0, #0xa]\n"
    "ldr x11, [x10]\n"
    "sxtw x7, w7\n"
    "ldr x12, [x0, #0x10]\n"
    "ld1 { v16.8h, v17.8h }, [x11]\n"
    "add x13, x12, x7, lsl #5\n"
    "smlal v28.4s, v16.4h, v24.4h\n"
    "prfm pstl1strm, [x2, #0x40]\n"
    "smlal2 v28.4s, v16.8h, v24.8h\n"
    "prfm pldl1keep, [x13, #0x60]\n"
    "smlal v28.4s, v17.4h, v25.4h\n"
    "smlal2 v28.4s, v17.8h, v25.8h\n"
    "add w9, w9, w8\n"
    "mov w15, #0x1\n"
    "cmp w9, w4\n"
    "sub w11, w9, w4\n"
    "addv s28, v28.4s\n"
    "csel w6, w15, wzr, hs\n"
    "csel w9, w11, w9, hs\n"
    "sqrshrn h28, s28, #0xf\n"
    "add x14, x14, #0x1\n"
    "st1 { v28.h }[0], [x2], #2\n"
    "ldr x11, [x10]\n"
    "strb w6, [x0, #0x3]\n"
    "strb w7, [x0, #0x5]\n"
    "strh w9, [x0, #0xa]\n"
    "mov x0, x14\n"
    "st1 { v16.8h, v17.8h }, [x11]\n"
    "ret\n");
}

extern "C" __attribute__((naked)) uint32_t interpolating1Ch32TapFilter(
  PolyphaseResamplerState*, const int16_t*, int16_t*, uint32_t) {
  asm volatile(
    "cbnz w3, Interpolate1Ch32Positive\n"
    "prfm pldl1strm, [x1]\n"
    "ldr x10, [x0, #0x18]\n"
    "ldrb w4, [x0]\n"
    "ldrb w5, [x0, #0x2]\n"
    "ldrb w6, [x0, #0x3]\n"
    "ldrb w7, [x0, #0x5]\n"
    "ldrsh w8, [x0, #0x8]\n"
    "ldrsh w9, [x0, #0xa]\n"
    "ldr x11, [x10]\n"
    "sxtw x7, w7\n"
    "ldr x12, [x0, #0x10]\n"
    "ld1 { v16.8h, v17.8h, v18.8h, v19.8h }, [x11]\n"
    "smlal v28.4s, v16.4h, v24.4h\n"
    "prfm pldl1keep, [x13, #0xc0]\n"
    "smlal2 v28.4s, v16.8h, v24.8h\n"
    "prfm pstl1strm, [x2, #0x40]\n"
    "smlal v28.4s, v17.4h, v25.4h\n"
    "add w9, w9, w8\n"
    "smlal2 v28.4s, v17.8h, v25.8h\n"
    "mov w15, #0x1\n"
    "smlal v28.4s, v18.4h, v26.4h\n"
    "cmp w9, w4\n"
    "smlal2 v28.4s, v18.8h, v26.8h\n"
    "sub w11, w9, w4\n"
    "smlal v28.4s, v19.4h, v27.4h\n"
    "csel w6, w15, wzr, hs\n"
    "smlal2 v28.4s, v19.8h, v27.8h\n"
    "csel w9, w11, w9, hs\n"
    "addv s28, v28.4s\n"
    "add x14, x14, #0x1\n"
    "sqrshrn h28, s28, #0xf\n"
    "st1 { v28.h }[0], [x2], #2\n"
    "ldr x11, [x10]\n"
    "strb w6, [x0, #0x3]\n"
    "strb w7, [x0, #0x5]\n"
    "strh w9, [x0, #0xa]\n"
    "mov x0, x14\n"
    "st1 { v16.8h, v17.8h, v18.8h, v19.8h }, [x11]\n"
    "ret\n");
}

extern "C" __attribute__((naked)) uint32_t interpolating2Ch32TapFilter(
  PolyphaseResamplerState*, const int16_t*, int16_t*, uint32_t) {
  asm volatile(
    "cbnz w3, Interpolate2Ch32Positive\n"
    "ldr x10, [x0, #0x18]\n"
    "ldrb w4, [x0]\n"
    "ldrb w5, [x0, #0x2]\n"
    "ldrb w6, [x0, #0x3]\n"
    "ldrb w7, [x0, #0x5]\n"
    "ldrsh w8, [x0, #0x8]\n"
    "ldrsh w9, [x0, #0xa]\n"
    "ldr x11, [x10]\n"
    "sxtw x7, w7\n"
    "ldr x12, [x0, #0x10]\n"
    "ld1 { v16.8h, v17.8h, v18.8h, v19.8h }, [x11], #64\n"
    "ld1 { v20.8h, v21.8h, v22.8h, v23.8h }, [x11]\n"
    "smlal v28.4s, v16.4h, v24.4h\n"
    "smlal v29.4s, v20.4h, v24.4h\n"
    "prfm pldl1keep, [x13, #0xc0]\n"
    "smlal2 v28.4s, v16.8h, v24.8h\n"
    "smlal2 v29.4s, v20.8h, v24.8h\n"
    "prfm pstl1strm, [x2, #0x40]\n"
    "smlal v28.4s, v17.4h, v25.4h\n"
    "smlal v29.4s, v21.4h, v25.4h\n"
    "smlal2 v28.4s, v17.8h, v25.8h\n"
    "smlal2 v29.4s, v21.8h, v25.8h\n"
    "smlal v28.4s, v18.4h, v26.4h\n"
    "smlal v29.4s, v22.4h, v26.4h\n"
    "smlal2 v28.4s, v18.8h, v26.8h\n"
    "smlal2 v29.4s, v22.8h, v26.8h\n"
    "smlal v28.4s, v19.4h, v27.4h\n"
    "smlal v29.4s, v23.4h, v27.4h\n"
    "smlal2 v28.4s, v19.8h, v27.8h\n"
    "smlal2 v29.4s, v23.8h, v27.8h\n"
    "add w9, w9, w8\n"
    "mov w15, #0x1\n"
    "cmp w9, w4\n"
    "sub w11, w9, w4\n"
    "addv s28, v28.4s\n"
    "addv s29, v29.4s\n"
    "csel w6, w15, wzr, hs\n"
    "csel w9, w11, w9, hs\n"
    "sqrshrn h28, s28, #0xf\n"
    "sqrshrn h29, s29, #0xf\n"
    "add x14, x14, #0x1\n"
    "st2 { v28.h, v29.h }[0], [x2], #4\n"
    "ldr x11, [x10]\n"
    "strb w6, [x0, #0x3]\n"
    "strb w7, [x0, #0x5]\n"
    "strh w9, [x0, #0xa]\n"
    "mov x0, x14\n"
    "st1 { v16.8h, v17.8h, v18.8h, v19.8h }, [x11], #64\n"
    "st1 { v20.8h, v21.8h, v22.8h, v23.8h }, [x11]\n"
    "ret\n");
}

extern "C" __attribute__((naked)) uint32_t interpolating6Ch16TapFilter(
  PolyphaseResamplerState*, const int16_t*, int16_t*, uint32_t) {
  asm volatile(
    "cbnz w3, Interpolate6Ch16Positive\n"
    "sub x13, sp, #0x80\n"
    "sub sp, sp, #0x80\n"
    "ldr x10, [x0, #0x18]\n"
    "st1 { v0.8h, v1.8h }, [x13], #32\n"
    "st1 { v4.8h, v5.8h }, [x13], #32\n"
    "st1 { v8.8h, v9.8h }, [x13], #32\n"
    "st1 { v12.8h, v13.8h }, [x13]\n"
    "ldrb w4, [x0]\n"
    "ldrb w5, [x0, #0x2]\n"
    "ldrb w6, [x0, #0x3]\n"
    "ldrb w7, [x0, #0x5]\n"
    "ldrsh w8, [x0, #0x8]\n"
    "ldrsh w9, [x0, #0xa]\n"
    "ldr x11, [x10]\n"
    "sxtw x7, w7\n"
    "ldr x12, [x0, #0x10]\n"
    "ld1 { v16.8h, v17.8h }, [x11], #32\n"
    "ld1 { v20.8h, v21.8h }, [x11], #32\n"
    "mov x14, #0x0\n"
    "ld1 { v0.8h, v1.8h }, [x11], #32\n"
    "ld1 { v4.8h, v5.8h }, [x11], #32\n"
    "ld1 { v8.8h, v9.8h }, [x11], #32\n"
    "ld1 { v12.8h, v13.8h }, [x11]\n"
    "sub v28.4s, v28.4s, v28.4s\n"
    "sub v29.4s, v29.4s, v29.4s\n"
    "sub v30.4s, v30.4s, v30.4s\n"
    "sub v31.4s, v31.4s, v31.4s\n"
    "smlal v28.4s, v16.4h, v24.4h\n"
    "sub v26.4s, v26.4s, v26.4s\n"
    "smlal v29.4s, v20.4h, v24.4h\n"
    "cmp w7, w4\n"
    "smlal v30.4s, v0.4h, v24.4h\n"
    "sub v27.4s, v27.4s, v27.4s\n"
    "smlal v31.4s, v4.4h, v24.4h\n"
    "csel w7, wzr, w7, hs\n"
    "smlal v26.4s, v8.4h, v24.4h\n"
    "add x13, x12, x7, lsl #5\n"
    "smlal v27.4s, v12.4h, v24.4h\n"
    "smlal2 v28.4s, v16.8h, v24.8h\n"
    "prfm pldl1keep, [x13, #0xc0]\n"
    "smlal2 v29.4s, v20.8h, v24.8h\n"
    "add w9, w9, w8\n"
    "smlal2 v30.4s, v0.8h, v24.8h\n"
    "mov w15, #0x1\n"
    "prfm pstl1keep, [x2, #0x48]\n"
    "smlal2 v31.4s, v4.8h, v24.8h\n"
    "cmp w9, w4\n"
    "smlal2 v26.4s, v8.8h, v24.8h\n"
    "sub w11, w9, w4\n"
    "smlal2 v27.4s, v12.8h, v24.8h\n"
    "csel w6, w15, wzr, hs\n"
    "smlal v28.4s, v17.4h, v25.4h\n"
    "csel w9, w11, w9, hs\n"
    "smlal v29.4s, v21.4h, v25.4h\n"
    "smlal v30.4s, v1.4h, v25.4h\n"
    "smlal v31.4s, v5.4h, v25.4h\n"
    "smlal v26.4s, v9.4h, v25.4h\n"
    "smlal v27.4s, v13.4h, v25.4h\n"
    "smlal2 v28.4s, v17.8h, v25.8h\n"
    "smlal2 v29.4s, v21.8h, v25.8h\n"
    "smlal2 v30.4s, v1.8h, v25.8h\n"
    "smlal2 v31.4s, v5.8h, v25.8h\n"
    "smlal2 v26.4s, v9.8h, v25.8h\n"
    "smlal2 v27.4s, v13.8h, v25.8h\n"
    "addv s28, v28.4s\n"
    "addv s29, v29.4s\n"
    "addv s30, v30.4s\n"
    "addv s31, v31.4s\n"
    "addv s26, v26.4s\n"
    "addv s27, v27.4s\n"
    "sqrshrn h28, s28, #0xf\n"
    "sqrshrn h29, s29, #0xf\n"
    "sqrshrn h30, s30, #0xf\n"
    "sqrshrn h31, s31, #0xf\n"
    "sqrshrn h26, s26, #0xf\n"
    "sqrshrn h27, s27, #0xf\n"
    "add x14, x14, #0x1\n"
    "st4 { v28.h, v29.h, v30.h, v31.h }[0], [x2], #8\n"
    "st2 { v26.h, v27.h }[0], [x2], #4\n"
    "ldr x11, [x10]\n"
    "strb w6, [x0, #0x3]\n"
    "strb w7, [x0, #0x5]\n"
    "strh w9, [x0, #0xa]\n"
    "mov x0, x14\n"
    "st1 { v16.8h, v17.8h }, [x11], #32\n"
    "st1 { v20.8h, v21.8h }, [x11], #32\n"
    "st1 { v0.8h, v1.8h }, [x11], #32\n"
    "st1 { v4.8h, v5.8h }, [x11], #32\n"
    "st1 { v8.8h, v9.8h }, [x11], #32\n"
    "st1 { v12.8h, v13.8h }, [x11]\n"
    "ld1 { v0.8h, v1.8h }, [sp], #32\n"
    "ld1 { v4.8h, v5.8h }, [sp], #32\n"
    "ld1 { v8.8h, v9.8h }, [sp], #32\n"
    "ld1 { v12.8h, v13.8h }, [sp], #32\n"
    "ret\n");
}

extern "C" __attribute__((naked)) uint32_t interpolating6Ch32TapFilter(
  PolyphaseResamplerState*, const int16_t*, int16_t*, uint32_t) {
  asm volatile(
    "cbnz w3, Interpolate6Ch32Positive\n"
    "sub x13, sp, #0x100\n"
    "sub sp, sp, #0x100\n"
    "ldr x10, [x0, #0x18]\n"
    "st1 { v0.8h, v1.8h, v2.8h, v3.8h }, [x13], #64\n"
    "st1 { v4.8h, v5.8h, v6.8h, v7.8h }, [x13], #64\n"
    "st1 { v8.8h, v9.8h, v10.8h, v11.8h }, [x13], #64\n"
    "st1 { v12.8h, v13.8h, v14.8h, v15.8h }, [x13]\n"
    "ldrb w4, [x0]\n"
    "ldrb w5, [x0, #0x2]\n"
    "ldrb w6, [x0, #0x3]\n"
    "ldrb w7, [x0, #0x5]\n"
    "ldrsh w8, [x0, #0x8]\n"
    "ldrsh w9, [x0, #0xa]\n"
    "ldr x11, [x10]\n"
    "sxtw x7, w7\n"
    "ldr x12, [x0, #0x10]\n"
    "ld1 { v16.8h, v17.8h, v18.8h, v19.8h }, [x11], #64\n"
    "ld1 { v20.8h, v21.8h, v22.8h, v23.8h }, [x11], #64\n"
    "ld1 { v0.8h, v1.8h, v2.8h, v3.8h }, [x11], #64\n"
    "ld1 { v4.8h, v5.8h, v6.8h, v7.8h }, [x11], #64\n"
    "ld1 { v8.8h, v9.8h, v10.8h, v11.8h }, [x11], #64\n"
    "ld1 { v12.8h, v13.8h, v14.8h, v15.8h }, [x11]\n"
    "sub v30.4s, v30.4s, v30.4s\n"
    "sub v31.4s, v31.4s, v31.4s\n"
    "smlal v28.4s, v16.4h, v24.4h\n"
    "smlal v29.4s, v20.4h, v24.4h\n"
    "prfm pldl1keep, [x13, #0x80]\n"
    "smlal v30.4s, v0.4h, v24.4h\n"
    "smlal v31.4s, v4.4h, v24.4h\n"
    "prfm pstl1keep, [x2, #0x40]\n"
    "smlal2 v28.4s, v16.8h, v24.8h\n"
    "smlal2 v29.4s, v20.8h, v24.8h\n"
    "smlal2 v30.4s, v0.8h, v24.8h\n"
    "smlal2 v31.4s, v4.8h, v24.8h\n"
    "smlal v28.4s, v17.4h, v25.4h\n"
    "smlal v29.4s, v21.4h, v25.4h\n"
    "smlal v30.4s, v1.4h, v25.4h\n"
    "smlal v31.4s, v5.4h, v25.4h\n"
    "smlal2 v28.4s, v17.8h, v25.8h\n"
    "smlal2 v29.4s, v21.8h, v25.8h\n"
    "smlal2 v30.4s, v1.8h, v25.8h\n"
    "smlal2 v31.4s, v5.8h, v25.8h\n"
    "smlal v28.4s, v18.4h, v26.4h\n"
    "smlal v29.4s, v22.4h, v26.4h\n"
    "smlal v30.4s, v2.4h, v26.4h\n"
    "smlal v31.4s, v6.4h, v26.4h\n"
    "smlal2 v28.4s, v18.8h, v26.8h\n"
    "smlal2 v29.4s, v22.8h, v26.8h\n"
    "smlal2 v30.4s, v2.8h, v26.8h\n"
    "smlal2 v31.4s, v6.8h, v26.8h\n"
    "smlal v28.4s, v19.4h, v27.4h\n"
    "smlal v29.4s, v23.4h, v27.4h\n"
    "smlal v30.4s, v3.4h, v27.4h\n"
    "smlal v31.4s, v7.4h, v27.4h\n"
    "smlal2 v28.4s, v19.8h, v27.8h\n"
    "smlal2 v29.4s, v23.8h, v27.8h\n"
    "smlal2 v30.4s, v3.8h, v27.8h\n"
    "smlal2 v31.4s, v7.8h, v27.8h\n"
    "addv s28, v28.4s\n"
    "addv s29, v29.4s\n"
    "addv s30, v30.4s\n"
    "addv s31, v31.4s\n"
    "sqrshrn h28, s28, #0xf\n"
    "sqrshrn h29, s29, #0xf\n"
    "sqrshrn h30, s30, #0xf\n"
    "sqrshrn h31, s31, #0xf\n"
    "st2 { v28.h, v29.h }[0], [x2], #4\n"
    "sub v28.4s, v28.4s, v28.4s\n"
    "sub v29.4s, v29.4s, v29.4s\n"
    "st2 { v30.h, v31.h }[0], [x2], #4\n"
    "smlal v28.4s, v8.4h, v24.4h\n"
    "smlal v29.4s, v12.4h, v24.4h\n"
    "smlal2 v28.4s, v8.8h, v24.8h\n"
    "smlal2 v29.4s, v12.8h, v24.8h\n"
    "smlal v28.4s, v9.4h, v25.4h\n"
    "smlal v29.4s, v13.4h, v25.4h\n"
    "smlal2 v28.4s, v9.8h, v25.8h\n"
    "smlal2 v29.4s, v13.8h, v25.8h\n"
    "smlal v28.4s, v10.4h, v26.4h\n"
    "smlal v29.4s, v14.4h, v26.4h\n"
    "smlal2 v28.4s, v10.8h, v26.8h\n"
    "smlal2 v29.4s, v14.8h, v26.8h\n"
    "smlal v28.4s, v11.4h, v27.4h\n"
    "smlal v29.4s, v15.4h, v27.4h\n"
    "smlal2 v28.4s, v11.8h, v27.8h\n"
    "smlal2 v29.4s, v15.8h, v27.8h\n"
    "add w9, w9, w8\n"
    "mov w15, #0x1\n"
    "cmp w9, w4\n"
    "sub w11, w9, w4\n"
    "addv s28, v28.4s\n"
    "addv s29, v29.4s\n"
    "csel w6, w15, wzr, hs\n"
    "csel w9, w11, w9, hs\n"
    "sqrshrn h28, s28, #0xf\n"
    "sqrshrn h29, s29, #0xf\n"
    "add x14, x14, #0x1\n"
    "st2 { v28.h, v29.h }[0], [x2], #4\n"
    "strb w6, [x0, #0x3]\n"
    "strb w7, [x0, #0x5]\n"
    "ldr x11, [x10]\n"
    "strh w9, [x0, #0xa]\n"
    "mov x0, x14\n"
    "st1 { v16.8h, v17.8h, v18.8h, v19.8h }, [x11], #64\n"
    "st1 { v20.8h, v21.8h, v22.8h, v23.8h }, [x11], #64\n"
    "st1 { v0.8h, v1.8h, v2.8h, v3.8h }, [x11], #64\n"
    "st1 { v4.8h, v5.8h, v6.8h, v7.8h }, [x11], #64\n"
    "st1 { v8.8h, v9.8h, v10.8h, v11.8h }, [x11], #64\n"
    "st1 { v12.8h, v13.8h, v14.8h, v15.8h }, [x11]\n"
    "ld1 { v0.8h, v1.8h, v2.8h, v3.8h }, [sp], #64\n"
    "ld1 { v4.8h, v5.8h, v6.8h, v7.8h }, [sp], #64\n"
    "ld1 { v8.8h, v9.8h, v10.8h, v11.8h }, [sp], #64\n"
    "ld1 { v12.8h, v13.8h, v14.8h, v15.8h }, [sp], #64\n"
    "ret\n");
}

