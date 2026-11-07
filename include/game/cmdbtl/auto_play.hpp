#pragma once

#include <cstdint>

#include "game/singleton.hpp"

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

class AutoPlay : public Singleton<AutoPlay> {
public:
  void SetUnknown0a(bool value) {
    unknown_0a_ = value;
  }

private:
  uint8_t unknown_08_[0x2];
  bool unknown_0a_;
};

#pragma GCC visibility pop

}
