#pragma once

#include <stdint.h>

namespace nn::diag {

struct HashedTraceContextImpl {
  uint64_t hash;
};

}
