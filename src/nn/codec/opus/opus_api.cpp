#include "nn/codec/opus_impl.hpp"

namespace nn::codec {
namespace {

inline bool IsValidSampleRate(int sampleRate) {
  switch (sampleRate) {
    case 8000:
    case 12000:
    case 16000:
    case 24000:
    case 48000:
      return true;
    default:
      return false;
  }
}

inline bool IsValidChannelCount(int channelCount) {
  return channelCount == 1 || channelCount == 2;
}

}

int GetOpusBitRateMin(int channelCount) {
  return 6000;
}

int GetOpusBitRateMax(int channelCount) {
  return channelCount == 1 ? 300000 : 510000;
}

size_t GetOpusDecoderWorkBufferSize(int sampleRate, int channelCount) {
  return opus::GetOpusDecoderWorkBufferSizeImpl(channelCount);
}

OpusResult InitializeOpusDecoder(OpusDecoderType* decoder, int sampleRate,
  int channelCount, void* workBuffer, size_t workBufferSize) {
  return opus::InitializeOpusDecoderImpl(decoder, sampleRate, channelCount,
    workBuffer, workBufferSize);
}

void FinalizeOpusDecoder(OpusDecoderType* decoder) {
  opus::FinalizeOpusDecoderImpl(decoder);
}

int GetOpusDecoderSampleRate(const OpusDecoderType* decoder) {
  return opus::GetOpusDecoderSampleRateImpl(decoder);
}

int GetOpusDecoderChannelCount(const OpusDecoderType* decoder) {
  return opus::GetOpusDecoderChannelCountImpl(decoder);
}

OpusResult DecodeOpusInterleaved(OpusDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* output, size_t outputSize,
  const void* input, size_t inputSize) {
  return opus::DecodeOpusInterleavedImpl(decoder, consumedSize, sampleCount,
    output, outputSize, input, inputSize);
}

void ResetOpusDecoder(OpusDecoderType* decoder) {
  opus::ResetOpusDecoderImpl(decoder);
}

size_t GetOpusEncoderWorkBufferSize(int sampleRate, int channelCount) {
  return opus::GetOpusEncoderWorkBufferSizeImpl(channelCount);
}

OpusResult InitializeOpusEncoder(OpusEncoderType* encoder, int sampleRate,
  int channelCount, OpusApplication application, void* workBuffer,
  size_t workBufferSize) {
  if (!IsValidSampleRate(sampleRate)) {
    return OpusResult_InvalidSampleRate;
  }
  if (!IsValidChannelCount(channelCount)) {
    return OpusResult_InvalidChannelCount;
  }
  if (workBufferSize < opus::GetOpusEncoderWorkBufferSizeImpl(channelCount)) {
    return OpusResult_InvalidWorkBuffer;
  }

  return opus::InitializeOpusEncoderImpl(encoder, sampleRate, channelCount,
    application, workBuffer, workBufferSize);
}

OpusResult InitializeOpusEncoder(OpusEncoderType* encoder, int sampleRate,
  int channelCount, void* workBuffer, size_t workBufferSize) {
  if (!IsValidSampleRate(sampleRate)) {
    return OpusResult_InvalidSampleRate;
  }
  if (!IsValidChannelCount(channelCount)) {
    return OpusResult_InvalidChannelCount;
  }
  if (workBufferSize < opus::GetOpusEncoderWorkBufferSizeImpl(channelCount)) {
    return OpusResult_InvalidWorkBuffer;
  }

  return opus::InitializeOpusEncoderImpl(encoder, sampleRate, channelCount,
    OpusApplication_RestrictedLowDelay, workBuffer, workBufferSize);
}

void FinalizeOpusEncoder(OpusEncoderType* encoder) {
  opus::FinalizeOpusEncoderImpl(encoder);
}

void ResetOpusEncoder(OpusEncoderType* encoder) {
  opus::ResetOpusEncoderImpl(encoder);
}

int GetOpusEncoderSampleRate(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderSampleRateImpl(encoder);
}

int GetOpusEncoderChannelCount(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderChannelCountImpl(encoder);
}

OpusResult EncodeOpusInterleaved(OpusEncoderType* encoder, size_t* outputSize,
  void* output, size_t outputBufferSize, const int16_t* input,
  int sampleCount) {
  const int sampleRate = opus::GetOpusEncoderSampleRateImpl(encoder);
  // The CELT only mode accepts 10 ms and 20 ms frames.
  if (opus::GetOpusEncoderCodingModeImpl(encoder) == OpusCodingMode_Celt
    && sampleCount * 100 != sampleRate && sampleCount * 50 != sampleRate) {
    return OpusResult_InvalidSampleCount;
  }

  return opus::EncodeOpusInterleavedImpl(encoder, outputSize, output,
    outputBufferSize, input, sampleCount);
}

OpusCodingMode GetOpusEncoderCodingMode(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderCodingModeImpl(encoder);
}

void SetOpusEncoderBitRate(OpusEncoderType* encoder, int bitRate) {
  opus::SetOpusEncoderBitRateImpl(encoder, bitRate);
}

int GetOpusEncoderBitRate(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderBitRateImpl(encoder);
}

void SetOpusEncoderBitRateControl(OpusEncoderType* encoder,
  OpusBitRateControl bitRateControl) {
  opus::SetOpusEncoderBitRateControlImpl(encoder, bitRateControl);
}

OpusBitRateControl GetOpusEncoderBitRateControl(
  const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderBitRateControlImpl(encoder);
}

int GetOpusEncoderPreSkipSampleCount(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderPreSkipSampleCountImpl(encoder);
}

void SetOpusEncoderWaveformType(OpusEncoderType* encoder,
  OpusWaveformType waveformType) {
  opus::SetOpusEncoderWaveformTypeImpl(encoder, waveformType);
}

OpusWaveformType GetOpusEncoderWaveformType(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderWaveformTypeImpl(encoder);
}

void BindOpusEncoderCodingMode(OpusEncoderType* encoder,
  OpusCodingMode codingMode) {
  opus::BindOpusEncoderCodingModeImpl(encoder, codingMode);
}

int CalculateOpusEncoderFrameSampleCount(const OpusEncoderType* encoder,
  int frame) {
  return opus::CalculateOpusEncoderFrameSampleCountImpl(encoder, frame);
}

void SetOpusEncoderComplexity(OpusEncoderType* encoder, int complexity) {
  opus::SetOpusEncoderComplexityImpl(encoder, complexity);
}

int GetOpusEncoderComplexity(const OpusEncoderType* encoder) {
  return opus::GetOpusEncoderComplexityImpl(encoder);
}

size_t GetOpusMultiStreamDecoderWorkBufferSize(int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount) {
  return opus::GetOpusMultiStreamDecoderWorkBufferSizeImpl(totalStreamCount,
    stereoStreamCount);
}

OpusResult InitializeOpusMultiStreamDecoder(
  OpusMultiStreamDecoderType* decoder, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, const uint8_t* channelMapping,
  void* workBuffer, size_t workBufferSize) {
  const int streamCount = totalStreamCount + stereoStreamCount;
  if (streamCount > 255) {
    return OpusResult_InvalidStreamParameter;
  }

  // A mapping of 255 marks a silent output channel.
  for (int i = 0; i < channelCount; ++i) {
    if (channelMapping[i] != 255 && channelMapping[i] >= streamCount) {
      return OpusResult_InvalidStreamParameter;
    }
  }

  return opus::InitializeOpusMultiStreamDecoderImpl(decoder, sampleRate,
    channelCount, totalStreamCount, stereoStreamCount, channelMapping,
    workBuffer, workBufferSize);
}

void FinalizeOpusMultiStreamDecoder(OpusMultiStreamDecoderType* decoder) {
  opus::FinalizeOpusMultiStreamDecoderImpl(decoder);
}

int GetOpusMultiStreamDecoderSampleRate(
  const OpusMultiStreamDecoderType* decoder) {
  return opus::GetOpusMultiStreamDecoderSampleRateImpl(decoder);
}

int GetOpusMultiStreamDecoderChannelCount(
  const OpusMultiStreamDecoderType* decoder) {
  return opus::GetOpusMultiStreamDecoderChannelCountImpl(decoder);
}

int GetOpusMultiStreamDecoderTotalStreamCount(
  const OpusMultiStreamDecoderType* decoder) {
  return opus::GetOpusMultiStreamDecoderTotalStreamCountImpl(decoder);
}

int GetOpusMultiStreamDecoderStereoStreamCount(
  const OpusMultiStreamDecoderType* decoder) {
  return opus::GetOpusMultiStreamDecoderStereoStreamCountImpl(decoder);
}

OpusResult DecodeOpusMultiStreamInterleaved(
  OpusMultiStreamDecoderType* decoder, size_t* consumedSize, int* sampleCount,
  int16_t* output, size_t outputSize, const void* input, size_t inputSize) {
  return opus::DecodeOpusMultiStreamInterleavedImpl(decoder, consumedSize,
    sampleCount, output, outputSize, input, inputSize);
}

void ResetOpusMultiStreamDecoder(OpusMultiStreamDecoderType* decoder) {
  decoder->isResetRequested = true;
}

size_t GetOpusPacketSize(const uint8_t* packet, size_t size) {
  return opus::GetOpusPacketSizeImpl(packet, size);
}

OpusResult GetOpusPacketSampleCountPerFrame(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate) {
  return opus::GetOpusPacketSampleCountPerFrameImpl(sampleCount, packet, size,
    sampleRate);
}

OpusResult GetOpusPacketChannelCount(int* channelCount, const uint8_t* packet,
  size_t size) {
  return opus::GetOpusPacketChannelCountImpl(channelCount, packet, size);
}

OpusResult GetOpusPacketSampleCountInPacket(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate) {
  return opus::GetOpusPacketSampleCountInPacketImpl(sampleCount, packet, size,
    sampleRate);
}

OpusResult GetOpusPacketFrameCount(int* frameCount, const uint8_t* packet,
  size_t size) {
  return opus::GetOpusPacketFrameCountImpl(frameCount, packet, size);
}

int CalculateOpusFrameSampleCount(int frame, int sampleRate) {
  return frame * sampleRate / 1000000;
}

}
