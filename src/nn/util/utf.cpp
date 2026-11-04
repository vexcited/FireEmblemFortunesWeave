#include "nn/util/utf.hpp"

#include <stddef.h>
#include <string.h>

namespace nn::util {

namespace {

// The first entry stands for the end of input marker.
constexpr uint8_t Utf8SequenceLengthTable[257] = {
  255,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 7, 8,
};

constexpr int LengthBufferSize = 32;

int Utf8SequenceLength(uint8_t c) {
  return Utf8SequenceLengthTable[c + 1];
}

bool IsContinuation(uint8_t c) {
  return (c & 0xc0) == 0x80;
}

CharacterEncodingResult ConvertUtf8ToUtf16(size_t* pDstCount,
  size_t* pSrcCount, uint16_t* dst, int dstLength, const char* src,
  int srcLength) {
  if (srcLength == 0) {
    *pDstCount = 0;
    *pSrcCount = 0;
    return CharacterEncodingResult_Success;
  }

  const uint8_t* input = reinterpret_cast<const uint8_t*>(src);
  ptrdiff_t dstRemaining = dstLength;
  ptrdiff_t srcRemaining = srcLength;
  uint8_t c = *input;
  int length = Utf8SequenceLength(c);
  if (srcRemaining < length) {
    *pDstCount = dstLength - dstRemaining;
    *pSrcCount = srcLength - srcRemaining;
    return CharacterEncodingResult_InvalidFormat;
  }

  while (dstRemaining != 0) {
    switch (length) {
      case 1:
        *dst++ = c;
        --dstRemaining;
        srcRemaining -= 1;
        break;
      case 2:
        if ((c & 0x1e) == 0 || !IsContinuation(input[1])) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InvalidFormat;
        }
        *dst++ = static_cast<uint16_t>(((c & 0x1f) << 6) | (input[1] & 0x3f));
        --dstRemaining;
        srcRemaining -= 2;
        break;
      case 3: {
        uint32_t value = ((c & 0xf) << 12) | ((input[1] & 0x3f) << 6);
        if (!IsContinuation(input[1]) || !IsContinuation(input[2])
          || (value & 0xf800) == 0 || (value & 0xf800) == 0xd800) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InvalidFormat;
        }
        *dst++ = static_cast<uint16_t>(value | (input[2] & 0x3f));
        --dstRemaining;
        srcRemaining -= 3;
        break;
      }
      case 4: {
        uint32_t value = ((c & 0x7) << 18) | ((input[1] & 0x3f) << 12);
        if (!IsContinuation(input[1]) || !IsContinuation(input[2])
          || !IsContinuation(input[3]) || ((value - 0x10000) >> 20) != 0) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InvalidFormat;
        }
        if (dstRemaining < 2) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InsufficientLength;
        }
        value |= (input[2] & 0x3f) << 6;
        dst[0] = static_cast<uint16_t>(0xd800 + ((value - 0x10000) >> 10));
        dst[1] = static_cast<uint16_t>(
          0xdc00 | ((input[2] & 0x3f) << 6) | (input[3] & 0x3f));
        dst += 2;
        dstRemaining -= 2;
        srcRemaining -= 4;
        break;
      }
      default:
        *pDstCount = dstLength - dstRemaining;
        *pSrcCount = srcLength - srcRemaining;
        return CharacterEncodingResult_InvalidFormat;
    }

    if (srcRemaining == 0) {
      *pDstCount = dstLength - dstRemaining;
      *pSrcCount = srcLength;
      return CharacterEncodingResult_Success;
    }
    input += length;
    c = *input;
    length = Utf8SequenceLength(c);
    if (srcRemaining < length) {
      *pDstCount = dstLength - dstRemaining;
      *pSrcCount = srcLength - srcRemaining;
      return CharacterEncodingResult_InvalidFormat;
    }
  }

  *pDstCount = dstLength - dstRemaining;
  *pSrcCount = srcLength - srcRemaining;
  return CharacterEncodingResult_InsufficientLength;
}

