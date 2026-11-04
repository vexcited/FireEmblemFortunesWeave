#include <stdint.h>

#include <vector>

#include "game/data/data_files.hpp"
#include "game/map/image.hpp"
#include "game/map/situation.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// Read only views of the battle map used by the minimap and the hints.
class MapSystemMap {
public:
  virtual int GetLeft() const;
  virtual int GetTop() const;
  virtual int GetRight() const;
  virtual int GetBottom() const;
  virtual bool IsHidden(int x, int z) const;
  virtual const TerrainData* GetTerrain(int x, int z) const;
  virtual const TerrainData* GetHintTerrain(int x, int z) const;
  virtual void Unknown07();
  virtual bool Unknown08(int x, int z) const;
  virtual void Unknown09();
};

int MapSystemMap::GetLeft() const {
  return Image::GetInstance()->GetLeft();
}

int MapSystemMap::GetTop() const {
  return Image::GetInstance()->GetTop();
}

int MapSystemMap::GetRight() const {
  return Image::GetInstance()->GetRight();
}

int MapSystemMap::GetBottom() const {
  return Image::GetInstance()->GetBottom();
}

bool MapSystemMap::IsHidden(int x, int z) const {
  const Image* image = Image::GetInstance();
  if (!image->Contains(x, z)) {
    return true;
  }
  const uint8_t force = Situation::GetInstance()->GetViewForce();
  return !image->IsVisible(force, x, z);
}

const TerrainData* MapSystemMap::GetTerrain(int x, int z) const {
  return TerrainFile::GetInstance()->At(
    Image::GetInstance()->GetTerrainId(x, z));
}

struct HintRange {
  uint8_t unknown_00_[0x18];
  int left;
  int top;
  int right;
  int bottom;
};

struct HintData {
  // The hint layers are only usable when they cover the whole grid.
  bool IsValid() const {
    return width * height >= 1 &&
      base.size() == kGridSize * kGridSize &&
      overlay.size() == kGridSize * kGridSize;
  }

  int width;
  int height;
  uint8_t unknown_08_[0x30];
  std::vector<uint16_t> base;
  std::vector<uint16_t> overlay;
  std::vector<uint16_t> hints;
  uint8_t unknown_80_[0x18];
  const HintRange* range;
};

extern HintData g_hint_data;

class MapHintMap {
public:
  virtual int GetLeft() const;
  virtual int GetTop() const;
  virtual int GetRight() const;
  virtual int GetBottom() const;
  virtual bool IsHidden(int x, int z) const;
  virtual const TerrainData* GetTerrain(int x, int z) const;
  virtual const TerrainData* GetHintTerrain(int x, int z) const;
  virtual void Unknown07();
  virtual bool Unknown08(int x, int z) const;
  virtual void Unknown09();
};

int MapHintMap::GetLeft() const {
  if (!g_hint_data.IsValid()) {
    return 0;
  }
  return g_hint_data.range != nullptr ? g_hint_data.range->left + 1 : 1;
}

int MapHintMap::GetTop() const {
  if (!g_hint_data.IsValid()) {
    return 0;
  }
  return g_hint_data.range != nullptr ? g_hint_data.range->top + 1 : 1;
}

int MapHintMap::GetRight() const {
  if (!g_hint_data.IsValid()) {
    return 0;
  }
  const int* right = g_hint_data.range != nullptr
    ? &g_hint_data.range->right : &g_hint_data.width;
  return *right - 2;
}

int MapHintMap::GetBottom() const {
  if (!g_hint_data.IsValid()) {
    return 0;
  }
  const int* bottom = g_hint_data.range != nullptr
    ? &g_hint_data.range->bottom : &g_hint_data.height;
  return *bottom - 2;
}

bool MapHintMap::IsHidden(int x, int z) const {
  return false;
}

const TerrainData* MapHintMap::GetTerrain(int x, int z) const {
  if (!g_hint_data.IsValid()) {
    return nullptr;
  }
  const int index = x + kGridSize * z;
  uint16_t id = g_hint_data.overlay[index];
  if (id == 0) {
    id = g_hint_data.base[index];
  }
  return TerrainFile::GetInstance()->At(id);
}

const TerrainData* MapHintMap::GetHintTerrain(int x, int z) const {
  if (!g_hint_data.IsValid()) {
    return nullptr;
  }
  return TerrainFile::GetInstance()->At(
    g_hint_data.hints[x + kGridSize * z]);
}

bool MapHintMap::Unknown08(int x, int z) const {
  return true;
}

#pragma GCC visibility pop

}
