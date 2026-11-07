#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

enum FftProcessType : int32_t {};

namespace detail {

enum FftElementType : int32_t {
  FftElementType_Float64 = 1,
  FftElementType_Float32,
  FftElementType_Int32,
  FftElementType_Int16,
};

enum FftDirection : int32_t {
  FftDirection_Inverse = -1,
  FftDirection_Forward = 1,
};

// The ne10 configuration sits at the start of the work buffer, which also
// keeps a scratch area for in place transforms at its end.
struct FftWorkBuffer {
  void* buffer;
  size_t size;
  FftElementType elementType;
  uint8_t reserved14[0xc];
  int32_t sampleCount;
  FftProcessType processType;
};

size_t GetFftWorkBufferSizeCommon(size_t elementSize,
  FftProcessType processType, int sampleCount);
size_t GetFftWorkBufferSize(FftElementType elementType, size_t elementSize,
  FftProcessType processType, int sampleCount);
void InitializeFftWorkBufferCommon(FftWorkBuffer& workBuffer);
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