CharacterEncodingResult ConvertUtf8ToUtf32(size_t* pDstCount,
  size_t* pSrcCount, uint32_t* dst, int dstLength, const char* src,
  int srcLength) {
  if (srcLength == 0) {
    *pDstCount = 0;
    *pSrcCount = 0;
    return CharacterEncodingResult_Success;
  }

  const uint8_t* input = reinterpret_cast<const uint8_t*>(src);
  ptrdiff_t dstRemaining = dstLength;
  ptrdiff_t srcRemaining = srcLength;
  uint8_t c = *input;
  int length = Utf8SequenceLength(c);
  if (srcRemaining < length) {
    *pDstCount = dstLength - dstRemaining;
    *pSrcCount = srcLength - srcRemaining;
    return CharacterEncodingResult_InvalidFormat;
  }

  while (dstRemaining != 0) {
    uint32_t value;
    switch (length) {
      case 1:
        value = c;
        break;
      case 2:
        if ((c & 0x1e) == 0 || Utf8SequenceLength(input[1]) != 0) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InvalidFormat;
        }
        value = ((c & 0x1f) << 6) | (input[1] & 0x3f);
        break;
      case 3:
        value = ((c & 0xf) << 12) | ((input[1] & 0x3f) << 6);
        if (Utf8SequenceLength(input[1]) != 0
          || Utf8SequenceLength(input[2]) != 0 || (value & 0xf800) == 0
          || (value & 0xf800) == 0xd800) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InvalidFormat;
        }
        value |= input[2] & 0x3f;
        break;
      case 4:
        value = ((c & 0x7) << 18) | ((input[1] & 0x3f) << 12);
        if (Utf8SequenceLength(input[1]) != 0
          || Utf8SequenceLength(input[2]) != 0
          || Utf8SequenceLength(input[3]) != 0
          || ((value - 0x10000) >> 20) != 0) {
          *pDstCount = dstLength - dstRemaining;
          *pSrcCount = srcLength - srcRemaining;
          return CharacterEncodingResult_InvalidFormat;
        }
        value |= ((input[2] & 0x3f) << 6) | (input[3] & 0x3f);
        break;
      default:
        *pDstCount = dstLength - dstRemaining;
        *pSrcCount = srcLength - srcRemaining;
        return CharacterEncodingResult_InvalidFormat;
    }

    *dst++ = value;
    srcRemaining -= length;
    if (srcRemaining == 0) {
      *pDstCount = dstLength - dstRemaining + 1;
      *pSrcCount = srcLength;
      return CharacterEncodingResult_Success;
    }
    --dstRemaining;
    input += length;
    c = *input;
    length = Utf8SequenceLength(c);
    if (srcRemaining < length) {
      *pDstCount = dstLength - dstRemaining;
      *pSrcCount = srcLength - srcRemaining;
      return CharacterEncodingResult_InvalidFormat;
    }
  }

  *pDstCount = dstLength;
  *pSrcCount = srcLength - srcRemaining;
  return CharacterEncodingResult_InsufficientLength;
}

