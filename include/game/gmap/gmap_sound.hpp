#pragma once

#include <stdint.h>

#include <string>

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

struct GmapSoundBgm {
  uint8_t unknown_00_[0x10];
  std::string name;
};

class GmapSound : public Singleton<GmapSound> {
public:
  ~GmapSound() override;

private:
  GmapSoundBgm* bgm_;
};

#pragma GCC visibility pop

}
