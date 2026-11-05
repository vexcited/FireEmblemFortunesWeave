#include "nn/audio/detail/audio_fft.hpp"

#include <string.h>

extern "C" {

struct ne10_fft_cpx_float32_t;
struct ne10_fft_cpx_int32_t;
struct ne10_fft_cpx_int16_t;

void nnaudiodetail_ne10_fft_c2c_1d_float32_neon(ne10_fft_cpx_float32_t* out,
  ne10_fft_cpx_float32_t* in, void* cfg, int32_t inverse);
void nnaudiodetail_ne10_fft_c2c_1d_int32_neon(ne10_fft_cpx_int32_t* out,
  ne10_fft_cpx_int32_t* in, void* cfg, int32_t inverse, int32_t scaled);
void nnaudiodetail_ne10_fft_c2c_1d_int16_neon(ne10_fft_cpx_int16_t* out,
  ne10_fft_cpx_int16_t* in, void* cfg, int32_t inverse, int32_t scaled);
void nnaudiodetail_ne10_fft_r2c_1d_float32_neon(ne10_fft_cpx_float32_t* out,
  float* in, void* cfg);
void nnaudiodetail_ne10_fft_c2r_1d_float32_neon(float* out,
  ne10_fft_cpx_float32_t* in, void* cfg);
void nnaudiodetail_ne10_fft_r2c_1d_int32_neon(ne10_fft_cpx_int32_t* out,
  int32_t* in, void* cfg, int32_t scaled);
void nnaudiodetail_ne10_fft_c2r_1d_int32_neon(int32_t* out,
  ne10_fft_cpx_int32_t* in, void* cfg, int32_t scaled);
void nnaudiodetail_ne10_fft_r2c_1d_int16_neon(ne10_fft_cpx_int16_t* out,
  int16_t* in, void* cfg, int32_t scaled);
void nnaudiodetail_ne10_fft_c2r_1d_int16_neon(int16_t* out,
  ne10_fft_cpx_int16_t* in, void* cfg, int32_t scaled);

}

