#pragma once

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class TimelineEventManager : public Singleton<TimelineEventManager> {
public:
  ~TimelineEventManager() override;

  void ImmediateJumpNext();

  bool IsUnknown08() const {
    return unknown_08_;
  }

private:
  bool unknown_08_;
};

#pragma GCC visibility pop

}
