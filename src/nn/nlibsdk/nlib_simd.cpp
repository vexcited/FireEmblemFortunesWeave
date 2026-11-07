#include <arm_neon.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/nlibsdk/simd.hpp"

// The NEON functions scan blocks of 16 or 32 bytes and finish with a scalar
// tail. A null pointer returns null without reading.
namespace {

using nn::nlibsdk::simd::I128;

constexpr int EIlSeq = 84;

bool IsSurrogate(uint32_t character) {
  return (character & 0xf800) == 0xd800;
}

// Finds the character or the terminator, reading whole aligned blocks.
const char* FindCharacterOrEnd(const char* string, int character) {
  uint8x16_t pattern = vdupq_n_u8(static_cast<uint8_t>(character));
  const uint8_t* p = reinterpret_cast<const uint8_t*>(string);
  size_t misalignment = reinterpret_cast<uintptr_t>(p) & 15;
  if (misalignment != 0) {
    const uint8_t* block = p - misalignment;
    uint8x16_t value = vld1q_u8(block);
    uint8x16_t found = vandq_u8(vorrq_u8(vceqq_u8(value, pattern),
      vceqzq_u8(value)), I128::SetMask8HigherLanes(16 - misalignment));
    if (!I128::IsZero(found)) {
      return reinterpret_cast<const char*>(block +
        I128::FindFirstLane(found));
    }
    p += 16 - misalignment;
  }
  if ((reinterpret_cast<uintptr_t>(p) & 0x1f) != 0) {
    uint8x16_t value = vld1q_u8(p);
    uint8x16_t found = vorrq_u8(vceqq_u8(value, pattern), vceqzq_u8(value));
    if (!I128::IsZero(found)) {
      return reinterpret_cast<const char*>(p + I128::FindFirstLane(found));
    }
    p += 16;
  }
  uint8x16_t first;
  uint8x16_t second;
  for (;; p += 32) {
    uint8x16_t low = vld1q_u8(p);
    uint8x16_t high = vld1q_u8(p + 16);
    first = vorrq_u8(vceqq_u8(low, pattern), vceqzq_u8(low));
    second = vorrq_u8(vceqq_u8(high, pattern), vceqzq_u8(high));
    if (!I128::IsZero(vorrq_u8(second, first))) {
      break;
    }
  }
  if (!I128::IsZero(first)) {
    return reinterpret_cast<const char*>(p + I128::FindFirstLane(first));
  }
  return reinterpret_cast<const char*>(p + 16 +
    I128::FindFirstLane(second));
}

}

