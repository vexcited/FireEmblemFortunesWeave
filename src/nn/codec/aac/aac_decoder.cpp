#include "nn/codec/aac.hpp"
#include "nn/codec/aac_fdk.hpp"
#include "nn/codec/aac_memory_allocator.hpp"
#include "nn/os/mutex.hpp"

namespace nn::codec {

namespace detail {

extern os::MutexType g_AacMutex;

AacDecoderResult ConvertAacDecoderError(AAC_DECODER_ERROR error);

}

namespace {

// Decoders initialized for any object type report HE-AAC v2.
constexpr int32_t ObjectTypeAny = 10000;

constexpr int ChannelCountMax = 6;
constexpr int ChannelCount71 = 8;

bool IsSupportedSampleRate(int sampleRate) {
  switch (sampleRate) {
    case 7350:
    case 8000:
    case 11025:
    case 12000:
    case 16000:
    case 22050:
    case 24000:
    case 32000:
    case 44100:
    case 48000:
    case 64000:
    case 88200:
    case 96000:
      return true;
    default:
      return false;
  }
}

}

size_t GetAacDecoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  return detail::GetAacDecoderWorkBufferSizeImpl(sampleRate, channelCount,
    type);
}

int GetAacDecoderSampleRate(const AacDecoderType* decoder) {
  return decoder->sampleRate;
}

int GetAacDecoderChannelCount(const AacDecoderType* decoder) {
  return decoder->channelCount;
}

Mpeg4AudioObjectType GetAacDecoderMpeg4AudioObjectType(
  const AacDecoderType* decoder) {
  if (decoder->objectType == ObjectTypeAny) {
    return Mpeg4AudioObjectType_Ps;
  }
  return static_cast<Mpeg4AudioObjectType>(decoder->objectType);
}

bool IsSupportedDownMix(int channelCount) {
  return channelCount == 6;
}

AacDecoderResult InitializeAacDecoder(AacDecoderType* decoder, int sampleRate,
  int channelCount, Mpeg4AudioObjectType type, void* buffer, size_t size) {
  if (!IsSupportedSampleRate(sampleRate)) {
    return AacDecoderResult_UnsupportedSampleRate;
  }

  const int channelCountMin = type == Mpeg4AudioObjectType_Ps ? 2 : 1;
  if (channelCount != ChannelCount71 &&
    (channelCount < channelCountMin || channelCount > ChannelCountMax)) {
    return AacDecoderResult_UnsupportedChannelConfig;
  }

  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      break;
    case Mpeg4AudioObjectType_Sbr:
    case Mpeg4AudioObjectType_Ps:
      if (sampleRate < 16000) {
        return AacDecoderResult_UnsupportedSampleRate;
      }
      break;
    default:
      return AacDecoderResult_UnsupportedAudioObjectType;
  }

  os::LockMutex(&detail::g_AacMutex);
  decoder->heapState = {};
  InitializeAacMemoryAllocator(buffer, size, {});

  AAC_DECODER_INSTANCE* handle = aacDecoder_Open(TT_MP4_ADIF, 1);
  uint8_t config[4];
  uint8_t* configs[] = {config};
  unsigned int configSize = 0;
  detail::GetAudioSpecificConfig(config, sizeof(config), &configSize,
    sampleRate, channelCount, type, false);

  AacDecoderResult result;
  if (aacDecoder_ConfigRaw(handle, configs, &configSize) != AAC_DEC_OK) {
    result = AacDecoderResult_UnsupportedFormat;
  }
  else {
    pcmDmx_SetParam(handle->hPcmUtils, MAX_NUMBER_OF_OUTPUT_CHANNELS,
      channelCount);
    result = AacDecoderResult_Success;
    decoder->workBufferSize = size;
    decoder->sampleRate = sampleRate;
    decoder->channelCount = channelCount;
    decoder->objectType = type;
    decoder->handle = handle;
    decoder->workBuffer = buffer;
  }

  const lmem::FrameHeapState state = FinalizeAacMemoryAllocator();
  if (type == Mpeg4AudioObjectType_Ps || type == Mpeg4AudioObjectType_Sbr) {
    decoder->heapState = state;
  }
  os::UnlockMutex(&detail::g_AacMutex);
  return result;
}

AacDecoderResult InitializeAacDecoderForAnyType(AacDecoderType* decoder,
  int sampleRate, int channelCount, void* buffer, size_t size) {
  if (!IsSupportedSampleRate(sampleRate)) {
    return AacDecoderResult_UnsupportedSampleRate;
  }

  if (channelCount != ChannelCount71 &&
    (channelCount < 1 || channelCount > ChannelCountMax)) {
    return AacDecoderResult_UnsupportedChannelConfig;
  }

  os::LockMutex(&detail::g_AacMutex);
  decoder->heapState = {};
  InitializeAacMemoryAllocator(buffer, size, {});

  AAC_DECODER_INSTANCE* handle = aacDecoder_Open(TT_MP4_ADIF, 1);
  uint8_t config[4];
  uint8_t* configs[] = {config};
  unsigned int configSize = 0;
  detail::GetAudioSpecificConfig(config, sizeof(config), &configSize,
    sampleRate, channelCount, Mpeg4AudioObjectType_Ps, true);

  AacDecoderResult result;
  if (aacDecoder_ConfigRaw(handle, configs, &configSize) != AAC_DEC_OK) {
    result = AacDecoderResult_UnsupportedFormat;
  }
  else {
    result = AacDecoderResult_Success;
    decoder->workBufferSize = size;
    decoder->sampleRate = sampleRate;
    decoder->channelCount = channelCount;
    decoder->handle = handle;
    decoder->workBuffer = buffer;
    decoder->objectType = ObjectTypeAny;
  }

  decoder->heapState = FinalizeAacMemoryAllocator();
  os::UnlockMutex(&detail::g_AacMutex);
  return result;
}

