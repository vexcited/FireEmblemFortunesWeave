#pragma once

#include <stdint.h>

namespace nn::util {

template <int N, typename Tag>
struct BitFlagSet {
  uint32_t _storage[(N + 31) / 32];
};

template <typename Storage, typename Tag>
struct BitPack {
  Storage _storage;
};

}
