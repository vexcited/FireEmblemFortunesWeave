#pragma once

#include <cstdint>
#include <deque>

namespace game {

#pragma GCC visibility push(hidden)

// The view of the game skip process.
class ProcGameSkipView {
public:
  static ProcGameSkipView* instance_;

  // The waking processes stay asleep while the game skips.
  static bool IsSkipping() {
    const ProcGameSkipView* skip = instance_;
    if (skip == nullptr || skip->state_ != 3) {
      return false;
    }
    const uint32_t mask = (skip->flags_ & 8) != 0 ? 2 : 3;
    return (mask & skip->flags_) == 0;
  }

  // Any of the states 1 to 3 counts for the scripts.
  static bool IsActive() {
    const ProcGameSkipView* skip = instance_;
    if (skip == nullptr || skip->state_ - 1u > 2) {
      return false;
    }
    const uint32_t mask = (skip->flags_ & 8) != 0 ? 2 : 3;
    return (mask & skip->flags_) == 0;
  }

  // Restores the state saved by the last menu, the second flag stays.
  static void PopState() {
    if (ProcGameSkipView* skip = instance_) {
      const State& state = skip->states_.back();
      skip->flags_ = (state.flags & ~2u) | (skip->flags_ & 2u);
      skip->unknown_a8_ = state.unknown_18;
      skip->unknown_a0_ = state.unknown_10;
      skip->states_.pop_back();
    }
  }

private:
  struct State {
    uint32_t flags;
    uint8_t unknown_04_[0xc];
    uint64_t unknown_10;
    uint64_t unknown_18;
  };

  uint8_t unknown_00_[0x98];
  uint8_t state_;
  uint8_t unknown_99_[0x3];
  uint32_t flags_;
  uint64_t unknown_a0_;
  uint64_t unknown_a8_;
  std::deque<State> states_;
};

#pragma GCC visibility pop

}
