#pragma once

#include <stdint.h>
#include <string.h>

namespace nn::util {

struct Uuid {
  uint8_t data[16];

  friend bool operator==(const Uuid& lhs, const Uuid& rhs) {
    return memcmp(lhs.data, rhs.data, sizeof(lhs.data)) == 0;
  }

  friend bool operator!=(const Uuid& lhs, const Uuid& rhs) {
    return !(lhs == rhs);
  }
};

inline constexpr Uuid InvalidUuid = {};

Uuid GenerateUuid();

}
