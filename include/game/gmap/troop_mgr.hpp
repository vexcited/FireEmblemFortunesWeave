#pragma once

#include <functional>
#include <vector>

#include "game/game_save_const.hpp"
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
  static void EachEncountTroop(
    const Spot* spot, const std::function<void(Troop*)>& function);

  static std::vector<Troop*> GetEncountEnemyTroops();
  static std::vector<Troop*> GetEncountReinforceTroops(const Spot* spot);

  static int CountTroop(const std::function<bool(Troop*)>& function);
  static int CountTroop(
    const Spot* spot, const std::function<bool(Troop*)>& function);
  static int CountPlayerTroop(const std::function<bool(Troop*)>& function);
  static int CountPlayerTroop(
    const Spot* spot, const std::function<bool(Troop*)>& function);

  void Initialize() override;
  void Finalize() override;

  // The troop of the selected id, or the first free troop without one.
  static Troop* GetCurrentTroop() {
    const Impl* impl = instance_->impl_;
    if (impl->unknown38 < 0) {
      for (Troop* troop : impl->troops) {
        if (troop->IsFree()) {
          return troop;
        }
      }
    }
    else {
      for (Troop* troop : impl->troops) {
        if (troop->GetId() == impl->unknown38) {
          return troop;
        }
      }
    }
    return nullptr;
  }

  static int GetCurrentTroopId() {
    const int id = instance_->impl_->unknown38;
    return id >= 0 ? id : GetCurrentTroop()->GetId();
  }

private:
  // The save chunk of the troops, which owns them.
  struct Impl : public GameSaveConst::GlobalSerializer {
    const char* GetName() const override;
    int GetVersion() const override;
    void Unknown05() override;
    void Unknown06() override;
    void Serialize(Stream& stream) const override;
    void Deserialize(Stream& stream, int version) override;

    void Clear() {
      for (size_t i = 0; i < troops.size(); i++) {
        if (troops[i] != nullptr) {
          delete troops[i];
        }
      }

      troops.clear();
      ids.clear();
    }

    // Creates the starting troop of the player.
    static void AddDefaultTroop(std::vector<Troop*>& troops);

    std::vector<Troop*> troops;
    std::vector<int> ids;
    int unknown38 = -1;
    bool unknown3c = false;
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
