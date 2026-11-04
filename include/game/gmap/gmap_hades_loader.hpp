#pragma once

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class GmapHadesLoader : public Singleton<GmapHadesLoader> {
public:
  ~GmapHadesLoader() override;
};

#pragma GCC visibility pop

}
