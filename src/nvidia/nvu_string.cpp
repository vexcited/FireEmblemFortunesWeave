#include <stdint.h>

namespace {

[[gnu::always_inline]] inline int32_t HexValue(uint8_t c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }

  if (c >= 'a' && c <= 'f') {
    return c - 'a' + 10;
  }

  if (c >= 'A' && c <= 'F') {
    return c - 'A' + 10;
  }

  return -1;
}

// Only bases 10 and 16 exist, a 0x prefix forces hexadecimal unless base 10
// was asked for with an end pointer, which then stops at the x.
[[gnu::always_inline]] inline uint64_t Parse(const char* string, char** pEnd,
  int32_t base) {
  const bool isNegative = *string == '-';
  const char* p = isNegative ? string + 1 : string;
  uint64_t value = 0;

  if (p[0] == '0' && (p[1] | 0x20) == 'x') {
    if (pEnd != nullptr && base == 10) {
      *pEnd = const_cast<char*>(p + 1);
      return 0;
    }

    p += 2;
    base = 16;
  }

  if (base == 16) {
    for (int32_t digit; (digit = HexValue(*p)) >= 0; p++) {
      value = (value << 4) + digit;
    }
  }
  else {
    for (uint32_t digit; (digit = *p - '0') <= 9; p++) {
      value = value * 10 + digit;
    }
  }

  if (pEnd != nullptr) {
    *pEnd = const_cast<char*>(p);
  }

  return isNegative ? -value : value;
}

}

extern "C" uint64_t NvUStrtoull(const char* string, char** pEnd,
  int32_t base) {
  return Parse(string, pEnd, base);
}

extern "C" uint64_t NvUStrtoul(const char* string, char** pEnd,
  int32_t base) {
  return Parse(string, pEnd, base);
}

extern "C" int64_t NvUStrtol(const char* string, char** pEnd, int32_t base) {
  return static_cast<int64_t>(Parse(string, pEnd, base));
}
