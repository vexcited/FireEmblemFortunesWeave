#pragma once

#include <stdint.h>

namespace nn::crypto {

struct Sha512Context {
  uint64_t intermediateHash[8];
  uint64_t bitsConsumed[2];
};

}
