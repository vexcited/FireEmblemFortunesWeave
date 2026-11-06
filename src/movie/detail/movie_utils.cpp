#include "movie/detail/movie_utils.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace movie::detail {

namespace {

constexpr uint32_t MovieModule = 256;

}

MovieResult ConvertNnMovieToMovieResult(nn::Result result) {
  if (result.IsSuccess()) {
    return MovieResult_Success;
  }

  switch (result.GetInnerValueForDebug()) {
    case 0x3eb00:
      return MovieResult_NotInitialized;
    case 0x3ed00:
      return MovieResult_InvalidArgument;
    case 0x3ef00:
      return MovieResult_InvalidOperation;
    case 0x3f100:
      return MovieResult_MessageNotProcessed;
    case 0x3f300:
    case 0x3f500:
      return MovieResult_AlreadyInitialized;
    case 0x3f700:
      return MovieResult_OutOfMemory;
    case 0x3f900:
    case 0x40500:
      return static_cast<MovieResult>(22);
    case 0x3fd00:
      return MovieResult_OutOfRange;
    case 0x3ff00:
      return MovieResult_NotSupported;
    case 0x40100:
      return MovieResult_EndOfStream;
    case 0x40300:
      return static_cast<MovieResult>(6);
    case 0x40700:
      return static_cast<MovieResult>(7);
    case 0x40900:
      return static_cast<MovieResult>(9);
    case 0x40b00:
      return MovieResult_InvalidAlignment;
    case 0x40d00:
      return static_cast<MovieResult>(29);
    case 0x40f00:
      return static_cast<MovieResult>(30);
    default:
      break;
  }

  uint32_t module = result.value & 0x1ff;
  uint32_t description = (result.value >> 9) & 0x1fff;
  if (module == MovieModule && description >= 1010 && description < 1500) {
    return static_cast<MovieResult>(15);
  }

  switch (result.GetInnerValueForDebug()) {
    case 0x7ff00:
      return static_cast<MovieResult>(24);
    case 0x80100:
      return static_cast<MovieResult>(11);
    case 0x106c6f:
      return MovieResult_NotInitialized;
    case 0x10706f:
      return MovieResult_EndOfStream;
    case 0x17726f:
      return MovieResult_InvalidAlignment;
    case 0x17746f:
      return MovieResult_InvalidArgument;
    case 0x17766f:
      return static_cast<MovieResult>(9);
    case 0x17b66f:
      return static_cast<MovieResult>(50);
    case 0x17b86f:
      return static_cast<MovieResult>(53);
    case 0x1c266f:
      return static_cast<MovieResult>(122);
    case 0x1c286f:
      return static_cast<MovieResult>(123);
    case 0x1ce86f:
      return static_cast<MovieResult>(136);
    case 0x1cea6f:
      return static_cast<MovieResult>(135);
    case 0x1cec6f:
      return static_cast<MovieResult>(141);
    case 0x1cf46f:
      return static_cast<MovieResult>(127);
    case 0x17a06f:
    case 0x17c66f:
      NN_ABORT_UNLESS(false);
    default:
      return MovieResult_Unknown;
  }
}

nn::Result ConvertMovieResultToNnMovie(MovieResult result) {
  switch (static_cast<int>(result)) {
    case MovieResult_Success:
      return {};
    case MovieResult_OutOfRange:
      return {0x3fd00};
    case MovieResult_NotSupported:
      return {0x3ff00};
    case MovieResult_EndOfStream:
      return {0x40100};
    case 6:
      return {0x40300};
    case 7:
      return {0x40700};
    case 9:
      return {0x40900};
    case MovieResult_InvalidAlignment:
      return {0x40b00};
    case 11:
      return {0x80100};
    case 15:
      return {0x7e500};
    case 16:
      return {0x80500};
    case MovieResult_OutOfMemory:
      return {0x3f700};
    case MovieResult_NotInitialized:
    case 19:
      return {0x3eb00};
    case MovieResult_InvalidArgument:
      return {0x3ed00};
    case MovieResult_InvalidOperation:
      return {0x3ef00};
    case 22:
      return {0x3f900};
    case MovieResult_MessageNotProcessed:
      return {0x3f100};
    case MovieResult_AlreadyInitialized:
      return {0x3f500};
    case 29:
      return {0x40d00};
    case 30:
      return {0x40f00};
    default:
      if (result >= 163 && result <= 183) {
        return {0x80300};
      }

      return {0x41100};
  }
}

