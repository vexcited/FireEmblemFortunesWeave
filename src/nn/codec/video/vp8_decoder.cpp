#include "nn/codec/video_decoder.hpp"

namespace nn::codec {

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

}
