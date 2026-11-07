#pragma once

#include <stdint.h>

#include <deque>

namespace game {

// Link time optimization internalized these so they are addressed directly.
#pragma GCC visibility push(hidden)

class ProcConst {};

// One step of the command list a process runs.
struct ProcCmd {
  static constexpr uint8_t kEnd = 0;
  static constexpr uint8_t kLabel = 2;

  uint8_t type;
  uint8_t unknown_01[0x1f];
  int value;
  uint8_t unknown_24[0x1c];
};

class ProcInst : public ProcConst {
public:
  // The real constructor is not reconstructed yet.
  ProcInst();

  virtual ~ProcInst() {
    if (flags_ & kFlagActive) {
      flags_ &= ~kFlagActive;
    }

    Unregister();
  }

  virtual void Unknown02() {}
  virtual void Unknown03() {}
  virtual void Unknown04() {}
  virtual void Unknown05() {}
  virtual void Unknown06() {}
  virtual void Unknown07() {}
  virtual void Unknown08() {}
  virtual void Unknown09() {}
  virtual void Unknown10() {}
  virtual void Unknown11() {}
  virtual void Unknown12() {}
  virtual void Unknown13() {}
  virtual void Unknown14() {}
  virtual void Unknown15() {}
  virtual void Unknown16() {}

  // Its result decides whether the active flag is set after creation.
  virtual bool Unknown17() {
    return false;
  }

protected:
  // Moves to the label command unless the current one is already there.
  void Jump(int label) {
    bool jump = true;
    for (const ProcCmd* cmd = current_; cmd >= commands_; --cmd) {
      if (cmd->type == ProcCmd::kLabel) {
        jump = cmd->value != label;
        break;
      }
    }
    if (commands_ == nullptr || !jump) {
      return;
    }

    for (const ProcCmd* cmd = commands_;; ++cmd) {
      if (cmd->type == ProcCmd::kLabel) {
        if (cmd->value == label) {
          current_ = cmd;
          flags_ &= ~kFlagWait;
          return;
        }
      }
      else if (cmd->type == ProcCmd::kEnd) {
        return;
      }
    }
  }

  // Whether the last label command at or before the current one is label.
  bool IsInLabel(int label) const {
    if (commands_ == nullptr) {
      return false;
    }
    for (const ProcCmd* cmd = current_; cmd >= commands_; --cmd) {
      if (cmd->type == ProcCmd::kLabel) {
        return cmd->value == label;
      }
    }
    return false;
  }

  // Moves to the label command searching from the first command.
  void JumpTo(int label) {
    if (commands_ == nullptr) {
      return;
    }
    for (const ProcCmd* cmd = commands_;; ++cmd) {
      if (cmd->type == ProcCmd::kLabel) {
        if (cmd->value == label) {
          current_ = cmd;
          flags_ &= ~kFlagWait;
          return;
        }
      }
      else if (cmd->type == ProcCmd::kEnd) {
        return;
      }
    }
  }

  // Wait commands keep waiting until the process resumes.
  void Finish() {
    if (current_ != nullptr && current_->type <= 16 &&
      ((1 << current_->type) & kWaitCommands) != 0) {
      flags_ |= kFlagWait;
    }
    flags_ |= kFlagFinished;
  }

  void SetFinished() { flags_ |= kFlagFinished; }

  // The stack holds the commands to return to. Its element type stays the
  // one its destructor is paired under in the singleton specs.
  void PushReturn() {
    unknown_58.push_back(
      reinterpret_cast<ProcInst*>(const_cast<ProcCmd*>(current_)));
  }

  bool IsUnknown8aSet() const { return unknown_8a[0] != 0; }

public:
  ProcInst* GetUnknown20() const { return unknown_20_; }
  ProcInst* GetParentProc() const { return parent_proc_; }
  const char* GetName() const { return name_; }
  const ProcCmd* GetCommands() const { return commands_; }

  bool IsUnknownFlag01Set() const { return flags_ & 1; }

  // Wakes the process, at least at the normal speed.
  void Wake() {
    flags_ = (flags_ & ~0x68) | 0x20;
    speed_ = speed_ < 1.0f ? 1.0f : speed_;
  }

private:
  static constexpr uint32_t kWaitCommands = 0x1ce00;
  static constexpr uint16_t kFlagFinished = 0x8;
  static constexpr uint16_t kFlagWait = 0x80;
  static constexpr uint16_t kFlagActive = 0x100;

  // Takes the next free id, ids skip zero and wrap around.
  void Register();
  void Unregister();

  const ProcCmd* commands_;
  const ProcCmd* current_;
  const char* name_;
  ProcInst* unknown_20_;
  ProcInst* parent_proc_;
  uint64_t unknown_30[5];
  std::deque<ProcInst*> unknown_58;
  uint16_t flags_;
  uint8_t unknown_8a[2];
  uint32_t name_hash_;
  float speed_;
  // Key of the global registry Unregister removes this process from.
  uint32_t id_;
};

#pragma GCC visibility pop

}