extern "C" {

// Only the low byte is searched, a terminator is a match only for zero.
const char* nnmem_nlib_strchr_simd(const char* string, int character) {
  if (string == nullptr) {
    return nullptr;
  }
  const char* found = FindCharacterOrEnd(string, character);
  if (character == 0 || *found != 0) {
    return found;
  }
  return nullptr;
}

const char* nnmem_nlib_strchrnul(const char* string, int character) {
  return FindCharacterOrEnd(string, character);
}

const char* nnmem_nlib_strrchr_simd(const char* string, int character) {
  if (string == nullptr) {
    return nullptr;
  }
  uint8x16_t pattern = vdupq_n_u8(static_cast<uint8_t>(character));
  const uint8_t* p = reinterpret_cast<const uint8_t*>(string);
  const uint8_t* last = nullptr;
  size_t misalignment = reinterpret_cast<uintptr_t>(p) & 15;
  if (misalignment != 0) {
    const uint8_t* block = p - misalignment;
    uint8x16_t mask = I128::SetMask8HigherLanes(16 - misalignment);
    uint8x16_t value = vld1q_u8(block);
    uint8x16_t end = vandq_u8(vceqzq_u8(value), mask);
    uint8x16_t found = vandq_u8(vceqq_u8(value, pattern), mask);
    if (!I128::IsZero(vorrq_u8(end, found))) {
      if (!I128::IsZero(end)) {
        found = vandq_u8(I128::SetMask8LowerLanes(
          I128::FindFirstLane(end) + 1), found);
        if (!I128::IsZero(found)) {
          return reinterpret_cast<const char*>(block + 15 -
            I128::CountLanesAfterLast(found));
        }
        return nullptr;
      }
      last = block + 15 - I128::CountLanesAfterLast(found);
    }
    p += 16 - misalignment;
  }
  uint8x16_t end;
  uint8x16_t found;
  for (;; p += 16) {
    uint8x16_t value = vld1q_u8(p);
    end = vceqzq_u8(value);
    found = vceqq_u8(value, pattern);
    if (I128::IsZero(vorrq_u8(end, found))) {
      continue;
    }
    if (!I128::IsZero(end)) {
      break;
    }
    last = p + 15 - I128::CountLanesAfterLast(found);
  }
  found = vandq_u8(found, I128::SetMask8LowerLanes(
    I128::FindFirstLane(end) + 1));
  if (!I128::IsZero(found)) {
    return reinterpret_cast<const char*>(p + 15 -
      I128::CountLanesAfterLast(found));
  }
  return reinterpret_cast<const char*>(last);
}

// The scalar tail goes to memchr.
const void* nnmem_nlib_memchr_simd(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint8_t c = static_cast<uint8_t>(character);
  size_t blockSize = size & ~static_cast<size_t>(15);
  for (size_t i = 0; i < blockSize; ++i) {
    if (p[i] == c) {
      return p + i;
    }
  }
  if (size == blockSize) {
    return nullptr;
  }
  return memchr(p + blockSize, character, size - blockSize);
}

const void* nnmem_nlib_memrchr_simd(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint8_t c = static_cast<uint8_t>(character);
  while (size != 0) {
    --size;
    if (p[size] == c) {
      return p + size;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_not_simd(const void* data, int character,
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

// Unlike the generic one, bounds outside ASCII are refused.
const void* nnmem_nlib_memchr_range_not_simd(const void* data,
  const char* range, size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr || range == nullptr) {
    return nullptr;
  }
  uint8_t low = static_cast<uint8_t>(range[0]);
  uint8_t high = static_cast<uint8_t>(range[1]);
  if (low == 0 || high == 0 || range[2] != 0 || low >= high ||
    ((low | high) & 0x80) != 0) {
    return nullptr;
  }
  for (size_t i = 0; i < size; ++i) {
    if (p[i] < low || p[i] > high) {
      return p + i;
    }
  }
  return nullptr;
}

// The blocks compare against the character masked to ASCII but the tail
// compares against the full byte.
const void* nnmem_nlib_memchr_lt_simd(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint8_t c = static_cast<uint8_t>(character);
  uint8_t blockLimit = c & 0x7f;
  size_t blockSize = size & ~static_cast<size_t>(15);
  for (size_t i = 0; i < size; ++i) {
    if (p[i] < (i < blockSize ? blockLimit : c)) {
      return p + i;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_gt_simd(const void* data, int character,
  size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  if (p == nullptr) {
    return nullptr;
  }
  uint8_t c = static_cast<uint8_t>(character);
  uint8_t blockLimit = c & 0x7f;
  size_t blockSize = size & ~static_cast<size_t>(15);
  for (size_t i = 0; i < size; ++i) {
    if (p[i] > (i < blockSize ? blockLimit : c)) {
      return p + i;
    }
  }
  return nullptr;
}

const void* nnmem_nlib_memchr_mb_simd(const void* data, size_t size) {
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

size_t nnmem_nlib_strlen_simd(const char* string) {
  if (string == nullptr) {
    return 0;
  }
  const uint8_t* s = reinterpret_cast<const uint8_t*>(string);
  const uint8_t* p = s;
  size_t misalignment = reinterpret_cast<uintptr_t>(s) & 15;
  if (misalignment != 0) {
    uint8x16_t end = vandq_u8(vceqzq_u8(vld1q_u8(s - misalignment)),
      I128::SetMask8HigherLanes(16 - misalignment));
    if (!I128::IsZero(end)) {
      return I128::FindFirstLane(end) - misalignment;
    }
    p += 16 - misalignment;
  }
  if ((reinterpret_cast<uintptr_t>(p) & 0x1f) != 0) {
    uint8x16_t end = vceqzq_u8(vld1q_u8(p));
    if (!I128::IsZero(end)) {
      return static_cast<size_t>(p - s) + I128::FindFirstLane(end);
    }
    p += 16;
  }
  uint8x16_t first;
  uint8x16_t second;
  for (;; p += 32) {
    first = vceqzq_u8(vld1q_u8(p));
    second = vceqzq_u8(vld1q_u8(p + 16));
    if (!I128::IsZero(vorrq_u8(second, first))) {
      break;
    }
  }
  size_t lane = !I128::IsZero(first) ? I128::FindFirstLane(first) :
    I128::FindFirstLane(second) + 16;
  return lane + static_cast<size_t>(p - s);
}

// The end is computed with a wrapping addition, so a huge maximum size
// returns at once.
size_t nnmem_nlib_strnlen_simd(const char* string, size_t maxSize) {
  if (string == nullptr) {
    return 0;
  }
  const uint8_t* s = reinterpret_cast<const uint8_t*>(string);
  uintptr_t limit = reinterpret_cast<uintptr_t>(s) + maxSize;
  const uint8_t* p = s;
  if ((reinterpret_cast<uintptr_t>(s) & 0x1f) != 0) {
    size_t misalignment = reinterpret_cast<uintptr_t>(s) & 15;
    size_t head = 16 - misalignment;
    uint8x16_t end = vandq_u8(vceqzq_u8(vld1q_u8(s - misalignment)),
      I128::SetMask8HigherLanes(head));
    if (!I128::IsZero(end)) {
      size_t length = I128::FindFirstLane(end) - misalignment;
      return length >= maxSize ? maxSize : length;
    }
    if (head >= maxSize) {
      return maxSize;
    }
    p += head;
    if ((reinterpret_cast<uintptr_t>(p) & 0x1f) != 0) {
      end = vceqzq_u8(vld1q_u8(p));
      p += 16;
      if (!I128::IsZero(end)) {
        size_t length = head + I128::FindFirstLane(end);
        return length >= maxSize ? maxSize : length;
      }
      if (reinterpret_cast<uintptr_t>(p) >= limit) {
        return maxSize;
      }
    }
  }
  uint8x16_t first;
  uint8x16_t second;
  size_t offset = static_cast<size_t>(p - s);
  for (;; offset += 32) {
    first = vceqzq_u8(vld1q_u8(p));
    second = vceqzq_u8(vld1q_u8(p + 16));
    p += 32;
    if (!I128::IsZero(vorrq_u8(second, first))) {
      break;
    }
    if (reinterpret_cast<uintptr_t>(p) >= limit) {
      return maxSize;
    }
  }
  size_t lane = !I128::IsZero(first) ? I128::FindFirstLane(first) :
    I128::FindFirstLane(second) + 16;
  size_t length = offset + lane;
  return length >= maxSize ? maxSize : length;
}

size_t nnmem_nlib_utf16len_simd(const uint16_t* string) {
  if (string == nullptr) {
    return 0;
  }
  const uint16_t* p = string;
  if ((reinterpret_cast<uintptr_t>(string) & 0x1f) != 0) {
    size_t misalignment = (reinterpret_cast<uintptr_t>(string) >> 1) & 7;
    uint8x16_t end = vandq_u8(I128::SetMask8HigherLanes(16 -
      2 * misalignment), vreinterpretq_u8_u16(vceqzq_u16(vld1q_u16(
      string - misalignment))));
    if (!I128::IsZero(end)) {
      return (I128::FindFirstLane(end) >> 1) - misalignment;
    }
    size_t head = 8 - misalignment;
    p += head;
    if ((reinterpret_cast<uintptr_t>(p) & 0x1f) != 0) {
      uint16x8_t found = vceqzq_u16(vld1q_u16(p));
      p += 8;
      if (!I128::IsZero(vreinterpretq_u8_u16(found))) {
        return head + (__clzll(__rbitll(vget_lane_u64(vreinterpret_u64_u8(
          vmovn_u16(found)), 0))) >> 3);
      }
    }
  }
  uint16x8_t first;
  uint16x8_t second;
  for (;; p += 16) {
    first = vceqzq_u16(vld1q_u16(p));
    second = vceqzq_u16(vld1q_u16(p + 8));
    if (!I128::IsZero(vreinterpretq_u8_u16(vorrq_u16(first, second)))) {
      break;
    }
  }
  size_t lane = !I128::IsZero(vreinterpretq_u8_u16(first)) ?
    __clzll(__rbitll(vget_lane_u64(vreinterpret_u64_u8(vmovn_u16(first)),
    0))) >> 2 : (__clzll(__rbitll(vget_lane_u64(vreinterpret_u64_u8(
    vmovn_u16(second)), 0))) >> 2) + 16;
  return static_cast<size_t>(p - string) + (lane >> 1);
}

size_t nnmem_nlib_utf16nlen_simd(const uint16_t* string, size_t maxSize) {
  if (string == nullptr) {
    return 0;
  }
  uintptr_t limit = reinterpret_cast<uintptr_t>(string) + 2 * maxSize;
  const uint16_t* p = string;
  if ((reinterpret_cast<uintptr_t>(string) & 0x1f) != 0) {
    size_t misalignment = (reinterpret_cast<uintptr_t>(string) >> 1) & 7;
    uint8x16_t end = vandq_u8(I128::SetMask8HigherLanes(16 -
      2 * misalignment), vreinterpretq_u8_u16(vceqzq_u16(vld1q_u16(
      string - misalignment))));
    if (!I128::IsZero(end)) {
      size_t length = (I128::FindFirstLane(end) >> 1) - misalignment;
      return length >= maxSize ? maxSize : length;
    }
    size_t head = 8 - misalignment;
    if (head >= maxSize) {
      return maxSize;
    }
    p += head;
    if ((reinterpret_cast<uintptr_t>(p) & 0x1f) != 0) {
      uint16x8_t found = vceqzq_u16(vld1q_u16(p));
      p += 8;
      if (!I128::IsZero(vreinterpretq_u8_u16(found))) {
        size_t length = head + (__clzll(__rbitll(vget_lane_u64(
          vreinterpret_u64_u8(vmovn_u16(found)), 0))) >> 3);
        return length >= maxSize ? maxSize : length;
      }
    }
    if (reinterpret_cast<uintptr_t>(p) >= limit) {
      return maxSize;
    }
  }
  uint16x8_t first;
  uint16x8_t second;
  size_t offset = static_cast<size_t>(reinterpret_cast<uintptr_t>(p) -
    reinterpret_cast<uintptr_t>(string));
  for (;; offset += 32) {
    first = vceqzq_u16(vld1q_u16(p));
    second = vceqzq_u16(vld1q_u16(p + 8));
    p += 16;
    if (!I128::IsZero(vreinterpretq_u8_u16(vorrq_u16(first, second)))) {
      break;
    }
    if (reinterpret_cast<uintptr_t>(p) >= limit) {
      return maxSize;
    }
  }
  size_t lane = !I128::IsZero(vreinterpretq_u8_u16(first)) ?
    __clzll(__rbitll(vget_lane_u64(vreinterpret_u64_u8(vmovn_u16(first)),
    0))) >> 2 : (__clzll(__rbitll(vget_lane_u64(vreinterpret_u64_u8(
    vmovn_u16(second)), 0))) >> 2) + 16;
  size_t length = (offset >> 1) + (lane >> 1);
  return length >= maxSize ? maxSize : length;
}

int nnmem_nlib_utf16cplen_ex_simd(size_t* pOutCount, size_t* pOutLength,
  const uint16_t* string) {
  size_t count = 0;
  const uint16_t* p = string;
  int result = 0;
  while (*p != 0) {
    if (!IsSurrogate(*p)) {
      ++p;
    }
    else if ((*p >> 10) > 0x36 || (p[1] & 0xfc00) != 0xdc00) {
      result = EIlSeq;
      break;
    }
    else {
      p += 2;
    }
    ++count;
  }
  if (pOutCount != nullptr) {
    *pOutCount = count;
  }
  if (pOutLength != nullptr) {
    *pOutLength = static_cast<size_t>(p - string);
  }
  return result;
}

int nnmem_nlib_memcmp_simd(const void* first, const void* second,
  size_t size) {
  if (size < 16) {
    return memcmp(first, second, size);
  }
  const uint8_t* p = static_cast<const uint8_t*>(first);
  const uint8_t* q = static_cast<const uint8_t*>(second);
  for (size_t i = 0; i < size; ++i) {
    if (p[i] != q[i]) {
      return p[i] - q[i];
    }
  }
  return 0;
}

int nnmem_nlib_swapendian_16_simd(uint16_t* data, size_t count) {
  while (count >= 8) {
    uint8x16_t block = vld1q_u8(reinterpret_cast<uint8_t*>(data));
    vst1q_u8(reinterpret_cast<uint8_t*>(data), vrev16q_u8(block));
    data += 8;
    count -= 8;
  }
  while (count != 0) {
    --count;
    data[count] = __builtin_bswap16(data[count]);
  }
  return 0;
}

int nnmem_nlib_swapendian_32_simd(uint32_t* data, size_t count) {
  while (count >= 4) {
    uint8x16_t block = vld1q_u8(reinterpret_cast<uint8_t*>(data));
    vst1q_u8(reinterpret_cast<uint8_t*>(data), vrev32q_u8(block));
    data += 4;
    count -= 4;
  }
  for (size_t i = 0; i < count; ++i) {
    data[i] = __builtin_bswap32(data[i]);
  }
  return 0;
}

}
