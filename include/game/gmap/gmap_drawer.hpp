#pragma once

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class GmapDrawer : public Singleton<GmapDrawer> {
public:
  ~GmapDrawer() override;
};

#pragma GCC visibility pop

}
