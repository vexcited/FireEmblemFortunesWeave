#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class HubDebug : public Singleton<HubDebug> {
public:
  ~HubDebug() override;
};

#pragma GCC visibility pop

}
