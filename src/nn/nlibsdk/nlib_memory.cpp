#include <arm_neon.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace {

bool IsSpace(uint8_t c) {
  return c == ' ' || c == '\t' || c == '\r';
}

bool Contains(const uint8_t* set, size_t setSize, uint8_t c) {
  for (size_t i = 0; i < setSize; ++i) {
    if (set[i] == c) {
      return true;
    }
  }
  return false;
}

}

// The generic functions scan a word at a time once aligned. An aligned null
// pointer returns null without reading.
extern "C" {

int nnmem_nlib_memcmp_generic(const void* first, const void* second,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(first);
  const uint8_t* q = static_cast<const uint8_t*>(second);
  if (size < 16 || ((reinterpret_cast<uintptr_t>(p) ^
    reinterpret_cast<uintptr_t>(q)) & 3) != 0) {
    return memcmp(first, second, size);
  }
  for (size_t i = 0; i < size; ++i) {
    if (p[i] != q[i]) {
      return p[i] - q[i];
    }
  }
  return 0;
}

const void* nnmem_nlib_memchr_generic(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint8_t c = static_cast<uint8_t>(character);
  for (size_t i = 0; i < size; ++i) {
    if (p[i] == c) {
      return p + i;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memrchr_generic(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  uint8_t c = static_cast<uint8_t>(character);
  while (size != 0) {
    --size;
    if (p[size] == c) {
      return p + size;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_not_generic(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint8_t c = static_cast<uint8_t>(character);
  for (size_t i = 0; i < size; ++i) {
    if (p[i] != c) {
      return p + i;
    }
  }
  return nullptr;
}

// The range is a two character string of ASCII bounds, the low one first.
const void* nnmem_nlib_memchr_range_not_generic(const void* data,
  const char* range, size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr || range == nullptr) {
    return nullptr;
  }
  if (range[0] == 0 || range[1] == 0 || range[2] != 0) {
    return nullptr;
  }
  uint32_t low = range[0] & 0x7f;
  uint32_t high = range[1] & 0x7f;
  if (low >= high) {
    return nullptr;
  }
  for (size_t i = 0; i < size; ++i) {
    if (p[i] < low || p[i] > high) {
      return p + i;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_lt_generic(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint32_t c = character & 0x7f;
  for (size_t i = 0; i < size; ++i) {
    if (p[i] < c) {
      return p + i;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_gt_generic(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint32_t c = character & 0x7f;
  for (size_t i = 0; i < size; ++i) {
    if (p[i] > c) {
      return p + i;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_mb_generic(const void* data, size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  for (size_t i = 0; i < size; ++i) {
    if ((p[i] & 0x80) != 0) {
      return p + i;
    }
  }
  return nullptr;
}

size_t nnmem_nlib_memspn(const void* data, size_t size, const char* set,
  size_t setSize) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  const uint8_t* s = reinterpret_cast<const uint8_t*>(set);
  for (size_t i = 0; i < size; ++i) {
    if (!Contains(s, setSize, p[i])) {
      return i;
    }
  }
  return size;
}

size_t nnmem_nlib_memcspn(const void* data, size_t size, const char* set,
  size_t setSize) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  const uint8_t* s = reinterpret_cast<const uint8_t*>(set);
  for (size_t i = 0; i < size; ++i) {
    if (Contains(s, setSize, p[i])) {
      return i;
    }
  }
  return size;
}

// Unrolled by four so LLVM does not turn the scan into strlen.
size_t nnmem_nlib_strlen_generic(const char* string) {
  if (string == nullptr) {
    return 0;
  }
  size_t length = 0;
  for (;;) {
    if (string[length] == 0) {
      return length;
    }
    if (string[length + 1] == 0) {
      return length + 1;
    }
    if (string[length + 2] == 0) {
      return length + 2;
    }
    if (string[length + 3] == 0) {
      return length + 3;
    }
    length += 4;
  }
}

size_t nnmem_nlib_strnlen_generic(const char* string, size_t maxSize) {
  if (string == nullptr) {
    return 0;
  }
  size_t length = 0;
  while (length < maxSize && string[length] != 0) {
    ++length;
  }
  return length;
}

const char* nnmem_nlib_strchr_generic(const char* string, int character) {
  if (string == nullptr) {
    return nullptr;
  }
  char c = static_cast<char>(character);
  for (;; ++string) {
    if (*string == c) {
      return string;
    }
    if (*string == 0) {
      return nullptr;
    }
  }
}

// Whole blocks of 16 bytes are copied before the character is searched, so
// up to 15 bytes after it are written too.
void* nnmem_nlib_memccpy(void* destination, size_t destinationSize,
  const void* source, size_t sourceSize, int character) {
  uint8_t* d = static_cast<uint8_t*>(destination);
  const uint8_t* s = static_cast<const uint8_t*>(source);
  size_t size = destinationSize < sourceSize ? destinationSize : sourceSize;
  uint8_t c = static_cast<uint8_t>(character);
  if (size >= 16) {
    uint8x16_t pattern = vdupq_n_u8(c);
    do {
      uint8x16_t block = vld1q_u8(s);
      uint8x16_t match = vceqq_u8(block, pattern);
      vst1q_u8(d, block);
      if (vmaxvq_u32(vreinterpretq_u32_u8(match)) != 0) {
        uint64_t mask = vget_lane_u64(vreinterpret_u64_u8(vshrn_n_u16(
          vreinterpretq_u16_u8(match), 4)), 0);
        return d + (__builtin_ctzll(mask) >> 2) + 1;
      }
      s += 16;
      d += 16;
      size -= 16;
    } while (size >= 16);
  }
  while (size != 0) {
    uint8_t value = *s++;
    --size;
    *d++ = value;
    if (value == c) {
      return d;
    }
  }
  return nullptr;
}

// Skips spaces, tabs, carriage returns and newlines, counting the newlines
// and keeping the last one.
const char* nnmem_nlib_skipws_generic(size_t* pOutNewlineCount,
  const char** pOutLastNewline, const char* string, size_t size) {
  int count = 0;
  const char* lastNewline = nullptr;
  size_t i = 0;
  for (; i < size; ++i) {
    uint8_t c = static_cast<uint8_t>(string[i]);
    if (c == '\n') {
      ++count;
      lastNewline = string + i;
    }
    else if (!IsSpace(c)) {
      break;
    }
  }
  if (pOutNewlineCount != nullptr) {
    *pOutNewlineCount = static_cast<size_t>(count);
  }
  if (pOutLastNewline != nullptr) {
    *pOutLastNewline = lastNewline;
  }
  return string + i;
}

}
