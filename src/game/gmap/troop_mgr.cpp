#include "game/gmap/troop_mgr.hpp"

#include "game/corps_manager.hpp"
#include "game/gmap/spot.hpp"

namespace game::gmap {

void TroopMgr::EachPlayerTroop(
  const Spot* spot, const std::function<void(Troop*)>& function) {
  if (spot == nullptr) {
    return;
  }

  EachPlayerTroop([spot, function](Troop* troop) {
    if (troop->GetSpot() == spot) {
      function(troop);
    }
  });
}

void TroopMgr::EachPlayerUnit(
  const Spot* spot, const std::function<void(Unit*)>& function) {
  EachPlayerTroop(spot, [function](Troop* troop) {
    troop->EachUnit(function);
  });
}

void TroopMgr::EachReserveUnit(const std::function<void(Unit*)>& function) {
  CorpsManager::EachUnit([function](Unit* unit) {
    if (!unit->IsInCorps()) {
      function(unit);
    }
  });
}

// The enemy troops of the spot, and of its neighbors when the spot has some
// or is the base spot.
void TroopMgr::EachBattleCorps(
  const Spot* spot, const std::function<void(Troop*)>& function) {
  int count = 0;
  auto each = [function, &count](Troop* troop) {
    if (!troop->IsPlayer()) {
      function(troop);
      ++count;
    }
  };
  EachTroop(spot, each);

  if (count != 0 || spot->GetData() == FindBaseSpotData()) {
    for (const SpotLink* link : spot->GetLinks()) {
      EachTroop(link->GetSpot(), each);
    }
  }
}

int TroopMgr::CountTroop(const std::function<bool(Troop*)>& function) {
  int count = 0;
  EachTroop([&count, function](Troop* troop) {
    if (function(troop)) {
      ++count;
    }
  });
  return count;
}

int TroopMgr::CountTroop(
  const Spot* spot, const std::function<bool(Troop*)>& function) {
  int count = 0;
  EachTroop(spot, [&count, function](Troop* troop) {
    if (function(troop)) {
      ++count;
    }
  });
  return count;
}

int TroopMgr::CountPlayerTroop(const std::function<bool(Troop*)>& function) {
  int count = 0;
  EachPlayerTroop([&count, function](Troop* troop) {
    if (function(troop)) {
      ++count;
    }
  });
  return count;
}

int TroopMgr::CountPlayerTroop(
  const Spot* spot, const std::function<bool(Troop*)>& function) {
  int count = 0;
  EachPlayerTroop(spot, [&count, function](Troop* troop) {
    if (function(troop)) {
      ++count;
    }
  });
  return count;
}

}
