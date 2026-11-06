#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_result.hpp"

namespace movie::detail {

// Reads big endian values.
class BufferReader {
public:
  BufferReader();
  BufferReader(const uint8_t* data, size_t size);

  MovieResult ReadUInt8(uint8_t* pOutValue);
  MovieResult PeekUInt8(uint8_t* pOutValue);
  MovieResult ReadInt16(int16_t* pOutValue);
  MovieResult PeekInt16(int16_t* pOutValue);
  MovieResult ReadUInt16(uint16_t* pOutValue);
  MovieResult PeekUInt16(uint16_t* pOutValue);
  MovieResult ReadInt32(int32_t* pOutValue);
  MovieResult PeekInt32(int32_t* pOutValue);
  MovieResult ReadUInt32(uint32_t* pOutValue);
  MovieResult PeekUInt32(uint32_t* pOutValue);
  MovieResult ReadInt64(int64_t* pOutValue);
  MovieResult PeekInt64(int64_t* pOutValue);
  MovieResult ReadUInt64(uint64_t* pOutValue);
  MovieResult PeekUInt64(uint64_t* pOutValue);
  MovieResult ReadBuffer(uint8_t* pOutData, size_t size);
  MovieResult SkipBytes(size_t size);
  void SkipToEnd();
  size_t GetCountOfBytesRead();
  void Reset(const uint8_t* data, size_t size);

private:
  const uint8_t* m_Data;
  size_t m_Size;
  const uint8_t* m_Current;
  size_t m_Remaining;
};

class BitReader {
public:
  BitReader(const uint8_t* data, size_t size);

  virtual MovieResult ReadBits(uint32_t* pOutValue, uint32_t count);
  virtual MovieResult ReadBytes(uint8_t* pOutData, size_t size);

  uint32_t BitsLeft() const;
  uint32_t GetBytesLeft() const;
  MovieResult ParseUE(uint32_t* pOutValue);
  MovieResult SkipUE();
  MovieResult ParseSE(int32_t* pOutValue);
  MovieResult SkipSE();
  MovieResult SkipScalingList(uint32_t size);
  MovieResult SkipBits(uint32_t count);
  MovieResult SkipBytes(uint32_t size);

protected:
  const uint8_t* m_Data;
  uint32_t m_Size;
  uint32_t m_ByteOffset;
  uint32_t m_BitOffset;
};

// Skips the emulation prevention bytes of H.264 NAL units, like
// NALBitReader of stagefright.
class NalBitReader : public BitReader {
public:
  NalBitReader(const uint8_t* data, size_t size);

  MovieResult ReadBits(uint32_t* pOutValue, uint32_t count) override;

  bool FillReservoir();

private:
  uint32_t m_Reservoir;
  size_t m_NumBitsLeft;
  int32_t m_NumZeros;
};

}
