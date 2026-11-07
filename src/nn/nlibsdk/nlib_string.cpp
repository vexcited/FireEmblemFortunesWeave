#include <arm_acle.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

extern "C" {

size_t nnmem_nlib_strnlen(const char* string, size_t maxSize);
size_t nnmem_nlib_wcsnlen(const wchar_t* string, size_t maxSize);
size_t nnmem_nlib_utf16nlen_(const uint16_t* string, size_t maxSize);
size_t nnmem_nlib_utf32nlen_(const uint32_t* string, size_t maxSize);
const char* nnmem_nlib_strrchr(const char* string, int character);
int nnmem_nlib_memcplen(size_t* pOutCount, size_t* pOutSupplementaryCount,
  size_t* pOutLength, const char* string, size_t size);
size_t nnmem_nlib_utf16len_(const uint16_t* string);
const void* nnmem_nlib_memrchr(const void* data, int character, size_t size);
int nnmem_nlib_memutf16_to_utf8(size_t* pOutWritten, size_t* pOutRead,
  char* destination, size_t destinationSize, const uint16_t* source,
  size_t sourceSize);
int nnmem_nlib_memutf8_to_utf16(size_t* pOutWritten, size_t* pOutRead,
  uint16_t* destination, size_t destinationSize, const char* source,
  size_t sourceSize);

}

