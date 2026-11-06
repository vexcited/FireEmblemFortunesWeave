#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/image/detail/image_exif_binary.hpp"
#include "nn/image/image_exif_builder.hpp"

namespace nn::image {

namespace {

using detail::IfdTagType;
using detail::IfdTagType_Ascii;
using detail::IfdTagType_Long;
using detail::IfdTagType_Rational;
using detail::IfdTagType_Short;
using detail::IfdTagType_ShortOrLong;
using detail::IfdTagType_Undefined;
using detail::ValuedIfdTag;

enum State {
  State_NeedAnalyze = 1,
  State_Analyzed = 2,
};

const int Ifd0TagCountMax = 11;
const int ExifIfdTagCountMax = 8;
const int Ifd1TagCount = 6;
const uint16_t DateTimeLength = 20;
const uint16_t UniqueIdLength = 33;
const uint32_t MaxExifSize = 0xfff7;

const char MakerName[] = "Nintendo co., ltd";
const uint32_t XResolution[2] = {72, 1};
const uint32_t YResolution[2] = {72, 1};
const uint16_t ResolutionUnit = 2;
const uint16_t YCbCrPositioning = 1;
const uint8_t ExifVersion[4] = {'0', '2', '3', '0'};
const uint8_t ComponentsConfiguration[4] = {1, 2, 3, 0};
const uint8_t FlashpixVersion[4] = {'0', '1', '0', '0'};
const uint16_t ColorSpace = 1;
const uint16_t CompressionJpeg = 6;

struct BuilderWork {
  detail::TiffHeader tiff;
  detail::IfdHeader ifd0;
  ValuedIfdTag ifd0Tags[Ifd0TagCountMax];
  detail::IfdHeader exifIfd;
  ValuedIfdTag exifIfdTags[ExifIfdTagCountMax];
  detail::IfdHeader ifd1;
  ValuedIfdTag ifd1Tags[Ifd1TagCount];
  const char* pSoftware;
  uint16_t softwareSize;
  uint16_t orientation;
  const char* pDateTime;
  uint32_t exifIfdOffset;
  const void* pMakerNote;
  uint16_t makerNoteSize;
  uint16_t width;
  uint16_t height;
  const char* pUniqueId;
  const void* pThumbnail;
  uint32_t thumbnailOffset;
  uint32_t thumbnailSize;
};

BuilderWork* GetWork(void* pWorkBuffer) {
  return static_cast<BuilderWork*>(pWorkBuffer);
}

void SetTag(ValuedIfdTag* pOutTag, uint16_t id, IfdTagType type,
  uint16_t count, const void* pValue) {
  detail::IfdTag tag = {id, type, count, 0};
  pOutTag->tag = tag;
  pOutTag->pValue = pValue;
}

}

ExifBuilder::ExifBuilder(void* pWorkBuffer, size_t workBufferSize)
  : m_State(State_NeedAnalyze), m_pWorkBuffer(pWorkBuffer) {
  BuilderWork* pWork = GetWork(pWorkBuffer);
  pWork->pSoftware = nullptr;
  pWork->softwareSize = 0;
  pWork->orientation = 0;
  pWork->pDateTime = nullptr;
  pWork->exifIfdOffset = 0;
  pWork->pMakerNote = nullptr;
  pWork->makerNoteSize = 0;
  pWork->width = 0;
  pWork->height = 0;
  pWork->pUniqueId = nullptr;
  pWork->pThumbnail = nullptr;
  pWork->thumbnailOffset = 0;
  pWork->thumbnailSize = 0;
}

ExifBuilder::~ExifBuilder() {}

size_t ExifBuilder::GetWorkBufferSize() {
  return sizeof(BuilderWork);
}

void ExifBuilder::SetOrientation(ExifOrientation orientation) {
  GetWork(m_pWorkBuffer)->orientation = orientation;
  m_State = State_NeedAnalyze;
}

void ExifBuilder::SetSoftware(const char* pSoftware, size_t size) {
  BuilderWork* pWork = GetWork(m_pWorkBuffer);
  pWork->pSoftware = pSoftware;
  pWork->softwareSize = pSoftware != nullptr ? size : 0;
  m_State = State_NeedAnalyze;
}

void ExifBuilder::SetDateTime(const char* pDateTime, size_t size) {
  GetWork(m_pWorkBuffer)->pDateTime = pDateTime;
  m_State = State_NeedAnalyze;
}

void ExifBuilder::SetMakerNote(const void* pMakerNote, size_t size) {
  BuilderWork* pWork = GetWork(m_pWorkBuffer);
  pWork->pMakerNote = pMakerNote;
  pWork->makerNoteSize = pMakerNote != nullptr ? size : 0;
  m_State = State_NeedAnalyze;
}

void ExifBuilder::SetUniqueId(const char* pUniqueId, size_t size) {
  GetWork(m_pWorkBuffer)->pUniqueId = pUniqueId;
  m_State = State_NeedAnalyze;
}

void ExifBuilder::SetThumbnail(const void* pThumbnail, size_t size) {
  BuilderWork* pWork = GetWork(m_pWorkBuffer);
  pWork->pThumbnail = pThumbnail;
  pWork->thumbnailSize = pThumbnail != nullptr ? size : 0;
  m_State = State_NeedAnalyze;
}

JpegStatus ExifBuilder::Analyze() {
  BuilderWork* pWork = GetWork(m_pWorkBuffer);
  detail::InitializeTiffHeader(&pWork->tiff, detail::Endian_Big);

  ValuedIfdTag* pIfd0Tags = pWork->ifd0Tags;
  int ifd0TagCount = 0;
  SetTag(&pIfd0Tags[ifd0TagCount], 0x10f, IfdTagType_Ascii, 0, MakerName);
  pIfd0Tags[ifd0TagCount++].tag.count = sizeof(MakerName);
  if (pWork->orientation != 0) {
    SetTag(&pIfd0Tags[ifd0TagCount++], 0x112, IfdTagType_Short, 1,
      &pWork->orientation);
  }
  SetTag(&pIfd0Tags[ifd0TagCount++], 0x11a, IfdTagType_Rational, 1,
    XResolution);
  SetTag(&pIfd0Tags[ifd0TagCount++], 0x11b, IfdTagType_Rational, 1,
    YResolution);
  SetTag(&pIfd0Tags[ifd0TagCount++], 0x128, IfdTagType_Short, 1,
    &ResolutionUnit);
  if (pWork->pSoftware != nullptr) {
    SetTag(&pIfd0Tags[ifd0TagCount], 0x131, IfdTagType_Ascii, 0,
      pWork->pSoftware);
    pIfd0Tags[ifd0TagCount++].tag.count = pWork->softwareSize;
  }
  if (pWork->pDateTime != nullptr) {
    SetTag(&pIfd0Tags[ifd0TagCount++], 0x132, IfdTagType_Ascii,
      DateTimeLength, pWork->pDateTime);
  }
  SetTag(&pIfd0Tags[ifd0TagCount++], 0x213, IfdTagType_Short, 1,
    &YCbCrPositioning);
  SetTag(&pIfd0Tags[ifd0TagCount++], 0x8769, IfdTagType_Long, 1,
    &pWork->exifIfdOffset);
  if (!detail::InitializeIfdHeader(&pWork->ifd0, pIfd0Tags, ifd0TagCount,
    pWork->tiff.ifdOffset)) {
    return JpegStatus_OutputOverabounds;
  }

  uint16_t exifIfdOffset = pWork->ifd0.nextOffset;
  ValuedIfdTag* pExifTags = pWork->exifIfdTags;
  int exifTagCount = 0;
  SetTag(&pExifTags[exifTagCount++], 0x9000, IfdTagType_Undefined, 4,
    ExifVersion);
  SetTag(&pExifTags[exifTagCount++], 0x9101, IfdTagType_Undefined, 4,
    ComponentsConfiguration);
  pWork->exifIfdOffset = exifIfdOffset;
  if (pWork->pMakerNote != nullptr) {
    SetTag(&pExifTags[exifTagCount], 0x927c, IfdTagType_Undefined, 0,
      pWork->pMakerNote);
    pExifTags[exifTagCount++].tag.count = pWork->makerNoteSize;
  }
  SetTag(&pExifTags[exifTagCount++], 0xa000, IfdTagType_Undefined, 4,
    FlashpixVersion);
  SetTag(&pExifTags[exifTagCount++], 0xa001, IfdTagType_Short, 1,
    &ColorSpace);
  SetTag(&pExifTags[exifTagCount], 0xa002, IfdTagType_ShortOrLong, 1,
    &pWork->width);
  pExifTags[exifTagCount++].tag.type = IfdTagType_Short;
  SetTag(&pExifTags[exifTagCount], 0xa003, IfdTagType_ShortOrLong, 1,
    &pWork->height);
  pExifTags[exifTagCount++].tag.type = IfdTagType_Short;
  if (pWork->pUniqueId != nullptr) {
    SetTag(&pExifTags[exifTagCount++], 0xa420, IfdTagType_Ascii,
      UniqueIdLength, pWork->pUniqueId);
  }
  if (!detail::InitializeIfdHeader(&pWork->exifIfd, pExifTags, exifTagCount,
    exifIfdOffset)) {
    return JpegStatus_OutputOverabounds;
  }

  uint16_t ifd1Offset = pWork->exifIfd.nextOffset;
  pWork->exifIfd.nextOffset = 0;
  pWork->ifd0.nextOffset = ifd1Offset;
  if (pWork->pThumbnail == nullptr) {
    m_OutputSize = ifd1Offset;
    pWork->ifd0.nextOffset = 0;
    pWork->ifd1.offset = 0;
    pWork->ifd1.tagCount = 0;
    pWork->ifd1.nextOffset = 0;
    m_State = State_Analyzed;
    return JpegStatus_Ok;
  }

  ValuedIfdTag* pIfd1Tags = pWork->ifd1Tags;
  SetTag(&pIfd1Tags[0], 0x103, IfdTagType_Short, 1, &CompressionJpeg);
  SetTag(&pIfd1Tags[1], 0x11a, IfdTagType_Rational, 1, XResolution);
  SetTag(&pIfd1Tags[2], 0x11b, IfdTagType_Rational, 1, YResolution);
  SetTag(&pIfd1Tags[3], 0x128, IfdTagType_Short, 1, &ResolutionUnit);
  SetTag(&pIfd1Tags[4], 0x201, IfdTagType_Long, 1, &pWork->thumbnailOffset);
  SetTag(&pIfd1Tags[5], 0x202, IfdTagType_Long, 1, &pWork->thumbnailSize);
  if (!detail::InitializeIfdHeader(&pWork->ifd1, pIfd1Tags, Ifd1TagCount,
    ifd1Offset)) {
    return JpegStatus_OutputOverabounds;
  }

  uint16_t thumbnailOffset = pWork->ifd1.nextOffset;
  uint32_t outputSize = thumbnailOffset + pWork->thumbnailSize;
  if (outputSize > MaxExifSize) {
    return JpegStatus_OutputOverabounds;
  }
  pWork->thumbnailOffset = thumbnailOffset;
  pWork->ifd1.nextOffset = 0;
  m_OutputSize = outputSize;
  m_State = State_Analyzed;
  return JpegStatus_Ok;
}

size_t ExifBuilder::GetAnalyzedOutputSize() const {
  return m_OutputSize;
}

void ExifBuilder::Build(void* pOutExifData, size_t exifSize,
  const Dimension& dimension) {
  NN_ABORT_UNLESS(m_State >= State_Analyzed);

  BuilderWork* pWork = GetWork(m_pWorkBuffer);
  pWork->width = dimension.width;
  pWork->height = dimension.height;

  uint8_t* pOut = static_cast<uint8_t*>(pOutExifData);
  uint16_t size = exifSize < 0xffff ? exifSize : 0xffff;
  detail::WriteTiffHeader(pOut, size, pWork->tiff);
  detail::WriteIfd(pOut, size, pWork->ifd0Tags, pWork->ifd0, pWork->tiff.io);
  detail::WriteIfd(pOut, size, pWork->exifIfdTags, pWork->exifIfd,
    pWork->tiff.io);
  if (pWork->ifd1.offset != 0) {
    detail::WriteIfd(pOut, size, pWork->ifd1Tags, pWork->ifd1,
      pWork->tiff.io);
    if (pWork->thumbnailOffset != 0) {
      memcpy(pOut + pWork->thumbnailOffset, pWork->pThumbnail,
        pWork->thumbnailSize);
    }
  }
}

}
