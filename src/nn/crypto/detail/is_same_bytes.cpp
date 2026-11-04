#include "nn/crypto/is_same_bytes.hpp"

#include <stdint.h>

namespace nn::crypto::detail {

// Every byte is visited so the comparison time does not leak the mismatch.
bool IsSameBytes(const void* lhs, const void* rhs, size_t size) {
  const uint8_t* left = static_cast<const uint8_t*>(lhs);
  const uint8_t* right = static_cast<const uint8_t*>(rhs);
  uint8_t difference = 0;
  for (size_t i = 0; i < size; ++i) {
    difference |= left[i] ^ right[i];
  }
  return difference == 0;
}

}
