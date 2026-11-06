#include "nn/streamplay/detail/streamplay_hid_util.hpp"

namespace nn::streamplay::detail {

namespace {

constexpr int StyleBitCount = 32;

// Styles 12 to 14 share the handle index of styles 2 to 4.
inline uint32_t Alias(uint32_t bits, int from, int to) {
  if (bits & (1u << from)) {
    return (bits & ~((1u << from) | (1u << to))) | (1u << to);
  }
  return bits;
}

}

uint8_t GetNpadStyleIndex(hid::NpadStyleSet style) {
  uint32_t bits = style._storage[0];
  bits = Alias(bits, 12, 2);
  bits = Alias(bits, 13, 3);
  bits = Alias(bits, 14, 4);
  for (int i = 0; i < StyleBitCount; ++i) {
    if (bits & (1u << i)) {
      return i;
    }
  }
  return 0;
}

}
