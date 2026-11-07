#pragma once

#include <stdint.h>

#include "nn/mii/core_data.hpp"

namespace nn::mii::detail {

// Xorshift128 random generator seeded from the system tick.
class UtilityImpl {
public:
  UtilityImpl();
  ~UtilityImpl();
  static int64_t GetRandomSeedBySystemTick();
  void MakeCreateId(CreateId* id);
  void MakeInvalidCreateId(CreateId* id);
  int GetRandomRange(int minimum, int maximum);
  int GetRandom(int minimum, int end);
  uint32_t GetRandomUint32(uint32_t end);
  int GetRandom(int end);
  uint8_t GetRandomUint8();
  uint32_t GetRandomUint32();
  uint16_t GetRandomUint16();
  void SetRandomSeedForDebug(int64_t seed);

private:
  uint32_t Next();
  void SetSeed(int64_t seed);

  uint32_t m_X;
  uint32_t m_Y;
  uint32_t m_Z;
  uint32_t m_W;
};

}
