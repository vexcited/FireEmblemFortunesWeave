#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class FacilitySupport : public Singleton<FacilitySupport> {
public:
  ~FacilitySupport() override;
};

#pragma GCC visibility pop

}
