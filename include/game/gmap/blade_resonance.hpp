#pragma once

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class BladeResonance : public Singleton<BladeResonance> {
public:
  ~BladeResonance() override;
};

#pragma GCC visibility pop

}