AacDecoderResult InitializeAacDecoderForAnyTypeWithDownmix(
  AacDecoderType* decoder, int sampleRate, int channelCount, void* buffer,
  size_t size) {
  const AacDecoderResult result = InitializeAacDecoderForAnyType(decoder,
    sampleRate, channelCount, buffer, size);
  if (result != AacDecoderResult_Success) {
    return result;
  }

  os::LockMutex(&detail::g_AacMutex);
  pcmDmx_SetParam(static_cast<AAC_DECODER_INSTANCE*>(decoder->handle)->
    hPcmUtils, MAX_NUMBER_OF_OUTPUT_CHANNELS, 2);
  decoder->channelCount = 2;
  os::UnlockMutex(&detail::g_AacMutex);
  return result;
}

AacDecoderResult DecodeAacInterleaved(AacDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* outputBuffer,
  size_t outputSize, const void* inputBuffer, size_t inputSize) {
  AAC_DECODER_INSTANCE* handle =
    static_cast<AAC_DECODER_INSTANCE*>(decoder->handle);

  // Spectral band replication allocates while decoding, so the heap state of
  // the work buffer is restored around each frame.
  const bool usesHeap = (decoder->objectType == Mpeg4AudioObjectType_Sbr ||
    decoder->objectType == ObjectTypeAny ||
    decoder->objectType == Mpeg4AudioObjectType_Ps) && !handle->sbrEnabled;
  if (usesHeap) {
    os::LockMutex(&detail::g_AacMutex);
    InitializeAacMemoryAllocator(decoder->workBuffer, decoder->workBufferSize,
      decoder->heapState);
  }

  AacDecoderResult result;
  uint8_t* buffer = static_cast<uint8_t*>(const_cast<void*>(inputBuffer));
  unsigned int size = static_cast<unsigned int>(inputSize);
  if (aacDecoder_Fill(handle, &buffer, &size, &size) != AAC_DEC_OK) {
    aacDecoder_SetParam(handle, AAC_TPDEC_CLEAR_BUFFER, 0);
    result = AacDecoderResult_Unknown;
  }
  else {
    unsigned int freeBytesBefore = 0;
    aacDecoder_GetFreeBytes(handle, &freeBytesBefore);
    const AAC_DECODER_ERROR error = aacDecoder_DecodeFrame(handle,
      outputBuffer, static_cast<int>(outputSize / sizeof(int16_t)), 0);
    if (error != AAC_DEC_OK) {
      aacDecoder_SetParam(handle, AAC_TPDEC_CLEAR_BUFFER, 0);
      result = detail::ConvertAacDecoderError(error);
    }
    else {
      if (usesHeap && decoder->objectType == ObjectTypeAny &&
        handle->sbrEnabled) {
        if (aacDecoder_GetStreamInfo(handle)->numChannels == 2 &&
          decoder->channelCount == 1) {
          decoder->channelCount = 2;
        }
        decoder->sampleRate = handle->streamInfo.sampleRate;
      }

      unsigned int freeBytesAfter = 0;
      aacDecoder_GetFreeBytes(handle, &freeBytesAfter);
      aacDecoder_SetParam(handle, AAC_TPDEC_CLEAR_BUFFER, 0);
      if (consumedSize != nullptr) {
        *consumedSize = freeBytesAfter - freeBytesBefore;
      }
      if (sampleCount != nullptr) {
        *sampleCount = aacDecoder_GetStreamInfo(handle)->frameSize;
      }
      result = AacDecoderResult_Success;
    }
  }

  if (usesHeap) {
    FinalizeAacMemoryAllocator();
    os::UnlockMutex(&detail::g_AacMutex);
  }
  return result;
}

void FinalizeAacDecoder(AacDecoderType* decoder) {
  aacDecoder_Close(static_cast<AAC_DECODER_INSTANCE*>(decoder->handle));
  decoder->handle = nullptr;
  decoder->workBuffer = nullptr;
  decoder->heapState = {};
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
  decoder->objectType = -1;
}

AacDecoder::AacDecoder() : m_Decoder() {}

AacDecoder::~AacDecoder() {}

AacDecoderResult AacDecoder::Initialize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type, void* buffer, size_t size) {
  return InitializeAacDecoder(&m_Decoder, sampleRate, channelCount, type,
    buffer, size);
}

}
