#include <arm_neon.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/nlibsdk/simd.hpp"

extern "C" {

int nnmem_nlib_memutf8_to_utf32char(size_t* pOutLength,
  uint32_t* pOutCharacter, const char* string, size_t size);
int nnmem_nlib_memcplen(size_t* pOutCount, size_t* pOutSupplementaryCount,
  size_t* pOutLength, const char* string, size_t size);

}

namespace {

using nn::nlibsdk::simd::I128;

constexpr int EInval = 22;
constexpr int ERange = 34;
constexpr int EIlSeq = 84;

struct Progress {
  int result;
  size_t written;
  size_t read;
};

// Blocks of 16 bytes are widened and stored whole before the first non
// ASCII byte is searched, so up to 15 units after it are written too.
// Sequences that run out of input end the conversion without an error.
template <typename Char>
[[gnu::always_inline]] inline Progress ConvertUtf8ToUtf32(Char* destination,
  size_t destinationSize, const char* source, size_t sourceSize) {
  size_t destinationLeft = destinationSize;
  size_t sourceLeft = sourceSize;
  uint32_t character = 0;
  if (destinationSize >= 16 && sourceSize >= 16) {
    for (;;) {
      int8x16_t value = vld1q_s8(reinterpret_cast<const int8_t*>(source));
      uint8x16_t bytes = vreinterpretq_u8_s8(value);
      uint16x8_t low = vmovl_u8(vget_low_u8(bytes));
      uint16x8_t high = vmovl_high_u8(bytes);
      uint32_t* out = reinterpret_cast<uint32_t*>(destination);
      vst1q_u32(out, vmovl_u16(vget_low_u16(low)));
      vst1q_u32(out + 4, vmovl_high_u16(low));
      vst1q_u32(out + 8, vmovl_u16(vget_low_u16(high)));
      vst1q_u32(out + 12, vmovl_high_u16(high));
      uint8x16_t multibyte = vreinterpretq_u8_s8(vcltzq_s8(value));
      if (!I128::IsZero(multibyte)) {
        size_t lane = I128::FindFirstLane(multibyte);
        destination += lane;
        source += lane;
        destinationLeft -= lane;
        sourceLeft -= lane;
        break;
      }
      destination += 16;
      source += 16;
      destinationLeft -= 16;
      sourceLeft -= 16;
      if (sourceLeft < 16 || destinationLeft <= 15) {
        break;
      }
    }
    if (sourceLeft == 0 || destinationLeft == 0) {
      return {0, destinationSize - destinationLeft, sourceSize - sourceLeft};
    }
  }
  else if (destinationSize == 0) {
    return {0, 0, 0};
  }
  int result = 0;
  for (;;) {
    size_t length = 0;
    int error = nnmem_nlib_memutf8_to_utf32char(&length, &character, source,
      sourceLeft);
    if (error != 0) {
      result = error == EIlSeq ? EIlSeq : 0;
      break;
    }
    --destinationLeft;
    *destination++ = static_cast<Char>(character);
    sourceLeft -= length;
    if (sourceLeft == 0) {
      break;
    }
    source += length;
    if (destinationLeft == 0) {
      break;
    }
  }
  return {result, destinationSize - destinationLeft, sourceSize - sourceLeft};
}

template <typename Char>
[[gnu::always_inline]] inline int ConvertMemoryUtf8ToUtf32(
  size_t* pOutWritten, size_t* pOutRead, Char* destination,
  size_t destinationSize, const char* source, size_t sourceSize) {
  if (static_cast<ptrdiff_t>(sourceSize | destinationSize) < 0) {
    return EInval;
  }
  if (sourceSize == 0) {
    *pOutWritten = 0;
    *pOutRead = 0;
    return 0;
  }
  if (destination == nullptr) {
    if (destinationSize != 0) {
      return EInval;
    }
    return nnmem_nlib_memcplen(pOutWritten, nullptr, pOutRead, source,
      sourceSize);
  }
  Progress progress = ConvertUtf8ToUtf32(destination, destinationSize,
    source, sourceSize);
  *pOutWritten = progress.written;
  *pOutRead = progress.read;
  return progress.result;
}

}