// A broken surrogate pair still emits the lead byte of its four byte
// sequence before failing.
CharacterEncodingResult ConvertUtf16ToUtf8(size_t* pDstCount,
  size_t* pSrcCount, char* dst, int dstLength, const uint16_t* src,
  int srcLength) {
  if (srcLength == 0) {
    *pDstCount = 0;
    *pSrcCount = 0;
    return CharacterEncodingResult_Success;
  }

  ptrdiff_t dstRemaining = dstLength;
  ptrdiff_t srcRemaining = srcLength;
  CharacterEncodingResult result = CharacterEncodingResult_Success;
  while (true) {
    uint32_t c = *src;
    if (c < 0x80) {
      if (dstRemaining == 0) {
        result = CharacterEncodingResult_InsufficientLength;
        break;
      }
      *dst++ = static_cast<char>(c);
      --dstRemaining;
    }
    else if (c < 0x800) {
      if (dstRemaining < 2) {
        result = CharacterEncodingResult_InsufficientLength;
        break;
      }
      dst[0] = static_cast<char>(0xc0 | (c >> 6));
      dst[1] = static_cast<char>(0x80 | (c & 0x3f));
      dst += 2;
      dstRemaining -= 2;
    }
    else if (c < 0xd800 || c >= 0xe000) {
      if (dstRemaining < 3) {
        result = CharacterEncodingResult_InsufficientLength;
        break;
      }
      dst[0] = static_cast<char>(0xe0 | (c >> 12));
      dst[1] = static_cast<char>(0x80 | ((c >> 6) & 0x3f));
      dst[2] = static_cast<char>(0x80 | (c & 0x3f));
      dst += 3;
      dstRemaining -= 3;
    }
    else {
      if ((c & 0x400) != 0) {
        result = CharacterEncodingResult_InvalidFormat;
        break;
      }
      if (srcRemaining == 1) {
        *dst = static_cast<char>(0xf0 | ((((c - 0xd800) << 10) + 0x10000) >> 18));
        --dstRemaining;
        result = CharacterEncodingResult_InvalidFormat;
        break;
      }
      uint32_t low = src[1];
      uint32_t codePoint = 0x10000 + ((c - 0xd800) << 10) + (low - 0xdc00);
      if ((low & 0xfc00) != 0xdc00) {
        *dst = static_cast<char>(0xf0 | (codePoint >> 18));
        --dstRemaining;
        result = CharacterEncodingResult_InvalidFormat;
        break;
      }
      if (dstRemaining < 4) {
        result = CharacterEncodingResult_InsufficientLength;
        break;
      }
      dst[0] = static_cast<char>(0xf0 | (codePoint >> 18));
      dst[1] = static_cast<char>(0x80 | ((codePoint >> 12) & 0x3f));
      dst[2] = static_cast<char>(0x80 | ((codePoint >> 6) & 0x3f));
      dst[3] = static_cast<char>(0x80 | (low & 0x3f));
      dst += 4;
      dstRemaining -= 4;
      --srcRemaining;
      ++src;
    }

    --srcRemaining;
    ++src;
    if (srcRemaining == 0) {
      *pDstCount = dstLength - dstRemaining;
      *pSrcCount = srcLength;
      return CharacterEncodingResult_Success;
    }
  }

  *pDstCount = dstLength - dstRemaining;
  *pSrcCount = srcLength - srcRemaining;
  return result;
}

__attribute__((noinline)) CharacterEncodingResult ConvertUtf32ToUtf8(
  size_t* pDstCount,
  size_t* pSrcCount, char* dst, int dstLength, const uint32_t* src,
  int srcLength) {
  if (srcLength == 0) {
    *pDstCount = 0;
    *pSrcCount = 0;
    return CharacterEncodingResult_Success;
  }

  int written = 0;
  size_t index = 0;
  while (true) {
    uint32_t c = src[index];
    int length;
    if (c < 0x80) {
      length = 1;
    }
    else if (c < 0x800) {
      length = 2;
    }
    else if (c < 0x10000) {
      if ((c & 0xf800) == 0xd800) {
        *pDstCount = written;
        *pSrcCount = index;
        return CharacterEncodingResult_InvalidFormat;
      }
      length = 3;
    }
    else if (c < 0x110000) {
      length = 4;
    }
    else {
      *pDstCount = written;
      *pSrcCount = index;
      return CharacterEncodingResult_InvalidFormat;
    }

    if (written + length - 1 >= dstLength) {
      *pDstCount = written;
      *pSrcCount = index;
      return CharacterEncodingResult_InsufficientLength;
    }

    switch (length) {
      case 1:
        dst[written] = static_cast<char>(c);
        break;
      case 2:
        dst[written] = static_cast<char>(0xc0 | (c >> 6));
        dst[written + 1] = static_cast<char>(0x80 | (c & 0x3f));
        break;
      case 3:
        dst[written] = static_cast<char>(0xe0 | (c >> 12));
        dst[written + 1] = static_cast<char>(0x80 | ((c >> 6) & 0x3f));
        dst[written + 2] = static_cast<char>(0x80 | (c & 0x3f));
        break;
      default:
        dst[written] = static_cast<char>(0xf0 | (c >> 18));
        dst[written + 1] = static_cast<char>(0x80 | ((c >> 12) & 0x3f));
        dst[written + 2] = static_cast<char>(0x80 | ((c >> 6) & 0x3f));
        dst[written + 3] = static_cast<char>(0x80 | (c & 0x3f));
        break;
    }
    written += length;
    ++index;
    if (index == static_cast<size_t>(srcLength)) {
      *pDstCount = written;
      *pSrcCount = srcLength;
      return CharacterEncodingResult_Success;
    }
  }
}

template <typename Char> int GetStringLength(const Char* str) {
  int length = 0;
  if (str != nullptr) {
    while (str[length] != 0) {
      ++length;
    }
  }
  return length;
}

