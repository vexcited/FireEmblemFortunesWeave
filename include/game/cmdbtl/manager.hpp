#pragma once

#include <stdint.h>

#include <memory>
#include <vector>

#include "game/singleton.hpp"
#include "game/zview/camera.hpp"

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

// The battle camera is a render camera.
using Camera = gfx::render::Camera;

using zview::CameraQuake;

class CameraDirector {
public:
  struct Transition {
    uint8_t unknown_00_[0x1c];
    float sec;
  };

  // The event camera at the position and rotation, in degrees.
  void StartEvent(const float (&transform)[6], float sec);

  // Whether the first transition still runs.
  bool IsTransitioning() const {
    bool running = false;
    if (!transitions_.empty()) {
      std::shared_ptr<Transition> transition = transitions_.front();
      running = transition != nullptr && time_ < transition->sec;
    }
    return running;
  }

private:
  uint8_t unknown_00_[0x1a0];
  std::vector<std::shared_ptr<Transition>> transitions_;
  uint8_t unknown_1b8_[0x10];
  float time_;
  uint8_t unknown_1cc_[0x1c];
};

// The battles of the command battle, as the battle info and the viewer show
// them.
class BattleRecord {
public:
  class Entry {
  public:
    void Set(bool viewer, int force, int kind);

  private:
    uint8_t unknown_00_[0x30];
  };

  void New();

  Entry* GetLast() {
    return !entries_.empty() ? &entries_.back() : nullptr;
  }

private:
  uint8_t unknown_00_[0x8];
  std::vector<Entry> entries_;
};

class Manager : public Singleton<Manager> {
public:
  static constexpr uint32_t kFlagEventDateOpen = 0x400;

  // Where the units are relocated to, none for their dispos positions.
  struct RelocateParam {
    const void* unknown_00 = nullptr;
    std::weak_ptr<void> target;
  };

  void RelocateUnits(RelocateParam param);

  void SetFlag(uint32_t flag) {
    flags_ |= flag;
  }

  CameraDirector& GetDirector() {
    return director_;
  }

  Camera* GetCamera() const {
    return camera_;
  }

  CameraQuake* GetQuake() const {
    return quake_;
  }

  BattleRecord& GetRecord() {
    return record_;
  }

  int GetPhase() const {
    return phase_;
  }

  int GetTurn() const {
    return turn_;
  }

  bool IsLoading() const;

private:
  uint8_t unknown_08_[0x8];
  CameraDirector director_;
  Camera* camera_;
  uint8_t unknown_200_[0x20];
  CameraQuake* quake_;
  uint8_t unknown_228_[0x18];
  BattleRecord record_;
  int phase_;
  int turn_;
  uint8_t unknown_268_[0x24c];
  uint32_t flags_;
};

#pragma GCC visibility pop

}

// The script natives read the manager through the global offset table.
[[gnu::visibility("default")]] extern game::cmdbtl::Manager* g_cmdbtl_manager;
