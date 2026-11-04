#include "nn/crypto/detail/clear_memory.hpp"

#include <string.h>

namespace nn::crypto::detail {

void ClearMemoryImpl(void* buffer, size_t size) {
  explicit_bzero(buffer, size);
}

}
