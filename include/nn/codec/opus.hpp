#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/mutex.hpp"

namespace nn::codec {

enum OpusResult {
  OpusResult_Success,
  OpusResult_InvalidSampleRate,
  OpusResult_InvalidChannelCount,
  OpusResult_InvalidWorkBuffer,
  OpusResult_BrokenData,
  OpusResult_UnsupportedFormat,
  OpusResult_InsufficientOpusBuffer,
  OpusResult_InsufficientPcmBuffer,
  OpusResult_DecoderInitializationFailure,
  OpusResult_InternalError,
  OpusResult_InvalidSampleCount,
  OpusResult_InvalidStreamParameter,
  OpusResult_OutOfDecoderResource = 13,
  OpusResult_OutOfIoBuffer,
};

enum OpusApplication {
  OpusApplication_Audio = 1,
  OpusApplication_Voip,
  OpusApplication_RestrictedLowDelay,
};

enum OpusBitRateControl {
  OpusBitRateControl_Vbr = 1,
  OpusBitRateControl_Cvbr,
  OpusBitRateControl_Cbr,
};

enum OpusWaveformType {
  OpusWaveformType_Auto = 1,
  OpusWaveformType_Music,
  OpusWaveformType_Voice,
};

enum OpusCodingMode {
  OpusCodingMode_Auto = 1,
  OpusCodingMode_Silk,
  OpusCodingMode_Celt,
};

enum OpusBandwidth {
  OpusBandwidth_Auto = 1,
  OpusBandwidth_NarrowBand,
  OpusBandwidth_MediumBand,
  OpusBandwidth_WideBand,
  OpusBandwidth_SuperWideBand,
  OpusBandwidth_FullBand,
};

enum OpusFrameSize {
  OpusFrameSize_Argument = 1,
  OpusFrameSize_2_5Ms,
  OpusFrameSize_5Ms,
  OpusFrameSize_10Ms,
  OpusFrameSize_20Ms,
  OpusFrameSize_40Ms,
  OpusFrameSize_60Ms,
  OpusFrameSize_Variable,
};

struct OpusDecoderType {
  void* handle;
  void* workBuffer;
  size_t workBufferSize;
  int32_t sampleRate;
  int32_t channelCount;
  bool isResetRequested;
};

struct OpusEncoderType {
  void* handle;
  void* workBuffer;
  size_t workBufferSize;
  int32_t sampleRate;
  int32_t channelCount;
  int32_t bitRate;
  int32_t complexity;
  OpusBitRateControl bitRateControl;
  OpusCodingMode codingMode;
  OpusWaveformType waveformType;
  os::MutexType mutex;
};

struct OpusMultiStreamDecoderType {
  void* handle;
  void* workBuffer;
  size_t workBufferSize;
  int32_t sampleRate;
  int32_t channelCount;
  int32_t totalStreamCount;
  int32_t stereoStreamCount;
  bool isResetRequested;
};

static_assert(sizeof(OpusDecoderType) == 40);
static_assert(offsetof(OpusEncoderType, mutex) == 56);
static_assert(sizeof(OpusMultiStreamDecoderType) == 48);

int GetOpusBitRateMin(int channelCount);
int GetOpusBitRateMax(int channelCount);

size_t GetOpusDecoderWorkBufferSize(int sampleRate, int channelCount);
OpusResult InitializeOpusDecoder(OpusDecoderType* decoder, int sampleRate,
  int channelCount, void* workBuffer, size_t workBufferSize);
void FinalizeOpusDecoder(OpusDecoderType* decoder);
int GetOpusDecoderSampleRate(const OpusDecoderType* decoder);
int GetOpusDecoderChannelCount(const OpusDecoderType* decoder);
OpusResult DecodeOpusInterleaved(OpusDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* output, size_t outputSize,
  const void* input, size_t inputSize);
void ResetOpusDecoder(OpusDecoderType* decoder);

size_t GetOpusEncoderWorkBufferSize(int sampleRate, int channelCount);
OpusResult InitializeOpusEncoder(OpusEncoderType* encoder, int sampleRate,
  int channelCount, OpusApplication application, void* workBuffer,
  size_t workBufferSize);
OpusResult InitializeOpusEncoder(OpusEncoderType* encoder, int sampleRate,
  int channelCount, void* workBuffer, size_t workBufferSize);
void FinalizeOpusEncoder(OpusEncoderType* encoder);
void ResetOpusEncoder(OpusEncoderType* encoder);
int GetOpusEncoderSampleRate(const OpusEncoderType* encoder);
int GetOpusEncoderChannelCount(const OpusEncoderType* encoder);
OpusResult EncodeOpusInterleaved(OpusEncoderType* encoder, size_t* outputSize,
  void* output, size_t outputBufferSize, const int16_t* input,
  int sampleCount);
OpusCodingMode GetOpusEncoderCodingMode(const OpusEncoderType* encoder);
void SetOpusEncoderBitRate(OpusEncoderType* encoder, int bitRate);
int GetOpusEncoderBitRate(const OpusEncoderType* encoder);
void SetOpusEncoderBitRateControl(OpusEncoderType* encoder,
  OpusBitRateControl bitRateControl);
OpusBitRateControl GetOpusEncoderBitRateControl(
  const OpusEncoderType* encoder);
int GetOpusEncoderPreSkipSampleCount(const OpusEncoderType* encoder);
void SetOpusEncoderWaveformType(OpusEncoderType* encoder,
  OpusWaveformType waveformType);
OpusWaveformType GetOpusEncoderWaveformType(const OpusEncoderType* encoder);
void BindOpusEncoderCodingMode(OpusEncoderType* encoder,
  OpusCodingMode codingMode);
int CalculateOpusEncoderFrameSampleCount(const OpusEncoderType* encoder,
  int frame);
void SetOpusEncoderComplexity(OpusEncoderType* encoder, int complexity);
int GetOpusEncoderComplexity(const OpusEncoderType* encoder);

size_t GetOpusMultiStreamDecoderWorkBufferSize(int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount);
OpusResult InitializeOpusMultiStreamDecoder(
  OpusMultiStreamDecoderType* decoder, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, const uint8_t* channelMapping,
  void* workBuffer, size_t workBufferSize);
void FinalizeOpusMultiStreamDecoder(OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderSampleRate(
  const OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderChannelCount(
  const OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderTotalStreamCount(
  const OpusMultiStreamDecoderType* decoder);
int GetOpusMultiStreamDecoderStereoStreamCount(
  const OpusMultiStreamDecoderType* decoder);
OpusResult DecodeOpusMultiStreamInterleaved(
  OpusMultiStreamDecoderType* decoder, size_t* consumedSize, int* sampleCount,
  int16_t* output, size_t outputSize, const void* input, size_t inputSize);
void ResetOpusMultiStreamDecoder(OpusMultiStreamDecoderType* decoder);

size_t GetOpusPacketSize(const uint8_t* packet, size_t size);
OpusResult GetOpusPacketSampleCountPerFrame(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate);
OpusResult GetOpusPacketChannelCount(int* channelCount, const uint8_t* packet,
  size_t size);
OpusResult GetOpusPacketSampleCountInPacket(int* sampleCount,
  const uint8_t* packet, size_t size, int sampleRate);
OpusResult GetOpusPacketFrameCount(int* frameCount, const uint8_t* packet,
  size_t size);
int CalculateOpusFrameSampleCount(int frame, int sampleRate);

}