namespace nn::audio::detail {

namespace {

// In place transforms first copy the input to the end of the work buffer.
template<typename Sample>
const Sample* PrepareInput(Sample* output, const Sample* input,
  FftWorkBuffer& workBuffer) {
  if (output != input) {
    return input;
  }
  size_t size = workBuffer.sampleCount * 2 * sizeof(Sample);
  Sample* scratch = reinterpret_cast<Sample*>(
    (reinterpret_cast<uintptr_t>(workBuffer.buffer) + workBuffer.size -
      size) & ~uintptr_t(7));
  memcpy(scratch, input, size);
  return scratch;
}

// Real transforms keep room for the half spectrum, two samples longer.
template<typename Sample>
Sample* PrepareRealInput(Sample* output, const Sample* input,
  FftWorkBuffer& workBuffer, size_t copySize) {
  if (output != input) {
    return const_cast<Sample*>(input);
  }
  size_t size = (workBuffer.sampleCount + 2) * sizeof(Sample);
  Sample* scratch = reinterpret_cast<Sample*>(
    (reinterpret_cast<uintptr_t>(workBuffer.buffer) + workBuffer.size -
      size) & ~uintptr_t(7));
  memcpy(scratch, input, copySize);
  return scratch;
}

template<typename Sample>
size_t GetRealInputSize(const FftWorkBuffer& workBuffer,
  FftDirection direction) {
  return (workBuffer.sampleCount +
    (direction == FftDirection_Forward ? 0 : 2)) * sizeof(Sample);
}

}

void FftInPlaceProcessComplexDouble(double* output, const double* input,
  FftWorkBuffer& workBuffer, FftDirection direction) {
  FftInPlaceProcessComplexDoubleCommon(output, input, workBuffer, direction);
}

void FftInPlaceProcessComplexFloat(float* output, const float* input,
  FftWorkBuffer& workBuffer, FftDirection direction) {
  const float* source = PrepareInput(output, input, workBuffer);
  nnaudiodetail_ne10_fft_c2c_1d_float32_neon(
    reinterpret_cast<ne10_fft_cpx_float32_t*>(output),
    reinterpret_cast<ne10_fft_cpx_float32_t*>(const_cast<float*>(source)),
    workBuffer.buffer, direction == FftDirection_Inverse);
}

void FftInPlaceProcessComplexFixedPointInt(int32_t* output,
  const int32_t* input, FftWorkBuffer& workBuffer, FftDirection direction) {
  const int32_t* source = PrepareInput(output, input, workBuffer);
  nnaudiodetail_ne10_fft_c2c_1d_int32_neon(
    reinterpret_cast<ne10_fft_cpx_int32_t*>(output),
    reinterpret_cast<ne10_fft_cpx_int32_t*>(const_cast<int32_t*>(source)),
    workBuffer.buffer, direction == FftDirection_Inverse,
    direction == FftDirection_Forward);
}

void FftInPlaceProcessComplexFixedPointShort(int16_t* output,
  const int16_t* input, FftWorkBuffer& workBuffer, FftDirection direction) {
  const int16_t* source = PrepareInput(output, input, workBuffer);
  nnaudiodetail_ne10_fft_c2c_1d_int16_neon(
    reinterpret_cast<ne10_fft_cpx_int16_t*>(output),
    reinterpret_cast<ne10_fft_cpx_int16_t*>(const_cast<int16_t*>(source)),
    workBuffer.buffer, direction == FftDirection_Inverse,
    direction == FftDirection_Forward);
}

void FftInPlaceProcessRealDouble(double* output, const double* input,
  FftWorkBuffer& workBuffer, FftDirection direction) {
  FftInPlaceProcessRealDoubleCommon(output, input, workBuffer, direction);
}

void FftInPlaceProcessRealFloat(float* output, const float* input,
  FftWorkBuffer& workBuffer, FftDirection direction) {
  float* source = const_cast<float*>(input);
  if (output == input) {
    size_t size = workBuffer.sampleCount * sizeof(float);
    source = reinterpret_cast<float*>(
      (reinterpret_cast<uintptr_t>(workBuffer.buffer) + workBuffer.size -
        (size + 2 * sizeof(float))) & ~uintptr_t(7));
    if (direction == FftDirection_Forward) {
      memcpy(source, input, size);
    }
    else {
      memcpy(source, input, size + 2 * sizeof(float));
    }
  }
  if (direction == FftDirection_Forward) {
    nnaudiodetail_ne10_fft_r2c_1d_float32_neon(
      reinterpret_cast<ne10_fft_cpx_float32_t*>(output), source,
      workBuffer.buffer);
  }
  else {
    nnaudiodetail_ne10_fft_c2r_1d_float32_neon(output,
      reinterpret_cast<ne10_fft_cpx_float32_t*>(source), workBuffer.buffer);
  }
}

void FftInPlaceProcessRealFixedPointInt(int32_t* output,
  const int32_t* input, FftWorkBuffer& workBuffer, FftDirection direction) {
  int32_t* source = PrepareRealInput(output, input, workBuffer,
    GetRealInputSize<int32_t>(workBuffer, direction));
  if (direction == FftDirection_Forward) {
    nnaudiodetail_ne10_fft_r2c_1d_int32_neon(
      reinterpret_cast<ne10_fft_cpx_int32_t*>(output), source,
      workBuffer.buffer, true);
  }
  else {
    nnaudiodetail_ne10_fft_c2r_1d_int32_neon(output,
      reinterpret_cast<ne10_fft_cpx_int32_t*>(source), workBuffer.buffer,
      false);
  }
}

void FftInPlaceProcessRealFixedPointShort(int16_t* output,
  const int16_t* input, FftWorkBuffer& workBuffer, FftDirection direction) {
  int16_t* source = PrepareRealInput(output, input, workBuffer,
    GetRealInputSize<int16_t>(workBuffer, direction));
  if (direction == FftDirection_Forward) {
    nnaudiodetail_ne10_fft_r2c_1d_int16_neon(
      reinterpret_cast<ne10_fft_cpx_int16_t*>(output), source,
      workBuffer.buffer, true);
  }
  else {
    nnaudiodetail_ne10_fft_c2r_1d_int16_neon(output,
      reinterpret_cast<ne10_fft_cpx_int16_t*>(source), workBuffer.buffer,
      false);
  }
}

}
