#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/image_types.hpp"

namespace nn::image {

enum ExifOrientation : int32_t {
  ExifOrientation_Normal = 1,
};

class ExifExtractor {
public:
  ExifExtractor(void* pWorkBuffer, size_t workBufferSize);
  virtual ~ExifExtractor();

  static size_t GetWorkBufferSize();

  void SetExifData(const void* pExifData, size_t exifSize);
  JpegStatus Analyze();

  const char* ExtractMaker(size_t* pOutSize) const;
  const char* ExtractModel(size_t* pOutSize) const;
  bool ExtractOrientation(ExifOrientation* pOutOrientation) const;
  const char* ExtractSoftware(size_t* pOutSize) const;
  const char* ExtractDateTime(size_t* pOutSize) const;
  const void* ExtractMakerNote(size_t* pOutSize) const;
  bool ExtractEffectiveDimension(Dimension* pOutDimension) const;
  const char* ExtractUniqueId(size_t* pOutSize) const;
  const void* ExtractThumbnail(size_t* pOutSize) const;

private:
  int m_State;
  void* m_pWorkBuffer;
  const void* m_pExifData;
  uint16_t m_ExifSize;
};

}
