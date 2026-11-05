#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

enum FftProcessType : int32_t {};

namespace detail {

enum FftDirection : int32_t {
  FftDirection_Inverse = -1,
  FftDirection_Forward = 1,
};

// The ne10 configuration sits at the start of the work buffer, which also
// keeps a scratch area for in place transforms at its end.
struct FftWorkBuffer {
  void* buffer;
  size_t size;
  uint8_t reserved10[0x10];
  int32_t sampleCount;
};

size_t GetFftWorkBufferAlignment();
void InitializeFftWorkBuffer(FftWorkBuffer& workBuffer);
void FftInPlaceProcessComplexDouble(double* output, const double* input,
  FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessComplexFloat(float* output, const float* input,
  FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessComplexFixedPointInt(int32_t* output,
  const int32_t* input, FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessComplexFixedPointShort(int16_t* output,
  const int16_t* input, FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessRealDouble(double* output, const double* input,
  FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessRealFloat(float* output, const float* input,
  FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessRealFixedPointInt(int32_t* output,
  const int32_t* input, FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessRealFixedPointShort(int16_t* output,
  const int16_t* input, FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessComplexDoubleCommon(double* output,
  const double* input, FftWorkBuffer& workBuffer, FftDirection direction);
void FftInPlaceProcessRealDoubleCommon(double* output, const double* input,
  FftWorkBuffer& workBuffer, FftDirection direction);

}

}
