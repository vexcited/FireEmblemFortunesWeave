#pragma once

#include "game/proc/proc_singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

namespace GmapPhaseSeq {

enum Label : int {
  kLabelCommand = 5,
  kLabelEnd = 16,
};

}

class ProcGmapPhaseSeq
  : public ProcJumpableSingleton<ProcGmapPhaseSeq, GmapPhaseSeq::Label> {
public:
  enum Command : int {
    kCommandMove = 1,
    kCommandDestroyMiasma = 2,
  };

  void Unknown10() override;
  void Unknown11() override;
  void Unknown12() override;

  void RequestCommand(Command command) {
    command_ = command;
    SetLabel(GmapPhaseSeq::kLabelCommand);
  }

private:
  Command command_;
};

#pragma GCC visibility pop

}
