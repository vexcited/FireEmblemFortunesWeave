#pragma once

#include <stdint.h>

#include <functional>
#include <unordered_map>
#include <utility>
#include <vector>

#include "game/data/data_file.hpp"

namespace game {

#pragma GCC visibility push(hidden)

struct GameVariable {
  uint8_t unknown_00_[0x20];
  int value;
  uint8_t unknown_24_[0x34];
  // Called with the variable after its value changed.
  std::vector<std::function<void(GameVariable*)>> listeners;
};

class GameVariableTable {
public:
  const GameVariable* Find(const HashedString& key) const;
  bool Contains(const HashedString& key) const;

  GameVariable* Find(const HashedString& key) {
    return const_cast<GameVariable*>(std::as_const(*this).Find(key));
  }

  uint8_t GetFlags() const {
    return flags_;
  }

private:
  uint8_t unknown_00_[0x8];
  std::unordered_map<uint64_t, GameVariable*> variables_;
  uint8_t unknown_30_[0x3c0230];
  uint8_t flags_;
};

// The variables the engine reads by kind, their names are function local
// statics hashed on first use.
enum class SystemVariable : int {
  kNone = 0,
  kForceMount = 1,
  kForceDismount = 2,
};

const HashedString& GetSystemVariable(SystemVariable kind);

// The variables that ban a feature, 禁止_転職, 禁止_奇跡 and 禁止_汚染 first.
enum class BanVariable : int {
  kClassChange = 0,
  kMiracle = 1,
  kPollution = 2,
};

const HashedString& GetBanVariable(BanVariable kind);

class Unit;
struct PersonData;

// A unit and its person, as the unit restriction checks take them.
struct UnitRestrictionKey {
  const Unit* unit;
  const PersonData* person;
};

// The restrictions on the units of the current play, nonzero when a unit is
// restricted.
class UnitRestriction {
public:
  int Find(const UnitRestrictionKey& key);

private:
  uint8_t unknown_00_[0x10];
};

struct ChapterData {
  bool IsTrickItemPrivate() const {
    return flags & 0x80;
  }

  uint8_t unknown_00_[0x86];
  uint16_t minimap_scale;
  uint8_t unknown_88_[0x31];
  uint8_t flags;
};

struct MiracleState {
  uint8_t unknown_00_[0x68];
  uint16_t count;
};

// Global play state, its real name is unknown.
class GameModeData {
public:
  enum Mode : int {
    kModeNone = 0,
    kModeChapter = 1,
    kModeFree = 2,
    kModeClear = 3,
  };

  static constexpr uint32_t kFlagGmapContinue = 0x2;
  static constexpr uint32_t kFlagCompletedMap = 0x4;

  static GameModeData* GetInstance() {
    return instance_;
  }

  static bool IsVariableSet(const char* name) {
    const HashedString key(name);
    if (instance_ == nullptr) {
      return false;
    }
    const GameVariable* variable = instance_->variables_->Find(key);
    return variable != nullptr && variable->value != 0;
  }

  GameVariableTable* GetVariables() {
    return variables_;
  }

  static const GameVariable* FindVariable(const HashedString& key) {
    if (instance_ == nullptr) {
      return nullptr;
    }
    return instance_->variables_->Find(key);
  }

  static bool HasVariable(const HashedString& key) {
    if (instance_ == nullptr) {
      return false;
    }
    return instance_->variables_->Contains(key);
  }

  static bool IsVariableSet(const HashedString& key) {
    if (instance_ == nullptr) {
      return false;
    }
    const GameVariable* variable = instance_->variables_->Find(key);
    return variable != nullptr && variable->value != 0;
  }

  int GetMode() const {
    return mode_;
  }

  int GetProgress() const {
    return progress_;
  }

  uint8_t GetChapterKind() const {
    return chapter_kind_;
  }

  const PersonData* GetLeader() const {
    return leader_;
  }

  uint8_t GetMapKind() const {
    return map_kind_;
  }

  bool IsMapAvailable() const {
    switch (mode_) {
      case kModeNone:
      case kModeFree:
        return false;
      case kModeChapter:
        if (chapter_kind_ >= 2 && chapter_kind_ <= 4) {
          return progress_ > 3;
        }
        if (chapter_kind_ == 1) {
          return progress_ > 2;
        }
        return true;
      case kModeClear:
        return progress_ > 1;
      default:
        return true;
    }
  }

  const ChapterData* GetChapter() const {
    return chapter_;
  }

  int GetUserData() const {
    return user_data_;
  }

  UnitRestriction& GetUnitRestriction() {
    return unit_restriction_;
  }

  uint16_t GetMiracleCount() const {
    return miracle_->count;
  }

  bool HasFlag(uint32_t flag) const {
    return flags_ & flag;
  }

  void ClearFlag(uint32_t flag) {
    if (flags_ & flag) {
      flags_ &= ~flag;
    }
  }

private:
  static GameModeData* instance_;

  uint8_t unknown_00_[0xf];
  uint8_t chapter_kind_;
  const ChapterData* chapter_;
  uint8_t unknown_18_[0x18];
  GameVariableTable* variables_;
  uint8_t map_kind_;
  uint8_t unknown_39_[0x3];
  int mode_;
  int progress_;
  uint8_t unknown_44_[0x4];
  int user_data_;
  uint8_t unknown_4c_[0x10];
  uint32_t flags_;
  const PersonData* leader_;
  uint8_t unknown_68_[0x20];
  UnitRestriction unit_restriction_;
  uint8_t unknown_98_[0x8];
  const MiracleState* miracle_;
};

#pragma GCC visibility pop

}
