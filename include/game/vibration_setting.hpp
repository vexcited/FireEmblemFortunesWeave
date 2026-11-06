#pragma once

#include <cstdint>

namespace game {

#pragma GCC visibility push(hidden)

class VibrationSetting {
public:
  struct Option {
    bool enabled;
    bool unknown_1;
    bool unknown_2;
    uint8_t mode;
  };

  // The secondary flags only count when the shared flag at 0xe4 is set.
  bool IsEnabled(const Option& option) const {
    return option.mode == 1 && (option.enabled ||
      (flag_ == 1 && option.unknown_1 && option.unknown_2));
  }

  bool IsEnabled() const {
    return IsEnabled(first_) || IsEnabled(second_);
  }

private:
  uint8_t unknown_00_[0x5c];
  Option first_;
  uint8_t unknown_60_[0x5c];
  Option second_;
  uint8_t unknown_c0_[0x24];
  uint8_t flag_;
  uint8_t unknown_e5_[0x3];
};

static_assert(sizeof(VibrationSetting) == 0xe8);

bool IsVibrationEnabled(const VibrationSetting& setting);

class GameSetting {
public:
  const VibrationSetting& GetVibration() const {
    return vibration_;
  }

private:
  uint8_t unknown_00_[0x2c8];
  VibrationSetting vibration_;
};

extern GameSetting* g_game_setting;

#pragma GCC visibility pop

}
