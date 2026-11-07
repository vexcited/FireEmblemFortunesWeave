#pragma once

#include <stddef.h>
#include <stdint.h>

#include <deque>
#include <new>

#include "game/proc/proc_inst.hpp"
#include "game/singleton.hpp"

namespace as::common {

#pragma GCC visibility push(hidden)

// The small object pools of the script layer.
void* Allocate(size_t size);
void Free(void* address);

// What a waiting native keeps in its context, the process it waits for.
class Work {
public:
  Work() = default;
  virtual ~Work();

  game::ProcInst* GetProc() const {
    return proc_;
  }

  void SetProc(game::ProcInst* proc) {
    proc_ = proc;
  }

private:
  game::ProcInst* proc_ = nullptr;
};

#pragma GCC visibility pop

}

namespace game {

#pragma GCC visibility push(hidden)

namespace evt {

class ScriptBase {
public:
  virtual ~ScriptBase();

  struct Event {
    uint8_t unknown_00_[0x48];
    ProcInst* proc;
  };

  // The process of the last event the script runs.
  ProcInst* GetCurrentProc() const {
    return !events_.empty() ? events_.back().proc : nullptr;
  }

private:
  uint8_t unknown_08_[0x18];
  std::deque<Event> events_;
};

}

namespace map {

class MapScript : public Singleton<MapScript>, public evt::ScriptBase {};

}

namespace cmdbtl {

class CmdBtlScript : public Singleton<CmdBtlScript>,
  public evt::ScriptBase {};

}

// The script singleton between the map and command battle ones. Nothing in
// this build creates it.
class UnusedScript : public Singleton<UnusedScript>,
  public evt::ScriptBase {};

namespace hub {

// The view of the hub sequence process the scripts read.
class ProcHubSeqView {
public:
  static ProcHubSeqView* instance_;

  ProcInst* GetEventProc() const {
    return event_proc_;
  }

private:
  uint8_t unknown_00_[0x198];
  ProcInst* event_proc_;
};

}

// The view of the game skip process.
class ProcGameSkipView {
public:
  static ProcGameSkipView* instance_;

  // The waking processes stay asleep while the game skips.
  static bool IsSkipping() {
    const ProcGameSkipView* skip = instance_;
    if (skip == nullptr || skip->state_ != 3) {
      return false;
    }
    const uint32_t mask = (skip->flags_ & 8) != 0 ? 2 : 3;
    return (mask & skip->flags_) == 0;
  }

  // Any of the states 1 to 3 counts for the scripts.
  static bool IsActive() {
    const ProcGameSkipView* skip = instance_;
    if (skip == nullptr || skip->state_ - 1u > 2) {
      return false;
    }
    const uint32_t mask = (skip->flags_ & 8) != 0 ? 2 : 3;
    return (mask & skip->flags_) == 0;
  }

private:
  uint8_t unknown_00_[0x98];
  uint8_t state_;
  uint8_t unknown_99_[0x3];
  uint32_t flags_;
};

#pragma GCC visibility pop

}
