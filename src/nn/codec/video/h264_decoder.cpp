#include "nn/codec/video_decoder.hpp"
#include "nn/codec/video_decoder_holder.hpp"

#include <string.h>

namespace nn::codec {

namespace {

using Holder = video::detail::H264DecoderHolder<8>;

Holder* GetHolder(H264DecoderType* decoder) {
  return reinterpret_cast<Holder*>(decoder);
}

}

Result InitializeH264DecoderByTransferMemory(H264DecoderType* decoder,
  void* buffer, size_t bufferSize, unsigned long inputBufferSize,
  uint16_t width, uint16_t height, uint32_t option,
  VideoDecoderInputFormat inputFormat, VideoDecoderOutputFormat outputFormat,
  VideoDecoderOutputMode outputMode, const void* configuration,
  size_t configurationSize) {
  memset(decoder, 0, sizeof(*decoder));
  const Result result = GetHolder(decoder)->InitializeByTransferMemory(
    buffer, bufferSize, inputBufferSize, width, height, option, inputFormat,
    outputFormat, outputMode, configuration, configurationSize);
  video::detail::AbortUnlessDecoderCreated(result);
  return result;
}

Result InitializeH264DecoderByRemoteMemory(H264DecoderType* decoder,
  unsigned long inputBufferSize, uint16_t width, uint16_t height,
  uint32_t option, VideoDecoderInputFormat inputFormat,
  VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode outputMode,
  const void* configuration, size_t configurationSize) {
  memset(decoder, 0, sizeof(*decoder));
  const Result result = GetHolder(decoder)->InitializeByRemoteMemory(
    inputBufferSize, width, height, option, inputFormat, outputFormat,
    outputMode, configuration, configurationSize);
  video::detail::AbortUnlessDecoderCreated(result);
  return result;
}

void FinalizeH264Decoder(H264DecoderType* decoder) {
  detail::FinalizeVideoDecoder(decoder);
}

os::SystemEventType* GetH264DecoderSubmissionReadyEvent(
  H264DecoderType* decoder) {
  return &decoder->submissionReadyEvent;
}

Result AcquireH264DecoderOutputBuffer(uint32_t* index,
  gs::NativeSyncHandle* syncHandle, H264DecoderType* decoder) {
  return detail::AcquireVideoDecoderOutputBuffer(index, syncHandle, decoder);
}

void ReleaseH264DecoderOutputBuffer(H264DecoderType* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle) {
  detail::ReleaseVideoDecoderOutputBuffer(decoder, index, syncHandle);
}

Result GetH264DecoderOutputBufferProperties(uint16_t* width,
  uint16_t* height, uint16_t* stride, uint16_t* alignedHeight,
  TimeSpan* timestamp, bool* isKeyFrame, H264DecoderType* decoder,
  uint32_t index) {
  return detail::GetVideoDecoderOutputBufferProperties(decoder, width, height,
    stride, alignedHeight, timestamp, isKeyFrame, index);
}

void RegisterH264DecoderBuffer(H264DecoderType* decoder, uint32_t index,
  VideoDecoderImagePoolType* pool, uint32_t imageIndex) {
  detail::RegisterVideoDecoderBuffer(decoder, index, pool, imageIndex);
}

void UnregisterH264DecoderBuffer(H264DecoderType* decoder, uint32_t index) {
  detail::UnregisterVideoDecoderBuffer(decoder, index);
}

Result StartH264Decoder(H264DecoderType* decoder) {
  return detail::StartVideoDecoder(decoder);
}

void StopH264Decoder(H264DecoderType* decoder) {
  detail::StopVideoDecoder(decoder);
}

Result FlushH264Decoder(H264DecoderType* decoder) {
  return detail::FlushVideoDecoder(decoder);
}

Result SubmitH264DecoderInputBuffer(uint64_t* id, H264DecoderType* decoder,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitVideoDecoderInputBuffer(id, decoder, buffer, size,
    timestamp, isEndOfStream);
}

Result SubmitEncryptedH264DecoderInputBuffer(uint64_t* id,
  H264DecoderType* decoder, const EncryptionProperty* property,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitEncryptedVideoDecoderInputBuffer(id, decoder, property,
    buffer, size, timestamp, isEndOfStream);
}

}
