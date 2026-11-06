#pragma once

#include <stdint.h>

#include "game/proc/proc_singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

namespace {

enum Label : int {
  kLabelEnd = 14,
};

}

class ProcGmapEvent : public ProcJumpableSingleton<ProcGmapEvent, Label> {
public:
  void Unknown10() override;
  void Unknown11() override;
  void Unknown12() override;

  void RequestCommand(int command) {
    command_ = command;
  }

private:
  uint8_t unknown_d0_[0x40];
  int command_;
};

#pragma GCC visibility pop

}
