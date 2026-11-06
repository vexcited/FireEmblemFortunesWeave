#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/image_exif_extractor.hpp"
#include "nn/image/image_types.hpp"

namespace nn::image {

class ExifBuilder {
public:
  ExifBuilder(void* pWorkBuffer, size_t workBufferSize);
  virtual ~ExifBuilder();

  static size_t GetWorkBufferSize();

  void SetOrientation(ExifOrientation orientation);
  void SetSoftware(const char* pSoftware, size_t size);
  void SetDateTime(const char* pDateTime, size_t size);
  void SetMakerNote(const void* pMakerNote, size_t size);
  void SetUniqueId(const char* pUniqueId, size_t size);
  void SetThumbnail(const void* pThumbnail, size_t size);

  JpegStatus Analyze();
  size_t GetAnalyzedOutputSize() const;
  void Build(void* pOutExifData, size_t exifSize, const Dimension& dimension);

private:
  int m_State;
  void* m_pWorkBuffer;
  uint16_t m_OutputSize;
};

}
