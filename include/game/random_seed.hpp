#pragma once

#include <stdint.h>

#include "nn/os/mutex.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class Stream;
struct HashedString;

// Every random seed shares one lock.
extern nn::os::MutexType g_random_mutex;

// A xorshift128 generator seeded like the Mersenne Twister.
class RandomSeed {
public:
  void Initialize(uint32_t seed) {
    nn::os::LockMutex(&g_random_mutex);
    uint32_t value = seed;
    for (uint32_t i = 0; i < 4; i++) {
      value = 1812433253 * (value ^ value >> 30) + i;
      state_[i] = value;
    }
    nn::os::UnlockMutex(&g_random_mutex);
  }

  uint32_t Next() {
    nn::os::LockMutex(&g_random_mutex);
    const uint32_t t = state_[0] ^ state_[0] << 11;
    state_[0] = state_[1];
    state_[1] = state_[2];
    state_[2] = state_[3];
    state_[3] = state_[3] ^ state_[3] >> 19 ^ t ^ t >> 8;
    const uint32_t value = state_[3];
    nn::os::UnlockMutex(&g_random_mutex);
    return value;
  }

  int Get(int max);
  int GetRange(int min, int max);
  float GetFloat(float scale);
  bool RollPercent(float percent);

  // The chance in percent is the value of a game variable.
  bool RollVariable(const HashedString& key);

  void Serialize(Stream& stream) const;
  void Deserialize(Stream& stream);

private:
  uint32_t state_[4];
};

extern RandomSeed g_system_random;
extern RandomSeed g_game_random;

#pragma GCC visibility pop

}
