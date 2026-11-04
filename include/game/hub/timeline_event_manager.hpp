#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class TimelineEventManager : public Singleton<TimelineEventManager> {
public:
  ~TimelineEventManager() override;
};

#pragma GCC visibility pop

}
