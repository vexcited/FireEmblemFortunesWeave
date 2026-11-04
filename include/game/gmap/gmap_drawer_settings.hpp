#pragma once

#include <stdint.h>

#include <vector>

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class GmapDrawerSettings : public Singleton<GmapDrawerSettings> {
public:
  ~GmapDrawerSettings() override;

private:
  uint8_t unknown_08_[0x130];
  std::vector<uint32_t> unknown_138_;
};

#pragma GCC visibility pop

}
