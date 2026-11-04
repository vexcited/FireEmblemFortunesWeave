#include "nn/util/base64.hpp"

#include <stdint.h>

namespace nn::util {

namespace {

constexpr char EncodeTable[] =
  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
constexpr char UrlSafeEncodeTable[] =
  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";

constexpr uint8_t Invalid = 0xff;
constexpr uint8_t Skip = 0xfe;
constexpr uint8_t Padding = 0xfd;

constexpr uint8_t DecodeTables[2][128] = {
  {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff,
    0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0xff, 0xff, 0xff, 0x3f,
    0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0xff, 0xff,
    0xff, 0xfd, 0xff, 0xff, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
    0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12,
    0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24,
    0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30,
    0x31, 0x32, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff,
  },
  {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff,
    0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0xff, 0xff,
    0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0xff, 0xff,
    0xff, 0xfd, 0xff, 0xff, 0xff, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
    0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12,
    0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24,
    0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30,
    0x31, 0x32, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff,
  },
};

constexpr int LineLength = 76;

}

Base64::Status Base64::ToBase64String(char* dst, size_t dstSize,
  const void* src, size_t srcSize, Mode mode) {
  const char* table = EncodeTable;
  bool usePadding = true;
  bool useLinefeed = false;
  switch (mode) {
    case Mode_NormalNoLinefeed:
      break;
    case Mode_UrlSafe:
      table = UrlSafeEncodeTable;
      usePadding = false;
      break;
    default:
      useLinefeed = true;
      break;
  }

  const uint8_t* input = static_cast<const uint8_t*>(src);
  size_t position = 0;
  int lineLength = 0;
  int bitCount = 0;
  uint32_t bits = 0;

  for (size_t i = 0; i < srcSize; ++i) {
    bits = (bits << 8) | input[i];
    bitCount += 8;
    while (bitCount >= 6) {
      if (useLinefeed && lineLength == LineLength) {
        if (position == dstSize) {
          return Status_BufferFull;
        }
        dst[position++] = '\r';
        if (position == dstSize) {
          return Status_BufferFull;
        }
        dst[position++] = '\n';
        lineLength = 0;
      }
      if (position == dstSize) {
        return Status_BufferFull;
      }
      bitCount -= 6;
      dst[position++] = table[(bits >> bitCount) & 0x3f];
      ++lineLength;
    }
  }

  if (bitCount > 0) {
    if (useLinefeed && lineLength == LineLength) {
      if (position == dstSize) {
        return Status_BufferFull;
      }
      dst[position++] = '\r';
      if (position == dstSize) {
        return Status_BufferFull;
      }
      dst[position++] = '\n';
      lineLength = 0;
    }
    if (position == dstSize) {
      return Status_BufferFull;
    }
    dst[position++] = table[(bits << (6 - bitCount)) & 0x3f];
    ++lineLength;
  }

  if (usePadding) {
    for (int i = lineLength; (i & 3) != 0; ++i) {
      if (position == dstSize) {
        return Status_BufferFull;
      }
      dst[position++] = '=';
    }
  }

  if (position == dstSize) {
    return Status_BufferFull;
  }
  dst[position] = '\0';
  return Status_Success;
}

Base64::Status Base64::FromBase64String(size_t* pOutSize, void* dst,
  size_t dstSize, const char* src, Mode mode) {
  return FromBase64String(pOutSize, dst, dstSize, src, static_cast<size_t>(-1),
    mode);
}

// Errors report a full buffer whenever three more bytes would not fit.
Base64::Status Base64::FromBase64String(size_t* pOutSize, void* dst,
  size_t dstSize, const char* src, size_t srcLength, Mode mode) {
  const uint8_t* table = DecodeTables[mode == Mode_UrlSafe ? 1 : 0];
  const uint8_t* input = reinterpret_cast<const uint8_t*>(src);
  uint8_t* output = static_cast<uint8_t*>(dst);
  size_t index = 0;
  *pOutSize = 0;

  while (true) {
    uint8_t values[4];
    int count = 0;
    bool isPadded = false;
    while (count < 4) {
      uint8_t c = input[index];
      if (c == 0 || index >= srcLength) {
        break;
      }
      if ((c & 0x80) != 0) {
        return *pOutSize + 3 > dstSize ? Status_BufferFull : Status_BadData;
      }
      uint8_t value = table[c];
      ++index;
      if (value == Skip) {
        continue;
      }
      if (value == Padding) {
        isPadded = true;
        break;
      }
      if (value == Invalid) {
        return *pOutSize + 3 > dstSize ? Status_BufferFull : Status_BadData;
      }
      values[count++] = value;
    }

    if (count == 4) {
      if (*pOutSize + 3 > dstSize) {
        return Status_BufferFull;
      }
      output[0] = static_cast<uint8_t>((values[0] << 2) | (values[1] >> 4));
      output[1] = static_cast<uint8_t>((values[1] << 4) | (values[2] >> 2));
      output[2] = static_cast<uint8_t>((values[2] << 6) | values[3]);
      output += 3;
      *pOutSize += 3;
      continue;
    }

    if (count == 0) {
      return Status_Success;
    }
    if (count == 1 || (!isPadded && mode != Mode_UrlSafe)) {
      return *pOutSize + 3 > dstSize ? Status_BufferFull : Status_BadData;
    }
    if (count == 2) {
      if (*pOutSize + 1 > dstSize) {
        return *pOutSize + 3 > dstSize ? Status_BufferFull : Status_BadData;
      }
      output[0] = static_cast<uint8_t>((values[0] << 2) | (values[1] >> 4));
      *pOutSize += 1;
      return Status_Success;
    }
    if (*pOutSize + 2 > dstSize) {
      return *pOutSize + 3 > dstSize ? Status_BufferFull : Status_BadData;
    }
    output[0] = static_cast<uint8_t>((values[0] << 2) | (values[1] >> 4));
    output[1] = static_cast<uint8_t>((values[1] << 4) | (values[2] >> 2));
    *pOutSize += 2;
    return Status_Success;
  }
}

}
