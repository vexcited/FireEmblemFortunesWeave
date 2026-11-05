#pragma once

#include <cstdint>

namespace game::menu {

// An entry of the key help, 40 bytes as the vectors of them show.
struct KeyHelpEntry {
  const char* name;
  const char* mid;
  bool unknown_10_;
  int32_t unknown_14_;
  int32_t unknown_18_;
  bool unknown_1c_;
  void* unknown_20_;
};

}
