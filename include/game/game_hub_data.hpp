#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game {

namespace hub {

class Object;

}

#pragma GCC visibility push(hidden)

class GameHubData : public Singleton<GameHubData> {
public:
  // The saved state of a hub object.
  struct ObjectState {
    uint8_t unknown_00_[0x8];
    bool exists;
  };

  ObjectState* FindObjectState(const hub::Object* object);

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

  void ChangeExLighting(int kind) {
    ex_lighting_ = kind;
    ex_lighting_changed_ = true;
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
  uint8_t unknown_150_[0x280];
  int ex_lighting_;
  bool ex_lighting_changed_;
};

#pragma GCC visibility pop

}
