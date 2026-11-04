#include "game/gmap/proc_gmap_phase_seq.hpp"
#include "game/gmap/proc_gmap_seq.hpp"

namespace game {

// Other units reach the parent sequence through the global offset table.
extern template class __attribute__((visibility("default")))
  ProcSingleton<gmap::ProcGmapSeq>;

}

namespace game::gmap {

// The parent sequence is told where to go, then this one ends.
void ProcGmapPhaseSeq::Unknown10() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelEnd);
  Jump(GmapPhaseSeq::kLabelEnd);
}

void ProcGmapPhaseSeq::Unknown11() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelTitle);
  Jump(GmapPhaseSeq::kLabelEnd);
}

void ProcGmapPhaseSeq::Unknown12() {
  ProcGmapSeq::GetInstance()->SetLabel(GmapSeq::kLabelReset);
  Jump(GmapPhaseSeq::kLabelEnd);
}

}
