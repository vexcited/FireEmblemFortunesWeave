#include "game/gmap/troop_mgr.hpp"

namespace game::gmap {

// The enemy and reinforcement troops of an encounter come first, then the
// troops standing on the spot.
void TroopMgr::EachEncountTroop(
  const Spot* spot, const std::function<void(Troop*)>& function) {
  for (Troop* troop : GetEncountEnemyTroops()) {
    function(troop);
  }

  for (Troop* troop : GetEncountReinforceTroops(spot)) {
    function(troop);
  }

  EachTroop(spot, [function](Troop* troop) {
    function(troop);
  });
}

void TroopMgr::Finalize() {
  impl_->Clear();
  delete impl_;
}

const char* TroopMgr::Impl::GetName() const {
  return "GmapTroopMgr";
}

int TroopMgr::Impl::GetVersion() const {
  return 7;
}

void TroopMgr::Impl::Unknown05() {
  Clear();
  AddDefaultTroop(troops);
}

void TroopMgr::Impl::Unknown06() {}

void TroopMgr::Impl::Serialize(Stream& stream) const {
  stream.WriteU8(troops.size());
  for (const Troop* troop : troops) {
    troop->Serialize(stream);
  }

  stream.WriteU8(unknown38);
  stream.WriteU8(ids.size());
  for (int id : ids) {
    stream.WriteU8(id);
  }
}

}
