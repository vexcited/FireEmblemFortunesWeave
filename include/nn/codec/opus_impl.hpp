#pragma once

#include "nn/codec/opus.hpp"

struct OpusDecoder;
struct OpusEncoder;
struct OpusMSDecoder;

extern "C" {

int nncodecLibopus_opus_decoder_get_size(int channels);
int nncodecLibopus_opus_decoder_init(OpusDecoder* decoder, int32_t sampleRate,
  int channels);
int nncodecLibopus_opus_decode(OpusDecoder* decoder, const uint8_t* data,
  int32_t size, int16_t* pcm, int frameSize, int decodeFec);
int nncodecLibopus_opus_decoder_ctl(OpusDecoder* decoder, int request, ...);

int nncodecLibopus_opus_encoder_get_size(int channels);
int nncodecLibopus_opus_encoder_init(OpusEncoder* encoder, int32_t sampleRate,
  int channels, int application);
int32_t nncodecLibopus_opus_encode(OpusEncoder* encoder, const int16_t* pcm,
  int frameSize, uint8_t* data, int32_t maxDataBytes);
int nncodecLibopus_opus_encoder_ctl(OpusEncoder* encoder, int request, ...);

int32_t nncodecLibopus_opus_multistream_decoder_get_size(int streams,
  int coupledStreams);
int nncodecLibopus_opus_multistream_decoder_init(OpusMSDecoder* decoder,
  int32_t sampleRate, int channels, int streams, int coupledStreams,
  const uint8_t* mapping);
int nncodecLibopus_opus_multistream_decode(OpusMSDecoder* decoder,
  const uint8_t* data, int32_t size, int16_t* pcm, int frameSize,
  int decodeFec);
int nncodecLibopus_opus_multistream_decoder_ctl(OpusMSDecoder* decoder,
  int request, ...);

int nncodecLibopus_opus_packet_get_samples_per_frame(const uint8_t* data,
  int32_t sampleRate);
int nncodecLibopus_opus_packet_get_nb_channels(const uint8_t* data);
int nncodecLibopus_opus_packet_get_nb_frames(const uint8_t* packet,
  int32_t size);
int nncodecLibopus_opus_packet_get_nb_samples(const uint8_t* packet,
  int32_t size, int32_t sampleRate);

}

