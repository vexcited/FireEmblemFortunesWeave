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

  void MarkStageStale(int stage) {
    stages_[stage].sorted = false;
  }

private:
  uint8_t unknown00_[0x278];
  StageList stages_[4];
};

}
