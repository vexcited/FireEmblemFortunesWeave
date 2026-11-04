#include "game/gmap/gmap_spot_menu_item.hpp"

namespace game::gmap {

namespace {

class GmapSpotWarpMenuItem : public GmapSpotMenuItem {
public:
  GmapSpotWarpMenuItem();

  bool IsActive() override;
  void Unknown70() override;
};

[[gnu::used]] GmapSpotWarpMenuItem::GmapSpotWarpMenuItem() = default;

}

}
