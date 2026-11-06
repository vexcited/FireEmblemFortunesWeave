#pragma once

#include <stdint.h>

#include "game/map/map_singletons.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

constexpr int kGridSize = 32;

// Cells are stored row by row in a 32 by 32 grid.
inline unsigned GetCellIndex(int x, int z) {
  const unsigned index = x + kGridSize * z;
  return index < kGridSize * kGridSize ? index : 0;
}

struct TerrainGrid {
  uint8_t unknown_00_[0x8];
  uint16_t ids[kGridSize * kGridSize];
};

// The unit index standing on each cell, 0 for none.
struct UnitGrid {
  uint8_t unknown_00_[0x8];
  uint8_t ids[kGridSize * kGridSize];
};

struct SightMask {
  uint8_t unknown_00_[0x8];
  uint32_t rows[4][kGridSize];
};

class Image : public SerializeSingleton<Image> {
public:
  class SightMaps;

  void Update();

  bool Contains(int x, int z) const {
    return static_cast<uint8_t>(x - left_) < width_ &&
      static_cast<uint8_t>(z - top_) < height_;
  }

  uint8_t GetLeft() const {
    return bounds_[0];
  }

  uint8_t GetTop() const {
    return bounds_[1];
  }

  uint8_t GetRight() const {
    return bounds_[2];
  }

  uint8_t GetBottom() const {
    return bounds_[3];
  }

  // The cells the units may use, left, top, right then bottom.
  uint8_t GetPlayArea(int side) const {
    return play_area_[side];
  }

  uint16_t GetTerrainId(int x, int z) const {
    return terrain_->ids[GetCellIndex(x, z)];
  }

  uint8_t GetUnitIndex(int x, int z) const {
    return units_->ids[GetCellIndex(x, z)];
  }

  bool IsVisible(uint8_t force, int x, int z) const {
    return (sight_->rows[force][(x + kGridSize * z) >> 5] >> x) & 1;
  }

private:
  uint8_t left_;
  uint8_t top_;
  uint8_t width_;
  uint8_t height_;
  uint8_t unknown_14_[0x4];
  uint8_t bounds_[4];
  uint8_t play_area_[4];
  uint8_t unknown_20_[0x28];
  const TerrainGrid* terrain_;
  uint8_t unknown_50_[0x10];
  const UnitGrid* units_;
  uint8_t unknown_68_[0x38];
  const SightMask* sight_;
};

#pragma GCC visibility pop

}
