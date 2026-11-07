#pragma once

#include <stddef.h>
#include <stdint.h>

#include <deque>
#include <map>
#include <new>
#include <string>

#include "game/proc/proc_game_skip_view.hpp"
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

  // The last process of the chain from the root, null without a sequence.
  static ProcInst* GetLeafProc() {
    const ProcHubSeqView* seq = instance_;
    if (seq == nullptr) {
      return nullptr;
    }
    ProcInst* proc = seq->root_proc_;
    ProcInst* leaf;
    do {
      leaf = proc;
      proc = proc->GetParentProc();
    } while (proc != nullptr);
    return leaf;
  }

  // Keeps the depth the talk event starts at, CharacterManager reads it
  // back to tell whether the event still runs.
  static void BeginTalkEvent(const std::string& name) {
    ProcHubSeqView* seq = instance_;
    if (seq == nullptr) {
      return;
    }
    // Release builds drop the warning for a running name but keep its
    // lookup.
    [[maybe_unused]] const bool running = seq->talk_events_.contains(name);
    int depth = 0;
    for (ProcInst* proc = seq->root_proc_->GetParentProc(); proc != nullptr;
      proc = proc->GetParentProc()) {
      ++depth;
    }
    if (depth != 0) {
      seq->talk_events_[name] = depth;
    }
  }

  bool IsUnknown170() const {
    return unknown_170_;
  }

private:
  uint8_t unknown_00_[0x170];
  bool unknown_170_;
  uint8_t unknown_171_[0x27];
  ProcInst* event_proc_;
  ProcInst* root_proc_;
  std::map<std::string, int> talk_events_;
};

}

#pragma GCC visibility pop

}
