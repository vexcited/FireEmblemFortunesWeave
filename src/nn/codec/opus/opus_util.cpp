#include <stdarg.h>

#include "nn/codec/opus_impl.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::codec::opus::util {
namespace {

constexpr int OpusSetApplication = 4000;
constexpr int OpusSetBitRate = 4002;
constexpr int OpusGetBitRate = 4003;
constexpr int OpusSetVbr = 4006;
constexpr int OpusSetBandwidth = 4008;
constexpr int OpusSetComplexity = 4010;
constexpr int OpusSetVbrConstraint = 4020;
constexpr int OpusSetSignal = 4024;
constexpr int OpusGetLookAhead = 4027;
constexpr int OpusGetFinalRange = 4031;
constexpr int OpusSetLsbDepth = 4036;
constexpr int OpusSetExpertFrameDuration = 4040;
constexpr int OpusSetForceMode = 11002;

constexpr int OpusAuto = -1000;

int GetOpusSignalValue(OpusWaveformType waveformType) {
  switch (waveformType) {
    case OpusWaveformType_Auto:
      return OpusAuto;
    case OpusWaveformType_Music:
      return 3002;
    case OpusWaveformType_Voice:
      return 3001;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

int GetOpusApplicationValue(OpusApplication application) {
  switch (application) {
    case OpusApplication_Audio:
      return 2049;
    case OpusApplication_Voip:
      return 2048;
    case OpusApplication_RestrictedLowDelay:
      return 2051;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int GetOpusForceModeValue(OpusCodingMode codingMode) {
  switch (codingMode) {
    case OpusCodingMode_Auto:
      return OpusAuto;
    case OpusCodingMode_Silk:
      return 1002;
    case OpusCodingMode_Celt:
      return 1000;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int GetOpusBandwidthValue(OpusBandwidth bandwidth) {
  switch (bandwidth) {
    case OpusBandwidth_Auto:
      return OpusAuto;
    case OpusBandwidth_NarrowBand:
      return 1101;
    case OpusBandwidth_MediumBand:
      return 1102;
    case OpusBandwidth_WideBand:
      return 1103;
    case OpusBandwidth_SuperWideBand:
      return 1104;
    case OpusBandwidth_FullBand:
      return 1105;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int OpusEncoderControl(OpusEncoder* encoder, int request, ...) {
  va_list arguments;
  va_start(arguments, request);

  // Odd requests are getters taking a pointer to the result.
  int result;
  if ((request & 1) != 0) {
    result = nncodecLibopus_opus_encoder_ctl(encoder, request,
      va_arg(arguments, void*));
  }
  else {
    result = nncodecLibopus_opus_encoder_ctl(encoder, request,
      va_arg(arguments, int));
  }

  va_end(arguments);
  return result;
}

void VerifyOpusEncoderControlValue(OpusEncoder* encoder, int request,
  int expected) {
}

void SetBitRateInternal(OpusEncoder* encoder, int bitRate, int channelCount) {
  OpusEncoderControl(encoder, OpusSetBitRate, bitRate);
}

int GetBitRateInternal(OpusEncoder* encoder) {
  int bitRate = 0;
  OpusEncoderControl(encoder, OpusGetBitRate, &bitRate);
  return bitRate;
}

void SetBitRateControlInternal(OpusEncoder* encoder,
  OpusBitRateControl bitRateControl) {
  const int vbr = bitRateControl != OpusBitRateControl_Cbr ? 1 : 0;
  const int constraint = bitRateControl != OpusBitRateControl_Vbr ? 1 : 0;
  OpusEncoderControl(encoder, OpusSetVbr, vbr);
  OpusEncoderControl(encoder, OpusSetVbrConstraint, constraint);
}

void SetApplicationInternal(OpusEncoder* encoder,
  OpusApplication application) {
  OpusEncoderControl(encoder, OpusSetApplication,
    GetOpusApplicationValue(application));
}

void SetBandwidthInternal(OpusEncoder* encoder, OpusBandwidth bandwidth) {
  OpusEncoderControl(encoder, OpusSetBandwidth,
    GetOpusBandwidthValue(bandwidth));
}

void SetForceModeInternal(OpusEncoder* encoder, OpusCodingMode codingMode) {
  OpusEncoderControl(encoder, OpusSetForceMode,
    GetOpusForceModeValue(codingMode));
}

void SetSignalInternal(OpusEncoder* encoder, OpusWaveformType waveformType) {
  OpusEncoderControl(encoder, OpusSetSignal, GetOpusSignalValue(waveformType));
}

void SetComplexityInternal(OpusEncoder* encoder, int complexity) {
  OpusEncoderControl(encoder, OpusSetComplexity, complexity);
}

void SetLsbDepthInternal(OpusEncoder* encoder, int depth) {
  OpusEncoderControl(encoder, OpusSetLsbDepth, depth);
}

void SetFrameSizeTypeInternal(OpusEncoder* encoder, OpusFrameSize frameSize) {
  int value;
  switch (frameSize) {
    case OpusFrameSize_Argument:
      value = 5000;
      break;
    case OpusFrameSize_2_5Ms:
      value = 5001;
      break;
    case OpusFrameSize_5Ms:
      value = 5002;
      break;
    case OpusFrameSize_10Ms:
      value = 5003;
      break;
    case OpusFrameSize_20Ms:
      value = 5004;
      break;
    case OpusFrameSize_40Ms:
      value = 5005;
      break;
    case OpusFrameSize_60Ms:
      value = 5006;
      break;
    case OpusFrameSize_Variable:
      nn::diag::detail::AbortImpl();
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  OpusEncoderControl(encoder, OpusSetExpertFrameDuration, value);
}

int GetLookAheadInternal(OpusEncoder* encoder) {
  int lookAhead = 0;
  OpusEncoderControl(encoder, OpusGetLookAhead, &lookAhead);
  return lookAhead;
}

int GetFinalRangeInternal(OpusEncoder* encoder) {
  uint32_t finalRange = 0;
  OpusEncoderControl(encoder, OpusGetFinalRange, &finalRange);
  return finalRange;
}

}
