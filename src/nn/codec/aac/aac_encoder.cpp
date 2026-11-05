#include "nn/codec/aac.hpp"
#include "nn/codec/aac_fdk.hpp"
#include "nn/codec/aac_memory_allocator.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::codec {

namespace detail {

extern os::MutexType g_AacMutex;

}

namespace {

bool IsSupportedSampleRate(int sampleRate) {
  switch (sampleRate) {
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

unsigned int GetEncoderModules(Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return 1;
    case Mpeg4AudioObjectType_Sbr:
      return 3;
    case Mpeg4AudioObjectType_Ps:
      return 7;
    default:
      return 0;
  }
}

CHANNEL_MODE GetChannelMode(int channelCount) {
  switch (channelCount) {
    case 1:
      return MODE_1;
    case 2:
      return MODE_2;
    case 3:
      return MODE_1_2;
    case 4:
      return MODE_1_2_1;
    case 5:
      return MODE_1_2_2;
    case 6:
      return MODE_1_2_2_1;
    case 8:
      return MODE_1_2_2_2_1;
    default:
      return MODE_INVALID;
  }
}

AacEncoderResult ConvertResult(AACENC_ERROR error) {
  switch (error) {
    case AACENC_OK:
      return AacEncoderResult_Success;
    case AACENC_INVALID_HANDLE:
    case AACENC_MEMORY_ERROR:
    case AACENC_UNSUPPORTED_PARAMETER:
    case AACENC_INVALID_CONFIG:
    case AACENC_ENCODE_ERROR:
      return AacEncoderResult_EncodeError;
    case AACENC_INIT_ERROR:
    case AACENC_INIT_AAC_ERROR:
    case AACENC_INIT_SBR_ERROR:
    case AACENC_INIT_TP_ERROR:
    case AACENC_INIT_META_ERROR:
      return AacEncoderResult_InvalidParameter;
    case AACENC_ENCODE_EOF:
      return AacEncoderResult_EndOfStream;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

AACENC_ERROR Encode(AacEncoderType* encoder, AACENC_OutArgs* outArgs,
  void* outputBuffer, size_t outputBufferSize, const int16_t* inputBuffer,
  int inputSampleCount) {
  void* inputBuffers[] = {const_cast<int16_t*>(inputBuffer)};
  int inputIdentifiers[] = {IN_AUDIO_DATA};
  int inputSizes[] = {static_cast<int>(inputSampleCount * sizeof(int16_t))};
  int inputElementSizes[] = {sizeof(int16_t)};
  const AACENC_BufDesc inputDesc = {1, inputBuffers, inputIdentifiers,
    inputSizes, inputElementSizes};

  void* outputBuffers[] = {outputBuffer};
  int outputIdentifiers[] = {OUT_BITSTREAM_DATA};
  int outputSizes[] = {static_cast<int>(outputBufferSize)};
  int outputElementSizes[] = {1};
  const AACENC_BufDesc outputDesc = {1, outputBuffers, outputIdentifiers,
    outputSizes, outputElementSizes};

  const AACENC_InArgs inArgs = {inputSampleCount, 0};
  return aacEncEncode(static_cast<AACENCODER*>(encoder->handle), &inputDesc,
    &outputDesc, &inArgs, outArgs);
}

}

size_t GetAacEncoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  static const size_t AacLcSizes[] = {
    122384, 142944, 163504, 184064, 204632, 225192, 0, 266312,
  };
  static const size_t SbrSizes[] = {
    179344, 219408, 259472, 299536, 339608, 379672, 0, 459800,
  };

  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return AacLcSizes[channelCount - 1];
    case Mpeg4AudioObjectType_Sbr:
      return SbrSizes[channelCount - 1];
    case Mpeg4AudioObjectType_Ps:
      return 253624;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

size_t GetAacEncoderInputBufferSize(int channelCount,
  Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return static_cast<size_t>(channelCount * 1024) * sizeof(int16_t);
    case Mpeg4AudioObjectType_Sbr:
    case Mpeg4AudioObjectType_Ps:
      return static_cast<size_t>(channelCount * 2048) * sizeof(int16_t);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

size_t GetAacEncoderOutputBufferSize(int channelCount,
  Mpeg4AudioObjectType type) {
  // The low frequency effects channel of 5.1 does not add output size.
  const int effectiveChannelCount =
    channelCount >= 6 ? channelCount - 1 : channelCount;
  return static_cast<size_t>(effectiveChannelCount) * 768;
}

int GetAacEncoderSampleRate(const AacEncoderType* encoder) {
  return encoder->sampleRate;
}

int GetAacEncoderChannelCount(const AacEncoderType* encoder) {
  return encoder->channelCount;
}

Mpeg4AudioObjectType GetAacEncoderMpeg4AudioObjectType(
  const AacEncoderType* encoder) {
  return static_cast<Mpeg4AudioObjectType>(encoder->objectType);
}

int GetAacEncoderBitRateMin(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return static_cast<int>(((channelCount - 1.0) * 3750.0 + 23250.0)
        * sampleRate / 96000.0);
    case Mpeg4AudioObjectType_Sbr:
      switch (sampleRate) {
        case 64000:
        case 88200: {
          static const int BitRates[] = {
            24008, 32008, 60016, 80024, 92336, 100032, 0, 133376,
          };
          return BitRates[channelCount - 1];
        }
        case 96000: {
          static const int BitRates[] = {
            32008, 36008, 80016, 106692, 123104, 133360, 0, 177816,
          };
          return BitRates[channelCount - 1];
        }
        case 16000:
        case 22050:
        case 24000:
        case 32000: {
          static const int BitRates[] = {
            8008, 16008, 26679, 40018, 43264, 45736, 0, 61568,
          };
          return BitRates[channelCount - 1];
        }
        case 44100: {
          static const int BitRates[] = {
            11377, 16008, 28442, 40018, 43756, 47404, 0, 63204,
          };
          return BitRates[channelCount - 1];
        }
        case 48000: {
          static const int BitRates[] = {
            12008, 16008, 30018, 40026, 46184, 50032, 0, 66708,
          };
          return BitRates[channelCount - 1];
        }
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    case Mpeg4AudioObjectType_Ps:
      switch (sampleRate) {
        case 16000:
        case 22050:
        case 24000:
        case 32000:
          return 8008;
        case 44100:
          return 11377;
        case 48000:
          return 12008;
        case 64000:
        case 88200:
          return 24008;
        case 96000:
          return 32008;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int GetAacEncoderBitRateMax(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc: {
      // The low frequency effects channel of 5.1 does not add bit rate.
      const int effectiveChannelCount =
        channelCount > 5 ? channelCount - 1 : channelCount;
      return static_cast<int>(effectiveChannelCount * 576000.0 * sampleRate
        / 96000.0);
    }
    case Mpeg4AudioObjectType_Sbr:
      switch (sampleRate) {
        case 16000: {
          static const int BitRates[] = {
            48000, 96000, 119976, 159968, 184584, 199952, 0, 266608,
          };
          return BitRates[channelCount - 1];
        }
        case 22050:
        case 24000:
        case 32000:
        case 44100:
        case 48000: {
          static const int BitRates[] = {
            63992, 127992, 159976, 213304, 246120, 266624, 0, 355504,
          };
          return BitRates[channelCount - 1];
        }
        case 64000:
        case 88200:
        case 96000: {
          static const int BitRates[] = {
            159984, 255984, 399968, 533280, 615328, 666624, 0, 888832,
          };
          return BitRates[channelCount - 1];
        }
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    case Mpeg4AudioObjectType_Ps:
      switch (sampleRate) {
        case 16000:
          return 47992;
        case 22050:
        case 24000:
        case 32000:
        case 44100:
        case 48000:
          return 63992;
        case 64000:
        case 88200:
        case 96000:
          return 159984;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

AacEncoderResult InitializeAacEncoder(AacEncoderType* encoder, int sampleRate,
  int channelCount, Mpeg4AudioObjectType type, int bitRate, void* buffer,
  size_t size) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
    case Mpeg4AudioObjectType_Sbr:
    case Mpeg4AudioObjectType_Ps:
      break;
    default:
      return AacEncoderResult_UnsupportedAudioObjectType;
  }

  if (!IsSupportedSampleRate(sampleRate)) {
    return AacEncoderResult_UnsupportedSampleRate;
  }

  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      break;
    case Mpeg4AudioObjectType_Sbr:
    case Mpeg4AudioObjectType_Ps:
      if (sampleRate < 16000) {
        return AacEncoderResult_UnsupportedSampleRate;
      }
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
    case Mpeg4AudioObjectType_Sbr:
      if (channelCount != 8 && (channelCount < 1 || channelCount > 6)) {
        return AacEncoderResult_UnsupportedChannelCount;
      }
      break;
    case Mpeg4AudioObjectType_Ps:
      if (channelCount != 2) {
        return AacEncoderResult_UnsupportedChannelCount;
      }
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  AACENCODER* handle = static_cast<AACENCODER*>(encoder->handle);
  AACENC_InfoStruct info = {};
  os::LockMutex(&detail::g_AacMutex);
  InitializeAacMemoryAllocator(buffer, size, {});

  AacEncoderResult result = ConvertResult(aacEncOpen(&handle,
    GetEncoderModules(type), channelCount));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_AOT, type));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_SAMPLERATE,
    sampleRate));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_CHANNELMODE,
    GetChannelMode(channelCount)));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_CHANNELORDER, 1));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_TRANSMUX, 0));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_BITRATEMODE, 0));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncoder_SetParam(handle, AACENC_BITRATE,
    bitRate));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncEncode(handle, nullptr, nullptr, nullptr,
    nullptr));
  if (result != AacEncoderResult_Success) {
    goto End;
  }

  result = ConvertResult(aacEncInfo(handle, &info));
  if (result == AacEncoderResult_Success) {
    encoder->workBufferSize = size;
    encoder->sampleRate = sampleRate;
    encoder->channelCount = channelCount;
    encoder->objectType = type;
    encoder->handle = handle;
    encoder->workBuffer = buffer;
    encoder->bitRate = aacEncoder_GetParam(handle, AACENC_BITRATE);
    encoder->frameSampleCount = info.frameLength;
    encoder->inputBufferSize = static_cast<size_t>(info.frameLength) *
      static_cast<unsigned int>(channelCount) * sizeof(int16_t);
    encoder->outputBufferSize = info.maxOutBufBytes;
    encoder->isInitialized = true;
  }

