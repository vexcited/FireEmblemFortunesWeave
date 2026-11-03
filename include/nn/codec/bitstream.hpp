#pragma once

#include <stdint.h>

namespace nn::codec {

typedef struct {
  uint32_t ValidBits;
  uint32_t ReadOffset;
  uint32_t WriteOffset;
  uint32_t BitCnt;
  uint32_t BitNdx;
  uint8_t* Buffer;
  uint32_t bufSize;
  uint32_t bufBits;
} FDK_BITBUF;

typedef FDK_BITBUF* HANDLE_FDK_BITBUF;
typedef enum { BS_READER, BS_WRITER } FDK_BS_CFG;
typedef struct {
  uint32_t CacheWord;
  uint32_t BitsInCache;
  FDK_BITBUF hBitBuf;
  uint32_t ConfigCache;
} FDK_BITSTREAM;

typedef FDK_BITSTREAM* HANDLE_FDK_BITSTREAM;
void FDK_InitBitBuffer(HANDLE_FDK_BITBUF hBitBuf, uint8_t* pBuffer,
                       uint32_t bufSize, uint32_t validBits);
void FDK_ResetBitBuffer(HANDLE_FDK_BITBUF hBitBuf);
int32_t FDK_get(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits);
int32_t FDK_get32(HANDLE_FDK_BITBUF hBitBuf);
int32_t FDK_getBwd(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits);
void FDK_put(HANDLE_FDK_BITBUF hBitBuf, uint32_t value,
             const uint32_t numberOfBits);
void FDK_putBwd(HANDLE_FDK_BITBUF hBitBuf, uint32_t value,
                const uint32_t numberOfBits);
void FDK_pushBack(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits,
                  uint8_t config);
void FDK_pushForward(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits,
                     uint8_t config);
void FDK_byteAlign(HANDLE_FDK_BITBUF hBitBuf, uint8_t config);
uint32_t FDK_getValidBits(HANDLE_FDK_BITBUF hBitBuf);
int32_t FDK_getFreeBits(HANDLE_FDK_BITBUF hBitBuf);
void FDK_setBitCnt(HANDLE_FDK_BITBUF hBitBuf, const uint32_t value);
int32_t FDK_getBitCnt(HANDLE_FDK_BITBUF hBitBuf);
void FDK_Feed(HANDLE_FDK_BITBUF hBitBuf, uint8_t* __restrict inputBuffer,
              const uint32_t bufferSize, uint32_t* bytesValid);
void CopyAlignedBlock(HANDLE_FDK_BITBUF h_BitBufSrc,
                      uint8_t* __restrict dstBuffer, uint32_t bToRead);
void FDK_Copy(HANDLE_FDK_BITBUF h_BitBufDst, HANDLE_FDK_BITBUF h_BitBufSrc,
              uint32_t* bytesValid);
void FDK_Fetch(HANDLE_FDK_BITBUF hBitBuf, uint8_t* outBuf,
               uint32_t* writeBytes);
extern const uint32_t BitMask[33];
inline void FDKinitBitStream(HANDLE_FDK_BITSTREAM hBitStream, uint8_t* pBuffer,
                             uint32_t bufSize, uint32_t validBits,
                             FDK_BS_CFG config = BS_READER) {
  FDK_InitBitBuffer(&hBitStream->hBitBuf, pBuffer, bufSize, validBits);
  hBitStream->CacheWord = hBitStream->BitsInCache = 0;
  hBitStream->ConfigCache = config;
}

inline uint32_t FDKreadBits(FDK_BITSTREAM* stream, uint32_t count) {
  uint32_t mask = BitMask[count];
  if (stream->BitsInCache <= count) {
    uint32_t available = FDK_getValidBits(&stream->hBitBuf);
    uint32_t freeBits = 31 - stream->BitsInCache;
    if (freeBits > available) {
      freeBits = available;
    }
    stream->CacheWord =
      (stream->CacheWord << freeBits) | FDK_get(&stream->hBitBuf, freeBits);
    stream->BitsInCache += freeBits;
    if (stream->BitsInCache < count) {
      stream->CacheWord <<= count - stream->BitsInCache;
      stream->BitsInCache = 0;
      return stream->CacheWord & mask;
    }
  }
  stream->BitsInCache -= count;
  return (stream->CacheWord >> stream->BitsInCache) & mask;
}

inline void FDKsyncCache(HANDLE_FDK_BITSTREAM hBitStream) {
  if (hBitStream->ConfigCache == BS_READER) {
    FDK_pushBack(&hBitStream->hBitBuf, hBitStream->BitsInCache,
                 hBitStream->ConfigCache);
  }
  else {
    FDK_put(&hBitStream->hBitBuf, hBitStream->CacheWord,
            hBitStream->BitsInCache);
  }
  hBitStream->BitsInCache = 0;
  hBitStream->CacheWord = 0;
}

inline uint32_t FDKgetValidBits(HANDLE_FDK_BITSTREAM hBitStream) {
  FDKsyncCache(hBitStream);
  return FDK_getValidBits(&hBitStream->hBitBuf);
}

static_assert(sizeof(FDK_BITBUF) == 40);
static_assert(sizeof(FDK_BITSTREAM) == 56);
static_assert(__builtin_offsetof(FDK_BITBUF, Buffer) == 24);
static_assert(__builtin_offsetof(FDK_BITSTREAM, hBitBuf) == 8);
static_assert(__builtin_offsetof(FDK_BITSTREAM, ConfigCache) == 48);
}
