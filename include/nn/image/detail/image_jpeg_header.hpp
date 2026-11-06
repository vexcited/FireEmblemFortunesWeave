#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/image_jpeg.hpp"
#include "nn/image/image_types.hpp"

namespace nn::image::detail {

struct JpegComponentInfo {
  uint8_t id;
  uint8_t horizontalSampling;
  uint8_t verticalSampling;
  uint8_t quantizationTable;
  uint32_t horizontalScale;
  uint32_t verticalScale;
  uint32_t downsampledWidth;
  uint32_t downsampledHeight;
};

struct JpegScanComponent {
  uint8_t id;
  uint8_t tables;
};

struct JpegScanHeader {
  uint16_t marker;
  uint16_t length;
  uint8_t componentCount;
  JpegScanComponent components[4];
  uint8_t spectralStart;
  uint8_t spectralEnd;
  uint8_t approximation;
  uint8_t reserved10[2];
};

static_assert(sizeof(JpegScanHeader) == 18);

struct JpegInfo {
  uint16_t frameMarker;
  uint16_t frameLength;
  uint8_t precision;
  uint16_t imageHeight;
  uint16_t imageWidth;
  uint8_t componentCount;
  uint16_t maxHorizontalSampling;
  uint16_t maxVerticalSampling;
  JpegComponentInfo components[4];
  uint32_t blockSize;
  uint8_t reserved64[4];
  int32_t huffmanTableCount;
  uint32_t huffmanTableMask;
  int32_t quantizationTableCount;
  uint32_t quantizationTableMask;
  uint32_t horizontalScale;
  uint32_t verticalScale;
  uint32_t width;
  uint32_t height;
  uint32_t spectralEnd;
  int32_t scanTableCount;
  int32_t outputComponentCount;
  bool isMergedUpsampling;
  int32_t outputColorSpace;
  int32_t colorSpace;
  bool hasJfifMarker;
  bool hasAdobeMarker;
  bool reservedA2;
  bool isPartialScan;
  uint8_t adobeTransform;
  uint8_t scanComponentCount;
};

static_assert(sizeof(JpegInfo) == 0xa8);

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
[[gnu::visibility("hidden")]] void SetupOutputScale(JpegInfo* pInfo,
  uint32_t scale);
[[gnu::visibility("hidden")]] bool ReadScanHeader(JpegScanHeader* pOutHeader,
  size_t* pOutNextOffset, const uint8_t* pData, size_t size, size_t offset,
  const JpegInfo* pInfo);
[[gnu::visibility("hidden")]] bool SetupBlockSize(JpegInfo* pInfo,
  const uint8_t* pData, size_t size);
[[gnu::visibility("hidden")]] bool CountScanTables(JpegInfo* pInfo,
  const uint8_t* pData, size_t size);
void SetJpegHeader(JpegInfo* pInfo, uint16_t width, uint16_t height,
  JpegSamplingRatio samplingRatio);
void WriteExifHeader(void* pOutData, size_t size);
JpegStatus ExtractJpegHeader(JpegHeader* pOutHeader, const void* pData,
  size_t size, int resolutionDenominator);
JpegStatus ExtractExifRegion(const void** ppOutExifData, size_t* pOutExifSize,
  const void* pData, size_t size);

}
