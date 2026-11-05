#include "nn/codec/video_decoder.hpp"
#include "nn/codec/video_decoder_holder.hpp"

#include <string.h>

namespace nn::codec {

namespace {

using Holder = video::detail::Vp8DecoderHolder<8>;

Holder* GetHolder(Vp8DecoderType* decoder) {
  return reinterpret_cast<Holder*>(decoder);
}

}

Result InitializeVp8DecoderByTransferMemory(Vp8DecoderType* decoder,
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

Result InitializeVp8DecoderByRemoteMemory(Vp8DecoderType* decoder,
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

void FinalizeVp8Decoder(Vp8DecoderType* decoder) {
  detail::FinalizeVideoDecoder(decoder);
}

os::SystemEventType* GetVp8DecoderSubmissionReadyEvent(
  Vp8DecoderType* decoder) {
  return &decoder->submissionReadyEvent;
}

Result AcquireVp8DecoderOutputBuffer(uint32_t* index,
  gs::NativeSyncHandle* syncHandle, Vp8DecoderType* decoder) {
  return detail::AcquireVideoDecoderOutputBuffer(index, syncHandle, decoder);
}

void ReleaseVp8DecoderOutputBuffer(Vp8DecoderType* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle) {
  detail::ReleaseVideoDecoderOutputBuffer(decoder, index, syncHandle);
}

Result GetVp8DecoderOutputBufferProperties(uint16_t* width,
  uint16_t* height, uint16_t* stride, uint16_t* alignedHeight,
  TimeSpan* timestamp, bool* isKeyFrame, Vp8DecoderType* decoder,
  uint32_t index) {
  return detail::GetVideoDecoderOutputBufferProperties(decoder, width, height,
    stride, alignedHeight, timestamp, isKeyFrame, index);
}

void RegisterVp8DecoderBuffer(Vp8DecoderType* decoder, uint32_t index,
  VideoDecoderImagePoolType* pool, uint32_t imageIndex) {
  detail::RegisterVideoDecoderBuffer(decoder, index, pool, imageIndex);
}

void UnregisterVp8DecoderBuffer(Vp8DecoderType* decoder, uint32_t index) {
  detail::UnregisterVideoDecoderBuffer(decoder, index);
}

Result StartVp8Decoder(Vp8DecoderType* decoder) {
  return detail::StartVideoDecoder(decoder);
}

void StopVp8Decoder(Vp8DecoderType* decoder) {
  detail::StopVideoDecoder(decoder);
}

Result FlushVp8Decoder(Vp8DecoderType* decoder) {
  return detail::FlushVideoDecoder(decoder);
}

Result SubmitVp8DecoderInputBuffer(uint64_t* id, Vp8DecoderType* decoder,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitVideoDecoderInputBuffer(id, decoder, buffer, size,
    timestamp, isEndOfStream);
}

Result SubmitEncryptedVp8DecoderInputBuffer(uint64_t* id,
  Vp8DecoderType* decoder, const EncryptionProperty* property,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitEncryptedVideoDecoderInputBuffer(id, decoder, property,
    buffer, size, timestamp, isEndOfStream);
}

}
