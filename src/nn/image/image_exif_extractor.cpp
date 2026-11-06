#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/image/detail/image_exif_binary.hpp"
#include "nn/image/image_exif_extractor.hpp"

namespace nn::image {

namespace {

using detail::IfdTag;
using detail::IfdTagType_Ascii;
using detail::IfdTagType_Long;
using detail::IfdTagType_Short;
using detail::IfdTagType_ShortOrLong;
using detail::IfdTagType_Undefined;

enum State {
  State_Initialized = 0,
  State_DataSet = 1,
  State_Analyzed = 2,
};

enum Ifd0Tag {
  Ifd0Tag_Make,
  Ifd0Tag_Model,
  Ifd0Tag_Orientation,
  Ifd0Tag_Software,
  Ifd0Tag_DateTime,
  Ifd0Tag_ExifIfdPointer,
  Ifd0Tag_GpsIfdPointer,
  Ifd0Tag_Count,
};

enum ExifIfdTag {
  ExifIfdTag_MakerNote,
  ExifIfdTag_PixelXDimension,
  ExifIfdTag_PixelYDimension,
  ExifIfdTag_ImageUniqueId,
  ExifIfdTag_Count,
};

enum Ifd1Tag {
  Ifd1Tag_Compression,
  Ifd1Tag_JpegInterchangeFormat,
  Ifd1Tag_JpegInterchangeFormatLength,
  Ifd1Tag_Count,
};

const uint16_t DateTimeLength = 20;
const uint16_t UniqueIdLength = 33;
const uint16_t CompressionJpeg = 6;

struct ExtractorWork {
  detail::ExifBinary exif;
  detail::IfdHeader ifd0;
  IfdTag ifd0Tags[Ifd0Tag_Count];
  detail::IfdHeader exifIfd;
  IfdTag exifIfdTags[ExifIfdTag_Count];
  detail::IfdHeader ifd1;
  IfdTag ifd1Tags[Ifd1Tag_Count];
};

void SetTag(IfdTag* pOutTag, uint16_t id, detail::IfdTagType type,
  uint16_t count) {
  IfdTag tag = {id, type, count, 0};
  *pOutTag = tag;
}

ExtractorWork* GetWork(void* pWorkBuffer) {
  return static_cast<ExtractorWork*>(pWorkBuffer);
}

[[gnu::always_inline]] inline
const char* GetAsciiTag(size_t* pOutSize, const ExtractorWork& work,
  const IfdTag& tag) {
  uint16_t count = tag.count;
  if (count == 0) {
    return nullptr;
  }

  const char* pString =
    reinterpret_cast<const char*>(work.exif.pData + tag.offset);
  for (uint16_t i = 0; i < count - 1; ++i) {
    if (static_cast<int8_t>(pString[i]) < 0) {
      return nullptr;
    }
  }
  if (pString[count - 1] != '\0') {
    return nullptr;
  }
  *pOutSize = count;
  return pString;
}

[[gnu::always_inline]] inline
const char* GetFixedAsciiTag(size_t* pOutSize,
  const ExtractorWork& work, const IfdTag& tag, uint16_t length) {
  if (tag.count != length) {
    return nullptr;
  }

  const char* pString =
    reinterpret_cast<const char*>(work.exif.pData + tag.offset);
  for (int i = 0; i < length - 1; ++i) {
    if (static_cast<int8_t>(pString[i]) < 0) {
      return nullptr;
    }
  }
  if (pString[length - 1] != '\0') {
    return nullptr;
  }
  *pOutSize = length;
  return pString;
}

[[gnu::always_inline]] inline
bool GetDimensionValue(uint16_t* pOutValue, const ExtractorWork& work,
  const IfdTag& tag) {
  const uint8_t* pValue = work.exif.pData + tag.offset;
  if (tag.type == IfdTagType_Short) {
    *pOutValue = work.exif.io.ReadUint16(pValue);
    return true;
  }

  uint32_t value = work.exif.io.ReadUint32(pValue);
  if (value > 0xffff) {
    return false;
  }
  *pOutValue = value;
  return true;
}

}

ExifExtractor::ExifExtractor(void* pWorkBuffer, size_t workBufferSize)
  : m_State(State_Initialized), m_pWorkBuffer(pWorkBuffer) {}

ExifExtractor::~ExifExtractor() {}

size_t ExifExtractor::GetWorkBufferSize() {
  return sizeof(ExtractorWork);
}

void ExifExtractor::SetExifData(const void* pExifData, size_t exifSize) {
  m_pExifData = pExifData;
  m_ExifSize = exifSize;
  m_State = State_DataSet;
}

JpegStatus ExifExtractor::Analyze() {
  NN_ABORT_UNLESS(m_State >= State_DataSet);

  ExtractorWork* pWork = GetWork(m_pWorkBuffer);
  pWork->exif.pData = static_cast<const uint8_t*>(m_pExifData);
  pWork->exif.size = m_ExifSize;
  SetTag(&pWork->ifd0Tags[Ifd0Tag_Make], 0x10f, IfdTagType_Ascii, 0);
  SetTag(&pWork->ifd0Tags[Ifd0Tag_Model], 0x110, IfdTagType_Ascii, 0);
  SetTag(&pWork->ifd0Tags[Ifd0Tag_Orientation], 0x112, IfdTagType_Short, 1);
  SetTag(&pWork->ifd0Tags[Ifd0Tag_Software], 0x131, IfdTagType_Ascii, 0);
  SetTag(&pWork->ifd0Tags[Ifd0Tag_DateTime],
    0x132, IfdTagType_Ascii, DateTimeLength);
  SetTag(&pWork->ifd0Tags[Ifd0Tag_ExifIfdPointer], 0x8769, IfdTagType_Long, 1);
  SetTag(&pWork->ifd0Tags[Ifd0Tag_GpsIfdPointer], 0x8825, IfdTagType_Long, 1);
  SetTag(&pWork->exifIfdTags[ExifIfdTag_MakerNote],
    0x927c, IfdTagType_Undefined, 0);
  SetTag(&pWork->exifIfdTags[ExifIfdTag_PixelXDimension],
    0xa002, IfdTagType_ShortOrLong, 1);
  SetTag(&pWork->exifIfdTags[ExifIfdTag_PixelYDimension],
    0xa003, IfdTagType_ShortOrLong, 1);
  SetTag(&pWork->exifIfdTags[ExifIfdTag_ImageUniqueId],
    0xa420, IfdTagType_Ascii, UniqueIdLength);
  SetTag(&pWork->ifd1Tags[Ifd1Tag_Compression], 0x103, IfdTagType_Short, 1);
  SetTag(&pWork->ifd1Tags[Ifd1Tag_JpegInterchangeFormat],
    0x201, IfdTagType_Long, 1);
  SetTag(&pWork->ifd1Tags[Ifd1Tag_JpegInterchangeFormatLength],
    0x202, IfdTagType_Long, 1);

  uint16_t ifdOffset = 0;
  if (!detail::ReadTiffHeader(&pWork->exif.io, &ifdOffset, pWork->exif.pData,
    pWork->exif.size)) {
    return JpegStatus_WrongFormat;
  }
  if (!detail::ReadIfdHeader(&pWork->ifd0, ifdOffset, pWork->exif)) {
    return JpegStatus_WrongFormat;
  }
  if (!detail::SearchIfdTags(pWork->ifd0Tags, Ifd0Tag_Count, pWork->ifd0,
    pWork->exif)) {
    return JpegStatus_WrongFormat;
  }

  const IfdTag& exifPointer = pWork->ifd0Tags[Ifd0Tag_ExifIfdPointer];
  if (exifPointer.offset != 0) {
    uint32_t offset =
      pWork->exif.io.ReadUint32(pWork->exif.pData + exifPointer.offset);
    if (offset >= pWork->exif.size) {
      return JpegStatus_WrongFormat;
    }
    if (!detail::ReadIfdHeader(&pWork->exifIfd, offset, pWork->exif)) {
      return JpegStatus_WrongFormat;
    }
    if (!detail::SearchIfdTags(pWork->exifIfdTags, ExifIfdTag_Count,
      pWork->exifIfd, pWork->exif)) {
      return JpegStatus_WrongFormat;
    }
  }
  else {
    for (IfdTag& tag : pWork->exifIfdTags) {
      tag.count = 0;
      tag.offset = 0;
    }
  }

  if (pWork->ifd0.nextOffset != 0) {
    if (!detail::ReadIfdHeader(&pWork->ifd1, pWork->ifd0.nextOffset,
      pWork->exif)) {
      return JpegStatus_WrongFormat;
    }
    if (!detail::SearchIfdTags(pWork->ifd1Tags, Ifd1Tag_Count, pWork->ifd1,
      pWork->exif)) {
      return JpegStatus_WrongFormat;
    }
  }
  else {
    for (IfdTag& tag : pWork->ifd1Tags) {
      tag.count = 0;
      tag.offset = 0;
    }
  }

  m_State = State_Analyzed;
  return JpegStatus_Ok;
}

const char* ExifExtractor::ExtractMaker(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  return GetAsciiTag(pOutSize, work, work.ifd0Tags[Ifd0Tag_Make]);
}

const char* ExifExtractor::ExtractModel(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  return GetAsciiTag(pOutSize, work, work.ifd0Tags[Ifd0Tag_Model]);
}

bool ExifExtractor::ExtractOrientation(
  ExifOrientation* pOutOrientation) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  const IfdTag& tag = work.ifd0Tags[Ifd0Tag_Orientation];
  if (tag.count != 1) {
    return false;
  }

