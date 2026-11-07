#pragma once

#include <stdint.h>

#include "game/hub/manager.hpp"
#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

// Hides the common and the schedule interfaces while one of their switches
// is pushed.
class UIManager : public Singleton<UIManager> {
public:
  void Refresh();

  CountedSwitch& GetHideCommon() {
    return hide_common_;
  }

  CountedSwitch& GetHideSchedule() {
    return hide_schedule_;
  }

  // Hides both until the player can play again.
  void HideAllOnPlayable() {
    if (!playable_hide_common_) {
      playable_hide_common_ = true;
      hide_common_.Push();
      Refresh();
    }
    if (!playable_hide_schedule_) {
      playable_hide_schedule_ = true;
      hide_schedule_.Push();
      Refresh();
    }
  }

  void TryClearOnPlayableSchedule() {
    if (playable_hide_schedule_) {
      playable_hide_schedule_ = false;
      hide_schedule_.Pop();
      Refresh();
    }
  }

private:
  uint8_t unknown_08_[0x99];
  bool playable_hide_common_;
  bool playable_hide_schedule_;
  uint8_t unknown_a3_[0x5];
  CountedSwitch hide_common_;
  CountedSwitch hide_schedule_;
};

#pragma GCC visibility pop

}
