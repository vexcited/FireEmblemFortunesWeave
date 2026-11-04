#pragma once

#include <stdint.h>

#include <vector>

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class GmapSpotPin : public Singleton<GmapSpotPin> {
public:
  ~GmapSpotPin() override;

private:
  std::vector<uint64_t> pins_;
};

#pragma GCC visibility pop

}
