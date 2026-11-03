#include "nn/codec/bitstream.hpp"

namespace nn::codec {

void FDKmemcpy(void*, const void*, unsigned int);

static uint32_t fMin(uint32_t a, uint32_t b) {
  return a < b ? a : b;
}

const uint32_t BitMask[32 + 1] = {
  0x0,        0x1,        0x3,       0x7,       0xf,       0x1f,
  0x3f,       0x7f,       0xff,      0x1ff,     0x3ff,     0x7ff,
  0xfff,      0x1fff,     0x3fff,    0x7fff,    0xffff,    0x1ffff,
  0x3ffff,    0x7ffff,    0xfffff,   0x1fffff,  0x3fffff,  0x7fffff,
  0xffffff,   0x1ffffff,  0x3ffffff, 0x7ffffff, 0xfffffff, 0x1fffffff,
  0x3fffffff, 0x7fffffff, 0xffffffff};
void FDK_InitBitBuffer(HANDLE_FDK_BITBUF hBitBuf, uint8_t* pBuffer,
                       uint32_t bufSize, uint32_t validBits) {
  hBitBuf->ValidBits = validBits;
  hBitBuf->ReadOffset = 0;
  hBitBuf->WriteOffset = 0;
  hBitBuf->BitCnt = 0;
  hBitBuf->BitNdx = 0;
  hBitBuf->Buffer = pBuffer;
  hBitBuf->bufSize = bufSize;
  hBitBuf->bufBits = (bufSize << 3);
}

void FDK_ResetBitBuffer(HANDLE_FDK_BITBUF hBitBuf) {
  hBitBuf->ValidBits = 0;
  hBitBuf->ReadOffset = 0;
  hBitBuf->WriteOffset = 0;
  hBitBuf->BitCnt = 0;
  hBitBuf->BitNdx = 0;
}

int32_t FDK_get(FDK_BITBUF* buffer, uint32_t count) {
  if (count == 0 || buffer->ValidBits < count) {
    return 0;
  }
  uint32_t byteOffset = buffer->BitNdx >> 3;
  uint32_t bitOffset = buffer->BitNdx & 7;
  buffer->BitNdx = (buffer->BitNdx + count) & (buffer->bufBits - 1);
  buffer->BitCnt += count;
  buffer->ValidBits -= count;
  uint32_t byteMask = buffer->bufSize - 1;
  uint32_t extent = bitOffset + count;
  uint32_t word = uint32_t(buffer->Buffer[byteOffset & byteMask]) << 24;
  if (extent > 8) {
    word |= uint32_t(buffer->Buffer[(byteOffset + 1) & byteMask]) << 16;
  }
  if (extent > 16) {
    word |= uint32_t(buffer->Buffer[(byteOffset + 2) & byteMask]) << 8;
  }
  if (extent > 24) {
    word |= buffer->Buffer[(byteOffset + 3) & byteMask];
  }
  word <<= bitOffset;
  if (extent > 32) {
    word |= buffer->Buffer[(byteOffset + 4) & byteMask] >> (8 - bitOffset);
  }
  return word >> (32 - count);
}

int32_t FDK_get32(HANDLE_FDK_BITBUF hBitBuf) {
  if (hBitBuf->ValidBits < 32) {
    return 0;
  }
  uint32_t BitNdx = hBitBuf->BitNdx + 32;
  if (BitNdx <= hBitBuf->bufBits) {
    hBitBuf->BitNdx = BitNdx;
    hBitBuf->BitCnt += 32;
    hBitBuf->ValidBits -= 32;
    uint32_t byteOffset = (BitNdx - 1) >> 3;
    uint32_t cache = (hBitBuf->Buffer[(byteOffset - 3)] << 24) |
                     (hBitBuf->Buffer[(byteOffset - 2)] << 16) |
                     (hBitBuf->Buffer[(byteOffset - 1)] << 8) |
                     hBitBuf->Buffer[(byteOffset - 0)];
    if ((BitNdx = (BitNdx & 7)) != 0) {
      cache = (cache >> (8 - BitNdx)) |
              ((uint32_t)hBitBuf->Buffer[byteOffset - 4] << (24 + BitNdx));
    }
    return (cache);
  }
  else {
    int nBits = (int32_t)hBitBuf->bufBits - (int32_t)hBitBuf->BitNdx;
    uint32_t cache = FDK_get(hBitBuf, nBits) << (32 - nBits);
    cache |= (FDK_get(hBitBuf, 32 - nBits));
    return (cache);
  }
}

int32_t FDK_getBwd(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits) {
  uint32_t byteOffset = hBitBuf->BitNdx >> 3;
  uint32_t bitOffset = hBitBuf->BitNdx & 0x07;
  uint32_t byteMask = hBitBuf->bufSize - 1;
  int i;
  hBitBuf->BitNdx = (hBitBuf->BitNdx - numberOfBits) & (hBitBuf->bufBits - 1);
  hBitBuf->BitCnt -= numberOfBits;
  hBitBuf->ValidBits += numberOfBits;
  uint32_t tx = hBitBuf->Buffer[(byteOffset - 3) & byteMask] << 24 |
                hBitBuf->Buffer[(byteOffset - 2) & byteMask] << 16 |
                hBitBuf->Buffer[(byteOffset - 1) & byteMask] << 8 |
                hBitBuf->Buffer[byteOffset & byteMask];
  uint32_t txa = 0x0;
  tx >>= (8 - bitOffset);
  if (bitOffset && numberOfBits > 24) {
    tx |= hBitBuf->Buffer[(byteOffset - 4) & byteMask] << (24 + bitOffset);
  }
  for (i = 0; i < 16; i++) {
    uint32_t bitMaskR = 0x00000001 << i;
    uint32_t bitMaskL = 0x80000000 >> i;
    txa |= (tx & bitMaskR) << (31 - (i << 1));
    txa |= (tx & bitMaskL) >> (31 - (i << 1));
  }
  return (txa >> (32 - numberOfBits));
}

void FDK_put(HANDLE_FDK_BITBUF hBitBuf, uint32_t value,
             const uint32_t numberOfBits) {
  uint32_t byteOffset = hBitBuf->BitNdx >> 3;
  uint32_t bitOffset = hBitBuf->BitNdx & 0x07;
  hBitBuf->BitNdx = (hBitBuf->BitNdx + numberOfBits) & (hBitBuf->bufBits - 1);
  hBitBuf->BitCnt += numberOfBits;
  hBitBuf->ValidBits += numberOfBits;
  uint32_t byteMask = hBitBuf->bufSize - 1;
  uint32_t tmp = value << (32 - numberOfBits) >> bitOffset;
  uint32_t mask =
    ~BitMask[(32 - bitOffset)] | (BitMask[(32 - numberOfBits)] >> bitOffset);
  hBitBuf->Buffer[byteOffset & byteMask] =
    (hBitBuf->Buffer[byteOffset & byteMask] & (mask >> 24)) |
    (uint8_t)(tmp >> 24);
  hBitBuf->Buffer[(byteOffset + 1) & byteMask] =
    (hBitBuf->Buffer[(byteOffset + 1) & byteMask] & (mask >> 16)) |
    (uint8_t)(tmp >> 16);
  hBitBuf->Buffer[(byteOffset + 2) & byteMask] =
    (hBitBuf->Buffer[(byteOffset + 2) & byteMask] & (mask >> 8)) |
    (uint8_t)(tmp >> 8);
  hBitBuf->Buffer[(byteOffset + 3) & byteMask] =
    (hBitBuf->Buffer[(byteOffset + 3) & byteMask] & (mask)) | (uint8_t)(tmp);
  if (bitOffset && numberOfBits > 24) {
    hBitBuf->Buffer[(byteOffset + 4) & byteMask] =
      (uint8_t)(value << (40 - numberOfBits) >> bitOffset) |
      (hBitBuf->Buffer[(byteOffset + 4) & byteMask] &
       BitMask[(40 - numberOfBits - bitOffset)]);
  }
}

void FDK_putBwd(HANDLE_FDK_BITBUF hBitBuf, uint32_t value,
                const uint32_t numberOfBits) {
  uint32_t byteOffset = hBitBuf->BitNdx >> 3;
  uint32_t bitOffset = 7 - (hBitBuf->BitNdx & 0x07);
  uint32_t byteMask = hBitBuf->bufSize - 1;
  uint32_t mask = ~(BitMask[numberOfBits] << bitOffset);
  uint32_t tmp = 0x0000;
  int i;
  hBitBuf->BitNdx = (hBitBuf->BitNdx - numberOfBits) & (hBitBuf->bufBits - 1);
  hBitBuf->BitCnt -= numberOfBits;
  hBitBuf->ValidBits -= numberOfBits;
  for (i = 0; i < 16; i++) {
    uint32_t bitMaskR = 0x00000001 << i;
    uint32_t bitMaskL = 0x80000000 >> i;
    tmp |= (value & bitMaskR) << (31 - (i << 1));
    tmp |= (value & bitMaskL) >> (31 - (i << 1));
  }
  value = tmp;
  tmp = value >> (32 - numberOfBits) << bitOffset;
  hBitBuf->Buffer[byteOffset & byteMask] =
    (hBitBuf->Buffer[byteOffset & byteMask] & (mask)) | (uint8_t)(tmp);
  hBitBuf->Buffer[(byteOffset - 1) & byteMask] =
    (hBitBuf->Buffer[(byteOffset - 1) & byteMask] & (mask >> 8)) |
    (uint8_t)(tmp >> 8);
  hBitBuf->Buffer[(byteOffset - 2) & byteMask] =
    (hBitBuf->Buffer[(byteOffset - 2) & byteMask] & (mask >> 16)) |
    (uint8_t)(tmp >> 16);
  hBitBuf->Buffer[(byteOffset - 3) & byteMask] =
    (hBitBuf->Buffer[(byteOffset - 3) & byteMask] & (mask >> 24)) |
    (uint8_t)(tmp >> 24);
  if ((bitOffset + numberOfBits) > 32) {
    hBitBuf->Buffer[(byteOffset - 4) & byteMask] =
      (uint8_t)(value >> (64 - numberOfBits - bitOffset)) |
      (hBitBuf->Buffer[(byteOffset - 4) & byteMask] &
       ~(BitMask[bitOffset] >> (32 - numberOfBits)));
  }
}

void FDK_pushBack(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits,
                  uint8_t config) {
  hBitBuf->BitCnt -= numberOfBits;
  hBitBuf->ValidBits += (config == 0) ? numberOfBits : (-(int32_t)numberOfBits);
  hBitBuf->BitNdx = (hBitBuf->BitNdx - numberOfBits) & (hBitBuf->bufBits - 1);
}

void FDK_pushForward(HANDLE_FDK_BITBUF hBitBuf, const uint32_t numberOfBits,
                     uint8_t config) {
  hBitBuf->BitCnt += numberOfBits;
  hBitBuf->ValidBits -= (config == 0) ? numberOfBits : (-(int32_t)numberOfBits);
  hBitBuf->BitNdx = (hBitBuf->BitNdx + numberOfBits) & (hBitBuf->bufBits - 1);
}

void FDK_byteAlign(HANDLE_FDK_BITBUF hBitBuf, uint8_t config) {
  int32_t alignment = hBitBuf->BitCnt & 0x07;
  if (alignment) {
    if (config == 0) {
      FDK_pushForward(hBitBuf, 8 - alignment, config);
    }
    else {
      FDK_put(hBitBuf, 0, 8 - alignment);
    }
  }
  hBitBuf->BitCnt = 0;
}

uint32_t FDK_getValidBits(HANDLE_FDK_BITBUF hBitBuf) {
  return hBitBuf->ValidBits;
}

int32_t FDK_getFreeBits(HANDLE_FDK_BITBUF hBitBuf) {
  return (hBitBuf->bufBits - hBitBuf->ValidBits);
}

void FDK_setBitCnt(HANDLE_FDK_BITBUF hBitBuf, const uint32_t value) {
  hBitBuf->BitCnt = value;
}

int32_t FDK_getBitCnt(HANDLE_FDK_BITBUF hBitBuf) {
  return hBitBuf->BitCnt;
}

void FDK_Feed(HANDLE_FDK_BITBUF hBitBuf, uint8_t* __restrict inputBuffer,
              const uint32_t bufferSize, uint32_t* bytesValid) {
  inputBuffer = &inputBuffer[bufferSize - *bytesValid];
  uint32_t bTotal = 0;
  uint32_t bToRead = (hBitBuf->bufBits - hBitBuf->ValidBits) >> 3;
  uint32_t noOfBytes = fMin(bToRead, *bytesValid);
  while (noOfBytes > 0) {
    bToRead = hBitBuf->bufSize - hBitBuf->ReadOffset;
    bToRead = fMin(bToRead, noOfBytes);
    FDKmemcpy(&hBitBuf->Buffer[hBitBuf->ReadOffset], inputBuffer,
              bToRead * sizeof(uint8_t));
    hBitBuf->ValidBits += bToRead << 3;
    bTotal += bToRead;
    inputBuffer += bToRead;
    hBitBuf->ReadOffset =
      (hBitBuf->ReadOffset + bToRead) & (hBitBuf->bufSize - 1);
    noOfBytes -= bToRead;
  }
  *bytesValid -= bTotal;
}

void CopyAlignedBlock(HANDLE_FDK_BITBUF h_BitBufSrc,
                      uint8_t* __restrict dstBuffer, uint32_t bToRead) {
  uint32_t byteOffset = h_BitBufSrc->BitNdx >> 3;
  const uint32_t byteMask = h_BitBufSrc->bufSize - 1;
  uint8_t* __restrict pBBB = h_BitBufSrc->Buffer;
  for (uint32_t i = 0; i < bToRead; i++) {
    dstBuffer[i] = pBBB[(byteOffset + i) & byteMask];
  }
  bToRead <<= 3;
  h_BitBufSrc->BitNdx =
    (h_BitBufSrc->BitNdx + bToRead) & (h_BitBufSrc->bufBits - 1);
  h_BitBufSrc->BitCnt += bToRead;
  h_BitBufSrc->ValidBits -= bToRead;
}

void FDK_Copy(HANDLE_FDK_BITBUF h_BitBufDst, HANDLE_FDK_BITBUF h_BitBufSrc,
              uint32_t* bytesValid) {
  int32_t bTotal = 0;
  uint32_t bToRead = h_BitBufSrc->ValidBits >> 3;
  uint32_t noOfBytes = fMin(bToRead, *bytesValid);
  bToRead = FDK_getFreeBits(h_BitBufDst);
  noOfBytes = fMin(bToRead, noOfBytes);
  while (noOfBytes > 0) {
    bToRead = h_BitBufDst->bufSize - h_BitBufDst->ReadOffset;
    bToRead = fMin(noOfBytes, bToRead);
    if (!(h_BitBufSrc->BitNdx & 0x07)) {
      CopyAlignedBlock(h_BitBufSrc,
                       h_BitBufDst->Buffer + h_BitBufDst->ReadOffset, bToRead);
    }
    else {
      for (uint32_t i = 0; i < bToRead; i++) {
        h_BitBufDst->Buffer[h_BitBufDst->ReadOffset + i] =
          (uint8_t)FDK_get(h_BitBufSrc, 8);
      }
    }
    h_BitBufDst->ValidBits += bToRead << 3;
    bTotal += bToRead;
    h_BitBufDst->ReadOffset =
      (h_BitBufDst->ReadOffset + bToRead) & (h_BitBufDst->bufSize - 1);
    noOfBytes -= bToRead;
  }
  *bytesValid -= bTotal;
}

void FDK_Fetch(HANDLE_FDK_BITBUF hBitBuf, uint8_t* outBuf,
               uint32_t* writeBytes) {
  uint8_t* __restrict outputBuffer = outBuf;
  uint32_t bTotal = 0;
  uint32_t bToWrite = (hBitBuf->ValidBits) >> 3;
  uint32_t noOfBytes = fMin(bToWrite, *writeBytes);
  while (noOfBytes > 0) {
    bToWrite = hBitBuf->bufSize - hBitBuf->WriteOffset;
    bToWrite = fMin(bToWrite, noOfBytes);
    FDKmemcpy(outputBuffer, &hBitBuf->Buffer[hBitBuf->WriteOffset],
              bToWrite * sizeof(uint8_t));
    hBitBuf->ValidBits -= bToWrite << 3;
    bTotal += bToWrite;
    outputBuffer += bToWrite;
    hBitBuf->WriteOffset =
      (hBitBuf->WriteOffset + bToWrite) & (hBitBuf->bufSize - 1);
    noOfBytes -= bToWrite;
  }
  *writeBytes = bTotal;
}

}

/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  See licenses/fdk-aac/LICENSE.txt and BITSTREAM_CHANGES.md.
*/
