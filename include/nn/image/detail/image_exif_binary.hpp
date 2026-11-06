#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::image::detail {

enum Endian : uint16_t {
  Endian_Little = 0x4949,
  Endian_Big = 0x4d4d,
};

enum IfdTagType : int32_t {
  IfdTagType_Byte = 1,
  IfdTagType_Ascii = 2,
  IfdTagType_Short = 3,
  IfdTagType_Long = 4,
  IfdTagType_Rational = 5,
  IfdTagType_Undefined = 7,
  IfdTagType_SignedLong = 9,
  IfdTagType_SignedRational = 10,
  IfdTagType_ShortOrLong = 128,
};

struct BinaryIo {
  uint16_t (*ReadUint16)(const void* pData);
  uint32_t (*ReadUint32)(const void* pData);
  void (*WriteUint16)(void* pData, uint16_t value);
  void (*WriteUint32)(void* pData, uint32_t value);
};

struct TiffHeader {
  Endian endian;
  BinaryIo io;
  uint16_t ifdOffset;
};

struct ExifBinary {
  const uint8_t* pData;
  uint16_t size;
  BinaryIo io;
};

struct IfdHeader {
  uint16_t offset;
  uint16_t tagCount;
  uint16_t nextOffset;
};

struct IfdTag {
  uint16_t id;
  IfdTagType type;
  uint16_t count;
  uint16_t offset;
};

struct ValuedIfdTag {
  IfdTag tag;
  const void* pValue;
};

bool ReadTiffHeader(BinaryIo* pOutIo, uint16_t* pOutIfdOffset,
  const uint8_t* pData, uint16_t size);
bool ReadIfdHeader(IfdHeader* pOutHeader, uint16_t offset,
  const ExifBinary& exif);
void InitializeTiffHeader(TiffHeader* pOutHeader, Endian endian);
void WriteTiffHeader(uint8_t* pOutData, uint16_t size,
  const TiffHeader& header);
bool SearchIfdTags(IfdTag* pTags, uint16_t tagCount,
  const IfdHeader& header, const ExifBinary& exif);
void WriteIfd(uint8_t* pOutData, uint16_t size, const ValuedIfdTag* pTags,
  const IfdHeader& header, const BinaryIo& io);
bool InitializeIfdHeader(IfdHeader* pOutHeader, const ValuedIfdTag* pTags,
  uint16_t tagCount, uint16_t offset);

}
