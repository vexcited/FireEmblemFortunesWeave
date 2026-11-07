#pragma once

#include <stdint.h>

#include <string>
#include <vector>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class HubSeqEnter : public Singleton<HubSeqEnter> {
public:
  void ProgressMinute(int minute);
  void RegisterTimelineEventFunc(const std::vector<std::string>& funcs);

  // Whether the next enter sequence starts without its fade in.
  bool IsSkippingFadeIn() const {
    return jump_next_ || unknown_0c_ > 0 || unknown_1c_;
  }

private:
  bool jump_next_;
  bool reload_all_;
  uint8_t unknown_0a_[0x2];
  int unknown_0c_;
  uint8_t unknown_10_[0xc];
  bool unknown_1c_;
};

#pragma GCC visibility pop

}
