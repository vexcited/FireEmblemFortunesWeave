#include "game/gmap/proc_gmap_seq.hpp"

namespace game {

// Other units reach the parent sequence through the global offset table.
extern template class __attribute__((visibility("default")))
  ProcSingleton<gmap::ProcGmapSeq>;

}

namespace game::gmap {

#pragma GCC visibility push(hidden)

namespace {

enum Label : int {
  kLabelEnd = 4,
};

}

class ProcGmapMove : public ProcJumpableSingleton<ProcGmapMove, Label> {
public:
  void Unknown10() override;
  void Unknown11() override;
  void Unknown12() override;
};

#pragma GCC visibility pop

// The parent sequence is told where to go, then this one ends.
void ProcGmapMove::Unknown10() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelEnd);
  Jump(kLabelEnd);
}

void ProcGmapMove::Unknown11() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelTitle);
  Jump(kLabelEnd);
}

void ProcGmapMove::Unknown12() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelReset);
  Jump(kLabelEnd);
}

}
