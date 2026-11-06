#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game {

class Unit;

}

namespace game::map {

#pragma GCC visibility push(hidden)

// One entry per unit index, the saved records of dirty units are rewritten.
class UnitFlags {
public:
  static UnitFlags* instance_;

  bool IsEnabled(int index) const {
    return units_[index].enabled;
  }

  void MarkDirty(int index) {
    if (units_[index].enabled) {
      units_[index].dirty = true;
    }
  }

private:
  struct Entry {
    bool enabled : 1;
    bool dirty : 1;
  };

  uint8_t unknown_00_[0x8];
  Entry units_[256];
};

namespace history {

// The map history, recording while its state is 1 and it isn't paused.
class Impl : public Singleton<Impl> {
public:
  // The notes on the current action kept with its record.
  class LogInfo {
  public:
    void SetEscape(const Unit* unit);
    void SetBattleSkill(const Unit* unit, const char* sid);
  };

  bool IsRecording() const {
    return state_ == 1 && !(flags_ & 1);
  }

  void MarkChanged(uint32_t mask) {
    changes_ |= mask;
  }

  LogInfo& GetLogInfo() {
    return log_info_;
  }

private:
  uint8_t state_;
  uint8_t flags_;
  uint8_t unknown_0a_[0x2];
  uint32_t changes_;
  uint8_t unknown_10_[0x350];
  LogInfo log_info_;
};

}

#pragma GCC visibility pop

}
