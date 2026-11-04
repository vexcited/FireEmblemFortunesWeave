#pragma once

#include <stdint.h>

namespace nn::crypto {

struct Sha256Context {
  uint32_t intermediateHash[8];
  uint64_t bitsConsumed;
};

}
