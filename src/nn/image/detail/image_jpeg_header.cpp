#include <string.h>

#include "nn/image/detail/image_jpeg_header.hpp"

namespace nn::image::detail {

namespace {

const uint16_t MarkerSoi = 0xffd8;
const uint16_t MarkerApp1 = 0xffe1;
const char ExifIdentifier[6] = {'E', 'x', 'i', 'f', '\0', '\0'};
const uint16_t ExifHeaderSize = 8;
const uint16_t MaxExifSize = 0xfff9;

uint16_t ReadUint16Big(const uint8_t* pData) {
  return __builtin_bswap16(*reinterpret_cast<const uint16_t*>(pData));
}

}

JpegStatus CheckSoi(const uint8_t* pData, size_t size) {
  if (ReadUint16Big(pData) != MarkerSoi) {
    return JpegStatus_WrongFormat;
  }
  return JpegStatus_Ok;
}

bool GetExifInfo(const void** ppOutExifData, uint16_t* pOutExifSize,
  const uint8_t* pData, size_t size) {
  size_t offset;
  if (!SearchJpegMarker(&offset, pData, size, 0, MarkerApp1)) {
    return false;
  }

  uint16_t length = ReadUint16Big(pData + offset + 2);
  bool isValid = length > 1 && offset + 2 + length <= size;
  bool isExif = false;
  if (isValid) {
    uint16_t exifSize = length - ExifHeaderSize;
    const uint8_t* pSegment = pData + offset;
    if (exifSize <= MaxExifSize &&
      memcmp(pSegment + 4, ExifIdentifier, sizeof(ExifIdentifier)) == 0) {
      *ppOutExifData = pSegment + 10;
      *pOutExifSize = exifSize;
      isExif = true;
    }
  }
  return isValid && isExif;
}

void WriteExifHeader(void* pOutData, size_t size) {
  uint8_t* pBytes = static_cast<uint8_t*>(pOutData);
  uint16_t length = size - 2;
  pBytes[0] = MarkerApp1 >> 8;
  pBytes[1] = MarkerApp1 & 0xff;
  pBytes[2] = length >> 8;
  pBytes[3] = length & 0xff;
  memcpy(pBytes + 4, ExifIdentifier, sizeof(ExifIdentifier));
}

JpegStatus ExtractJpegHeader(JpegHeader* pOutHeader, const void* pData,
  size_t size, int resolutionDenominator) {
  if (size < 2) {
    return JpegStatus_WrongFormat;
  }

  const uint8_t* pBytes = static_cast<const uint8_t*>(pData);
  JpegStatus status = CheckSoi(pBytes, size);
  if (status != JpegStatus_Ok) {
    return status;
  }

  JpegInfo info = {};
  status = ReadJpegHeader(&info, pBytes, size, resolutionDenominator);
  if (status != JpegStatus_Ok) {
    return status;
  }
  if (info.width > 0xffff || info.height > 0xffff) {
    return JpegStatus_WrongFormat;
  }

  pOutHeader->dimension.width = info.width;
  pOutHeader->dimension.height = info.height;
  pOutHeader->hasExif = GetExifInfo(&pOutHeader->pExifData,
    &pOutHeader->exifSize, pBytes, size);
  return JpegStatus_Ok;
}

JpegStatus ExtractExifRegion(const void** ppOutExifData, size_t* pOutExifSize,
  const void* pData, size_t size) {
  if (size < 2) {
    return JpegStatus_WrongFormat;
  }

  const uint8_t* pBytes = static_cast<const uint8_t*>(pData);
  JpegStatus status = CheckSoi(pBytes, size);
  if (status != JpegStatus_Ok) {
    return status;
  }

  uint16_t exifSize = 0;
  if (!GetExifInfo(ppOutExifData, &exifSize, pBytes, size)) {
    return JpegStatus_WrongFormat;
  }
  *pOutExifSize = exifSize;
  return JpegStatus_Ok;
}

}