  uint16_t value = work.exif.io.ReadUint16(work.exif.pData + tag.offset);
  if (value < 1 || value > 8) {
    return false;
  }
  *pOutOrientation = static_cast<ExifOrientation>(value);
  return true;
}

const char* ExifExtractor::ExtractSoftware(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  return GetAsciiTag(pOutSize, work, work.ifd0Tags[Ifd0Tag_Software]);
}

const char* ExifExtractor::ExtractDateTime(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  return GetFixedAsciiTag(pOutSize, work, work.ifd0Tags[Ifd0Tag_DateTime],
    DateTimeLength);
}

const void* ExifExtractor::ExtractMakerNote(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  const IfdTag& tag = work.exifIfdTags[ExifIfdTag_MakerNote];
  if (tag.count == 0) {
    return nullptr;
  }
  *pOutSize = tag.count;
  return work.exif.pData + tag.offset;
}

bool ExifExtractor::ExtractEffectiveDimension(Dimension* pOutDimension) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  const IfdTag& widthTag = work.exifIfdTags[ExifIfdTag_PixelXDimension];
  const IfdTag& heightTag = work.exifIfdTags[ExifIfdTag_PixelYDimension];
  if (widthTag.count != 1 || heightTag.count != 1) {
    return false;
  }

  uint16_t width;
  if (!GetDimensionValue(&width, work, widthTag)) {
    return false;
  }
  uint16_t height;
  if (!GetDimensionValue(&height, work, heightTag)) {
    return false;
  }
  pOutDimension->width = width;
  pOutDimension->height = height;
  return true;
}

