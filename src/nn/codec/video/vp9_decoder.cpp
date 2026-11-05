#include "nn/codec/video_decoder.hpp"
#include "nn/codec/video_decoder_holder.hpp"

#include <string.h>

namespace nn::codec {

namespace {

using Holder = video::detail::Vp9DecoderHolder<8>;

Holder* GetHolder(Vp9DecoderType* decoder) {
  return reinterpret_cast<Holder*>(decoder);
}

}

Result InitializeVp9DecoderByTransferMemory(Vp9DecoderType* decoder,
  void* buffer, size_t bufferSize, unsigned long inputBufferSize,
  uint16_t width, uint16_t height, uint32_t option,
  VideoDecoderInputFormat inputFormat, VideoDecoderOutputFormat outputFormat,
  VideoDecoderOutputMode outputMode) {
  memset(decoder, 0, sizeof(*decoder));
  const Result result = GetHolder(decoder)->InitializeByTransferMemory(
    buffer, bufferSize, inputBufferSize, width, height, option, inputFormat,
    outputFormat, outputMode);
  video::detail::AbortUnlessDecoderCreated(result);
  return result;
}

Result InitializeVp9DecoderByRemoteMemory(Vp9DecoderType* decoder,
  unsigned long inputBufferSize, uint16_t width, uint16_t height,
  uint32_t option, VideoDecoderInputFormat inputFormat,
  VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode outputMode) {
  memset(decoder, 0, sizeof(*decoder));
  const Result result = GetHolder(decoder)->InitializeByRemoteMemory(
    inputBufferSize, width, height, option, inputFormat, outputFormat,
    outputMode);
  video::detail::AbortUnlessDecoderCreated(result);
  return result;
}

void FinalizeVp9Decoder(Vp9DecoderType* decoder) {
  detail::FinalizeVideoDecoder(decoder);
}

os::SystemEventType* GetVp9DecoderSubmissionReadyEvent(
  Vp9DecoderType* decoder) {
  return &decoder->submissionReadyEvent;
}

Result AcquireVp9DecoderOutputBuffer(uint32_t* index,
  gs::NativeSyncHandle* syncHandle, Vp9DecoderType* decoder) {
  return detail::AcquireVideoDecoderOutputBuffer(index, syncHandle, decoder);
}

void ReleaseVp9DecoderOutputBuffer(Vp9DecoderType* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle) {
  detail::ReleaseVideoDecoderOutputBuffer(decoder, index, syncHandle);
}

Result GetVp9DecoderOutputBufferProperties(uint16_t* width,
  uint16_t* height, uint16_t* stride, uint16_t* alignedHeight,
  TimeSpan* timestamp, bool* isKeyFrame, Vp9DecoderType* decoder,
  uint32_t index) {
  return detail::GetVideoDecoderOutputBufferProperties(decoder, width, height,
    stride, alignedHeight, timestamp, isKeyFrame, index);
}

void RegisterVp9DecoderBuffer(Vp9DecoderType* decoder, uint32_t index,
  VideoDecoderImagePoolType* pool, uint32_t imageIndex) {
  detail::RegisterVideoDecoderBuffer(decoder, index, pool, imageIndex);
}

void UnregisterVp9DecoderBuffer(Vp9DecoderType* decoder, uint32_t index) {
  detail::UnregisterVideoDecoderBuffer(decoder, index);
}

Result StartVp9Decoder(Vp9DecoderType* decoder) {
  return detail::StartVideoDecoder(decoder);
}

void StopVp9Decoder(Vp9DecoderType* decoder) {
  detail::StopVideoDecoder(decoder);
}

Result FlushVp9Decoder(Vp9DecoderType* decoder) {
  return detail::FlushVideoDecoder(decoder);
}

Result SubmitVp9DecoderInputBuffer(uint64_t* id, Vp9DecoderType* decoder,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitVideoDecoderInputBuffer(id, decoder, buffer, size,
    timestamp, isEndOfStream);
}

Result SubmitEncryptedVp9DecoderInputBuffer(uint64_t* id,
  Vp9DecoderType* decoder, const EncryptionProperty* property,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitEncryptedVideoDecoderInputBuffer(id, decoder, property,
    buffer, size, timestamp, isEndOfStream);
}

}
