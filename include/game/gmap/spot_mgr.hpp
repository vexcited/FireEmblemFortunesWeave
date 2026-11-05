#pragma once

#include <functional>
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

private:
  struct Impl {
    uint8_t unknown_00_[0x30];
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
