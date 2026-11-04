#include "nn/codec/video_decoder.hpp"

namespace nn::codec {

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

}
