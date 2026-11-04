#include "nn/codec/opus_impl.hpp"

namespace nn::codec::opus {
namespace {

constexpr int OpusResetState = 4028;

inline OpusResult ConvertDecodeError(int error) {
  switch (error) {
    case -3:
      return OpusResult_InternalError;
    case -5:
      return OpusResult_UnsupportedFormat;
    default:
      return OpusResult_BrokenData;
  }
}

}

size_t GetOpusDecoderWorkBufferSizeImpl(int channelCount) {
  return nncodecLibopus_opus_decoder_get_size(channelCount);
}

OpusResult InitializeOpusDecoderImpl(OpusDecoderType* decoder, int sampleRate,
  int channelCount, void* workBuffer, size_t workBufferSize) {
  OpusDecoder* handle = static_cast<OpusDecoder*>(workBuffer);
  if (nncodecLibopus_opus_decoder_init(handle, sampleRate, channelCount)
    != 0) {
    return OpusResult_DecoderInitializationFailure;
  }

  decoder->handle = handle;
  decoder->workBuffer = workBuffer;
  decoder->workBufferSize = workBufferSize;
  decoder->sampleRate = sampleRate;
  decoder->channelCount = channelCount;
  return OpusResult_Success;
}

void FinalizeOpusDecoderImpl(OpusDecoderType* decoder) {
  decoder->handle = nullptr;
  decoder->workBuffer = nullptr;
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
}

int GetOpusDecoderSampleRateImpl(const OpusDecoderType* decoder) {
  return decoder->sampleRate;
}

int GetOpusDecoderChannelCountImpl(const OpusDecoderType* decoder) {
  return decoder->channelCount;
}

OpusResult DecodeOpusInterleavedImpl(OpusDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* output, size_t outputSize,
  const void* input, size_t inputSize) {
  if (inputSize < sizeof(OpusPacketHeader)) {
    return OpusResult_InsufficientOpusBuffer;
  }

  const uint8_t* packet = static_cast<const uint8_t*>(input);
  OpusPacketHeader header = {};
  GetOpusPacketHeader(&header, packet);
  const size_t packetSize = header.packetSize + sizeof(OpusPacketHeader);
  if (inputSize < packetSize) {
    return OpusResult_InsufficientOpusBuffer;
  }

  int packetSampleCount = 0;
  const OpusResult result = GetOpusPacketSampleCountInPacket(
    &packetSampleCount, packet, inputSize, decoder->sampleRate);
  if (result != OpusResult_Success) {
    return result;
  }

  if (outputSize < decoder->channelCount * packetSampleCount
    * sizeof(int16_t)) {
    return OpusResult_InsufficientPcmBuffer;
  }

  OpusDecoder* handle = static_cast<OpusDecoder*>(decoder->handle);
  if (decoder->isResetRequested) {
    decoder->isResetRequested = false;
    if (nncodecLibopus_opus_decoder_ctl(handle, OpusResetState) < 0) {
      return OpusResult_BrokenData;
    }
  }

  const int decoded = nncodecLibopus_opus_decode(
    static_cast<OpusDecoder*>(decoder->handle),
    packet + sizeof(OpusPacketHeader), header.packetSize, output,
    static_cast<int>(outputSize / sizeof(int16_t)) / decoder->channelCount,
    0);
  if (decoded < 0) {
    return ConvertDecodeError(decoded);
  }

  *consumedSize = packetSize;
  *sampleCount = decoded;
  return OpusResult_Success;
}

void ResetOpusDecoderImpl(OpusDecoderType* decoder) {
  decoder->isResetRequested = true;
}

}