MovieResult ConvertHttpStatusToMovieResult(uint32_t status) {
  switch (status) {
    case 200:
      return MovieResult_Success;
    case 404:
      return static_cast<MovieResult>(168);
    case 403:
      return static_cast<MovieResult>(169);
    default:
      return static_cast<MovieResult>(172);
  }
}

int GetVideoMinCompressionRatio(nn::movie::MediaMimeType mimeType,
  int level) {
  switch (static_cast<int>(mimeType)) {
    case 1:
    case 4:
      switch (level) {
        case 0x40:
        case 0x80:
          return 4;
        case 0x100:
          return 6;
        case 0x200:
        case 0x400:
        case 0x800:
        case 0x1000:
        case 0x2000:
          return 8;
        default:
          return 2;
      }

    case 3:
      switch (level) {
        case 0x100:
        case 0x200:
        case 0x400:
        case 0x800:
          return 4;
        case 0x1000:
          return 6;
        case 0x2000:
        case 0x4000:
        case 0x8000:
        case 0x10000:
          return 8;
        default:
          return 2;
      }

    default:
      return 2;
  }
}

int GetAudioSampleByteSize(AudioDecoderOutputFormat format) {
  switch (static_cast<int>(format)) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 4;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

// Same scan as getNextNALUnit of stagefright with a start code always
// assumed to follow, which also reports the payload offset.
MovieResult GetH264NalUnitStartPositionAndSize(const uint8_t** ppData,
  size_t* pSize, const uint8_t** pOutNalUnit, size_t* pOutNalUnitSize,
  size_t* pOutOffset) {
  const uint8_t* data = *ppData;
  size_t size = *pSize;
  *pOutNalUnit = nullptr;
  *pOutNalUnitSize = 0;
  *pOutOffset = 0;
  if (size < 3) {
    return MovieResult_EndOfStream;
  }

  size_t offset = 0;
  for (; offset + 2 < size; offset++) {
    if (data[offset + 2] == 0x01 && data[offset] == 0x00 &&
      data[offset + 1] == 0x00) {
      break;
    }
  }

  if (offset + 2 >= size) {
    *ppData = &data[offset];
    *pSize = 2;
    return MovieResult_EndOfStream;
  }

  offset += 3;
  size_t startOffset = offset;
  while (true) {
    while (offset < size && data[offset] != 0x01) {
      offset++;
    }

    if (offset == size) {
      offset = size + 2;
      break;
    }

    if (data[offset - 1] == 0x00 && data[offset - 2] == 0x00) {
      break;
    }

    offset++;
  }

  size_t endOffset = offset - 2;
  while (endOffset > startOffset + 1 && data[endOffset - 1] == 0x00) {
    endOffset--;
  }

  *pOutNalUnit = &data[startOffset];
  *pOutNalUnitSize = endOffset - startOffset;
  *pOutOffset = startOffset;
  if (offset + 2 < size) {
    *ppData = &data[offset - 2];
    *pSize = size - offset + 2;
  }
  else {
    *ppData = nullptr;
    *pSize = 0;
  }

  return MovieResult_Success;
}

MovieResult GetH264NalUnitStartPositionAndSizeOfType(const uint8_t** ppData,
  size_t* pSize, const uint8_t** pOutNalUnit, size_t* pOutNalUnitSize,
  size_t* pOutOffset, uint8_t type) {
  while (GetH264NalUnitStartPositionAndSize(ppData, pSize, pOutNalUnit,
      pOutNalUnitSize, pOutOffset) == MovieResult_Success &&
    *pOutNalUnitSize != 0) {
    if ((**pOutNalUnit & 0x1f) == type) {
      return MovieResult_Success;
    }
  }

  return MovieResult_MessageNotProcessed;
}

nn::movie::AvcProfile ConvertAvcCodecProfileToNnMovieProfile(
  uint32_t profile) {
  switch (profile) {
    case 66:
      return nn::movie::AvcProfile_Baseline;
    case 77:
      return nn::movie::AvcProfile_Main;
    case 88:
      return nn::movie::AvcProfile_Extended;
    case 100:
      return nn::movie::AvcProfile_High;
    default:
      return nn::movie::AvcProfile_None;
  }
}

nn::movie::AvcLevel ConvertAvcCodecLevelToNnMovieLevel(uint32_t level) {
  uint32_t value;
  switch (level) {
    case 9:
      value = 0x2;
      break;
    case 10:
      value = 0x1;
      break;
    case 11:
      value = 0x4;
      break;
    case 12:
      value = 0x8;
      break;
    case 13:
      value = 0x10;
      break;
    case 20:
      value = 0x20;
      break;
    case 21:
      value = 0x40;
      break;
    case 22:
      value = 0x80;
      break;
    case 30:
      value = 0x100;
      break;
    case 31:
      value = 0x200;
      break;
    case 32:
      value = 0x400;
      break;
    case 40:
      value = 0x800;
      break;
    case 41:
      value = 0x1000;
      break;
    case 42:
      value = 0x2000;
      break;
    case 50:
      value = 0x4000;
      break;
    case 51:
      value = 0x8000;
      break;
    default:
      value = 0;
      break;
  }

  return static_cast<nn::movie::AvcLevel>(value);
}

nn::movie::Av1Profile ConvertAv1CodecProfileToNnMovieProfile(
  uint32_t profile) {
  return static_cast<nn::movie::Av1Profile>(profile == 1);
}

nn::movie::Av1Level ConvertAv1CodecLevelToNnMovieLevel(uint32_t level) {
  if (level > 16) {
    return nn::movie::Av1Level_None;
  }

  return static_cast<nn::movie::Av1Level>(1 << level);
}

uint32_t ConvertNnMovieProfileToAvcCodecProfile(
  nn::movie::AvcProfile profile) {
  switch (profile) {
    case nn::movie::AvcProfile_Main:
      return 77;
    case nn::movie::AvcProfile_High:
      return 100;
    case nn::movie::AvcProfile_Extended:
      return 88;
    default:
      return 66;
  }
}

uint32_t ConvertNnMovieLevelToAvcCodecLevel(nn::movie::AvcLevel level) {
  switch (static_cast<int>(level)) {
    case 0x1:
      return 10;
    case 0x2:
      return 9;
    case 0x4:
      return 11;
    case 0x8:
      return 12;
    case 0x10:
      return 13;
    case 0x20:
      return 20;
    case 0x40:
      return 21;
    case 0x80:
      return 22;
    case 0x200:
      return 31;
    case 0x400:
      return 32;
    case 0x800:
      return 40;
    case 0x1000:
      return 41;
    case 0x2000:
      return 42;
    case 0x4000:
      return 50;
    case 0x8000:
      return 51;
    default:
      return 30;
  }
}

nn::codec::VideoDecoderOutputFormat
  MovieVideoDecoderOutputFormatToNnCodecVideoOutputFormat(
    VideoDecoderOutputFormat format) {
  switch (static_cast<int>(format)) {
    case 2:
    case 3:
    case 4:
    case 5:
      return static_cast<nn::codec::VideoDecoderOutputFormat>(format);
    default:
      NN_ABORT_UNLESS(false);
  }
}

nn::codec::ImageTilingMode MovieVideoCodecModeToNnCodecImageTilingMode(
  VideoCodecMode mode) {
  switch (static_cast<int>(mode)) {
    case 1:
    case 2:
      return static_cast<nn::codec::ImageTilingMode>(mode);
    default:
      NN_ABORT_UNLESS(false);
  }
}

}