End:
  FinalizeAacMemoryAllocator();
  os::UnlockMutex(&detail::g_AacMutex);
  return result;
}

void FinalizeAacEncoder(AacEncoderType* encoder) {
  AACENCODER* handle = static_cast<AACENCODER*>(encoder->handle);
  NN_ABORT_UNLESS(aacEncClose(&handle) == AACENC_OK);
  encoder->handle = nullptr;
  encoder->workBuffer = nullptr;
  encoder->workBufferSize = 0;
  encoder->isInitialized = false;
  encoder->sampleRate = 0;
  encoder->channelCount = 0;
  encoder->objectType = -1;
  encoder->bitRate = 0;
  encoder->frameSampleCount = 0;
  encoder->inputBufferSize = 0;
  encoder->outputBufferSize = 0;
}

int GetAacEncoderBitRate(const AacEncoderType* encoder) {
  return aacEncoder_GetParam(static_cast<AACENCODER*>(encoder->handle),
    AACENC_BITRATE);
}

void SetAacEncoderBitRate(AacEncoderType* encoder, int bitRate) {
  AACENCODER* handle = static_cast<AACENCODER*>(encoder->handle);
  NN_ABORT_UNLESS(aacEncoder_SetParam(handle, AACENC_BITRATE, bitRate) ==
    AACENC_OK);
  NN_ABORT_UNLESS(aacEncEncode(handle, nullptr, nullptr, nullptr, nullptr) ==
    AACENC_OK);
  encoder->bitRate = aacEncoder_GetParam(handle, AACENC_BITRATE);
}

