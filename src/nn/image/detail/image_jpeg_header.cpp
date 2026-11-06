#include <string.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/image/detail/image_jpeg_header.hpp"

extern "C" long nndetailImageJpeg_jdiv_round_up(long a, long b);

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

const uint32_t BlockSize = 8;
const uint32_t SpectralEnd = 63;
const uint32_t ScaledSizeMax = BlockSize / 2;
const int32_t ColorSpaceYCbCr = 3;
const int32_t ColorSpaceRgb = 2;
const int32_t RgbComponentCount = 3;

inline uint32_t CalculateScaledSize(uint32_t scale, uint16_t maxSampling,
  uint8_t sampling) {
  uint8_t ratio = 1;
  while (scale * ratio <= ScaledSizeMax &&
    maxSampling % (sampling * ratio * 2) == 0) {
    ratio *= 2;
  }
  return scale * ratio;
}

}

// Mirrors the output dimension setup of libjpeg without fancy upsampling.
void SetupOutputScale(JpegInfo* pInfo, uint32_t scale) {
  pInfo->horizontalScale = scale;
  pInfo->verticalScale = scale;
  for (int i = 0; i < pInfo->componentCount; i++) {
    JpegComponentInfo& component = pInfo->components[i];
    component.horizontalScale = CalculateScaledSize(pInfo->horizontalScale,
      pInfo->maxHorizontalSampling, component.horizontalSampling);
    component.verticalScale = CalculateScaledSize(pInfo->verticalScale,
      pInfo->maxVerticalSampling, component.verticalSampling);
    if (component.horizontalScale > component.verticalScale * 2) {
      component.horizontalScale = component.verticalScale * 2;
    }
    else if (component.verticalScale > component.horizontalScale * 2) {
      component.verticalScale = component.horizontalScale * 2;
    }
    component.downsampledWidth = nndetailImageJpeg_jdiv_round_up(
      static_cast<long>(component.horizontalSampling) * pInfo->imageWidth,
      pInfo->blockSize * pInfo->maxHorizontalSampling);
    component.downsampledHeight = nndetailImageJpeg_jdiv_round_up(
      static_cast<long>(component.verticalSampling) * pInfo->imageHeight,
      pInfo->blockSize * pInfo->maxVerticalSampling);
  }

  const JpegComponentInfo* components = pInfo->components;
  pInfo->isMergedUpsampling = pInfo->componentCount == 3 &&
    pInfo->colorSpace == ColorSpaceYCbCr &&
    pInfo->outputColorSpace == ColorSpaceRgb &&
    pInfo->outputComponentCount == RgbComponentCount &&
    components[0].horizontalSampling == 2 &&
    components[1].horizontalSampling == 1 &&
    components[2].horizontalSampling == 1 &&
    components[0].verticalSampling <= 2 &&
    components[1].verticalSampling == 1 &&
    components[2].verticalSampling == 1 &&
    components[0].horizontalScale == pInfo->horizontalScale &&
    components[1].horizontalScale == pInfo->horizontalScale &&
    components[2].horizontalScale == pInfo->horizontalScale &&
    components[0].verticalScale == pInfo->verticalScale &&
    components[1].verticalScale == pInfo->verticalScale &&
    components[2].verticalScale == pInfo->verticalScale;
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

void SetJpegHeader(JpegInfo* pInfo, uint16_t width, uint16_t height,
  JpegSamplingRatio samplingRatio) {
  pInfo->imageWidth = width;
  pInfo->imageHeight = height;
  pInfo->componentCount = 3;
  pInfo->blockSize = BlockSize;
  pInfo->spectralEnd = SpectralEnd;

  uint8_t horizontalSampling;
  uint8_t verticalSampling;
  switch (samplingRatio) {
    case JpegSamplingRatio_444:
      horizontalSampling = 1;
      verticalSampling = 1;
      break;
    case JpegSamplingRatio_422:
      horizontalSampling = 2;
      verticalSampling = 1;
      break;
    case JpegSamplingRatio_420:
      horizontalSampling = 2;
      verticalSampling = 2;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  pInfo->components[0].id = 1;
  pInfo->components[0].horizontalSampling = horizontalSampling;
  pInfo->components[0].verticalSampling = verticalSampling;
  pInfo->components[1].id = 2;
  pInfo->components[1].horizontalSampling = 1;
  pInfo->components[1].verticalSampling = 1;
  pInfo->components[2].id = 3;
  pInfo->components[2].horizontalSampling = 1;
  pInfo->components[2].verticalSampling = 1;
  pInfo->maxHorizontalSampling = horizontalSampling;
  pInfo->maxVerticalSampling = verticalSampling;
  SetupOutputScale(pInfo, BlockSize);
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
