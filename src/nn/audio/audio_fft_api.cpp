#include "nn/audio/detail/audio_fft.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::audio::detail {

size_t FftGetWorkBufferAlignment(unsigned int) {
  return GetFftWorkBufferAlignment();
}

void FftInitializeInternalImpl(FftWorkBuffer& workBuffer, unsigned int) {
  InitializeFftWorkBuffer(workBuffer);
}

#define AUDIO_FFT_PROCESS_INTERNAL_IMPL(Name, Type, Process)                  \
  void FftProcessInternalImpl##Name(Type* output, int, const Type* input,     \
    int, const FftWorkBuffer& workBuffer, FftDirection direction,             \
    unsigned int) {                                                           \
    NN_ABORT_UNLESS_NOT_NULL(output);                                         \
    NN_ABORT_UNLESS_NOT_NULL(input);                                          \
    Process(output, input, const_cast<FftWorkBuffer&>(workBuffer),            \
      direction);                                                             \
  }

AUDIO_FFT_PROCESS_INTERNAL_IMPL(Float64Complex, double,
  FftInPlaceProcessComplexDouble)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Float32Complex, float,
  FftInPlaceProcessComplexFloat)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Int32Complex, int32_t,
  FftInPlaceProcessComplexFixedPointInt)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Int16Complex, int16_t,
  FftInPlaceProcessComplexFixedPointShort)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Float64Real, double,
  FftInPlaceProcessRealDouble)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Float32Real, float,
  FftInPlaceProcessRealFloat)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Int32Real, int32_t,
  FftInPlaceProcessRealFixedPointInt)
AUDIO_FFT_PROCESS_INTERNAL_IMPL(Int16Real, int16_t,
  FftInPlaceProcessRealFixedPointShort)

#undef AUDIO_FFT_PROCESS_INTERNAL_IMPL

size_t GetFftWorkBufferAlignmentCommon() {
  return 8;
}

}
