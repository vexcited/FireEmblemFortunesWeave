#pragma once

#include <stdint.h>

#include <functional>

namespace game {

#pragma GCC visibility push(hidden)

// The four map directions.
class Dir {
public:
  enum Index : uint8_t {};

  static void Each(const std::function<void(Index)>& function);
  // Passes the x and z steps of every direction.
  static void EachOffset(const std::function<void(int, int)>& function);

private:
  struct Offsets {
    int8_t x[4];
    int8_t z[4];
  };

  static Offsets offsets_;
};

#pragma GCC visibility pop

}
