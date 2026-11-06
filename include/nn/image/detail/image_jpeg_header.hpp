#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/image_types.hpp"

namespace nn::image::detail {

struct JpegInfo {
  uint8_t reserved0[0x80];
  uint32_t width;
  uint32_t height;
  uint8_t reserved88[0x20];
};

struct JpegHeader {
  Dimension dimension;
  bool hasExif;
  const void* pExifData;
  uint16_t exifSize;
};

bool SearchJpegMarker(size_t* pOutOffset, const uint8_t* pData, size_t size,
  size_t offset, uint16_t marker);
JpegStatus CheckSoi(const uint8_t* pData, size_t size);
JpegStatus ReadJpegHeader(JpegInfo* pOutInfo, const uint8_t* pData,
  size_t size, unsigned int resolutionDenominator);
bool GetExifInfo(const void** ppOutExifData, uint16_t* pOutExifSize,
  const uint8_t* pData, size_t size);
void WriteExifHeader(void* pOutData, size_t size);
JpegStatus ExtractJpegHeader(JpegHeader* pOutHeader, const void* pData,
  size_t size, int resolutionDenominator);
JpegStatus ExtractExifRegion(const void** ppOutExifData, size_t* pOutExifSize,
  const void* pData, size_t size);

}
