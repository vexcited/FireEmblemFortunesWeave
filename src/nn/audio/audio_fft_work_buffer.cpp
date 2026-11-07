#include <stdint.h>

#include "nn/audio/detail/audio_fft.hpp"
#include "nn/diag/unexpected_default.hpp"

// The SDK variants of the ne10 sizes and initializers, the initializers also
// take the size left for the configuration.
extern "C" {

uint32_t nnaudiodetail_ne10_fft_sizeof_c2c_float32_neon(int32_t nfft);
uint32_t nnaudiodetail_ne10_fft_sizeof_c2c_int32_neon(int32_t nfft);
uint32_t nnaudiodetail_ne10_fft_sizeof_c2c_int16(int32_t nfft);
uint32_t nnaudiodetail_ne10_fft_sizeof_r2c_float32(int32_t nfft);
uint32_t nnaudiodetail_ne10_fft_sizeof_r2c_int32(int32_t nfft);
uint32_t nnaudiodetail_ne10_fft_sizeof_r2c_int16(int32_t nfft);
void* nnaudiodetail_ne10_fft_init_c2c_float32_neon(int32_t nfft, void* buffer,
  size_t size);
void* nnaudiodetail_ne10_fft_init_c2c_int32_neon(int32_t nfft, void* buffer,
  size_t size);
void* nnaudiodetail_ne10_fft_init_c2c_int16(int32_t nfft, void* buffer,
  size_t size);
void* nnaudiodetail_ne10_fft_init_r2c_float32(int32_t nfft, void* buffer,
  size_t size);
void* nnaudiodetail_ne10_fft_init_r2c_int32(int32_t nfft, void* buffer,
  size_t size);
void* nnaudiodetail_ne10_fft_init_r2c_int16(int32_t nfft, void* buffer,
  size_t size);

}

namespace nn::audio::detail {

namespace {

constexpr size_t Alignment = 8;

}

size_t GetFftWorkBufferSizeCommon(size_t elementSize,
  FftProcessType processType, int sampleCount) {
  const bool isReal = processType != 0;
  const size_t twiddleSize = isReal ? elementSize * sampleCount : 0;
  const size_t dataSize = (elementSize << (isReal ? 1 : 2)) * sampleCount;
  const int factorCount = isReal ? sampleCount / 2 : sampleCount;
  const int spectrumCount = isReal ? sampleCount / 2 + 1 : sampleCount;
  return twiddleSize + dataSize + sizeof(int32_t) * factorCount +
    elementSize * 2 * spectrumCount + 71;
}

size_t GetFftWorkBufferSize(FftElementType elementType, size_t elementSize,
  FftProcessType processType, int sampleCount) {
  // In place transforms copy the input after the configuration, real ones
  // with two extra samples.
  if (processType != 0) {
    switch (elementType) {
      case FftElementType_Float64:
        return GetFftWorkBufferSizeCommon(elementSize, processType,
          sampleCount);
      case FftElementType_Float32:
        return sizeof(float) * sampleCount +
          nnaudiodetail_ne10_fft_sizeof_r2c_float32(sampleCount) + 22;
      case FftElementType_Int32:
        return sizeof(int32_t) * sampleCount +
          nnaudiodetail_ne10_fft_sizeof_r2c_int32(sampleCount) + 22;
      case FftElementType_Int16:
        return sizeof(int16_t) * sampleCount +
          nnaudiodetail_ne10_fft_sizeof_r2c_int16(sampleCount) + 18;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
  }
  switch (elementType) {
    case FftElementType_Float64:
      return GetFftWorkBufferSizeCommon(elementSize, processType,
        sampleCount);
    case FftElementType_Float32:
      return sizeof(float) * (2 * sampleCount) +
        nnaudiodetail_ne10_fft_sizeof_c2c_float32_neon(sampleCount) + 14;
    case FftElementType_Int32:
      return sizeof(int32_t) * (2 * sampleCount) +
        nnaudiodetail_ne10_fft_sizeof_c2c_int32_neon(sampleCount) + 14;
    case FftElementType_Int16:
      return sizeof(int16_t) * (2 * sampleCount) +
        nnaudiodetail_ne10_fft_sizeof_c2c_int16(sampleCount) + 14;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

size_t GetFftWorkBufferAlignment() {
  return Alignment;
}

void InitializeFftWorkBuffer(FftWorkBuffer& workBuffer) {
  const uintptr_t address = reinterpret_cast<uintptr_t>(workBuffer.buffer);
  const uintptr_t aligned = (address + Alignment - 1) & ~(Alignment - 1);
  workBuffer.size = address - aligned + workBuffer.size;
  workBuffer.buffer = reinterpret_cast<void*>(aligned);
  void* buffer = workBuffer.buffer;
  const size_t size = workBuffer.size;
  const int sampleCount = workBuffer.sampleCount;
  if (workBuffer.processType != 0) {
    switch (workBuffer.elementType) {
      case FftElementType_Float64:
        return InitializeFftWorkBufferCommon(workBuffer);
      case FftElementType_Float32:
        nnaudiodetail_ne10_fft_init_r2c_float32(sampleCount, buffer,
          size - sizeof(float) * sampleCount - 2 * sizeof(float));
        return;
      case FftElementType_Int32:
        nnaudiodetail_ne10_fft_init_r2c_int32(sampleCount, buffer,
          size - sizeof(int32_t) * sampleCount - 2 * sizeof(int32_t));
        return;
      case FftElementType_Int16:
        nnaudiodetail_ne10_fft_init_r2c_int16(sampleCount, buffer,
          size - sizeof(int16_t) * sampleCount - 2 * sizeof(int16_t));
        return;
      default:
        nn::detail::UnexpectedDefaultImpl();
    }
  }
  switch (workBuffer.elementType) {
    case FftElementType_Float64:
      return InitializeFftWorkBufferCommon(workBuffer);
    case FftElementType_Float32:
      nnaudiodetail_ne10_fft_init_c2c_float32_neon(sampleCount, buffer,
        size - 2 * sizeof(float) * sampleCount);
      return;
    case FftElementType_Int32:
      nnaudiodetail_ne10_fft_init_c2c_int32_neon(sampleCount, buffer,
        size - 2 * sizeof(int32_t) * sampleCount);
      return;
    case FftElementType_Int16:
      nnaudiodetail_ne10_fft_init_c2c_int16(sampleCount, buffer,
        size - 2 * sizeof(int16_t) * sampleCount);
      return;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
