#include "nn/codec/video_decoder.hpp"

namespace nn::codec {

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

}
