#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class GameHubData : public Singleton<GameHubData> {
public:
  bool CanEscape() const {
    return can_escape_;
  }

  bool IsUnknown130() const {
    return unknown_130_;
  }

  void SetEnableFacility(bool isEnable) {
    unknown_130_ = isEnable;
  }

  void SetContinueEncountBgm(bool isEnable) {
    continue_encount_bgm_ = isEnable;
  }

  void SetDisableSaveMenu(bool isEnable) {
    disable_save_menu_ = isEnable;
  }

  void SetDngUnitCountOne(bool isEnable) {
    dng_unit_count_one_ = isEnable;
  }

private:
  uint8_t unknown_08_[0x98];
  bool can_escape_;
  uint8_t unknown_a1_[0x8f];
  bool unknown_130_;
  uint8_t unknown_131_[0x17];
  uint64_t continue_encount_bgm_ : 1;
  uint64_t disable_save_menu_ : 1;
  uint64_t dng_unit_count_one_ : 1;
};

#pragma GCC visibility pop

}
