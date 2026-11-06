#include "nn/diag/unexpected_default.hpp"
#include "nn/image/detail/image_exif_binary.hpp"

namespace nn::image::detail {

namespace {

const uint16_t MinTiffSize = 14;
const uint16_t MaxExifSize = 0xfff7;
const uint16_t IfdTagSize = 12;
const uint16_t TiffMagic = 42;

uint16_t ReadUint16Little(const void* pData) {
  return *static_cast<const uint16_t*>(pData);
}

uint32_t ReadUint32Little(const void* pData) {
  return *static_cast<const uint32_t*>(pData);
}

void WriteUint16Little(void* pData, uint16_t value) {
  *static_cast<uint16_t*>(pData) = value;
}

void WriteUint32Little(void* pData, uint32_t value) {
  *static_cast<uint32_t*>(pData) = value;
}

uint16_t ReadUint16Big(const void* pData) {
  return __builtin_bswap16(*static_cast<const uint16_t*>(pData));
}

uint32_t ReadUint32Big(const void* pData) {
  return __builtin_bswap32(*static_cast<const uint32_t*>(pData));
}

void WriteUint16Big(void* pData, uint16_t value) {
  *static_cast<uint16_t*>(pData) = __builtin_bswap16(value);
}

void WriteUint32Big(void* pData, uint32_t value) {
  *static_cast<uint32_t*>(pData) = __builtin_bswap32(value);
}

void SetLittleEndianIo(BinaryIo* pIo) {
  pIo->ReadUint16 = ReadUint16Little;
  pIo->ReadUint32 = ReadUint32Little;
  pIo->WriteUint16 = WriteUint16Little;
  pIo->WriteUint32 = WriteUint32Little;
}

void SetBigEndianIo(BinaryIo* pIo) {
  pIo->ReadUint16 = ReadUint16Big;
  pIo->ReadUint32 = ReadUint32Big;
  pIo->WriteUint16 = WriteUint16Big;
  pIo->WriteUint32 = WriteUint32Big;
}

bool IsValidOffset(uint32_t offset, uint16_t size) {
  return offset >= 8 && offset <= static_cast<uint32_t>(size - 6);
}

uint32_t GetTypeSize(IfdTagType type) {
  switch (type) {
    case IfdTagType_Byte:
    case IfdTagType_Ascii:
    case IfdTagType_Undefined:
      return 1;
    case IfdTagType_Short:
      return 2;
    case IfdTagType_Long:
    case IfdTagType_SignedLong:
      return 4;
    case IfdTagType_Rational:
    case IfdTagType_SignedRational:
      return 8;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

bool ReadTiffHeader(BinaryIo* pOutIo, uint16_t* pOutIfdOffset,
  const uint8_t* pData, uint16_t size) {
  if (size < MinTiffSize || size > MaxExifSize) {
    return false;
  }

  switch (ReadUint16Big(pData)) {
    case Endian_Little:
      SetLittleEndianIo(pOutIo);
      break;
    case Endian_Big:
      SetBigEndianIo(pOutIo);
      break;
    default:
      return false;
  }

  if (pOutIo->ReadUint16(pData + 2) != TiffMagic) {
    return false;
  }

  uint32_t offset = pOutIo->ReadUint32(pData + 4);
  if (!IsValidOffset(offset, size)) {
    return false;
  }
  *pOutIfdOffset = offset;
  return true;
}

bool ReadIfdHeader(IfdHeader* pOutHeader, uint16_t offset,
  const ExifBinary& exif) {
  if (!IsValidOffset(offset, exif.size)) {
    return false;
  }

  uint16_t tagCount = exif.io.ReadUint16(exif.pData + offset);
  uint32_t end = offset + IfdTagSize * tagCount + 2;
  if (end + 4 > exif.size) {
    return false;
  }

  uint32_t nextOffset = exif.io.ReadUint32(exif.pData + end);
  if (nextOffset != 0 && !IsValidOffset(nextOffset, exif.size)) {
    return false;
  }
  pOutHeader->nextOffset = nextOffset;
  pOutHeader->offset = offset;
  pOutHeader->tagCount = tagCount;
  return true;
}

bool SearchIfdTags(IfdTag* pTags, uint16_t tagCount,
  const IfdHeader& header, const ExifBinary& exif) {
  uint32_t tagIndex = 0;
  uint32_t entryIndex = 0;
  while (tagIndex < tagCount && entryIndex < header.tagCount) {
    IfdTag& tag = pTags[tagIndex];
    uint32_t entryOffset = header.offset + IfdTagSize * entryIndex + 2;
    const uint8_t* pEntry = exif.pData + entryOffset;
    uint16_t id = exif.io.ReadUint16(pEntry);
    if (tag.id > id) {
      ++entryIndex;
      continue;
    }

    if (tag.id == id) {
      uint16_t type = exif.io.ReadUint16(pEntry + 2);
      bool isTypeMatched = false;
      if (tag.type == IfdTagType_ShortOrLong) {
        if (type == IfdTagType_Short || type == IfdTagType_Long) {
          tag.type = type == IfdTagType_Short ? IfdTagType_Short :
            IfdTagType_Long;
          isTypeMatched = true;
        }
      }
      else {
        isTypeMatched = tag.type == type;
      }

      if (isTypeMatched) {
        uint32_t count = exif.io.ReadUint32(pEntry + 4);
        if (count < 0xffff && (tag.count == 0 || count == tag.count)) {
          uint32_t valueSize = GetTypeSize(tag.type) * count;
          uint32_t valueOffset = valueSize > 4 ?
            exif.io.ReadUint32(pEntry + 8) : entryOffset + 8;
          if (valueOffset >= exif.size ||
            valueOffset + valueSize > exif.size) {
            return false;
          }
          ++entryIndex;
          ++tagIndex;
          tag.count = count;
          tag.offset = valueOffset;
          continue;
        }
      }
    }

    ++tagIndex;
    tag.count = 0;
    tag.offset = 0;
  }

  for (; tagIndex < tagCount; ++tagIndex) {
    pTags[tagIndex].count = 0;
    pTags[tagIndex].offset = 0;
  }
  return true;
}

void InitializeTiffHeader(TiffHeader* pOutHeader, Endian endian) {
  switch (endian) {
    case Endian_Little:
      SetLittleEndianIo(&pOutHeader->io);
      break;
    case Endian_Big:
      SetBigEndianIo(&pOutHeader->io);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  pOutHeader->endian = endian;
  pOutHeader->ifdOffset = 8;
}

void WriteTiffHeader(uint8_t* pOutData, uint16_t size,
  const TiffHeader& header) {
  header.io.WriteUint16(pOutData, header.endian);
  header.io.WriteUint16(pOutData + 2, TiffMagic);
  header.io.WriteUint32(pOutData + 4, header.ifdOffset);
}

void WriteIfd(uint8_t* pOutData, uint16_t size, const ValuedIfdTag* pTags,
  const IfdHeader& header, const BinaryIo& io) {
  uint32_t offset = header.offset;
  io.WriteUint16(pOutData + offset, header.tagCount);

  uint32_t entryOffset = offset + 2;
  uint32_t valueOffset = offset + IfdTagSize * header.tagCount + 6;
  for (int i = 0; i < header.tagCount; ++i) {
    const IfdTag& tag = pTags[i].tag;
    uint8_t* pEntry = pOutData + entryOffset;
    io.WriteUint16(pEntry, tag.id);
    io.WriteUint16(pEntry + 2, tag.type);
    io.WriteUint32(pEntry + 4, tag.count);

    uint32_t typeSize = GetTypeSize(tag.type);
    uint32_t dataOffset;
    if (typeSize * tag.count > 4) {
      io.WriteUint32(pEntry + 8, valueOffset);
      dataOffset = valueOffset;
      valueOffset += typeSize * tag.count;
    }
    else {
      io.WriteUint32(pEntry + 8, 0);
      dataOffset = entryOffset + 8;
    }

    if (tag.count != 0 && dataOffset != 0) {
      uint8_t* pValue = pOutData + dataOffset;
      const void* pRawSource = pTags[i].pValue;
      switch (tag.type) {
        case IfdTagType_Byte:
        case IfdTagType_Undefined: {
          const uint8_t* pSource = static_cast<const uint8_t*>(pRawSource);
          for (int j = 0; j < tag.count; ++j) {
            pValue[j * typeSize] = pSource[j];
          }
          break;
        }
        case IfdTagType_Ascii: {
          const int8_t* pSource = static_cast<const int8_t*>(pRawSource);
          for (uint16_t j = 0; j < tag.count - 1; ++j) {
            int8_t c = pSource[j];
            pValue[j * typeSize] = c < 0 ? ' ' : c;
          }
          pValue[(tag.count - 1) * typeSize] = '\0';
          break;
        }
        case IfdTagType_Short: {
          const uint16_t* pSource = static_cast<const uint16_t*>(pRawSource);
          for (int j = 0; j < tag.count; ++j) {
            io.WriteUint16(pValue + j * typeSize, pSource[j]);
          }
          break;
        }
        case IfdTagType_Long:
        case IfdTagType_SignedLong: {
          const uint32_t* pSource = static_cast<const uint32_t*>(pRawSource);
          for (int j = 0; j < tag.count; ++j) {
            io.WriteUint32(pValue + j * typeSize, pSource[j]);
          }
          break;
        }
        case IfdTagType_Rational:
        case IfdTagType_SignedRational: {
          const uint32_t* pSource = static_cast<const uint32_t*>(pRawSource);
          for (int j = 0; j < tag.count; ++j) {
            io.WriteUint32(pValue + j * typeSize, pSource[2 * j]);
            io.WriteUint32(pValue + j * typeSize + 4, pSource[2 * j + 1]);
          }
          break;
        }
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    }
    entryOffset += IfdTagSize;
  }
  io.WriteUint32(pOutData + entryOffset, header.nextOffset);
}

bool InitializeIfdHeader(IfdHeader* pOutHeader, const ValuedIfdTag* pTags,
  uint16_t tagCount, uint16_t offset) {
  uint32_t end = IfdTagSize * tagCount + offset + 6;
  if (end > MaxExifSize) {
    return false;
  }

  for (int i = 0; i < tagCount; ++i) {
    const IfdTag& tag = pTags[i].tag;
    uint32_t valueSize = GetTypeSize(tag.type) * tag.count;
    if (valueSize > 4) {
      if (end + valueSize > MaxExifSize) {
        return false;
      }
      end += valueSize;
    }
  }
  pOutHeader->offset = offset;
  pOutHeader->tagCount = tagCount;
  pOutHeader->nextOffset = end;
  return true;
}

}