namespace nn::codec::opus {

struct OpusPacketHeader {
  uint32_t packetSize;
  uint32_t finalRange;
};

constexpr size_t OpusPacketSizeMax = 1500;

void SetOpusPacketHeader(uint8_t* data, const OpusPacketHeader& header);
void GetOpusPacketHeader(OpusPacketHeader* header, const uint8_t* data);

size_t GetOpusDecoderWorkBufferSizeImpl(int channelCount);
OpusResult InitializeOpusDecoderImpl(OpusDecoderType* decoder, int sampleRate,
  int channelCount, void* workBuffer, size_t workBufferSize);
void FinalizeOpusDecoderImpl(OpusDecoderType* decoder);
int GetOpusDecoderSampleRateImpl(const OpusDecoderType* decoder);
int GetOpusDecoderChannelCountImpl(const OpusDecoderType* decoder);
OpusResult DecodeOpusInterleavedImpl(OpusDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* output, size_t outputSize,
  const void* input, size_t inputSize);
void ResetOpusDecoderImpl(OpusDecoderType* decoder);

size_t GetOpusEncoderWorkBufferSizeImpl(int channelCount);
OpusResult InitializeOpusEncoderImpl(OpusEncoderType* encoder, int sampleRate,
  int channelCount, OpusApplication application, void* workBuffer,
  size_t workBufferSize);
void FinalizeOpusEncoderImpl(OpusEncoderType* encoder);
void ResetOpusEncoderImpl(OpusEncoderType* encoder);
int GetOpusEncoderSampleRateImpl(const OpusEncoderType* encoder);
int GetOpusEncoderChannelCountImpl(const OpusEncoderType* encoder);
OpusResult EncodeOpusInterleavedImpl(OpusEncoderType* encoder,
  size_t* outputSize, void* output, size_t outputBufferSize,
  const int16_t* input, int sampleCount);
void SetOpusEncoderBitRateImpl(OpusEncoderType* encoder, int bitRate);
int GetOpusEncoderBitRateImpl(const OpusEncoderType* encoder);
void SetOpusEncoderBitRateControlImpl(OpusEncoderType* encoder,
  OpusBitRateControl bitRateControl);
OpusBitRateControl GetOpusEncoderBitRateControlImpl(
  const OpusEncoderType* encoder);
int GetOpusEncoderPreSkipSampleCountImpl(const OpusEncoderType* encoder);
void SetOpusEncoderWaveformTypeImpl(OpusEncoderType* encoder,
  OpusWaveformType waveformType);
OpusWaveformType GetOpusEncoderWaveformTypeImpl(
  const OpusEncoderType* encoder);
void BindOpusEncoderCodingModeImpl(OpusEncoderType* encoder,
  OpusCodingMode codingMode);
OpusCodingMode GetOpusEncoderCodingModeImpl(const OpusEncoderType* encoder);
int CalculateOpusEncoderFrameSampleCountImpl(const OpusEncoderType* encoder,
  int frame);
void SetOpusEncoderComplexityImpl(OpusEncoderType* encoder, int complexity);
int GetOpusEncoderComplexityImpl(const OpusEncoderType* encoder);

size_t GetOpusMultiStreamDecoderWorkBufferSizeImpl(int totalStreamCount,
  int stereoStreamCount);
OpusResult InitializeOpusMultiStreamDecoderImpl(
  OpusMultiStreamDecoderType* decoder, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, const uint8_t* channelMapping,
  void* workBuffer, size_t workBufferSize);
void FinalizeOpusMultiStreamDecoderImpl(OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderSampleRateImpl(
  const OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderChannelCountImpl(
  const OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderTotalStreamCountImpl(
  const OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderStereoStreamCountImpl(
  const OpusMultiStreamDecoderType* decoder);
OpusResult DecodeOpusMultiStreamInterleavedImpl(
  OpusMultiStreamDecoderType* decoder, size_t* consumedSize, int* sampleCount,
  int16_t* output, size_t outputSize, const void* input, size_t inputSize);
void ResetOpusMultiStreamDecoderImpl(OpusMultiStreamDecoderType* decoder);

size_t GetOpusPacketSizeImpl(const uint8_t* packet, size_t size);
OpusResult GetOpusPacketSampleCountPerFrameImpl(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate);
OpusResult GetOpusPacketChannelCountImpl(int* channelCount,
  const uint8_t* packet, size_t size);
OpusResult GetOpusPacketSampleCountInPacketImpl(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate);
OpusResult GetOpusPacketFrameCountImpl(int* frameCount, const uint8_t* packet,
  size_t size);

}

namespace nn::codec::opus::util {

int GetOpusApplicationValue(OpusApplication application);
int GetOpusForceModeValue(OpusCodingMode codingMode);
int GetOpusBandwidthValue(OpusBandwidth bandwidth);
int OpusEncoderControl(OpusEncoder* encoder, int request, ...);
void VerifyOpusEncoderControlValue(OpusEncoder* encoder, int request,
  int expected);
void SetBitRateInternal(OpusEncoder* encoder, int bitRate, int channelCount);
int GetBitRateInternal(OpusEncoder* encoder);
void SetBitRateControlInternal(OpusEncoder* encoder,
  OpusBitRateControl bitRateControl);
void SetApplicationInternal(OpusEncoder* encoder,
  OpusApplication application);
void SetBandwidthInternal(OpusEncoder* encoder, OpusBandwidth bandwidth);
void SetForceModeInternal(OpusEncoder* encoder, OpusCodingMode codingMode);
void SetSignalInternal(OpusEncoder* encoder, OpusWaveformType waveformType);
void SetComplexityInternal(OpusEncoder* encoder, int complexity);
void SetLsbDepthInternal(OpusEncoder* encoder, int depth);
void SetFrameSizeTypeInternal(OpusEncoder* encoder, OpusFrameSize frameSize);
int GetLookAheadInternal(OpusEncoder* encoder);
int GetFinalRangeInternal(OpusEncoder* encoder);

}
