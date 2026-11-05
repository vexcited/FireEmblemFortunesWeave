#pragma once

#include <cstdint>

namespace wld {

class Object {
public:
  // Each update stage keeps its module list in a 0x20 byte block, the flag
  // tells whether the list is up to date.
  struct StageList {
    bool sorted;
    uint8_t unknown01_[0x1f];
  };

  struct Clock {
    uint8_t unknown00_[0x10];
    float delta;
  };

  void MarkStageStale(int stage) {
    stages_[stage].sorted = false;
  }

  const Clock* GetClock() const {
    return clock_;
  }

private:
  uint8_t unknown00_[0x1f0];
  const Clock* clock_;
  uint8_t unknown1f8_[0x80];
  StageList stages_[4];
};

}
