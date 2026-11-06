#include <algorithm>
#include <cstring>

#include "movie/detail/movie_buffer_reader.hpp"

namespace movie::detail {

namespace {

template <typename T>
T ReadBigEndian(const uint8_t* data) {
  T value;
  std::memcpy(&value, data, sizeof(T));
  if constexpr (sizeof(T) == 2) {
    return static_cast<T>(__builtin_bswap16(static_cast<uint16_t>(value)));
  }
  else if constexpr (sizeof(T) == 4) {
    return static_cast<T>(__builtin_bswap32(static_cast<uint32_t>(value)));
  }
  else {
    return static_cast<T>(__builtin_bswap64(static_cast<uint64_t>(value)));
  }
}

}

BufferReader::BufferReader()
  : m_Data(nullptr), m_Size(0), m_Current(nullptr), m_Remaining(0) {
}

BufferReader::BufferReader(const uint8_t* data, size_t size)
  : m_Data(data), m_Size(size), m_Current(data), m_Remaining(size) {
}

MovieResult BufferReader::ReadUInt8(uint8_t* pOutValue) {
  if (m_Remaining == 0) {
    return MovieResult_InvalidOperation;
  }

  *pOutValue = *m_Current;
  m_Current++;
  m_Remaining--;
  return MovieResult_Success;
}

MovieResult BufferReader::PeekUInt8(uint8_t* pOutValue) {
  if (m_Remaining == 0) {
    return MovieResult_InvalidOperation;
  }

  *pOutValue = *m_Current;
  return MovieResult_Success;
}

#define MOVIE_BUFFER_READER_ACCESSORS(name, type) \
  MovieResult BufferReader::Read##name(type* pOutValue) { \
    if (m_Remaining < sizeof(type)) { \
      return MovieResult_InvalidOperation; \
    } \
    *pOutValue = ReadBigEndian<type>(m_Current); \
    m_Current += sizeof(type); \
    m_Remaining -= sizeof(type); \
    return MovieResult_Success; \
  } \
  MovieResult BufferReader::Peek##name(type* pOutValue) { \
    if (m_Remaining < sizeof(type)) { \
      return MovieResult_InvalidOperation; \
    } \
    *pOutValue = ReadBigEndian<type>(m_Current); \
    return MovieResult_Success; \
  }

MOVIE_BUFFER_READER_ACCESSORS(Int16, int16_t)
MOVIE_BUFFER_READER_ACCESSORS(UInt16, uint16_t)
MOVIE_BUFFER_READER_ACCESSORS(Int32, int32_t)
MOVIE_BUFFER_READER_ACCESSORS(UInt32, uint32_t)
MOVIE_BUFFER_READER_ACCESSORS(Int64, int64_t)
MOVIE_BUFFER_READER_ACCESSORS(UInt64, uint64_t)

#undef MOVIE_BUFFER_READER_ACCESSORS

MovieResult BufferReader::ReadBuffer(uint8_t* pOutData, size_t size) {
  if (m_Remaining < size) {
    return MovieResult_InvalidOperation;
  }

  std::memcpy(pOutData, m_Current, size);
  m_Current += size;
  m_Remaining -= size;
  return MovieResult_Success;
}

MovieResult BufferReader::SkipBytes(size_t size) {
  if (m_Remaining < size) {
    return MovieResult_InvalidOperation;
  }

  m_Current += size;
  m_Remaining -= size;
  return MovieResult_Success;
}

void BufferReader::SkipToEnd() {
  m_Current = nullptr;
  m_Remaining = 0;
}

size_t BufferReader::GetCountOfBytesRead() {
  return m_Size - m_Remaining;
}

void BufferReader::Reset(const uint8_t* data, size_t size) {
  m_Data = data;
  m_Size = size;
  m_Current = data;
  m_Remaining = size;
}

BitReader::BitReader(const uint8_t* data, size_t size)
  : m_Data(data), m_Size(size), m_ByteOffset(0), m_BitOffset(0) {
}

MovieResult BitReader::ReadBits(uint32_t* pOutValue, uint32_t count) {
  *pOutValue = 0;
  if (count > 32) {
    return MovieResult_InvalidArgument;
  }

  uint32_t value = 0;
  while (count != 0) {
    if (m_ByteOffset >= m_Size) {
      return MovieResult_InvalidArgument;
    }

    uint32_t bitCount = std::min(count, 8 - m_BitOffset);
    bitCount = std::min(bitCount, 8u);
    uint8_t byte = m_Data[m_ByteOffset];
    m_BitOffset += bitCount;
    uint32_t shift = 8 - m_BitOffset;
    if (m_BitOffset >= 8) {
      m_BitOffset -= 8;
      m_ByteOffset++;
      if (m_ByteOffset >= m_Size) {
        m_BitOffset = 0;
      }
    }

    value = value << bitCount | (byte >> shift & ~(0xff << bitCount));
    count -= bitCount;
  }

  *pOutValue = value;
  return MovieResult_Success;
}

