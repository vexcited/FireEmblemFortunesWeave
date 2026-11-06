#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class BladeResonanceRange {
public:
  void Unknown14b8820();
};

class BladeResonanceEffect {
public:
  void Unknown14b8b90();
};

class BladeResonanceImpl {
public:
  void Unknown14b8270();

  // The name is a guess, the original checks a variable and the spot first.
  bool IsReady() const;

  const void* GetUnknown10() const {
    return unknown_10_;
  }

  int GetPower() const {
    return power_;
  }

  void ShowRange() {
    range_.Unknown14b8820();
    effect_.Unknown14b8b90();
  }

private:
  uint8_t unknown_00_[0x10];
  const void* unknown_10_;
  uint8_t unknown_18_[0xc];
  int power_;
  uint8_t unknown_28_[0x48];
  BladeResonanceRange range_;
  uint8_t unknown_71_[0x4f];
  BladeResonanceEffect effect_;
};

class BladeResonance : public Singleton<BladeResonance> {
public:
  ~BladeResonance() override;

  BladeResonanceImpl* GetImpl() const {
    return impl_;
  }

private:
  BladeResonanceImpl* impl_;
};

#pragma GCC visibility pop

}
