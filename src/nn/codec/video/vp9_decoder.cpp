#include "nn/codec/video_decoder.hpp"

namespace nn::codec {

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

}
