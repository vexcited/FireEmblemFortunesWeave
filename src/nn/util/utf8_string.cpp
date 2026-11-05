#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace nn::util {

int GetCodePointCountOfUtf8String(const char* str, size_t length);

namespace {

// Lengths of the sequences each lead byte starts, 0 for continuation bytes,
// overlong leads and leads past U+10FFFF.
constexpr uint8_t Utf8LeadLengthTable[256] = {
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
  0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

bool IsContinuation(char c) {
  return static_cast<int8_t>(c) < -64;
}

// Rejects surrogates, overlong forms and code points past U+10FFFF.
bool IsValidSequence(const char* str, int length) {
  const uint8_t lead = static_cast<uint8_t>(str[0]);
  switch (length) {
    case 1:
      return true;
    case 2:
      return IsContinuation(str[1]);
    case 3:
      if (lead == 0xed) {
        if (static_cast<int8_t>(str[1]) >= -96) {
          return false;
        }
      }
      else if (lead == 0xe0) {
        if ((str[1] & 0xe0) != 0xa0) {
          return false;
        }
      }
      else if (!IsContinuation(str[1])) {
        return false;
      }
      return IsContinuation(str[2]);
    case 4:
      if (lead == 0xf4) {
        if (static_cast<int8_t>(str[1]) >= -112) {
          return false;
        }
      }
      else if (lead == 0xf0) {
        if (!IsContinuation(str[1]) || (str[1] & 0x30) == 0) {
          return false;
        }
      }
      else if (!IsContinuation(str[1])) {
        return false;
      }
      return IsContinuation(str[2]) && IsContinuation(str[3]);
    default:
      return false;
  }
}

}

bool IsValidUtf8String(const char* str, size_t length) {
  int count;
  [[clang::noinline]] count = GetCodePointCountOfUtf8String(str, length);
  return count != -1;
}

int GetCodePointCountOfUtf8String(const char* str, size_t length) {
  int count = 0;
  while (length != 0) {
    const size_t sequence = Utf8LeadLengthTable[static_cast<uint8_t>(*str)];
    if (length < sequence) {
      return -1;
    }
    if (!IsValidSequence(str, static_cast<int>(sequence))) {
      return -1;
    }
    str += sequence;
    length -= sequence;
    ++count;
  }
  return count;
}

// Copies whole characters only, at most count of them and as many as fit
// with the terminator.
size_t CopyUtf8String(char* dst, size_t dstSize, const char* src,
  size_t srcLength, int count) {
  const char* end = src;
  while (srcLength != 0) {
    const size_t sequence = Utf8LeadLengthTable[static_cast<uint8_t>(*end)];
    const bool isComplete = srcLength >= sequence;
    srcLength -= sequence;
    if (!isComplete || !IsValidSequence(end, static_cast<int>(sequence))) {
      break;
    }
    const char* next = end + sequence;
    if (static_cast<size_t>(next - src + 1) > dstSize) {
      break;
    }
    end = next;
    if (--count == 0) {
      break;
    }
  }

  const size_t size = end - src;
  if (size != 0) {
    memcpy(dst, src, size);
  }
  dst[size] = 0;
  return size;
}

}
