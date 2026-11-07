#pragma once

#include <stdint.h>

#include <algorithm>
#include <string>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

// Begins when the first user pushes it and ends with the last pop.
class CountedSwitch {
public:
  virtual void Begin();
  virtual void End();

  void Push() {
    if (count_++ == 0) {
      Begin();
    }
  }

  void Pop() {
    if (--count_ == 0) {
      End();
    }
  }

  int GetCount() const {
    return count_;
  }

private:
  int count_;
};

class Manager : public Singleton<Manager> {
public:
  enum Kind : int {
    kKindHub = 0,
    kKindDungeon = 1,
  };

  bool IsActive() const {
    return active_;
  }

  int GetKind() const {
    return kind_;
  }

  bool IsActiveKind(int kind) const {
    return active_ && kind_ == kind;
  }

  void PausePersistent();
  void ResumePersistent();
  void UpdateScriptEvent();

  CountedSwitch& GetScriptEvent() {
    return script_event_;
  }

  CountedSwitch& GetEnemyStop() {
    return enemy_stop_;
  }

  CountedSwitch& GetEnemyNotice() {
    return enemy_notice_;
  }

  // Stops the enemies once while the player can play.
  void BindEnemyStopOnPlayable() {
    if (!enemy_stop_on_playable_) {
      enemy_stop_on_playable_ = true;
      enemy_stop_.Push();
    }
  }

  bool IsRunningScriptEvent() const {
    return running_script_event_;
  }

  void SetLockLightReloadOutSide(bool isLock) {
    lock_light_reload_outside_ = isLock;
  }

  const std::string& GetMapName() const {
    return map_name_;
  }

  const std::string& GetAreaFullName() const {
    return area_full_name_;
  }

  const std::string& GetAreaName() const {
    return area_name_;
  }

  // A lightweight reload asks for at least one frame.
  void ReloadLightweight() {
    reloader_->RequestFrames(1);
  }

private:
  class Reloader {
  public:
    void RequestFrames(int frames) {
      frames_ = std::max(frames_, frames);
    }

  private:
    uint8_t unknown_00_[0xe8];
    int frames_;
  };

  uint8_t unknown_08_;
  bool active_;
  uint8_t unknown_0a_[0x2];
  bool lock_light_reload_outside_;
  bool running_script_event_;
  uint8_t unknown_0e_[0x2];
  CountedSwitch script_event_;
  uint8_t unknown_20_[0x8];
  std::string map_name_;
  std::string area_full_name_;
  std::string area_name_;
  uint8_t unknown_70_[0x18];
  int kind_;
  uint8_t unknown_8c_[0x14];
  CountedSwitch enemy_stop_;
  CountedSwitch enemy_notice_;
  uint8_t unknown_c0_[0x18];
  Reloader* reloader_;
  uint8_t unknown_e0_[0x221];
  bool enemy_stop_on_playable_;
};

#pragma GCC visibility pop

}
