#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class GameHubData : public Singleton<GameHubData> {
public:
  bool CanEscape() const {
    return can_escape_;
  }

  bool IsUnknown130() const {
    return unknown_130_;
  }

private:
  uint8_t unknown_08_[0x98];
  bool can_escape_;
  uint8_t unknown_a1_[0x8f];
  bool unknown_130_;
};

#pragma GCC visibility pop

}
