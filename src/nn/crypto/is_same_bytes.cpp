#include "nn/crypto/is_same_bytes.hpp"

namespace nn::crypto {

bool IsSameBytes(const void* lhs, const void* rhs, size_t size) {
  return detail::IsSameBytes(lhs, rhs, size);
}

}
