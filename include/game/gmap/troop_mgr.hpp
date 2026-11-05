#pragma once

#include <functional>
#include <vector>

#include "game/gmap/troop.hpp"
#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class TroopMgr : public Singleton<TroopMgr> {
public:
  ~TroopMgr() override;

  static void EachPlayerTroop(const std::function<void(Troop*)>& function);
  static void EachPlayerTroop(
    const Spot* spot, const std::function<void(Troop*)>& function);
  static void EachPlayerUnit(
    const Spot* spot, const std::function<void(Unit*)>& function);
  static void EachReserveUnit(const std::function<void(Unit*)>& function);
  static void EachBattleCorps(
    const Spot* spot, const std::function<void(Troop*)>& function);

  static int CountTroop(const std::function<bool(Troop*)>& function);
  static int CountTroop(
    const Spot* spot, const std::function<bool(Troop*)>& function);
  static int CountPlayerTroop(const std::function<bool(Troop*)>& function);
  static int CountPlayerTroop(
    const Spot* spot, const std::function<bool(Troop*)>& function);

private:
  struct Impl {
    uint8_t unknown_00_[0x8];
    std::vector<Troop*> troops;
  };

  static void EachTroop(const std::function<void(Troop*)>& function) {
    for (Troop* troop : instance_->impl_->troops) {
      function(troop);
    }
  }

  static void EachTroop(
    const Spot* spot, const std::function<void(Troop*)>& function) {
    if (spot == nullptr) {
      return;
    }

    for (Troop* troop : instance_->impl_->troops) {
      if (troop->GetSpot() == spot) {
        function(troop);
      }
    }
  }

  Impl* impl_;
};

#pragma GCC visibility pop

}
