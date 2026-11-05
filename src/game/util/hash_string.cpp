#include <string.h>

#include "game/data/data_file.hpp"

namespace game {

// 64 bit FNV-1a, unrolled by eight in the source. Zero is kept for null text,
// so a zero hash becomes all ones.
uint64_t HashString(const char* text) {
  if (text == nullptr) {
    return 0;
  }

  uint64_t hash = 0xcbf29ce484222325;
  const uint64_t prime = 0x100000001b3;
  int length = strlen(text);
  int i = 0;

  for (; i + 7 < length; i += 8) {
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 1]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 2]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 3]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 4]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 5]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 6]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 7]);
  }

  for (; i < length; ++i) {
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i]);
  }

  return hash != 0 ? hash : ~0ull;
}

}
