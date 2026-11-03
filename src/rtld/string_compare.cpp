#include "rtld/string.hpp"

#include <stdint.h>

using StringWord = uint64_t __attribute__((__may_alias__));

extern "C" int strcmp(const char* left_string, const char* right_string) {
  auto* left = reinterpret_cast<const unsigned char*>(left_string);
  auto* right = reinterpret_cast<const unsigned char*>(right_string);

  if ((uintptr_t(left) ^ uintptr_t(right)) & 7) {
    while (*left && *left == *right) {
      ++left;
      ++right;
    }

    return int(*left) - int(*right);
  }

  while (uintptr_t(left) & 7) {
    unsigned a = *left++;
    unsigned b = *right++;

    if (!a || a != b) {
      return int(a) - int(b);
    }
  }

  if (!*left || *left != *right) {
    return int(*left) - int(*right);
  }

  for (;;) {
    uint64_t a = *reinterpret_cast<const StringWord*>(left);
    uint64_t b = *reinterpret_cast<const StringWord*>(right);
    uint64_t zero = (a - 0x0101010101010101) & ~a & 0x8080808080808080;
    uint64_t difference = a ^ b;
    uint64_t stop = zero | difference;

    if (stop) {
      if (!difference) {
        return 0;
      }

      // The first differing or zero byte determines the unsigned difference.
      unsigned shift = unsigned(__builtin_ctzll(stop)) & 0x78;
      return int(uint8_t(a >> shift)) - int(uint8_t(b >> shift));
    }

    left += 8;
    right += 8;
  }
}
