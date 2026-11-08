#include <string.h>
#include <strings.h>

#include "nn/result.hpp"

namespace nn::movie {

enum MediaMimeType : int32_t {
  MediaMimeType_VideoAvc = 0,
  MediaMimeType_VideoVp9 = 1,
  MediaMimeType_VideoRaw = 2,
  MediaMimeType_VideoAv1 = 3,
  MediaMimeType_VideoVp8 = 4,
  MediaMimeType_AudioAac = 65,
  MediaMimeType_AudioVorbis = 66,
  MediaMimeType_AudioOpus = 67,
  MediaMimeType_AudioRaw = 68,
  MediaMimeType_AudioAacAdts = 69,
  MediaMimeType_Invalid = -1,
};

}

namespace nn::movie::detail {

namespace {

constexpr Result ResultBufferTooSmall = {0x40300};
constexpr Result ResultInvalidMediaData = {0x40900};

constexpr uint8_t StartCode[] = {0x00, 0x00, 0x00, 0x01};

// Copies each parameter set after a start code while it fits in the output.
[[gnu::always_inline]] inline bool CopyParameterSets(char* out,
  size_t* pWritten, const uint8_t** pData, size_t* pRemaining, size_t count,
  size_t limit) {
  const uint8_t* data = *pData;
  size_t remaining = *pRemaining;
  size_t written = *pWritten;
  for (size_t i = 0; i < count; ++i) {
    if (remaining < 2) {
      return false;
    }

    const size_t length = static_cast<uint16_t>(data[0] << 8 | data[1]);
    data += 2;
    remaining -= 2;
    if (remaining < length || length > limit) {
      return false;
    }

    remaining -= length;
    if (written + sizeof(StartCode) < limit) {
      memcpy(out + written, StartCode, sizeof(StartCode));
      written += sizeof(StartCode);
      if (written + length < limit) {
        memcpy(out + written, data, length);
        written += length;
      }
    }

    data += length;
  }

  *pData = data;
  *pRemaining = remaining;
  *pWritten = written;
  return true;
}

}

MediaMimeType MimeToMediaMimeType(const char* mime) {
  if (strncasecmp(mime, "video/", 6) == 0) {
    const char* type = mime + 6;
    if (strcasecmp(type, "av1") == 0 || strcasecmp(type, "av01") == 0) {
      return MediaMimeType_VideoAv1;
    }

    if (strcasecmp(type, "avc") == 0) {
      return MediaMimeType_VideoAvc;
    }

    if (strcasecmp(type, "raw") == 0) {
      return MediaMimeType_VideoRaw;
    }

    if (strcasecmp(type, "x-vnd.on2.vp8") == 0) {
      return MediaMimeType_VideoVp8;
    }

    if (strcasecmp(type, "x-vnd.on2.vp9") == 0) {
      return MediaMimeType_VideoVp9;
    }

    return MediaMimeType_Invalid;
  }

  if (strncasecmp(mime, "audio/", 6) == 0) {
    const char* type = mime + 6;
    if (strcasecmp(type, "mp4a-latm") == 0) {
      return MediaMimeType_AudioAac;
    }

    if (strcasecmp(type, "aac-adts") == 0) {
      return MediaMimeType_AudioAacAdts;
    }

    if (strcasecmp(type, "opus") == 0) {
      return MediaMimeType_AudioOpus;
    }

    if (strcasecmp(type, "raw") == 0) {
      return MediaMimeType_AudioRaw;
    }

    if (strcasecmp(type, "vorbis") == 0) {
      return MediaMimeType_AudioVorbis;
    }
  }

  return MediaMimeType_Invalid;
}

Result ParseAvccCodecSpecificData(char* out, size_t outSize,
  size_t* pOutSize, const void* avcc, size_t avccSize) {
  if (outSize < 2 * avccSize) {
    return ResultBufferTooSmall;
  }

  if (avccSize < 8) {
    return ResultInvalidMediaData;
  }

  const auto* bytes = static_cast<const uint8_t*>(avcc);
  const uint8_t* data = bytes + 6;
  size_t remaining = avccSize - 6;
  const size_t limit = 2 * (avccSize - 6);
  size_t written = 0;
  if (!CopyParameterSets(out, &written, &data, &remaining, bytes[5] & 0x1f,
    limit)) {
    return ResultInvalidMediaData;
  }

  const size_t ppsCount = *data;
  data += 1;
  remaining -= 1;
  if (!CopyParameterSets(out, &written, &data, &remaining, ppsCount, limit)) {
    return ResultInvalidMediaData;
  }

  *pOutSize = written;
  return {};
}

}
