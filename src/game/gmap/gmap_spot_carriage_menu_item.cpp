#include <cstdint>

#include "game/gmap/gmap_spot_menu_item.hpp"

namespace game::gmap {

namespace {

class GmapSpotCarriageMenuItem : public GmapSpotMenuItem {
public:
  GmapSpotCarriageMenuItem();

  void DrawText() override;
  bool IsActive() override { return unknown_128_ == 0; }
  void Unknown70() override;
  void Unknown72() override;

private:
  uint8_t unknown_a0_[0x88];
  uint32_t unknown_128_;
};

[[gnu::used]] GmapSpotCarriageMenuItem::GmapSpotCarriageMenuItem() = default;

}

}