template <typename Dst, typename Src, typename Convert>
CharacterEncodingResult GetConvertedLength(int* pOutLength, const Src* src,
  int srcLength, Convert convert) {
  int length = 0;
  int offset = 0;
  while (srcLength > 0) {
    Dst buffer[LengthBufferSize];
    size_t dstCount = 0;
    size_t srcCount = 0;
    CharacterEncodingResult result = convert(&dstCount, &srcCount, buffer,
      LengthBufferSize, src + offset, srcLength);
    if (result == CharacterEncodingResult_InvalidFormat) {
      return result;
    }
    offset += static_cast<int>(srcCount);
    srcLength -= static_cast<int>(srcCount);
    length += static_cast<int>(dstCount);
  }
  *pOutLength = length;
  return CharacterEncodingResult_Success;
}

}

CharacterEncodingResult ConvertStringUtf8ToUtf16Native(uint16_t* dst, int dstLength,
  const char* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf8ToUtf16(&dstCount, &srcCount, dst, dstLength, src, srcLength);
}

CharacterEncodingResult ConvertStringUtf8ToUtf16Native(uint16_t* dst, int dstLength,
  const char* src) {
  int srcLength = static_cast<int>(strlen(src));
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf8ToUtf16(&dstCount, &srcCount, dst,
    dstLength - 1, src, srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst, int dstLength,
  const uint16_t* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf16ToUtf8(&dstCount, &srcCount, dst, dstLength, src, srcLength);
}

CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst, int dstLength,
  const uint16_t* src) {
  int srcLength = GetStringLength(src);
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf16ToUtf8(&dstCount, &srcCount, dst,
    dstLength - 1, src, srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(int* pOutLength,
  const uint16_t* src, int srcLength) {
  return GetConvertedLength<char>(pOutLength, src, srcLength,
    [](size_t* pDstCount, size_t* pSrcCount, char* buffer, int bufferLength,
      const uint16_t* str, int strLength) {
      return ConvertUtf16ToUtf8(pDstCount, pSrcCount, buffer, bufferLength, str, strLength);
    });
}

CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(int* pOutLength,
  const uint16_t* src) {
  return GetLengthOfConvertedStringUtf16NativeToUtf8(pOutLength, src, GetStringLength(src));
}

CharacterEncodingResult ConvertStringUtf8ToUtf16Native(char16_t* dst, int dstLength,
  const char* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf8ToUtf16(&dstCount, &srcCount, reinterpret_cast<uint16_t*>(dst), dstLength, src, srcLength);
}

CharacterEncodingResult ConvertStringUtf8ToUtf16Native(char16_t* dst, int dstLength,
  const char* src) {
  int srcLength = static_cast<int>(strlen(src));
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf8ToUtf16(&dstCount, &srcCount, reinterpret_cast<uint16_t*>(dst),
    dstLength - 1, src, srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst, int dstLength,
  const char16_t* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf16ToUtf8(&dstCount, &srcCount, dst, dstLength, reinterpret_cast<const uint16_t*>(src), srcLength);
}

CharacterEncodingResult ConvertStringUtf16NativeToUtf8(char* dst, int dstLength,
  const char16_t* src) {
  int srcLength = GetStringLength(src);
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf16ToUtf8(&dstCount, &srcCount, dst,
    dstLength - 1, reinterpret_cast<const uint16_t*>(src), srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(int* pOutLength,
  const char16_t* src, int srcLength) {
  return GetConvertedLength<char>(pOutLength, src, srcLength,
    [](size_t* pDstCount, size_t* pSrcCount, char* buffer, int bufferLength,
      const char16_t* str, int strLength) {
      return ConvertUtf16ToUtf8(pDstCount, pSrcCount, buffer, bufferLength, reinterpret_cast<const uint16_t*>(str), strLength);
    });
}

CharacterEncodingResult GetLengthOfConvertedStringUtf16NativeToUtf8(int* pOutLength,
  const char16_t* src) {
  return GetLengthOfConvertedStringUtf16NativeToUtf8(pOutLength, src, GetStringLength(src));
}

CharacterEncodingResult ConvertStringUtf8ToUtf32(uint32_t* dst, int dstLength,
  const char* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf8ToUtf32(&dstCount, &srcCount, dst, dstLength, src, srcLength);
}

CharacterEncodingResult ConvertStringUtf8ToUtf32(uint32_t* dst, int dstLength,
  const char* src) {
  int srcLength = static_cast<int>(strlen(src));
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf8ToUtf32(&dstCount, &srcCount, dst,
    dstLength - 1, src, srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const uint32_t* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf32ToUtf8(&dstCount, &srcCount, dst, dstLength, src, srcLength);
}

CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const uint32_t* src) {
  int srcLength = GetStringLength(src);
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf32ToUtf8(&dstCount, &srcCount, dst,
    dstLength - 1, src, srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(int* pOutLength,
  const uint32_t* src, int srcLength) {
  return GetConvertedLength<char>(pOutLength, src, srcLength,
    [](size_t* pDstCount, size_t* pSrcCount, char* buffer, int bufferLength,
      const uint32_t* str, int strLength) {
      return ConvertUtf32ToUtf8(pDstCount, pSrcCount, buffer, bufferLength, str, strLength);
    });
}

CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(int* pOutLength,
  const uint32_t* src) {
  return GetLengthOfConvertedStringUtf32ToUtf8(pOutLength, src, GetStringLength(src));
}

CharacterEncodingResult ConvertStringUtf8ToUtf32(char32_t* dst, int dstLength,
  const char* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf8ToUtf32(&dstCount, &srcCount, reinterpret_cast<uint32_t*>(dst), dstLength, src, srcLength);
}

CharacterEncodingResult ConvertStringUtf8ToUtf32(char32_t* dst, int dstLength,
  const char* src) {
  int srcLength = static_cast<int>(strlen(src));
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf8ToUtf32(&dstCount, &srcCount, reinterpret_cast<uint32_t*>(dst),
    dstLength - 1, src, srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const char32_t* src, int srcLength) {
  size_t dstCount;
  size_t srcCount;
  return ConvertUtf32ToUtf8(&dstCount, &srcCount, dst, dstLength, reinterpret_cast<const uint32_t*>(src), srcLength);
}

CharacterEncodingResult ConvertStringUtf32ToUtf8(char* dst, int dstLength,
  const char32_t* src) {
  int srcLength = GetStringLength(src);
  size_t dstCount = 0;
  size_t srcCount;
  CharacterEncodingResult result = ConvertUtf32ToUtf8(&dstCount, &srcCount, dst,
    dstLength - 1, reinterpret_cast<const uint32_t*>(src), srcLength);
  if (result == CharacterEncodingResult_Success) {
    dst[dstCount] = 0;
  }
  return result;
}

CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(int* pOutLength,
  const char32_t* src, int srcLength) {
  return GetConvertedLength<char>(pOutLength, src, srcLength,
    [](size_t* pDstCount, size_t* pSrcCount, char* buffer, int bufferLength,
      const char32_t* str, int strLength) {
      return ConvertUtf32ToUtf8(pDstCount, pSrcCount, buffer, bufferLength, reinterpret_cast<const uint32_t*>(str), strLength);
    });
}

CharacterEncodingResult GetLengthOfConvertedStringUtf32ToUtf8(int* pOutLength,
  const char32_t* src) {
  return GetLengthOfConvertedStringUtf32ToUtf8(pOutLength, src, GetStringLength(src));
}

CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf16Native(int* pOutLength,
  const char* src, int srcLength) {
  return GetConvertedLength<uint16_t>(pOutLength, src, srcLength,
    [](size_t* pDstCount, size_t* pSrcCount, uint16_t* buffer, int bufferLength,
      const char* str, int strLength) {
      return ConvertUtf8ToUtf16(pDstCount, pSrcCount, buffer, bufferLength, str, strLength);
    });
}

CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf16Native(int* pOutLength,
  const char* src) {
  return GetLengthOfConvertedStringUtf8ToUtf16Native(pOutLength, src, static_cast<int>(strlen(src)));
}

CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf32(int* pOutLength,
  const char* src, int srcLength) {
  return GetConvertedLength<uint32_t>(pOutLength, src, srcLength,
    [](size_t* pDstCount, size_t* pSrcCount, uint32_t* buffer, int bufferLength,
      const char* str, int strLength) {
      return ConvertUtf8ToUtf32(pDstCount, pSrcCount, buffer, bufferLength, str, strLength);
    });
}

CharacterEncodingResult GetLengthOfConvertedStringUtf8ToUtf32(int* pOutLength,
  const char* src) {
  return GetLengthOfConvertedStringUtf8ToUtf32(pOutLength, src, static_cast<int>(strlen(src)));
}

}
