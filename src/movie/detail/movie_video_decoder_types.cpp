#include "movie/detail/movie_video_decoder_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::codec {

#define NN_CODEC_DECLARE_VIDEO_DECODER(Name) \
  Result Initialize##Name##DecoderByTransferMemory(Name##DecoderType* decoder, \
    void* memory, size_t memorySize, size_t workSize, uint16_t width, \
    uint16_t height, uint32_t option, VideoDecoderInputFormat inputFormat, \
    VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode mode); \
  Result Initialize##Name##DecoderByRemoteMemory(Name##DecoderType* decoder, \
    size_t memorySize, uint16_t width, uint16_t height, uint32_t option, \
    VideoDecoderInputFormat inputFormat, \
    VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode mode); \
  void Finalize##Name##Decoder(Name##DecoderType* decoder); \
  Result Register##Name##DecoderBuffer(Name##DecoderType* decoder, \
    uint32_t index, VideoDecoderImagePoolType* pool, uint32_t imageIndex); \
  Result Start##Name##Decoder(Name##DecoderType* decoder); \
  Result Stop##Name##Decoder(Name##DecoderType* decoder); \
  Result Flush##Name##Decoder(Name##DecoderType* decoder); \
  os::SystemEventType* Get##Name##DecoderSubmissionReadyEvent( \
    Name##DecoderType* decoder); \
  Result Submit##Name##DecoderInputBuffer(uint64_t* pOutId, \
    Name##DecoderType* decoder, const void* data, size_t size, \
    TimeSpan timeStamp, bool isEndOfStream); \
  Result Acquire##Name##DecoderOutputBuffer(uint32_t* pOutIndex, \
    gs::NativeSyncHandle* pOutSyncHandle, Name##DecoderType* decoder); \
  Result Release##Name##DecoderOutputBuffer(Name##DecoderType* decoder, \
    uint32_t index, gs::NativeSyncHandle syncHandle); \
  Result Get##Name##DecoderOutputBufferProperties(uint16_t* pOutWidth, \
    uint16_t* pOutHeight, uint16_t* pOutStride, uint16_t* pOutAlignedHeight, \
    TimeSpan* pOutTimeStamp, bool* pOutIsEndOfStream, \
    Name##DecoderType* decoder, uint32_t index);

NN_CODEC_DECLARE_VIDEO_DECODER(Vp9)
NN_CODEC_DECLARE_VIDEO_DECODER(Av1)
NN_CODEC_DECLARE_VIDEO_DECODER(Vp8)

#undef NN_CODEC_DECLARE_VIDEO_DECODER

Result InitializeH264DecoderByTransferMemory(H264DecoderType* decoder,
  void* memory, size_t memorySize, size_t workSize, uint16_t width,
  uint16_t height, uint32_t option, VideoDecoderInputFormat inputFormat,
  VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode mode,
  const void* configuration, size_t configurationSize);
Result InitializeH264DecoderByRemoteMemory(H264DecoderType* decoder,
  size_t memorySize, uint16_t width, uint16_t height, uint32_t option,
  VideoDecoderInputFormat inputFormat, VideoDecoderOutputFormat outputFormat,
  VideoDecoderOutputMode mode, const void* configuration,
  size_t configurationSize);
void FinalizeH264Decoder(H264DecoderType* decoder);
Result RegisterH264DecoderBuffer(H264DecoderType* decoder, uint32_t index,
  VideoDecoderImagePoolType* pool, uint32_t imageIndex);
Result StartH264Decoder(H264DecoderType* decoder);
Result StopH264Decoder(H264DecoderType* decoder);
Result FlushH264Decoder(H264DecoderType* decoder);
os::SystemEventType* GetH264DecoderSubmissionReadyEvent(
  H264DecoderType* decoder);
Result SubmitH264DecoderInputBuffer(uint64_t* pOutId,
  H264DecoderType* decoder, const void* data, size_t size,
  TimeSpan timeStamp, bool isEndOfStream);
Result AcquireH264DecoderOutputBuffer(uint32_t* pOutIndex,
  gs::NativeSyncHandle* pOutSyncHandle, H264DecoderType* decoder);
Result ReleaseH264DecoderOutputBuffer(H264DecoderType* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle);
Result GetH264DecoderOutputBufferProperties(uint16_t* pOutWidth,
  uint16_t* pOutHeight, uint16_t* pOutStride, uint16_t* pOutAlignedHeight,
  TimeSpan* pOutTimeStamp, bool* pOutIsEndOfStream, H264DecoderType* decoder,
  uint32_t index);

}

