#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_gs_handles.hpp"
#include "movie/movie_result.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::codec {

enum class VideoDecoderInputFormat : int32_t;
enum class VideoDecoderOutputFormat : int32_t;
enum class VideoDecoderOutputMode : int32_t;

struct Av1DecoderType;
struct H264DecoderType;
struct Vp8DecoderType;
struct Vp9DecoderType;
struct VideoDecoderImagePoolType;

}

namespace movie::detail {

enum VideoDecoderType : int32_t {
  VideoDecoderType_H264,
  VideoDecoderType_Vp9,
  VideoDecoderType_Reserved2,
  VideoDecoderType_Av1,
  VideoDecoderType_Vp8,
};

// Holds the decoder of the codec given by the type in place.
struct VideoDecoderTypes {
  template <typename T>
  T* Get() {
    return reinterpret_cast<T*>(storage);
  }

  alignas(8) uint8_t storage[0x400];
  VideoDecoderType type;
  uint32_t reserved;
};

MovieResult InitializeDecoderByTransferMemory(VideoDecoderTypes* decoder,
  void* memory, size_t memorySize, size_t workSize, uint16_t width,
  uint16_t height, uint32_t option,
  nn::codec::VideoDecoderInputFormat inputFormat,
  nn::codec::VideoDecoderOutputFormat outputFormat,
  const void* configuration, size_t configurationSize);
MovieResult InitializeDecoderByRemoteMemory(VideoDecoderTypes* decoder,
  size_t memorySize, uint16_t width, uint16_t height, uint32_t option,
  nn::codec::VideoDecoderInputFormat inputFormat,
  nn::codec::VideoDecoderOutputFormat outputFormat,
  const void* configuration, size_t configurationSize);
void FinalizeDecoder(VideoDecoderTypes* decoder);
nn::Result RegisterDecoderBuffer(VideoDecoderTypes* decoder, uint32_t index,
  nn::codec::VideoDecoderImagePoolType* pool, uint32_t imageIndex);
void StartDecoder(VideoDecoderTypes* decoder);
void StopDecoder(VideoDecoderTypes* decoder);
void FlushDecoder(VideoDecoderTypes* decoder);
nn::os::SystemEventType* GetDecoderSubmissionReadyEvent(
  VideoDecoderTypes* decoder);
MovieResult SubmitDecoderInputBuffer(uint64_t* pOutId,
  VideoDecoderTypes* decoder, const void* data, size_t size,
  nn::TimeSpan timeStamp, bool isEndOfStream);
void AcquireDecoderOutputBuffer(uint32_t* pOutIndex,
  nn::gs::NativeSyncHandle* pOutSyncHandle, VideoDecoderTypes* decoder);
void ReleaseDecoderOutputBuffer(VideoDecoderTypes* decoder, uint32_t index,
  nn::gs::NativeSyncHandle syncHandle);
void GetDecoderOutputBufferProperties(uint16_t* pOutWidth,
  uint16_t* pOutHeight, uint16_t* pOutStride, uint16_t* pOutAlignedHeight,
  nn::TimeSpan* pOutTimeStamp, bool* pOutIsEndOfStream,
  VideoDecoderTypes* decoder, uint32_t index);

}
