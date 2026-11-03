#pragma once

#include <stdint.h>

namespace nn::util {

struct TinyMt {
  uint32_t state[4];

  void Initialize(const uint32_t* seeds, int count);
  void FinalizeInitialization();
  uint32_t GenerateRandomU32();
};

}
