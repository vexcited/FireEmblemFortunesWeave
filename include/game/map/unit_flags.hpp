#pragma once

#include <stdint.h>

#include "game/data/data_file.hpp"
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

    LogInfo() = default;
    LogInfo(const LogInfo& other) = default;

    // The original copies member by member.
    LogInfo& operator=(const LogInfo& other) {
      kind_ = other.kind_;
      unknown_01_ = other.unknown_01_;
      unknown_02_ = other.unknown_02_;
      unknown_03_ = other.unknown_03_;
      unknown_04_ = other.unknown_04_;
      value_ = other.value_;
      for (int i = 0; i < 4; i++) {
        names_[i] = other.names_[i];
      }
      return *this;
    }

  private:
    uint8_t kind_ = 0;
    uint8_t unknown_01_ = 0;
    uint8_t unknown_02_ = 0;
    int8_t unknown_03_ = -1;
    int8_t unknown_04_ = -1;
    int value_ = 0;
    HashedString names_[4];
  };

  // The record kept for the mind of the acting unit, picked once.
  struct MindUnit {
    void Clear() {
      reserved = false;
    }

    bool reserved;
    uint8_t record;
  };

  // The record the mind of the unit needs, 0 for none.
  static uint8_t PickMindRecord(const Unit* unit);

  void ReserveMindRecord(const Unit* unit) {
    if (mind_unit_.record == 0) {
      mind_unit_.record = PickMindRecord(unit);
    }
  }

  bool IsRecording() const {
    return state_ == 1 && !(flags_ & 1);
  }

  void MarkChanged(uint32_t mask) {
    changes_ |= mask;
  }

  LogInfo& GetLogInfo() {
    return log_info_;
  }

  // Keeps the mind unit and the log while the scripts try something, until
  // they bring them back.
  void Backup() {
    backup_mind_unit_ = mind_unit_;
    backup_log_info_ = log_info_;
  }

  void Restore() {
    mind_unit_ = backup_mind_unit_;
    backup_mind_unit_.Clear();
    log_info_ = backup_log_info_;
    backup_log_info_ = LogInfo();
  }

  void RecordVariable(const HashedString& key);

private:
  uint8_t state_;
  uint8_t flags_;
  uint8_t unknown_0a_[0x2];
  uint32_t changes_;
  MindUnit mind_unit_;
  uint8_t unknown_12_[0x34e];
  LogInfo log_info_;
  uint8_t unknown_3b0_[0x80];
  MindUnit backup_mind_unit_;
  uint8_t unknown_432_[0x6];
  LogInfo backup_log_info_;
};

}

#pragma GCC visibility pop

}
