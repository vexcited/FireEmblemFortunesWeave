#include "nn/codec/video_decoder.hpp"
#include "nn/codec/video_decoder_holder.hpp"

#include <string.h>

namespace nn::codec {

namespace {

using Holder = video::detail::Av1DecoderHolder<8>;

Holder* GetHolder(Av1DecoderType* decoder) {
  return reinterpret_cast<Holder*>(decoder);
}

}

Result InitializeAv1DecoderByTransferMemory(Av1DecoderType* decoder,
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

Result InitializeAv1DecoderByRemoteMemory(Av1DecoderType* decoder,
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

void FinalizeAv1Decoder(Av1DecoderType* decoder) {
  detail::FinalizeVideoDecoder(decoder);
}

os::SystemEventType* GetAv1DecoderSubmissionReadyEvent(
  Av1DecoderType* decoder) {
  return &decoder->submissionReadyEvent;
}

Result AcquireAv1DecoderOutputBuffer(uint32_t* index,
  gs::NativeSyncHandle* syncHandle, Av1DecoderType* decoder) {
  return detail::AcquireVideoDecoderOutputBuffer(index, syncHandle, decoder);
}

void ReleaseAv1DecoderOutputBuffer(Av1DecoderType* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle) {
  detail::ReleaseVideoDecoderOutputBuffer(decoder, index, syncHandle);
}

Result GetAv1DecoderOutputBufferProperties(uint16_t* width,
  uint16_t* height, uint16_t* stride, uint16_t* alignedHeight,
  TimeSpan* timestamp, bool* isKeyFrame, Av1DecoderType* decoder,
  uint32_t index) {
  return detail::GetVideoDecoderOutputBufferProperties(decoder, width, height,
    stride, alignedHeight, timestamp, isKeyFrame, index);
}

void RegisterAv1DecoderBuffer(Av1DecoderType* decoder, uint32_t index,
  VideoDecoderImagePoolType* pool, uint32_t imageIndex) {
  detail::RegisterVideoDecoderBuffer(decoder, index, pool, imageIndex);
}

void UnregisterAv1DecoderBuffer(Av1DecoderType* decoder, uint32_t index) {
  detail::UnregisterVideoDecoderBuffer(decoder, index);
}

Result StartAv1Decoder(Av1DecoderType* decoder) {
  return detail::StartVideoDecoder(decoder);
}

void StopAv1Decoder(Av1DecoderType* decoder) {
  detail::StopVideoDecoder(decoder);
}

Result FlushAv1Decoder(Av1DecoderType* decoder) {
  return detail::FlushVideoDecoder(decoder);
}

Result SubmitAv1DecoderInputBuffer(uint64_t* id, Av1DecoderType* decoder,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitVideoDecoderInputBuffer(id, decoder, buffer, size,
    timestamp, isEndOfStream);
}

Result SubmitEncryptedAv1DecoderInputBuffer(uint64_t* id,
  Av1DecoderType* decoder, const EncryptionProperty* property,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  return detail::SubmitEncryptedVideoDecoderInputBuffer(id, decoder, property,
    buffer, size, timestamp, isEndOfStream);
}

}
