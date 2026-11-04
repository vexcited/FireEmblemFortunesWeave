#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class Input : public Singleton<Input> {
public:
  ~Input() override;
};

#pragma GCC visibility pop

}
