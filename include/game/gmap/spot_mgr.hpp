#pragma once

#include <stdint.h>

#include <functional>
#include <unordered_map>
#include <vector>

#include "game/gmap/spot.hpp"
#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class SpotMgr : public Singleton<SpotMgr> {
public:
  using Kind = GmapSpotAttachmentConst::Kind;

  ~SpotMgr() override;

  static void EachSpotAttachment(
    Kind kind, const std::function<void(Spot*)>& function);
  static int CountSpotAttachment(Kind kind);
  static int CountDispatchLegion();

  static void OnStartPhase();
  static void OnEndPhase();
  static void OnProgressCycle(int cycle);

  // Spots are keyed by the low 32 bits of their row key hash.
  static Spot* FindSpot(const GmapSpotData* data);
  static Spot* GetCurrentSpot();

private:
  struct Impl {
    uint8_t unknown_00_[0x8];
    std::unordered_map<uint32_t, Spot*> spots_by_hash;
    std::vector<Spot*> spots;
  };

  static void EachAttachedSpot(const std::function<void(Spot*)>& function) {
    for (Spot* spot : instance_->impl_->spots) {
      if (spot->GetAttachment() != nullptr) {
        function(spot);
      }
    }
  }

  Impl* impl_;
};

#pragma GCC visibility pop

}
