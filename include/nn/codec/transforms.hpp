/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include <stdint.h>

union FIXP_SPK {
  struct {
    int16_t re;
    int16_t im;
  } v;
  int32_t w;
};

static_assert(sizeof(FIXP_SPK) == 4);

namespace nn::codec {

void fft(int length, int32_t* input, int* scale);
void dit_fft(int32_t* data, int logLength, const FIXP_SPK* twiddle,
             int twiddleSize);
void dct_II(int32_t* data, int32_t* scratch, int length, int* scale);
void dct_III(int32_t* data, int32_t* scratch, int length, int* scale);
void dct_IV(int32_t* data, int length, int* scale);
void dst_IV(int32_t* data, int length, int* scale);

extern const FIXP_SPK SineTable512[];
extern const FIXP_SPK SineTable480[];
extern const FIXP_SPK sin_twiddle_L64[];
extern const int16_t RotVectorReal60[];
extern const int16_t RotVectorImag60[];
extern const int16_t RotVectorReal240[];
extern const int16_t RotVectorImag240[];
extern const int16_t RotVectorReal480[];
extern const int16_t RotVectorImag480[];
extern const FIXP_SPK SineWindow32[];
extern const FIXP_SPK SineWindow64[];
extern const FIXP_SPK SineWindow120[];
extern const FIXP_SPK SineWindow128[];
extern const FIXP_SPK SineWindow480[];
extern const FIXP_SPK SineWindow512[];
extern const FIXP_SPK SineWindow960[];
extern const FIXP_SPK SineWindow1024[];

}
