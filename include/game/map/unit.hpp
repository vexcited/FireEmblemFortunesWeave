#pragma once

#include <stdint.h>

namespace game {

#pragma GCC visibility push(hidden)

class Force {
public:
  uint8_t GetType() const {
    return type_;
  }

private:
  uint8_t unknown_00_[0x10];
  uint8_t type_;
};

class Unit {
public:
  static constexpr uint8_t kNoForce = 9;

  uint8_t GetForceType() const {
    return force_ != nullptr ? force_->GetType() : kNoForce;
  }

  // Units that left the map keep this flag.
  bool IsOnMap() const {
    return !(state_ & 0x8);
  }

  int GetX() const {
    return x_;
  }

  int GetZ() const {
    return z_;
  }

  bool IsDone() const;

  int GetSize() const {
    return size_;
  }

  uint8_t GetIndex() const {
    return index_;
  }

private:
  uint8_t unknown_00_[0x1a0];
  uint32_t state_;
  uint8_t unknown_1a4_[0x14];
  const Force* force_;
  uint8_t unknown_1c0_[0x88];
  int8_t x_;
  int8_t z_;
  uint8_t unknown_24a_[0x6];
  int size_;
  uint8_t unknown_254_[0x5d4];
  uint8_t index_;
};

#pragma GCC visibility pop

}
