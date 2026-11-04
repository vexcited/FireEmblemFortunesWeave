#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class Manager : public Singleton<Manager> {
public:
  enum Kind : int {
    kKindHub = 0,
    kKindDungeon = 1,
  };

  bool IsActive() const {
    return active_;
  }

  int GetKind() const {
    return kind_;
  }

  bool IsActiveKind(int kind) const {
    return active_ && kind_ == kind;
  }

private:
  uint8_t unknown_08_;
  bool active_;
  uint8_t unknown_0a_[0x7e];
  int kind_;
};

#pragma GCC visibility pop

}