namespace {

constexpr int EInval = 22;
constexpr int ERange = 34;
constexpr int EIlSeq = 84;

bool IsSurrogate(uint32_t character) {
  return (character & 0xf800) == 0xd800;
}

// Code points outside the basic plane only have their low 16 bits checked.
bool HasSurrogateUnit(uint32_t character) {
  return (character & 0xfc00) == 0xd800;
}

template <typename Char, typename Length>
int CopyString(Char* destination, size_t destinationSize, const Char* source,
  Length getLength) {
  if (destinationSize == 0) {
    return ERange;
  }
  if (static_cast<ptrdiff_t>(destinationSize) < 0) {
    return EInval;
  }
  size_t length = getLength(source, destinationSize);
  if (length == destinationSize) {
    *destination = 0;
    return ERange;
  }
  memcpy(destination, source, sizeof(Char) * (length + 1));
  return 0;
}

template <typename Char, typename Length>
int CopyStringN(Char* destination, size_t destinationSize, const Char* source,
  size_t count, Length getLength) {
  if (destinationSize == 0) {
    return ERange;
  }
  if (static_cast<ptrdiff_t>(destinationSize) < 0) {
    return EInval;
  }
  if (count == 0) {
    return ERange;
  }
  if (static_cast<ptrdiff_t>(count) < 0) {
    return EInval;
  }
  size_t length = getLength(source, count);
  if (length < destinationSize) {
    memcpy(destination, source, sizeof(Char) * length);
    destination[length] = 0;
    return 0;
  }
  *destination = 0;
  return ERange;
}

// Unrolled by four like the original, which also keeps LLVM from turning
// the 32 bit scan into wcslen.
template <typename Char>
size_t GetLength(const Char* string) {
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

// A zero maximum size does not bound the scan.
template <typename Char>
size_t GetLengthN(const Char* string, size_t maxSize) {
  if (string == nullptr) {
    return 0;
  }
  size_t length = 0;
  while (string[length] != 0) {
    if (++length == maxSize) {
      return maxSize;
    }
  }
  return length;
}

}

extern "C" {

uint32_t nnmem_nlib_crc32(uint32_t crc, const void* data, size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  crc = ~crc;
  if (size >= 8) {
    size_t misalignment = reinterpret_cast<uintptr_t>(p) & 7;
    if (misalignment != 0) {
      size_t count = 8 - misalignment;
      for (size_t i = 0; i < count; ++i) {
        crc = __crc32b(crc, p[i]);
      }
      size -= count;
      p += count;
    }
    while (size >= 8) {
      uint64_t value;
      memcpy(&value, p, sizeof(value));
      crc = __crc32d(crc, value);
      p += 8;
      size -= 8;
    }
  }
  for (size_t i = 0; i < size; ++i) {
    crc = __crc32b(crc, p[i]);
  }
  return ~crc;
}

uint32_t nnmem_nlib_crc32c(uint32_t crc, const void* data, size_t size) {
  const uint8_t* p = static_cast<const uint8_t*>(data);
  crc = ~crc;
  if (size >= 8) {
    size_t misalignment = reinterpret_cast<uintptr_t>(p) & 7;
    if (misalignment != 0) {
      size_t count = 8 - misalignment;
      for (size_t i = 0; i < count; ++i) {
        crc = __crc32cb(crc, p[i]);
      }
      size -= count;
      p += count;
    }
    while (size >= 8) {
      uint64_t value;
      memcpy(&value, p, sizeof(value));
      crc = __crc32cd(crc, value);
      p += 8;
      size -= 8;
    }
  }
  for (size_t i = 0; i < size; ++i) {
    crc = __crc32cb(crc, p[i]);
  }
  return ~crc;
}

int nnmem_nlib_utf16_to_utf32char(uint32_t* pOut, uint16_t first,
  uint16_t second) {
  if (!IsSurrogate(first)) {
    *pOut = first;
    return 1;
  }
  if ((first & 0x400) == 0 && (second & 0xfc00) == 0xdc00) {
    *pOut = (static_cast<uint32_t>(first) << 10) + second - 0x35fdc00;
    return 2;
  }
  return 0;
}

int nnmem_nlib_utf32char_to_utf16(uint16_t* pOutFirst, uint16_t* pOutSecond,
  uint32_t character) {
  if ((character >> 16) != 0) {
    if ((character >> 16) <= 0x10) {
      *pOutFirst = static_cast<uint16_t>(((character - 0x10000) >> 10) +
        0xd800);
      *pOutSecond = static_cast<uint16_t>((character & 0x3ff) | 0xdc00);
      return 2;
    }
  }
  else if (!IsSurrogate(character)) {
    *pOutFirst = static_cast<uint16_t>(character);
    *pOutSecond = 0;
    return 1;
  }
  return 0;
}

int nnmem_nlib_utf32char_to_utf8(char* pOut, uint32_t character) {
  if (character < 0x80) {
    pOut[0] = static_cast<char>(character);
    return 1;
  }
  if (character < 0x800) {
    pOut[0] = static_cast<char>((character >> 6) | 0xc0);
    pOut[1] = static_cast<char>((character & 0x3f) | 0x80);
    return 2;
  }
  if ((character >> 16) != 0) {
    if ((character >> 16) <= 0x10) {
      pOut[0] = static_cast<char>((character >> 18) | 0xf0);
      pOut[1] = static_cast<char>(((character >> 12) & 0x3f) | 0x80);
      pOut[2] = static_cast<char>(((character >> 6) & 0x3f) | 0x80);
      pOut[3] = static_cast<char>((character & 0x3f) | 0x80);
      return 4;
    }
  }
  else if (!IsSurrogate(character)) {
    pOut[0] = static_cast<char>((character >> 12) | 0xe0);
    pOut[1] = static_cast<char>(((character >> 6) & 0x3f) | 0x80);
    pOut[2] = static_cast<char>((character & 0x3f) | 0x80);
    return 3;
  }
  return 0;
}

int nnmem_nlib_strcplen(size_t* pOutCount, size_t* pOutSupplementaryCount,
  size_t* pOutLength, const char* string) {
  size_t size = strlen(string);
  size_t length = 0;
  int result = nnmem_nlib_memcplen(pOutCount, pOutSupplementaryCount,
    &length, string, size);
  if (pOutLength != nullptr) {
    *pOutLength = length;
  }
  if (result != 0) {
    return result;
  }
  return length == size ? 0 : EIlSeq;
}

int nnmem_nlib_wcscplen(size_t* pOutCount, const wchar_t* string) {
  if (pOutCount == nullptr) {
    return EInval;
  }
  const wchar_t* p = string;
  while (*p != 0) {
    if (HasSurrogateUnit(static_cast<uint32_t>(*p))) {
      return EIlSeq;
    }
    ++p;
  }
  *pOutCount = static_cast<size_t>(p - string);
  return 0;
}

int nnmem_nlib_utf32cplen(size_t* pOutCount, const uint32_t* string) {
  const uint32_t* p = string;
  while (*p != 0) {
    if (HasSurrogateUnit(*p)) {
      return EIlSeq;
    }
    ++p;
  }
  if (pOutCount != nullptr) {
    *pOutCount = static_cast<size_t>(p - string);
  }
  return 0;
}

size_t nnmem_nlib_utf16len_generic(const uint16_t* string) {
  return GetLength(string);
}

size_t nnmem_nlib_utf16nlen_generic(const uint16_t* string, size_t maxSize) {
  return GetLengthN(string, maxSize);
}

size_t nnmem_nlib_utf32len_generic(const uint32_t* string) {
  return GetLength(string);
}

size_t nnmem_nlib_utf32nlen_generic(const uint32_t* string, size_t maxSize) {
  return GetLengthN(string, maxSize);
}

int nnmem_nlib_strcpy(char* destination, size_t destinationSize,
  const char* source) {
  return CopyString(destination, destinationSize, source,
    nnmem_nlib_strnlen);
}

int nnmem_nlib_strncpy(char* destination, size_t destinationSize,
  const char* source, size_t count) {
  return CopyStringN(destination, destinationSize, source, count,
    nnmem_nlib_strnlen);
}

int nnmem_nlib_wcscpy(wchar_t* destination, size_t destinationSize,
  const wchar_t* source) {
  return CopyString(destination, destinationSize, source,
    nnmem_nlib_wcsnlen);
}

int nnmem_nlib_wcsncpy(wchar_t* destination, size_t destinationSize,
  const wchar_t* source, size_t count) {
  return CopyStringN(destination, destinationSize, source, count,
    nnmem_nlib_wcsnlen);
}

int nnmem_nlib_utf16cpy_(uint16_t* destination, size_t destinationSize,
  const uint16_t* source) {
  return CopyString(destination, destinationSize, source,
    nnmem_nlib_utf16nlen_);
}

int nnmem_nlib_utf16ncpy_(uint16_t* destination, size_t destinationSize,
  const uint16_t* source, size_t count) {
  return CopyStringN(destination, destinationSize, source, count,
    nnmem_nlib_utf16nlen_);
}

int nnmem_nlib_utf32cpy_(uint32_t* destination, size_t destinationSize,
  const uint32_t* source) {
  return CopyString(destination, destinationSize, source,
    nnmem_nlib_utf32nlen_);
}

int nnmem_nlib_utf32ncpy_(uint32_t* destination, size_t destinationSize,
  const uint32_t* source, size_t count) {
  return CopyStringN(destination, destinationSize, source, count,
    nnmem_nlib_utf32nlen_);
}

// The terminator is searched too, so a zero character finds it.
const char* nnmem_nlib_strrchr_generic(const char* string, int character) {
  return static_cast<const char*>(nnmem_nlib_memrchr(string, character,
    strlen(string) + 1));
}

const char* nnmem_nlib_basename(const char* path) {
  const char* separator = nnmem_nlib_strrchr(path, '/');
  return separator != nullptr ? separator + 1 : path;
}

// The directory part keeps no trailing separators, the root and paths
// without one give a single character.
const char* nnmem_nlib_dirname(size_t* pOutLength, const char* path) {
  const char* separator = nnmem_nlib_strrchr(path, '/');
  const char* base = separator != nullptr ? separator + 1 : path;
  size_t length = static_cast<size_t>(base - path);
  while (length != 0 && path[length - 1] == '/') {
    --length;
  }
  if (length == 0) {
    *pOutLength = 1;
    return *path == '/' ? path : ".";
  }
  *pOutLength = length;
  return path;
}

// Without a destination only the length is counted.
int nnmem_nlib_utf32_to_utf8(size_t* pOutLength, char* destination,
  size_t destinationSize, const uint32_t* source) {
  size_t maxLength = destinationSize != 0 ? destinationSize - 1 : 0;
  if (destination == nullptr ? destinationSize != 0 : destinationSize == 0) {
    return EInval;
  }
  size_t length = 0;
  for (uint32_t character = *source; character != 0;
    character = *++source) {
    size_t size;
    if (character < 0x80) {
      size = 1;
    }
    else if (character < 0x800) {
      size = 2;
    }
    else if ((character >> 16) != 0) {
      if ((character >> 16) > 0x10) {
        goto invalid;
      }
      size = 4;
    }
    else if (IsSurrogate(character)) {
      goto invalid;
    }
    else {
      size = 3;
    }
    if (destination != nullptr) {
      if (length + size > maxLength) {
        if (pOutLength != nullptr) {
          *pOutLength = length;
        }
        destination[length] = 0;
        return ERange;
      }
      nnmem_nlib_utf32char_to_utf8(destination + length, character);
    }
    length += size;
  }
  if (pOutLength != nullptr) {
    *pOutLength = length;
  }
  if (destination != nullptr) {
    destination[length] = 0;
  }
  return 0;

invalid:
  if (pOutLength != nullptr) {
    *pOutLength = 0;
  }
  if (destination != nullptr) {
    *destination = 0;
  }
  return EIlSeq;
}

int nnmem_nlib_utf16cplen_ex_generic(size_t* pOutCount, size_t* pOutLength,
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

int nnmem_nlib_utf16_to_utf8(size_t* pOutLength, char* destination,
  size_t destinationSize, const uint16_t* source) {
  size_t written = 0;
  size_t read = 0;
  size_t sourceSize = nnmem_nlib_utf16len_(source);
  if (destination == nullptr) {
    if (destinationSize != 0) {
      return EInval;
    }
    int result = nnmem_nlib_memutf16_to_utf8(&written, &read, nullptr, 0,
      source, sourceSize);
    if (pOutLength != nullptr) {
      *pOutLength = written;
    }
    if (result != 0) {
      return result;
    }
    return read == sourceSize ? 0 : EIlSeq;
  }
  if (destinationSize == 0) {
    return EInval;
  }
  int result = nnmem_nlib_memutf16_to_utf8(&written, &read, destination,
    destinationSize - 1, source, sourceSize);
  destination[written] = 0;
  if (pOutLength != nullptr) {
    *pOutLength = written;
  }
  if (result != 0) {
    return result;
  }
  if (read == sourceSize) {
    return 0;
  }

  // A conversion stopped on a valid pair or a plain unit ran out of space.
  bool isLowNext = sourceSize != read + 1 &&
    (source[read + 1] & 0xfc00) == 0xdc00;
  if (!IsSurrogate(source[read])) {
    return ERange;
  }
  if ((source[read] & 0x400) == 0 && isLowNext) {
    return ERange;
  }
  return EIlSeq;
}

int nnmem_nlib_utf8_to_utf16(size_t* pOutLength, uint16_t* destination,
  size_t destinationSize, const char* source) {
  size_t written = 0;
  size_t read = 0;
  size_t sourceSize = strlen(source);
  if (destination != nullptr) {
    if (destinationSize == 0) {
      return EInval;
    }
    int result = nnmem_nlib_memutf8_to_utf16(&written, &read, destination,
      destinationSize - 1, source, sourceSize);
    destination[written] = 0;
    if (pOutLength != nullptr) {
      *pOutLength = written;
    }
    if (result != 0) {
      return result;
    }
    return read == sourceSize ? 0 : ERange;
  }
  if (destinationSize != 0) {
    return EInval;
  }

  // Supplementary code points take two units.
  size_t length = 0;
  int result = 0;
  if (static_cast<ptrdiff_t>(sourceSize) < 0) {
    result = EInval;
  }
  else if (sourceSize != 0) {
    size_t supplementaryCount = 0;
    result = nnmem_nlib_memcplen(&written, &supplementaryCount, &read, source,
      sourceSize);
    length = written + supplementaryCount;
  }
  if (pOutLength != nullptr) {
    *pOutLength = length;
  }
  if (result != 0) {
    return result;
  }
  return read == sourceSize ? 0 : EIlSeq;
}

}
