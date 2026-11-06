#include "nn/audio/interleave.hpp"
#include "nn/audio/mix_bus.hpp"
#include "nn/audio/vector_fill.hpp"

namespace nn::audio::util {

namespace {

constexpr int MaxChannelCount = 8;

template <typename T>
void SplitBuffer(T** pBuffers, const MixBusStream* pStream, uint8_t* pBuffer,
  size_t channelStride) {
  for (int i = 0; i < pStream->m_ChannelCount; ++i) {
    pBuffers[i] = reinterpret_cast<T*>(pBuffer);
    pBuffer += channelStride;
  }
}

}

template <typename T>
void SetConstantStridePointerArray(T** pOutPointers, void* pBuffer,
  int count, size_t stride) {
  uint8_t* pCursor = static_cast<uint8_t*>(pBuffer);
  for (int i = 0; i < count; ++i) {
    pOutPointers[i] = reinterpret_cast<T*>(pCursor);
    pCursor += stride;
  }
}

template <typename T>
void SetConstantStridePointerArray(const T** pOutPointers,
  const void* pBuffer, int count, size_t stride) {
  const uint8_t* pCursor = static_cast<const uint8_t*>(pBuffer);
  for (int i = 0; i < count; ++i) {
    pOutPointers[i] = reinterpret_cast<const T*>(pCursor);
    pCursor += stride;
  }
}

template <typename T, int Fraction>
void SetMixBusStreamBufferPointers(MixBusStream* pStream, uint8_t* pBuffer,
  size_t channelStride, int sampleCount) {
  T* buffers[MaxChannelCount] = {};
  SplitBuffer(buffers, pStream, pBuffer, channelStride);
  pStream->ConfigureBuffers(buffers, Fraction, sampleCount);
}

template <typename T, int Fraction>
void InterleavingCopyFromMixBusStream(T* pOutput,
  const MixBusStream* pStream, size_t) {
  const MixBusBuffers* pBuffers = pStream->GetMixBuffers();
  if (pBuffers->buffers[0] == nullptr) {
    VecFill<T>(pOutput, 0, pBuffers->channelCount * pBuffers->sampleCount);
    return;
  }
  T* buffers[MaxChannelCount] = {};
  pStream->GetBuffers(buffers, Fraction, pBuffers->sampleCount);
  VecInterleave<T>(pOutput, buffers, pStream->m_ChannelCount,
    pBuffers->sampleCount);
}

template <typename T, int Fraction>
void DeinterleavingCopyToMixBusStream(MixBusStream* pStream, const T* pInput,
  uint8_t* pBuffer, size_t channelStride, int sampleCount) {
  T* buffers[MaxChannelCount] = {};
  SplitBuffer(buffers, pStream, pBuffer, channelStride);
  pStream->ConfigureBuffers(buffers, Fraction, sampleCount);
  VecDeinterleave<T>(buffers, pInput, pStream->m_ChannelCount, sampleCount);
}

template void SetConstantStridePointerArray<int16_t>(int16_t**, void*, int,
  size_t);
template void SetConstantStridePointerArray<int32_t>(int32_t**, void*, int,
  size_t);
template void SetConstantStridePointerArray<int16_t>(const int16_t**,
  const void*, int, size_t);
template void SetConstantStridePointerArray<int32_t>(const int32_t**,
  const void*, int, size_t);
template void SetMixBusStreamBufferPointers<int16_t, 15>(MixBusStream*,
  uint8_t*, size_t, int);
template void SetMixBusStreamBufferPointers<int32_t, 23>(MixBusStream*,
  uint8_t*, size_t, int);
template void SetMixBusStreamBufferPointers<int32_t, 31>(MixBusStream*,
  uint8_t*, size_t, int);
template void InterleavingCopyFromMixBusStream<int16_t, 15>(int16_t*,
  const MixBusStream*, size_t);
template void InterleavingCopyFromMixBusStream<int32_t, 23>(int32_t*,
  const MixBusStream*, size_t);
template void InterleavingCopyFromMixBusStream<int32_t, 31>(int32_t*,
  const MixBusStream*, size_t);
template void DeinterleavingCopyToMixBusStream<int16_t, 15>(MixBusStream*,
  const int16_t*, uint8_t*, size_t, int);
template void DeinterleavingCopyToMixBusStream<int32_t, 23>(MixBusStream*,
  const int32_t*, uint8_t*, size_t, int);
template void DeinterleavingCopyToMixBusStream<int32_t, 31>(MixBusStream*,
  const int32_t*, uint8_t*, size_t, int);

}
