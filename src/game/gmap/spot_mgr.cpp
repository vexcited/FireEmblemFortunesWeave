#include "game/gmap/spot_mgr.hpp"

namespace game::gmap {

void SpotMgr::EachSpotAttachment(
  Kind kind, const std::function<void(Spot*)>& function) {
  EachAttachedSpot([kind, function](Spot* spot) {
    if (spot->GetAttachment()->GetKind() == kind) {
      function(spot);
    }
  });
}

int SpotMgr::CountSpotAttachment(Kind kind) {
  int count = 0;
  EachAttachedSpot([kind, &count](Spot* spot) {
    if (spot->GetAttachment()->GetKind() == kind) {
      ++count;
    }
  });
  return count;
}

int SpotMgr::CountDispatchLegion() {
  int count = 0;
  EachAttachedSpot([&count](Spot* spot) {
    if (spot->GetAttachment()->GetDispatchLegion() != nullptr) {
      ++count;
    }
  });
  return count;
}

void SpotMgr::OnStartPhase() {
  EachAttachedSpot([](Spot* spot) {
    spot->GetAttachment()->OnStartPhase();
  });
}

void SpotMgr::OnEndPhase() {
  EachAttachedSpot([](Spot* spot) {
    spot->GetAttachment()->OnEndPhase();
  });
}

void SpotMgr::OnProgressCycle(int cycle) {
  EachAttachedSpot([cycle](Spot* spot) {
    spot->GetAttachment()->OnProgressCycle(cycle);
  });
}

}
