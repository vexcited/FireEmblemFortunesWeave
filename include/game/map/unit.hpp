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

  uint8_t GetIndex() const {
    return index_;
  }

private:
  uint8_t unknown_00_[0x1b8];
  const Force* force_;
  uint8_t unknown_1c0_[0x668];
  uint8_t index_;
};

#pragma GCC visibility pop

}
