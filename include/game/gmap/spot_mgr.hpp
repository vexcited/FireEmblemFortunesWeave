#pragma once

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class SpotMgr : public Singleton<SpotMgr> {
public:
  ~SpotMgr() override;
};

#pragma GCC visibility pop

}
