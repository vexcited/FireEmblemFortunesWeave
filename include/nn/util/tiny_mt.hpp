#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::util {

struct TinyMt {
  struct State {
    uint32_t data[4];
  };

  uint32_t state[4];

  void Initialize(uint32_t seed);
  void Initialize(const uint32_t* seeds, int count);
  void FinalizeInitialization();
  void SaveState(State* saved);
  void RestoreState(const State* saved);
  uint32_t GenerateRandomU32();
  void GenerateRandomBytes(void* buffer, size_t size);

  static void GenerateInitialValuePlus(uint32_t* values, int index,
    uint32_t value);
  static void GenerateInitialValueXor(uint32_t* values, int index);
};

}
