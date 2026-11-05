#include "game/data/data_files.hpp"
#include "game/gmap/spot_mgr.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

const GmapSpotData* GetCurrentSpotData();

Spot* SpotMgr::FindSpot(const GmapSpotData* data) {
  if (data == nullptr) {
    return nullptr;
  }

  const auto& spots = instance_->impl_->spots_by_hash;
  if (spots.empty()) {
    return nullptr;
  }

  const auto found = spots.find(static_cast<uint32_t>(data->key.hash));
  return found != spots.end() ? found->second : nullptr;
}

Spot* SpotMgr::GetCurrentSpot() {
  return FindSpot(GetCurrentSpotData());
}

#pragma GCC visibility pop

}
