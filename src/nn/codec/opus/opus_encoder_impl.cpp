#include "nn/codec/opus_impl.hpp"

namespace nn::codec::opus {
namespace {

constexpr int OpusResetState = 4028;
constexpr int OpusGetSignal = 4025;
constexpr int OpusGetForceMode = 11003;
constexpr int OpusAuto = -1000;

class ScopedLock {
public:
  explicit ScopedLock(os::MutexType* mutex) : m_mutex(mutex) {
    os::LockMutex(m_mutex);
  }

  ~ScopedLock() { os::UnlockMutex(m_mutex); }

private:
  os::MutexType* m_mutex;
};

inline OpusEncoder* GetHandle(const OpusEncoderType* encoder) {
  return static_cast<OpusEncoder*>(encoder->handle);
}

}

size_t GetOpusEncoderWorkBufferSizeImpl(int channelCount) {
  return nncodecLibopus_opus_encoder_get_size(channelCount);
}

OpusResult InitializeOpusEncoderImpl(OpusEncoderType* encoder, int sampleRate,
  int channelCount, OpusApplication application, void* workBuffer,
  size_t workBufferSize) {
  OpusEncoder* handle = static_cast<OpusEncoder*>(workBuffer);
  if (nncodecLibopus_opus_encoder_init(handle, sampleRate, channelCount,
    util::GetOpusApplicationValue(application)) != 0) {
    return OpusResult_InternalError;
  }

  encoder->handle = handle;
  encoder->workBuffer = workBuffer;
  encoder->workBufferSize = workBufferSize;
  encoder->sampleRate = sampleRate;
  encoder->channelCount = channelCount;

  encoder->bitRate = util::GetBitRateInternal(handle);
  util::SetBitRateInternal(handle, encoder->bitRate, encoder->channelCount);
  encoder->bitRateControl = OpusBitRateControl_Vbr;
  util::SetBitRateControlInternal(handle, OpusBitRateControl_Vbr);
  encoder->complexity = 10;
  util::SetComplexityInternal(handle, 10);
  util::SetLsbDepthInternal(handle, 16);
  util::SetFrameSizeTypeInternal(handle, OpusFrameSize_Argument);
  util::VerifyOpusEncoderControlValue(handle, OpusGetForceMode, OpusAuto);
  util::VerifyOpusEncoderControlValue(handle, OpusGetSignal, OpusAuto);
  encoder->codingMode = OpusCodingMode_Auto;
  encoder->waveformType = OpusWaveformType_Auto;

  os::InitializeMutex(&encoder->mutex, false, 0);
  return OpusResult_Success;
}

void FinalizeOpusEncoderImpl(OpusEncoderType* encoder) {
  {
    ScopedLock lock(&encoder->mutex);
    encoder->handle = nullptr;
    encoder->workBuffer = nullptr;
    encoder->workBufferSize = 0;
    encoder->sampleRate = 0;
    encoder->channelCount = 0;
  }
  os::FinalizeMutex(&encoder->mutex);
}

void ResetOpusEncoderImpl(OpusEncoderType* encoder) {
  ScopedLock lock(&encoder->mutex);
  nncodecLibopus_opus_encoder_ctl(GetHandle(encoder), OpusResetState);
}

int GetOpusEncoderSampleRateImpl(const OpusEncoderType* encoder) {
  return encoder->sampleRate;
}

int GetOpusEncoderChannelCountImpl(const OpusEncoderType* encoder) {
  return encoder->channelCount;
}

OpusResult EncodeOpusInterleavedImpl(OpusEncoderType* encoder,
  size_t* outputSize, void* output, size_t outputBufferSize,
  const int16_t* input, int sampleCount) {
  uint8_t* data = static_cast<uint8_t*>(output);
  int encoded;
  {
    ScopedLock lock(&encoder->mutex);
    // The whole buffer size is passed although the header takes 8 bytes.
    encoded = nncodecLibopus_opus_encode(GetHandle(encoder), input,
      sampleCount, data + sizeof(OpusPacketHeader), outputBufferSize);
  }

  if (encoded < 0) {
    return encoded == -2 ? OpusResult_InsufficientOpusBuffer
                         : OpusResult_InternalError;
  }

  const OpusPacketHeader header = {
    static_cast<uint32_t>(encoded),
    static_cast<uint32_t>(util::GetFinalRangeInternal(GetHandle(encoder))),
  };
  SetOpusPacketHeader(data, header);
  *outputSize = encoded + sizeof(OpusPacketHeader);
  return OpusResult_Success;
}

void SetOpusEncoderBitRateImpl(OpusEncoderType* encoder, int bitRate) {
  if (encoder->bitRate == bitRate) {
    return;
  }

  ScopedLock lock(&encoder->mutex);
  util::SetBitRateInternal(GetHandle(encoder), bitRate,
    encoder->channelCount);
  encoder->bitRate = bitRate;
}

int GetOpusEncoderBitRateImpl(const OpusEncoderType* encoder) {
  return encoder->bitRate;
}

void SetOpusEncoderBitRateControlImpl(OpusEncoderType* encoder,
  OpusBitRateControl bitRateControl) {
  if (encoder->bitRateControl == bitRateControl) {
    return;
  }

  ScopedLock lock(&encoder->mutex);
  util::SetBitRateControlInternal(GetHandle(encoder), bitRateControl);
  encoder->bitRateControl = bitRateControl;
}

OpusBitRateControl GetOpusEncoderBitRateControlImpl(
  const OpusEncoderType* encoder) {
  return encoder->bitRateControl;
}

int GetOpusEncoderPreSkipSampleCountImpl(const OpusEncoderType* encoder) {
  return util::GetLookAheadInternal(GetHandle(encoder));
}

void SetOpusEncoderWaveformTypeImpl(OpusEncoderType* encoder,
  OpusWaveformType waveformType) {
  if (encoder->waveformType == waveformType) {
    return;
  }

  ScopedLock lock(&encoder->mutex);
  util::SetSignalInternal(GetHandle(encoder), waveformType);
  encoder->waveformType = waveformType;
}

OpusWaveformType GetOpusEncoderWaveformTypeImpl(
  const OpusEncoderType* encoder) {
  return encoder->waveformType;
}

void BindOpusEncoderCodingModeImpl(OpusEncoderType* encoder,
  OpusCodingMode codingMode) {
  if (encoder->codingMode == codingMode) {
    return;
  }

  ScopedLock lock(&encoder->mutex);
  OpusEncoder* handle = GetHandle(encoder);
  if (codingMode == OpusCodingMode_Celt) {
    util::SetForceModeInternal(handle, OpusCodingMode_Celt);
    util::SetBandwidthInternal(handle, OpusBandwidth_WideBand);
    util::SetApplicationInternal(handle, OpusApplication_Voip);
  }
  else {
    util::SetForceModeInternal(handle, OpusCodingMode_Auto);
    util::SetBandwidthInternal(handle, OpusBandwidth_Auto);
    util::SetApplicationInternal(handle,
      OpusApplication_RestrictedLowDelay);
  }
  encoder->codingMode = codingMode;
}

OpusCodingMode GetOpusEncoderCodingModeImpl(const OpusEncoderType* encoder) {
  return encoder->codingMode;
}

int CalculateOpusEncoderFrameSampleCountImpl(const OpusEncoderType* encoder,
  int frame) {
  return CalculateOpusFrameSampleCount(frame, encoder->sampleRate);
}

void SetOpusEncoderComplexityImpl(OpusEncoderType* encoder, int complexity) {
  OpusEncoder* handle = GetHandle(encoder);
  ScopedLock lock(&encoder->mutex);
  util::SetComplexityInternal(handle, complexity);
  encoder->complexity = complexity;
}

int GetOpusEncoderComplexityImpl(const OpusEncoderType* encoder) {
  return encoder->complexity;
}

}
