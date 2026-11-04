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

size_t GetOpusMultiStreamDecoderWorkBufferSizeImpl(int totalStreamCount,
  int stereoStreamCount) {
  return nncodecLibopus_opus_multistream_decoder_get_size(totalStreamCount,
    stereoStreamCount);
}

OpusResult InitializeOpusMultiStreamDecoderImpl(
  OpusMultiStreamDecoderType* decoder, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, const uint8_t* channelMapping,
  void* workBuffer, size_t workBufferSize) {
  OpusMSDecoder* handle = static_cast<OpusMSDecoder*>(workBuffer);
  if (nncodecLibopus_opus_multistream_decoder_init(handle, sampleRate,
    channelCount, totalStreamCount, stereoStreamCount, channelMapping) != 0) {
    return OpusResult_DecoderInitializationFailure;
  }

  decoder->sampleRate = sampleRate;
  decoder->channelCount = channelCount;
  decoder->totalStreamCount = totalStreamCount;
  decoder->stereoStreamCount = stereoStreamCount;
  decoder->workBuffer = workBuffer;
  decoder->workBufferSize = workBufferSize;
  decoder->handle = handle;
  return OpusResult_Success;
}

void FinalizeOpusMultiStreamDecoderImpl(OpusMultiStreamDecoderType* decoder) {
  decoder->handle = nullptr;
  decoder->workBuffer = nullptr;
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
  decoder->totalStreamCount = 0;
  decoder->stereoStreamCount = 0;
}

int GetOpusMultiStreamDecoderSampleRateImpl(
  const OpusMultiStreamDecoderType* decoder) {
  return decoder->sampleRate;
}

int GetOpusMultiStreamDecoderChannelCountImpl(
  const OpusMultiStreamDecoderType* decoder) {
  return decoder->channelCount;
}

int GetOpusMultiStreamDecoderTotalStreamCountImpl(
  const OpusMultiStreamDecoderType* decoder) {
  return decoder->totalStreamCount;
}

int GetOpusMultiStreamDecoderStereoStreamCountImpl(
  const OpusMultiStreamDecoderType* decoder) {
  return decoder->stereoStreamCount;
}

OpusResult DecodeOpusMultiStreamInterleavedImpl(
  OpusMultiStreamDecoderType* decoder, size_t* consumedSize, int* sampleCount,
  int16_t* output, size_t outputSize, const void* input, size_t inputSize) {
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

  const int sampleRate = decoder->sampleRate;
  const int channelCount = decoder->channelCount;
  int packetSampleCount = 0;
  const OpusResult result = GetOpusPacketSampleCountInPacket(
    &packetSampleCount, packet, inputSize, sampleRate);
  if (result != OpusResult_Success) {
    return result;
  }

  if (outputSize < packetSampleCount * channelCount * sizeof(int16_t)) {
    return OpusResult_InsufficientPcmBuffer;
  }

  if (decoder->isResetRequested) {
    decoder->isResetRequested = false;
    if (nncodecLibopus_opus_multistream_decoder_ctl(
      static_cast<OpusMSDecoder*>(decoder->handle), OpusResetState) < 0) {
      return OpusResult_BrokenData;
    }
  }

  const int decoded = nncodecLibopus_opus_multistream_decode(
    static_cast<OpusMSDecoder*>(decoder->handle),
    packet + sizeof(OpusPacketHeader), header.packetSize, output,
    static_cast<int>(outputSize / sizeof(int16_t)) / channelCount, 0);
  if (decoded < 0) {
    return ConvertDecodeError(decoded);
  }

  *consumedSize = packetSize;
  *sampleCount = decoded;
  return OpusResult_Success;
}

void ResetOpusMultiStreamDecoderImpl(OpusMultiStreamDecoderType* decoder) {
  decoder->isResetRequested = true;
}

}
