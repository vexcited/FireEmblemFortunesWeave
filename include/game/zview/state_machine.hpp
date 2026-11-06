#pragma once

#include <cstdint>
#include <functional>
#include <vector>

namespace game::zview {

// Owns its states and runs the current one, T is the state action base of
// the module.
template<typename T>
class IStateMachine {
public:
  virtual ~IStateMachine() {
    if (state_ == kRunning) {
      states_[current_]->Unknown05();
      if (state_ == kRunning) {
        state_ = kIdle;
      }
    }

    for (T*& state : states_) {
      if (state != nullptr) {
        delete state;
        state = nullptr;
      }
    }
    states_.clear();
  }

protected:
  static constexpr uint8_t kIdle = 0;
  static constexpr uint8_t kRunning = 1;

  int current_;
  uint8_t state_;
  uint64_t unknown_10_;
  std::vector<T*> states_;
  std::function<void()> unknown_30_;
};

}
