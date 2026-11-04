#pragma once

#include <stdint.h>

namespace nn::crypto {

struct Sha3Context {
  uint32_t hashSize;
  uint32_t bufferedBytes;
  uint64_t state[25];
};

}