void ResetAacEncoder(AacEncoderType* encoder) {
  if (encoder->isInitialized) {
    AACENCODER* handle = static_cast<AACENCODER*>(encoder->handle);
    NN_ABORT_UNLESS(aacEncoder_SetParam(handle, AACENC_CONTROL_STATE,
      AACENC_INIT_ALL) == AACENC_OK);
    NN_ABORT_UNLESS(aacEncEncode(handle, nullptr, nullptr, nullptr,
      nullptr) == AACENC_OK);
  }
}

AacEncoderResult EncodeAacInterleaved(AacEncoderType* encoder,
  size_t* outputSize, void* outputBuffer, size_t outputBufferSize,
  const int16_t* inputBuffer, int sampleCount) {
  AACENC_OutArgs outArgs = {};
  const AACENC_ERROR error = Encode(encoder, &outArgs, outputBuffer,
    outputBufferSize, inputBuffer, encoder->channelCount * sampleCount);
  const AacEncoderResult result = ConvertResult(error);
  *outputSize = outArgs.numOutBytes;
  return result;
}

bool FlushAacEncoderRemainingData(AacEncoderType* encoder, size_t* outputSize,
  void* outputBuffer, size_t outputBufferSize) {
  AACENC_OutArgs outArgs = {};
  const AACENC_ERROR error = Encode(encoder, &outArgs, outputBuffer,
    outputBufferSize, nullptr, -1);
  const AacEncoderResult result = ConvertResult(error);
  *outputSize = outArgs.numOutBytes;

  switch (result) {
    case AacEncoderResult_Success:
      return false;
    case AacEncoderResult_EndOfStream:
      return true;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