MovieResult BitReader::ReadBytes(uint8_t* pOutData, size_t size) {
  if (m_BitOffset != 0 || size + m_ByteOffset > m_Size) {
    return MovieResult_InvalidArgument;
  }

  std::memcpy(pOutData, m_Data + m_ByteOffset, size);
  m_ByteOffset += size;
  return MovieResult_Success;
}

uint32_t BitReader::BitsLeft() const {
  return 8 * (m_Size - m_ByteOffset) - m_BitOffset;
}

uint32_t BitReader::GetBytesLeft() const {
  return m_Size - m_ByteOffset;
}

MovieResult BitReader::ParseUE(uint32_t* pOutValue) {
  *pOutValue = 0;
  if (BitsLeft() == 0) {
    return MovieResult_InvalidOperation;
  }

  uint32_t leadingZeros = 0;
  while (true) {
    uint32_t bit = 0;
    MovieResult result = ReadBits(&bit, 1);
    if (!IsSucceeded(result)) {
      return result;
    }

    if (bit != 0) {
      break;
    }

    if (BitsLeft() == 0) {
      return MovieResult_InvalidOperation;
    }

    leadingZeros++;
  }

  if (BitsLeft() == 0) {
    return MovieResult_InvalidOperation;
  }

  uint32_t suffix = 0;
  MovieResult result = ReadBits(&suffix, leadingZeros);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutValue = suffix + ~(~0u << leadingZeros);
  return MovieResult_Success;
}

MovieResult BitReader::SkipUE() {
  uint32_t value;
  return ParseUE(&value);
}

MovieResult BitReader::ParseSE(int32_t* pOutValue) {
  *pOutValue = 0;
  uint32_t codeNum;
  MovieResult result = ParseUE(&codeNum);
  if (result != MovieResult_Success) {
    return result;
  }

  if (codeNum & 1) {
    *pOutValue = static_cast<int32_t>((codeNum + 1) >> 1);
  }
  else {
    *pOutValue = -static_cast<int32_t>(codeNum >> 1);
  }

  return result;
}

MovieResult BitReader::SkipSE() {
  int32_t value;
  return ParseSE(&value);
}

MovieResult BitReader::SkipScalingList(uint32_t size) {
  int32_t lastScale = 8;
  int32_t nextScale = 8;
  for (uint32_t i = 0; i < size; i++) {
    if (nextScale != 0) {
      int32_t deltaScale;
      MovieResult result = ParseSE(&deltaScale);
      if (result != MovieResult_Success) {
        return result;
      }

      nextScale = (lastScale + deltaScale) & 0xff;
      lastScale = nextScale == 0 ? lastScale : nextScale;
    }
  }

  return MovieResult_Success;
}

MovieResult BitReader::SkipBits(uint32_t count) {
  uint32_t value = 0;
  while (count > 32) {
    MovieResult result = ReadBits(&value, 32);
    if (!IsSucceeded(result)) {
      return result;
    }

    count -= 32;
  }

  if (count == 0) {
    return MovieResult_Success;
  }

  return ReadBits(&value, count);
}

MovieResult BitReader::SkipBytes(uint32_t size) {
  uint32_t offset = m_ByteOffset + size;
  if (offset > m_Size) {
    return MovieResult_OutOfRange;
  }

  m_ByteOffset = offset;
  m_BitOffset = 0;
  return MovieResult_Success;
}

NalBitReader::NalBitReader(const uint8_t* data, size_t size)
  : BitReader(data, size), m_Reservoir(0), m_NumBitsLeft(0),
    m_NumZeros(0) {
}

MovieResult NalBitReader::ReadBits(uint32_t* pOutValue, uint32_t count) {
  *pOutValue = 0;
  if (count > 32) {
    return MovieResult_InvalidArgument;
  }

  uint32_t value = 0;
  while (count != 0) {
    if (m_NumBitsLeft == 0 && !FillReservoir()) {
      return MovieResult_InvalidArgument;
    }

    size_t bitCount = std::min<size_t>(count, m_NumBitsLeft);
    value = value << bitCount | m_Reservoir >> (32 - bitCount);
    m_Reservoir <<= bitCount;
    m_NumBitsLeft -= bitCount;
    count -= bitCount;
  }

  *pOutValue = value;
  return MovieResult_Success;
}

bool NalBitReader::FillReservoir() {
  if (m_ByteOffset >= m_Size) {
    return false;
  }

  m_Reservoir = 0;
  size_t i = 0;
  while (m_ByteOffset < m_Size && i < 4) {
    uint8_t byte = m_Data[m_ByteOffset];
    bool isEmulationPreventionByte = m_NumZeros >= 2 && byte == 3;
    if (byte == 0) {
      m_NumZeros++;
    }
    else {
      m_NumZeros = 0;
    }

    if (!isEmulationPreventionByte) {
      m_Reservoir = m_Reservoir << 8 | m_Data[m_ByteOffset];
      i++;
    }

    m_ByteOffset++;
  }

  m_NumBitsLeft = 8 * i;
  m_Reservoir <<= 32 - m_NumBitsLeft;
  return true;
}

}
