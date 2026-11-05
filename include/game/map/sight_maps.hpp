#pragma once

#include <stdint.h>

#include <memory>

#include "game/map/image.hpp"

namespace wld {

#pragma GCC visibility push(hidden)

class GfxSightMap {
public:
  class Handle;

  bool IsVisible() const {
    return visible_;
  }

  void SetVisible(bool visible) {
    visible_ = visible;
  }

private:
  uint8_t unknown_00_[0x88];
  bool visible_;
};

class GfxSightMap::Handle {
public:
  GfxSightMap* GetMap() const {
    return map_;
  }

private:
  uint8_t unknown_00_[0x18];
  GfxSightMap* map_;
};

#pragma GCC visibility pop

}

namespace game::map {

#pragma GCC visibility push(hidden)

// The sight bits of each force, the slots without a known caller keep
// their index as name.
class Image::SightMaps {
public:
  virtual ~SightMaps();

  virtual void Clear() = 0;
  virtual void Fill() = 0;
  virtual void Unknown04() = 0;
  virtual void Unknown05() = 0;
  virtual void SetVisible(bool visible) = 0;
};

class SightMapsImpl : public Image::SightMaps {
public:
  ~SightMapsImpl() override;

  void Clear() override;
  void Fill() override;
  void Unknown04() override;
  void Unknown05() override;
  void SetVisible(bool visible) override;

private:
  uint32_t rows_[4][kGridSize];
  // A second base with its own vtable, not reconstructed.
  uint8_t unknown_208_[0x10];
  std::shared_ptr<wld::GfxSightMap::Handle> handle_;
};

#pragma GCC visibility pop

}
