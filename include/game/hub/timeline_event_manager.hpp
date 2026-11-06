#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class TimelineEventManager : public Singleton<TimelineEventManager> {
public:
  ~TimelineEventManager() override;

  void ImmediateJumpNext();
};

#pragma GCC visibility pop

}