namespace movie::detail {

namespace {

using nn::codec::Av1DecoderType;
using nn::codec::H264DecoderType;
using nn::codec::Vp8DecoderType;
using nn::codec::Vp9DecoderType;

constexpr auto OutputModeDefault =
  static_cast<nn::codec::VideoDecoderOutputMode>(1);
constexpr MovieResult ResultDecoderBusy = static_cast<MovieResult>(122);

inline bool Includes(nn::Result result, uint32_t value) {
  return (result.value & 0x3fffff) == value;
}

// The video service runs out of memory or of sessions with these.
constexpr uint32_t ResultOutOfMemoryValue = 0xfa66f;
constexpr uint32_t ResultOutOfSessionValue = 0xfa86f;
constexpr uint32_t ResultInvalidStateValue = 0x1c246f;
constexpr uint32_t ResultBusyValue = 0x1c266f;

}

MovieResult InitializeDecoderByTransferMemory(VideoDecoderTypes* decoder,
  void* memory, size_t memorySize, size_t workSize, uint16_t width,
  uint16_t height, uint32_t option,
  nn::codec::VideoDecoderInputFormat inputFormat,
  nn::codec::VideoDecoderOutputFormat outputFormat,
  const void* configuration, size_t configurationSize) {
  nn::Result result;
  switch (decoder->type) {
    case VideoDecoderType_H264:
      result = nn::codec::InitializeH264DecoderByTransferMemory(
        decoder->Get<H264DecoderType>(), memory, memorySize, workSize, width,
        height, option, inputFormat, outputFormat, OutputModeDefault,
        configuration, configurationSize);
      break;
    case VideoDecoderType_Vp9:
      result = nn::codec::InitializeVp9DecoderByTransferMemory(
        decoder->Get<Vp9DecoderType>(), memory, memorySize, workSize, width,
        height, option, inputFormat, outputFormat, OutputModeDefault);
      break;
    case VideoDecoderType_Av1:
      result = nn::codec::InitializeAv1DecoderByTransferMemory(
        decoder->Get<Av1DecoderType>(), memory, memorySize, workSize, width,
        height, option, inputFormat, outputFormat, OutputModeDefault);
      break;
    case VideoDecoderType_Vp8:
      result = nn::codec::InitializeVp8DecoderByTransferMemory(
        decoder->Get<Vp8DecoderType>(), memory, memorySize, workSize, width,
        height, option, inputFormat, outputFormat, OutputModeDefault);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  NN_ABORT_UNLESS(!Includes(result, ResultOutOfMemoryValue));
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return MovieResult_Success;
}

MovieResult InitializeDecoderByRemoteMemory(VideoDecoderTypes* decoder,
  size_t memorySize, uint16_t width, uint16_t height, uint32_t option,
  nn::codec::VideoDecoderInputFormat inputFormat,
  nn::codec::VideoDecoderOutputFormat outputFormat,
  const void* configuration, size_t configurationSize) {
  nn::Result result;
  switch (decoder->type) {
    case VideoDecoderType_H264:
      result = nn::codec::InitializeH264DecoderByRemoteMemory(
        decoder->Get<H264DecoderType>(), memorySize, width, height, option,
        inputFormat, outputFormat, OutputModeDefault, configuration,
        configurationSize);
      break;
    case VideoDecoderType_Vp9:
      result = nn::codec::InitializeVp9DecoderByRemoteMemory(
        decoder->Get<Vp9DecoderType>(), memorySize, width, height, option,
        inputFormat, outputFormat, OutputModeDefault);
      break;
    case VideoDecoderType_Av1:
      result = nn::codec::InitializeAv1DecoderByRemoteMemory(
        decoder->Get<Av1DecoderType>(), memorySize, width, height, option,
        inputFormat, outputFormat, OutputModeDefault);
      break;
    case VideoDecoderType_Vp8:
      result = nn::codec::InitializeVp8DecoderByRemoteMemory(
        decoder->Get<Vp8DecoderType>(), memorySize, width, height, option,
        inputFormat, outputFormat, OutputModeDefault);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  if (Includes(result, ResultOutOfMemoryValue)) {
    return MovieResult_OutOfMemory;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return MovieResult_Success;
}

void FinalizeDecoder(VideoDecoderTypes* decoder) {
  switch (decoder->type) {
    case VideoDecoderType_H264:
      return nn::codec::FinalizeH264Decoder(decoder->Get<H264DecoderType>());
    case VideoDecoderType_Vp9:
      return nn::codec::FinalizeVp9Decoder(decoder->Get<Vp9DecoderType>());
    case VideoDecoderType_Av1:
      return nn::codec::FinalizeAv1Decoder(decoder->Get<Av1DecoderType>());
    case VideoDecoderType_Vp8:
      return nn::codec::FinalizeVp8Decoder(decoder->Get<Vp8DecoderType>());
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

nn::Result RegisterDecoderBuffer(VideoDecoderTypes* decoder, uint32_t index,
  nn::codec::VideoDecoderImagePoolType* pool, uint32_t imageIndex) {
  switch (decoder->type) {
    case VideoDecoderType_H264:
      return nn::codec::RegisterH264DecoderBuffer(
        decoder->Get<H264DecoderType>(), index, pool, imageIndex);
    case VideoDecoderType_Vp9:
      return nn::codec::RegisterVp9DecoderBuffer(
        decoder->Get<Vp9DecoderType>(), index, pool, imageIndex);
    case VideoDecoderType_Av1:
      return nn::codec::RegisterAv1DecoderBuffer(
        decoder->Get<Av1DecoderType>(), index, pool, imageIndex);
    case VideoDecoderType_Vp8:
      return nn::codec::RegisterVp8DecoderBuffer(
        decoder->Get<Vp8DecoderType>(), index, pool, imageIndex);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void StartDecoder(VideoDecoderTypes* decoder) {
  nn::Result result;
  switch (decoder->type) {
    case VideoDecoderType_H264:
      result = nn::codec::StartH264Decoder(decoder->Get<H264DecoderType>());
      break;
    case VideoDecoderType_Vp9:
      result = nn::codec::StartVp9Decoder(decoder->Get<Vp9DecoderType>());
      break;
    case VideoDecoderType_Av1:
      result = nn::codec::StartAv1Decoder(decoder->Get<Av1DecoderType>());
      break;
    case VideoDecoderType_Vp8:
      result = nn::codec::StartVp8Decoder(decoder->Get<Vp8DecoderType>());
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  NN_ABORT_UNLESS(!Includes(result, ResultOutOfMemoryValue));
  NN_ABORT_UNLESS(!Includes(result, ResultInvalidStateValue));
  NN_ABORT_UNLESS(!Includes(result, ResultOutOfSessionValue));
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void StopDecoder(VideoDecoderTypes* decoder) {
  switch (decoder->type) {
    case VideoDecoderType_H264:
      nn::codec::StopH264Decoder(decoder->Get<H264DecoderType>());
      return;
    case VideoDecoderType_Vp9:
      nn::codec::StopVp9Decoder(decoder->Get<Vp9DecoderType>());
      return;
    case VideoDecoderType_Av1:
      nn::codec::StopAv1Decoder(decoder->Get<Av1DecoderType>());
      return;
    case VideoDecoderType_Vp8:
      nn::codec::StopVp8Decoder(decoder->Get<Vp8DecoderType>());
      return;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void FlushDecoder(VideoDecoderTypes* decoder) {
  nn::Result result;
  switch (decoder->type) {
    case VideoDecoderType_H264:
      result = nn::codec::FlushH264Decoder(decoder->Get<H264DecoderType>());
      break;
    case VideoDecoderType_Vp9:
      result = nn::codec::FlushVp9Decoder(decoder->Get<Vp9DecoderType>());
      break;
    case VideoDecoderType_Av1:
      result = nn::codec::FlushAv1Decoder(decoder->Get<Av1DecoderType>());
      break;
    case VideoDecoderType_Vp8:
      result = nn::codec::FlushVp8Decoder(decoder->Get<Vp8DecoderType>());
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  NN_ABORT_UNLESS(!Includes(result, ResultInvalidStateValue));
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

nn::os::SystemEventType* GetDecoderSubmissionReadyEvent(
  VideoDecoderTypes* decoder) {
  switch (decoder->type) {
    case VideoDecoderType_H264:
      return nn::codec::GetH264DecoderSubmissionReadyEvent(
        decoder->Get<H264DecoderType>());
    case VideoDecoderType_Vp9:
      return nn::codec::GetVp9DecoderSubmissionReadyEvent(
        decoder->Get<Vp9DecoderType>());
    case VideoDecoderType_Av1:
      return nn::codec::GetAv1DecoderSubmissionReadyEvent(
        decoder->Get<Av1DecoderType>());
    case VideoDecoderType_Vp8:
      return nn::codec::GetVp8DecoderSubmissionReadyEvent(
        decoder->Get<Vp8DecoderType>());
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

MovieResult SubmitDecoderInputBuffer(uint64_t* pOutId,
  VideoDecoderTypes* decoder, const void* data, size_t size,
  nn::TimeSpan timeStamp, bool isEndOfStream) {
  nn::Result result;
  switch (decoder->type) {
    case VideoDecoderType_H264:
      result = nn::codec::SubmitH264DecoderInputBuffer(pOutId,
        decoder->Get<H264DecoderType>(), data, size, timeStamp,
        isEndOfStream);
      break;
    case VideoDecoderType_Vp9:
      result = nn::codec::SubmitVp9DecoderInputBuffer(pOutId,
        decoder->Get<Vp9DecoderType>(), data, size, timeStamp,
        isEndOfStream);
      break;
    case VideoDecoderType_Av1:
      result = nn::codec::SubmitAv1DecoderInputBuffer(pOutId,
        decoder->Get<Av1DecoderType>(), data, size, timeStamp,
        isEndOfStream);
      break;
    case VideoDecoderType_Vp8:
      result = nn::codec::SubmitVp8DecoderInputBuffer(pOutId,
        decoder->Get<Vp8DecoderType>(), data, size, timeStamp,
        isEndOfStream);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  if (Includes(result, ResultBusyValue)) {
    return ResultDecoderBusy;
  }

  NN_ABORT_UNLESS(!Includes(result, ResultInvalidStateValue));
  NN_ABORT_UNLESS(!Includes(result, ResultOutOfSessionValue));
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return MovieResult_Success;
}

void AcquireDecoderOutputBuffer(uint32_t* pOutIndex,
  nn::gs::NativeSyncHandle* pOutSyncHandle, VideoDecoderTypes* decoder) {
  nn::Result result;
  switch (decoder->type) {
    case VideoDecoderType_H264:
      result = nn::codec::AcquireH264DecoderOutputBuffer(pOutIndex,
        pOutSyncHandle, decoder->Get<H264DecoderType>());
      break;
    case VideoDecoderType_Vp9:
      result = nn::codec::AcquireVp9DecoderOutputBuffer(pOutIndex,
        pOutSyncHandle, decoder->Get<Vp9DecoderType>());
      break;
    case VideoDecoderType_Av1:
      result = nn::codec::AcquireAv1DecoderOutputBuffer(pOutIndex,
        pOutSyncHandle, decoder->Get<Av1DecoderType>());
      break;
    case VideoDecoderType_Vp8:
      result = nn::codec::AcquireVp8DecoderOutputBuffer(pOutIndex,
        pOutSyncHandle, decoder->Get<Vp8DecoderType>());
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void ReleaseDecoderOutputBuffer(VideoDecoderTypes* decoder, uint32_t index,
  nn::gs::NativeSyncHandle syncHandle) {
  switch (decoder->type) {
    case VideoDecoderType_H264:
      nn::codec::ReleaseH264DecoderOutputBuffer(
        decoder->Get<H264DecoderType>(), index, syncHandle);
      return;
    case VideoDecoderType_Vp9:
      nn::codec::ReleaseVp9DecoderOutputBuffer(
        decoder->Get<Vp9DecoderType>(), index, syncHandle);
      return;
    case VideoDecoderType_Av1:
      nn::codec::ReleaseAv1DecoderOutputBuffer(
        decoder->Get<Av1DecoderType>(), index, syncHandle);
      return;
    case VideoDecoderType_Vp8:
      nn::codec::ReleaseVp8DecoderOutputBuffer(
        decoder->Get<Vp8DecoderType>(), index, syncHandle);
      return;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void GetDecoderOutputBufferProperties(uint16_t* pOutWidth,
  uint16_t* pOutHeight, uint16_t* pOutStride, uint16_t* pOutAlignedHeight,
  nn::TimeSpan* pOutTimeStamp, bool* pOutIsEndOfStream,
  VideoDecoderTypes* decoder, uint32_t index) {
  switch (decoder->type) {
    case VideoDecoderType_H264:
      nn::codec::GetH264DecoderOutputBufferProperties(pOutWidth, pOutHeight,
        pOutStride, pOutAlignedHeight, pOutTimeStamp, pOutIsEndOfStream,
        decoder->Get<H264DecoderType>(), index);
      return;
    case VideoDecoderType_Vp9:
      nn::codec::GetVp9DecoderOutputBufferProperties(pOutWidth, pOutHeight,
        pOutStride, pOutAlignedHeight, pOutTimeStamp, pOutIsEndOfStream,
        decoder->Get<Vp9DecoderType>(), index);
      return;
    case VideoDecoderType_Av1:
      nn::codec::GetAv1DecoderOutputBufferProperties(pOutWidth, pOutHeight,
        pOutStride, pOutAlignedHeight, pOutTimeStamp, pOutIsEndOfStream,
        decoder->Get<Av1DecoderType>(), index);
      return;
    case VideoDecoderType_Vp8:
      nn::codec::GetVp8DecoderOutputBufferProperties(pOutWidth, pOutHeight,
        pOutStride, pOutAlignedHeight, pOutTimeStamp, pOutIsEndOfStream,
        decoder->Get<Vp8DecoderType>(), index);
      return;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