const char* ExifExtractor::ExtractUniqueId(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  return GetFixedAsciiTag(pOutSize, work,
    work.exifIfdTags[ExifIfdTag_ImageUniqueId], UniqueIdLength);
}

const void* ExifExtractor::ExtractThumbnail(size_t* pOutSize) const {
  const ExtractorWork& work = *GetWork(m_pWorkBuffer);
  const IfdTag& compression = work.ifd1Tags[Ifd1Tag_Compression];
  const IfdTag& offsetTag = work.ifd1Tags[Ifd1Tag_JpegInterchangeFormat];
  const IfdTag& sizeTag = work.ifd1Tags[Ifd1Tag_JpegInterchangeFormatLength];
  if (compression.count != 1 || offsetTag.count != 1 || sizeTag.count != 1) {
    return nullptr;
  }
  if (work.exif.io.ReadUint16(work.exif.pData + compression.offset) !=
    CompressionJpeg) {
    return nullptr;
  }

  uint32_t offset = work.exif.io.ReadUint32(work.exif.pData + offsetTag.offset);
  uint32_t size = work.exif.io.ReadUint32(work.exif.pData + sizeTag.offset);
  if (offset > work.exif.size || size > work.exif.size ||
    offset + size > work.exif.size) {
    return nullptr;
  }
  *pOutSize = size;
  return work.exif.pData + offset;
}

}
