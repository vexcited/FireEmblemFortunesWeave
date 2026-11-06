#include <string.h>

#include <algorithm>

#include "nn/diag/unexpected_default.hpp"
#include "nn/image/detail/image_jpeg_header.hpp"

extern "C" long nndetailImageJpeg_jdiv_round_up(long a, long b);

namespace nn::image::detail {

namespace {

const uint16_t MarkerSof0 = 0xffc0;
const uint16_t MarkerSof2 = 0xffc2;
const uint16_t MarkerSof6 = 0xffc6;
const uint16_t MarkerSof10 = 0xffca;
const uint16_t MarkerSof14 = 0xffce;
const uint16_t MarkerDht = 0xffc4;
const uint16_t MarkerSoi = 0xffd8;
const uint16_t MarkerEoi = 0xffd9;
const uint16_t MarkerDqt = 0xffdb;
const uint16_t MarkerApp0 = 0xffe0;
const uint16_t MarkerApp14 = 0xffee;
const char JfifIdentifier[5] = {'J', 'F', 'I', 'F', '\0'};
const char AdobeIdentifier[5] = {'A', 'd', 'o', 'b', 'e'};
const int ColorSpaceGrayscale = 1;
const int ColorSpaceCmyk = 4;
const int ColorSpaceYcck = 5;
const uint32_t ScaleMax = 16;
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

bool SetupBlockSize(JpegInfo* pInfo, const uint8_t* pData, size_t size) {
  JpegScanHeader scan = {};
  size_t offset;
  if (!ReadScanHeader(&scan, &offset, pData, size, 0, pInfo)) {
    return false;
  }
  pInfo->scanComponentCount = scan.componentCount;
  pInfo->isPartialScan = scan.componentCount < pInfo->componentCount;

  // A scaled DCT of size N ends its first scan at N * N - 1.
  uint32_t blockSize = BlockSize;
  uint32_t spectralEnd = SpectralEnd;
  if (scan.componentCount == 0) {
    switch (scan.spectralEnd) {
      case 0: blockSize = 1; spectralEnd = 0; break;
      case 3: blockSize = 2; spectralEnd = 3; break;
      case 8: blockSize = 3; spectralEnd = 8; break;
      case 15: blockSize = 4; spectralEnd = 15; break;
      case 24: blockSize = 5; spectralEnd = 24; break;
      case 35: blockSize = 6; spectralEnd = 35; break;
      case 48: blockSize = 7; spectralEnd = 48; break;
      case 63: break;
      case 80: blockSize = 9; break;
      case 99: blockSize = 10; break;
      case 120: blockSize = 11; break;
      case 143: blockSize = 12; break;
      case 168: blockSize = 13; break;
      case 195: blockSize = 14; break;
      case 224: blockSize = 15; break;
      default: return false;
    }
  }
  pInfo->spectralEnd = spectralEnd;
  pInfo->blockSize = blockSize;
  return true;
}

namespace {

inline void MarkTable(uint8_t* pMask, int* pCount, int index) {
  uint8_t bit = 1 << index;
  if (*pMask & bit) {
    bit = 0;
  }
  else {
    ++*pCount;
  }
  *pMask |= bit;
}

}

// Counts the distinct Huffman tables the scans refer to, DC tables in the
// low four bits and AC tables in the high four bits.
bool CountScanTables(JpegInfo* pInfo, const uint8_t* pData, size_t size) {
  const uint16_t frameMarker = pInfo->frameMarker;
  size_t offset = 0;
  JpegScanHeader scan = {};
  bool isFound = ReadScanHeader(&scan, &offset, pData, size, 0, pInfo);
  uint8_t mask = 0;
  int count = 0;
  if (frameMarker == MarkerSof0) {
    if (!isFound) {
      return false;
    }
    do {
      for (int i = 0; i < scan.componentCount; ++i) {
        const uint8_t tables = scan.components[i].tables;
        MarkTable(&mask, &count, tables >> 4);
        if (pInfo->spectralEnd != 0) {
          MarkTable(&mask, &count, (tables & 0xf) + 4);
        }
      }
      scan = {};
    } while (ReadScanHeader(&scan, &offset, pData, size, offset, pInfo));
  }
  else {
    if (!isFound) {
      return false;
    }
    do {
      if (scan.componentCount != 0) {
        if (scan.spectralStart != 0) {
          for (int i = 0; i < scan.componentCount; ++i) {
            MarkTable(&mask, &count, (scan.components[i].tables & 0xf) + 4);
          }
        }
        else if (scan.approximation == 0) {
          for (int i = 0; i < scan.componentCount; ++i) {
            MarkTable(&mask, &count, scan.components[i].tables >> 4);
          }
        }
      }
      scan = {};
    } while (ReadScanHeader(&scan, &offset, pData, size, offset, pInfo));
  }

  if (count == 0 || scan.marker != 0) {
    return false;
  }
  pInfo->scanTableCount = count;
  return true;
}

JpegStatus ReadJpegHeader(JpegInfo* pInfo, const uint8_t* pData, size_t size,
  unsigned int resolutionDenominator) {
  size_t eoiOffset;
  size_t offset;
  if (!SearchJpegMarker(&eoiOffset, pData, size, 0, MarkerEoi) ||
    !SearchJpegMarker(&offset, pData, size, 0, MarkerDqt)) {
    return JpegStatus_WrongFormat;
  }

  uint32_t quantizationMask = 0;
  int quantizationCount = 0;
  size_t position;
  do {
    position = offset + 4;
    if (position > size) {
      return JpegStatus_WrongFormat;
    }
    const uint32_t length = ReadUint16Big(pData + offset + 2);
    if (length < 2 || offset + 2 + length > size) {
      return JpegStatus_WrongFormat;
    }
    for (size_t remaining = length - 2; remaining != 0;) {
      const uint8_t header = pData[position];
      const uint32_t id = header & 0xf;
      const size_t tableSize = (header >> 4) * 64 + 64;
      if (id > 3 || remaining <= tableSize) {
        return JpegStatus_WrongFormat;
      }
      uint32_t bit = 1u << id;
      position += tableSize + 1;
      if (quantizationMask & bit) {
        bit = 0;
      }
      else {
        ++quantizationCount;
      }
      remaining -= tableSize + 1;
      quantizationMask |= bit;
    }
  } while (SearchJpegMarker(&offset, pData, size, position, MarkerDqt));
  if (quantizationCount == 0) {
    return JpegStatus_WrongFormat;
  }
  pInfo->quantizationTableCount = quantizationCount;
  pInfo->quantizationTableMask = quantizationMask;

  uint16_t frameMarker;
  if (SearchJpegMarker(&offset, pData, size, 0, MarkerSof0)) {
    frameMarker = MarkerSof0;
  }
  else if (SearchJpegMarker(&offset, pData, size, 0, MarkerSof2)) {
    frameMarker = MarkerSof2;
  }
  else if (SearchJpegMarker(&offset, pData, size, 0, MarkerSof6)) {
    frameMarker = MarkerSof6;
  }
  else if (SearchJpegMarker(&offset, pData, size, 0, MarkerSof10)) {
    frameMarker = MarkerSof10;
  }
  else if (SearchJpegMarker(&offset, pData, size, 0, MarkerSof14)) {
    frameMarker = MarkerSof14;
  }
  else {
    return JpegStatus_UnsupportedFormat;
  }
  if (!SearchJpegMarker(&offset, pData, size, 0, frameMarker)) {
    return JpegStatus_WrongFormat;
  }

  const size_t frameOffset = offset;
  if (frameOffset + 4 > size) {
    return JpegStatus_WrongFormat;
  }
  const uint8_t* pFrame = pData + frameOffset;
  pInfo->frameMarker = ReadUint16Big(pFrame);
  const uint32_t frameLength = ReadUint16Big(pFrame + 2);
  pInfo->frameLength = frameLength;
  if (frameLength < 8 || frameOffset + 2 + frameLength > size) {
    return JpegStatus_WrongFormat;
  }
  pInfo->precision = pData[frameOffset + 4];
  pInfo->imageHeight = ReadUint16Big(pFrame + 5);
  pInfo->imageWidth = ReadUint16Big(pFrame + 7);
  const uint8_t componentCount = pFrame[9];
  pInfo->componentCount = componentCount;
  if (static_cast<uint8_t>(componentCount - 1) > 3 ||
    frameLength != static_cast<uint8_t>(componentCount * 3 + 8)) {
    return JpegStatus_WrongFormat;
  }

  pInfo->maxHorizontalSampling = 0;
  pInfo->maxVerticalSampling = 0;
  uint32_t maxHorizontal = 0;
  uint32_t maxVertical = 0;
  for (int i = 0; i < componentCount; ++i) {
    JpegComponentInfo& component = pInfo->components[i];
    const uint8_t* pComponent = pFrame + 10 + i * 3;
    component.id = pComponent[0];
    const uint8_t sampling = pComponent[1];
    component.horizontalSampling = sampling >> 4;
    component.verticalSampling = sampling & 0xf;
    if ((sampling >> 4) == 0 || (sampling & 0xf) == 0) {
      return JpegStatus_WrongFormat;
    }
    maxHorizontal = std::max<uint32_t>(maxHorizontal, sampling >> 4);
    maxVertical = std::max<uint32_t>(maxVertical, sampling & 0xf);
    pInfo->maxHorizontalSampling = maxHorizontal;
    pInfo->maxVerticalSampling = maxVertical;
    component.quantizationTable = pComponent[2];
    if (((pInfo->quantizationTableMask >> component.quantizationTable) & 1) ==
      0) {
      return JpegStatus_WrongFormat;
    }
  }
  if (maxHorizontal == 0) {
    return JpegStatus_WrongFormat;
  }

  pInfo->hasJfifMarker = false;
  size_t next = 0;
  if (SearchJpegMarker(&offset, pData, size, 0, MarkerApp0)) {
    const uint32_t length = ReadUint16Big(pData + offset + 2);
    if (length < 2 || offset + 2 + length > size) {
      return JpegStatus_WrongFormat;
    }
    position = offset + 4;
    if (length - 2 >= sizeof(JfifIdentifier) &&
      memcmp(pData + position, JfifIdentifier, sizeof(JfifIdentifier)) == 0) {
      pInfo->hasJfifMarker = true;
    }
    next = position + static_cast<uint16_t>(length - 2);
  }
  else {
    next = offset;
  }

  pInfo->hasAdobeMarker = false;
  if (SearchJpegMarker(&offset, pData, size, next, MarkerApp14)) {
    do {
      if (pInfo->hasAdobeMarker) {
        break;
      }
      const uint32_t length = ReadUint16Big(pData + offset + 2);
      if (length < 2 || offset + 2 + length > size) {
        return JpegStatus_WrongFormat;
      }
      position = offset + 4;
      if (length - 2 >= 12 && memcmp(pData + position, AdobeIdentifier,
        sizeof(AdobeIdentifier)) == 0) {
        pInfo->hasAdobeMarker = true;
        pInfo->adobeTransform = pData[position + 11];
      }
      next = position + static_cast<uint16_t>(length - 2);
    } while (SearchJpegMarker(&offset, pData, size, next, MarkerApp14));
  }

  int colorSpace = pInfo->componentCount;
  if (colorSpace != ColorSpaceGrayscale) {
    if (colorSpace == 4) {
      if (pInfo->hasAdobeMarker) {
        colorSpace = pInfo->adobeTransform != 0 ? ColorSpaceYcck :
          ColorSpaceCmyk;
      }
    }
    else if (colorSpace != 3) {
      return JpegStatus_WrongFormat;
    }
    else if (pInfo->hasJfifMarker) {
      colorSpace = ColorSpaceYCbCr;
    }
    else if (pInfo->hasAdobeMarker) {
      colorSpace = pInfo->adobeTransform == 0 ? ColorSpaceRgb :
        ColorSpaceYCbCr;
    }
    else {
      const JpegComponentInfo* components = pInfo->components;
      if (components[0].id == 1 && components[1].id == 2 &&
        components[2].id == 3) {
        colorSpace = ColorSpaceYCbCr;
      }
      else if (components[2].id == 'B' && components[1].id == 'G' &&
        components[0].id == 'R') {
        colorSpace = ColorSpaceRgb;
      }
      else {
        colorSpace = ColorSpaceYCbCr;
      }
    }
  }
  pInfo->reservedA2 = false;
  pInfo->outputColorSpace = ColorSpaceRgb;
  pInfo->colorSpace = colorSpace;
  pInfo->outputComponentCount = RgbComponentCount;

  if (!SearchJpegMarker(&offset, pData, size, 0, MarkerDht)) {
    return JpegStatus_WrongFormat;
  }
  uint32_t huffmanMask = 0;
  int huffmanCount = 0;
  do {
    position = offset + 4;
    if (position > size) {
      return JpegStatus_WrongFormat;
    }
    const uint32_t length = ReadUint16Big(pData + offset + 2);
    if (length < 2 || offset + 2 + length > size) {
      return JpegStatus_WrongFormat;
    }
    for (size_t remaining = length - 2; remaining != 0;) {
      if (position + 17 > size) {
        return JpegStatus_WrongFormat;
      }
      const uint8_t* pTable = pData + position;
      if ((pTable[0] & 0xec) != 0) {
        return JpegStatus_WrongFormat;
      }
      size_t tableSize = 17;
      for (int i = 1; i <= 16; ++i) {
        tableSize += pTable[i];
      }
      if (remaining < tableSize) {
        return JpegStatus_WrongFormat;
      }
      uint32_t bit = 1u << pTable[0];
      position += tableSize;
      if (huffmanMask & bit) {
        bit = 0;
      }
      else {
        ++huffmanCount;
      }
      remaining -= tableSize;
      huffmanMask |= bit;
    }
  } while (SearchJpegMarker(&offset, pData, size, position, MarkerDht));
  if (huffmanCount == 0) {
    return JpegStatus_WrongFormat;
  }
  pInfo->huffmanTableCount = huffmanCount;
  pInfo->huffmanTableMask = huffmanMask;

  if (!SetupBlockSize(pInfo, pData, size) ||
    !CountScanTables(pInfo, pData, size)) {
    return JpegStatus_WrongFormat;
  }

  const int blockSize = pInfo->blockSize;
  long scale = nndetailImageJpeg_jdiv_round_up(blockSize,
    static_cast<int>(std::min(resolutionDenominator, pInfo->blockSize)));
  if (scale < 1) {
    scale = 1;
  }
  if (scale >= ScaleMax) {
    scale = ScaleMax;
  }
  pInfo->width = nndetailImageJpeg_jdiv_round_up(scale * pInfo->imageWidth,
    pInfo->blockSize);
  pInfo->height = nndetailImageJpeg_jdiv_round_up(scale * pInfo->imageHeight,
    pInfo->blockSize);
  SetupOutputScale(pInfo, scale);
  return JpegStatus_Ok;
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
