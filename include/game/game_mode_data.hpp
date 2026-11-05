#pragma once

#include <stdint.h>

#include "game/data/data_file.hpp"

namespace game {

#pragma GCC visibility push(hidden)

struct GameVariable {
  uint8_t unknown_00_[0x20];
  int value;
};

class GameVariableTable {
public:
  const GameVariable* Find(const HashedString& key) const;
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

  uint16_t GetMiracleCount() const {
    return miracle_->count;
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
  uint8_t unknown_38_[0x4];
  int mode_;
  int progress_;
  uint8_t unknown_44_[0x4];
  int user_data_;
  uint8_t unknown_4c_[0x10];
  uint32_t flags_;
  uint8_t unknown_60_[0x40];
  const MiracleState* miracle_;
};

#pragma GCC visibility pop

}
