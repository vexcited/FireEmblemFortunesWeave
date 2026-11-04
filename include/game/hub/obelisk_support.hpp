#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class ObeliskSupport : public Singleton<ObeliskSupport> {
public:
  ~ObeliskSupport() override;
};

#pragma GCC visibility pop

}
