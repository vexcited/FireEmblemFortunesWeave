#include <arm_acle.h>
#include <string.h>

#include "wld/crc32.hpp"

namespace wld {

uint32_t Crc32(uint32_t seed, const char* data, size_t size) {
  uint32_t crc = ~seed;
  const auto* bytes = reinterpret_cast<const uint8_t*>(data);

  if (size >= 8) {
    size_t misalign = reinterpret_cast<uintptr_t>(bytes) & 7;
    if (misalign != 0) {
      size_t head = 8 - misalign;
      for (size_t i = 0; i < head; ++i) {
        crc = __crc32b(crc, bytes[i]);
      }
      bytes += head;
      size -= head;
    }

    for (; size >= 8; size -= 8) {
      uint64_t word;
      memcpy(&word, bytes, sizeof(word));
      crc = __crc32d(crc, word);
      bytes += 8;
    }
  }

  for (size_t i = 0; i < size; ++i) {
    crc = __crc32b(crc, bytes[i]);
  }

  return ~crc;
}

}
