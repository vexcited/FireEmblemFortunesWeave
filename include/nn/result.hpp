#pragma once

#include <stdint.h>

namespace nn {

struct Result {
  uint32_t value;

  bool IsSuccess() const {
    return value == 0;
  }

  bool IsFailure() const {
    return value != 0;
  }

  uint32_t GetInnerValueForDebug() const {
    return value & 0x3fffff;
  }
};

}