extern "C" {

int nnmem_nlib_memutf8_to_utf32(size_t* pOutWritten, size_t* pOutRead,
  uint32_t* destination, size_t destinationSize, const char* source,
  size_t sourceSize) {
  return ConvertMemoryUtf8ToUtf32(pOutWritten, pOutRead, destination,
    destinationSize, source, sourceSize);
}

int nnmem_nlib_memutf8_to_wide(size_t* pOutWritten, size_t* pOutRead,
  wchar_t* destination, size_t destinationSize, const char* source,
  size_t sourceSize) {
  return ConvertMemoryUtf8ToUtf32(pOutWritten, pOutRead, destination,
    destinationSize, source, sourceSize);
}

// A full destination gives 34, a stop before the end otherwise 84.
int nnmem_nlib_utf8_to_utf32(size_t* pOutLength, uint32_t* destination,
  size_t destinationSize, const char* source) {
  size_t count = 0;
  size_t read = 0;
  size_t sourceSize = strlen(source);
  if (destination == nullptr) {
    if (destinationSize != 0) {
      return EInval;
    }
    int result = 0;
    if (static_cast<ptrdiff_t>(sourceSize) < 0) {
      result = EInval;
    }
    else if (sourceSize != 0) {
      result = nnmem_nlib_memcplen(&count, nullptr, &read, source,
        sourceSize);
    }
    if (pOutLength != nullptr) {
      *pOutLength = count;
    }
    if (result != 0) {
      return result;
    }
    return read == sourceSize ? 0 : EIlSeq;
  }
  if (destinationSize == 0) {
    return EInval;
  }
  size_t capacity = destinationSize - 1;
  Progress progress = {0, 0, 0};
  if (static_cast<ptrdiff_t>(sourceSize | capacity) < 0) {
    progress.result = EInval;
  }
  else if (sourceSize != 0) {
    progress = ConvertUtf8ToUtf32(destination, capacity, source, sourceSize);
  }
  destination[progress.written] = 0;
  if (pOutLength != nullptr) {
    *pOutLength = progress.written;
  }
  if (progress.result != 0) {
    return progress.result;
  }
  if (progress.read == sourceSize) {
    return 0;
  }
  return progress.written == capacity ? ERange : EIlSeq;
}

// Supplementary code points are assumed to take four bytes. Any decoding
// error, a truncated sequence included, gives 84.
int nnmem_nlib_memutf8_to_utf16(size_t* pOutWritten, size_t* pOutRead,
  uint16_t* destination, size_t destinationSize, const char* source,
  size_t sourceSize) {
  if (static_cast<ptrdiff_t>(sourceSize | destinationSize) < 0) {
    return EInval;
  }
  if (sourceSize == 0) {
    *pOutWritten = 0;
    *pOutRead = 0;
    return 0;
  }
  if (destination == nullptr) {
    if (destinationSize != 0) {
      return EInval;
    }
    size_t supplementaryCount = 0;
    int result = nnmem_nlib_memcplen(pOutWritten, &supplementaryCount,
      pOutRead, source, sourceSize);
    *pOutWritten += supplementaryCount;
    return result;
  }
  size_t destinationLeft = destinationSize;
  size_t sourceLeft = sourceSize;
  int result = 0;
  if (destinationSize >= 16 && sourceSize >= 16) {
    for (;;) {
      int8x16_t value = vld1q_s8(reinterpret_cast<const int8_t*>(source));
      uint8x16_t bytes = vreinterpretq_u8_s8(value);
      vst1q_u16(destination, vmovl_u8(vget_low_u8(bytes)));
      vst1q_u16(destination + 8, vmovl_high_u8(bytes));
      uint8x16_t multibyte = vreinterpretq_u8_s8(vcltzq_s8(value));
      if (!I128::IsZero(multibyte)) {
        size_t lane = I128::FindFirstLane(multibyte);
        destination += lane;
        source += lane;
        destinationLeft -= lane;
        sourceLeft -= lane;
        break;
      }
      destination += 16;
      source += 16;
      destinationLeft -= 16;
      sourceLeft -= 16;
      if (sourceLeft < 16 || destinationLeft <= 15) {
        break;
      }
    }
    if (sourceLeft == 0 || destinationLeft == 0) {
      goto done;
    }
  }
  else if (destinationSize == 0) {
    goto done;
  }
  for (;;) {
    while (static_cast<int8_t>(*source) >= 0) {
      *destination++ = static_cast<uint16_t>(*source);
      --destinationLeft;
      if (--sourceLeft == 0) {
        goto done;
      }
      ++source;
      if (destinationLeft == 0) {
        goto done;
      }
    }
    size_t length = 0;
    uint32_t character = 0;
    if (nnmem_nlib_memutf8_to_utf32char(&length, &character, source,
      sourceLeft) != 0) {
      result = EIlSeq;
      goto done;
    }
    if ((character >> 16) != 0) {
      if (destinationLeft == 1) {
        goto done;
      }
      destinationLeft -= 2;
      sourceLeft -= 4;
      destination[0] = static_cast<uint16_t>(
        (((character - 0x10000) >> 10) & 0x3ff) | 0xd800);
      destination[1] = static_cast<uint16_t>((character & 0x3ff) | 0xdc00);
      if (sourceLeft == 0) {
        goto done;
      }
      destination += 2;
      source += 4;
    }
    else {
      *destination++ = static_cast<uint16_t>(character);
      --destinationLeft;
      sourceLeft -= length;
      if (sourceLeft == 0) {
        goto done;
      }
      source += length;
    }
    if (destinationLeft == 0) {
      goto done;
    }
  }

done:
  *pOutWritten = destinationSize - destinationLeft;
  *pOutRead = sourceSize - sourceLeft;
  return result;
}

int nnmem_nlib_memutf32_to_utf8(size_t* pOutWritten, size_t* pOutRead,
  char* destination, size_t destinationSize, const uint32_t* source,
  size_t sourceSize) {
  if (static_cast<ptrdiff_t>(sourceSize | destinationSize) < 0) {
    return EInval;
  }
  if (sourceSize == 0) {
    *pOutWritten = 0;
    *pOutRead = 0;
    return 0;
  }
  if (destination == nullptr && destinationSize != 0) {
    return EInval;
  }
  size_t written = 0;
  size_t read = 0;
  int result = 0;
  for (; read < sourceSize; ++read) {
    uint32_t c = source[read];
    size_t size;
    if (c < 0x80) {
      size = 1;
    }
    else if (c < 0x800) {
      size = 2;
    }
    else if ((c >> 16) != 0) {
      if ((c >> 16) > 0x10) {
        result = EIlSeq;
        break;
      }
      size = 4;
    }
    else if ((c & 0xf800) == 0xd800) {
      result = EIlSeq;
      break;
    }
    else {
      size = 3;
    }
    if (destination != nullptr) {
      if (destinationSize - written < size) {
        break;
      }
      char* out = destination + written;
      switch (size) {
        case 1:
          out[0] = static_cast<char>(c);
          break;
        case 2:
          out[0] = static_cast<char>((c >> 6) | 0xc0);
          out[1] = static_cast<char>((c & 0x3f) | 0x80);
          break;
        case 3:
          out[0] = static_cast<char>((c >> 12) | 0xe0);
          out[1] = static_cast<char>(((c >> 6) & 0x3f) | 0x80);
          out[2] = static_cast<char>((c & 0x3f) | 0x80);
          break;
        default:
          out[0] = static_cast<char>((c >> 18) | 0xf0);
          out[1] = static_cast<char>(((c >> 12) & 0x3f) | 0x80);
          out[2] = static_cast<char>(((c >> 6) & 0x3f) | 0x80);
          out[3] = static_cast<char>((c & 0x3f) | 0x80);
          break;
      }
    }
    written += size;
  }
  *pOutWritten = written;
  *pOutRead = read;
  return result;
}

// Blocks of 16 units are narrowed and stored whole before the first non
// ASCII unit is searched. A high surrogate ending the input is left unread.
int nnmem_nlib_memutf16_to_utf8(size_t* pOutWritten, size_t* pOutRead,
  char* destination, size_t destinationSize, const uint16_t* source,
  size_t sourceSize) {
  if (static_cast<ptrdiff_t>(sourceSize | destinationSize) < 0) {
    return EInval;
  }
  if (sourceSize == 0) {
    *pOutWritten = 0;
    *pOutRead = 0;
    return 0;
  }
  bool isCounting = destination == nullptr;
  if (isCounting && destinationSize != 0) {
    return EInval;
  }
  size_t destinationLeft = destinationSize;
  size_t sourceLeft = sourceSize;
  size_t written = 0;
  int result = 0;
  uint16x8_t ascii = vdupq_n_u16(0x7f);
  for (;;) {
    if (!isCounting && sourceLeft >= 16 && destinationLeft >= 16) {
      for (;;) {
        uint16x8_t low = vld1q_u16(source);
        uint16x8_t high = vld1q_u16(source + 8);
        vst1q_u8(reinterpret_cast<uint8_t*>(destination + written),
          vuzp1q_u8(vreinterpretq_u8_u16(low), vreinterpretq_u8_u16(high)));
        uint16x8_t lowWide = vcgtq_u16(low, ascii);
        uint16x8_t highWide = vcgtq_u16(high, ascii);
        if (!I128::IsZero(vreinterpretq_u8_u16(vorrq_u16(highWide,
          lowWide)))) {
          size_t lane = !I128::IsZero(vreinterpretq_u8_u16(lowWide)) ?
            __clzll(__rbitll(vget_lane_u64(vreinterpret_u64_u8(vmovn_u16(
            lowWide)), 0))) >> 3 : (__clzll(__rbitll(vget_lane_u64(
            vreinterpret_u64_u8(vmovn_u16(highWide)), 0))) >> 3) + 8;
          source += lane;
          sourceLeft -= lane;
          destinationLeft -= lane;
          written += lane;
          break;
        }
        source += 16;
        sourceLeft -= 16;
        destinationLeft -= 16;
        written += 16;
        if (sourceLeft < 16 || destinationLeft <= 15) {
          break;
        }
      }
      if (sourceLeft == 0 || destinationLeft == 0) {
        goto done;
      }
    }
    uint32_t c;
    for (;;) {
      c = *source;
      if (c >= 0x80) {
        break;
      }
      if (!isCounting) {
        if (destinationLeft == 0) {
          goto done;
        }
        destination[written] = static_cast<char>(c);
        --destinationLeft;
      }
      ++written;
      ++source;
      if (--sourceLeft == 0) {
        goto done;
      }
    }
    for (;;) {
      size_t size;
      if (c < 0x800) {
        size = 2;
      }
      else if ((c & 0xf800) != 0xd800) {
        size = 3;
      }
      else {
        size = 4;
      }
      if (!isCounting && destinationLeft < size) {
        goto done;
      }
      char* out = destination + written;
      if (size == 4) {
        if (sourceLeft == 1) {
          goto done;
        }
        uint32_t next = source[1];
        if ((c & 0x400) != 0 || (next & 0xfc00) != 0xdc00) {
          result = EIlSeq;
          goto done;
        }
        if (!isCounting) {
          uint32_t character = next + (c << 10) - 0x35fdc00;
          out[0] = static_cast<char>((character >> 18) | 0xf0);
          out[1] = static_cast<char>(((character >> 12) & 0x3f) | 0x80);
          out[2] = static_cast<char>(((character >> 6) & 0x3f) | 0x80);
          out[3] = static_cast<char>((next & 0x3f) | 0x80);
        }
        ++source;
        --sourceLeft;
      }
      else if (!isCounting) {
        if (size == 3) {
          out[0] = static_cast<char>((c >> 12) | 0xe0);
          out[1] = static_cast<char>(((c >> 6) & 0x3f) | 0x80);
          out[2] = static_cast<char>((c & 0x3f) | 0x80);
        }
        else {
          out[0] = static_cast<char>((c >> 6) | 0xc0);
          out[1] = static_cast<char>((c & 0x3f) | 0x80);
        }
      }
      written += size;
      destinationLeft -= size;
      ++source;
      if (--sourceLeft == 0) {
        goto done;
      }
      c = *source;
      if (c < 0x80) {
        break;
      }
    }
  }

done:
  *pOutWritten = written;
  *pOutRead = sourceSize - sourceLeft;
  return result;
}

}
