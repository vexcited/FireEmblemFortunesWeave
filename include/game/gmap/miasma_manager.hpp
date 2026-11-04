#pragma once

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class MiasmaManager : public Singleton<MiasmaManager> {
public:
  ~MiasmaManager() override;
};

#pragma GCC visibility pop

}
