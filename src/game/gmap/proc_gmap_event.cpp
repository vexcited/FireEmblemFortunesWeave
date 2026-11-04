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
  kLabelEnd = 14,
};

}

class ProcGmapEvent : public ProcJumpableSingleton<ProcGmapEvent, Label> {
public:
  void Unknown10() override;
  void Unknown11() override;
  void Unknown12() override;
};

#pragma GCC visibility pop

// The parent sequence is told where to go, then this one ends.
void ProcGmapEvent::Unknown10() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelEnd);
  Jump(kLabelEnd);
}

void ProcGmapEvent::Unknown11() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelTitle);
  Jump(kLabelEnd);
}

void ProcGmapEvent::Unknown12() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelReset);
  Jump(kLabelEnd);
}

}
