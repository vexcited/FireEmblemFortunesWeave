#pragma once

#include <cstdint>
#include <functional>

// The game layer over AngelScript. The class names are not recovered, the
// slot names describe their use.
namespace as {

class Any;
class ScriptContext;

// A value a script hands over, here the argument of the exit function.
class Variable {
public:
  // Holds the any after dropping the value held before.
  void SetAny(Any* any);

private:
  uint8_t unknown_00_[0x80];
};

struct ContextSlot;

// Names a script context by its slot, 0x2000 when it names none. The key
// tells a reused slot apart.
class ContextHandle {
public:
  static constexpr uint32_t kInvalidId = 0x2000;

  ContextHandle() = default;
  explicit ContextHandle(ScriptContext* context);

  // The context while the slot still holds it, null otherwise.
  ScriptContext* Get() const;

  void Clear() {
    key_ = nullptr;
    id_ = kInvalidId;
    context_ = nullptr;
  }

private:
  const void* key_ = nullptr;
  uint32_t id_ = kInvalidId;
  ScriptContext* context_ = nullptr;
};

// Runs the script context of a thread.
class ScriptRunner {
public:
  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();
  virtual void Unknown05();
  virtual void Unknown06();
  virtual void Unknown07();
  virtual void Unknown08();
  virtual void Unknown09();
  virtual void Unknown10();
  virtual void Unknown11();
  virtual void Unknown12();
  virtual void Unknown13();
  virtual void Unknown14();
  virtual void Unknown15();
  virtual void Unknown16();
  virtual void Unknown17();
  virtual void Unknown18();
  virtual void Unknown19();
  virtual void Unknown20();
  virtual void Unknown21();
  virtual void Unknown22();
  virtual void Unknown23();
  virtual void Unknown24();
  virtual void Unknown25();
  virtual void Unknown26();
  virtual void Unknown27();
  virtual void Unknown28();
  virtual void Unknown29();
  virtual void Unknown30();
  virtual void Unknown31();
  virtual void Unknown32();
  virtual void Unknown33();
  virtual void Unknown34();
  virtual void Unknown35();
  virtual void Unknown36();
  virtual void Unknown37();
  virtual void Unknown38();
  virtual void Unknown39();
  virtual void Unknown40();
  virtual void Unknown41();
  virtual void Unknown42();
  virtual void Unknown43();
  virtual void Unknown44();
  virtual void Unknown45();
  virtual void Unknown46();
  virtual void Unknown47();
  virtual void Unknown48();
  virtual void Unknown49();
  virtual void Unknown50();
  virtual void Unknown51();
  virtual void Unknown52();
  virtual void Unknown53();
  virtual void Unknown54();
  virtual void Unknown55();

  // 1 opens an inline, brother or exit block, 3 closes it.
  virtual void SetBlockState(int state);
  virtual bool IsSkipping();
};

class ScriptContext {
public:
  uint32_t GetId() const {
    return id_;
  }

  ScriptRunner* GetRunner() const {
    return runner_;
  }

  bool IsRunning() const {
    return state_ == 1;
  }

  void ClearCallback() {
    callback_ = nullptr;
  }

  // The declaration of the function run when the context ends, empty while
  // none was set.
  char* GetExitFunction() {
    return exit_function_;
  }

  Variable& GetExitArgument() {
    return exit_argument_;
  }

  int GetRunCtrl() const {
    return run_ctrl_;
  }

  void SetRunCtrl(int flag) {
    run_ctrl_ = flag;
  }

  void SetSkipMask(uint32_t mask) {
    skip_mask_ = mask;
  }

  void SetSkipCounter(uint32_t counter) {
    skip_counter_ = counter;
  }

  // Lets the context run its exit function when it ends.
  void SetExitEnabled(bool enabled) {
    if (enabled) {
      flags_ |= kFlagExit;
    }
    else {
      flags_ &= ~kFlagExit;
    }
  }

  ContextHandle& GetParent() {
    return parent_;
  }

private:
  static constexpr uint16_t kFlagExit = 0x100;

  uint8_t unknown_00_[0x8];
  uint32_t id_;
  uint8_t unknown_0c_[0xc];
  ScriptRunner* runner_;
  uint8_t unknown_20_[0x14];
  int state_;
  uint8_t unknown_38_[0x118];
  char exit_function_[0x80];
  Variable exit_argument_;
  uint8_t unknown_250_[0x5f4];
  int run_ctrl_;
  uint8_t unknown_848_[0x10];
  uint32_t skip_counter_;
  uint32_t skip_mask_;
  uint16_t flags_;
  uint8_t unknown_862_[0x1e];
  ContextHandle parent_;
  uint8_t unknown_898_[0x8];
  std::function<void()> callback_;
};

class ScriptThread {
public:
  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();
  virtual void Unknown05();
  virtual void Unknown06();
  virtual void Unknown07();
  virtual void Unknown08();
  virtual void Unknown09();
  virtual void Unknown10();
  virtual void Unknown11();
  virtual void Unknown12();
  virtual void Unknown13();
  virtual void Unknown14();
  virtual void Unknown15();
  virtual void Unknown16();
  virtual void Unknown17();
  virtual void Unknown18();
  virtual void Unknown19();
  virtual void Unknown20();
  virtual void Unknown21();
  virtual void Unknown22();
  virtual void Unknown23();
  virtual void Unknown24();
  virtual void Unknown25();
  virtual void Unknown26();
  virtual void Unknown27();
  virtual void Unknown28();
  virtual void Unknown29();
  virtual void Unknown30();
  virtual void Unknown31();
  virtual void Unknown32();
  virtual void Unknown33();
  virtual void Unknown34();
  virtual void Unknown35();
  virtual void Unknown36();
  virtual void Unknown37();
  virtual void Unknown38();
  virtual void Unknown39();
  virtual void Unknown40();
  virtual void Unknown41();
  virtual void Unknown42();
  virtual void Unknown43();
  virtual void Unknown44();
  virtual void Unknown45();
  virtual void Unknown46();
  virtual void Unknown47();
  virtual void Unknown48();
  virtual void Unknown49();
  virtual void Unknown50();
  virtual void Unknown51();
  virtual void Unknown52();
  virtual void Unknown53();
  virtual void Unknown54();
  virtual void Unknown55();
  virtual void Unknown56();
  virtual void Unknown57();
  virtual void Unknown58();
  virtual ScriptContext* GetContext();
};

class ThreadInfo {
public:
  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();
  virtual void Unknown05();
  virtual void Unknown06();
  virtual void Unknown07();
  virtual void Unknown08();
  virtual uint32_t GetIndex();
};

class ScriptManager {
public:
  ScriptThread* GetThread(uint32_t index) const {
    return threads_[index];
  }

  // Building threads stays off while it is locked.
  bool EnableThreadBuild() {
    if (thread_build_enabled_) {
      return true;
    }
    if (thread_build_locked_) {
      return false;
    }
    thread_build_enabled_ = true;
    return true;
  }

  void Stop(const ContextHandle& handle, bool force);
  void StopWithAllChild(const ContextHandle& handle, bool force);
  void StopAllChild(const ContextHandle& handle, bool force);

  bool DisableThreadBuild() {
    if (thread_build_enabled_ == true) {
      if (thread_build_locked_) {
        return false;
      }
      thread_build_enabled_ = false;
    }
    return true;
  }

private:
  uint8_t unknown_00_[0x1120];
  ScriptThread* threads_[50];
  bool thread_build_locked_;
  bool thread_build_enabled_;
};

#pragma GCC visibility push(hidden)

extern ScriptManager* g_script_manager;
extern ThreadInfo* g_thread_info;

#pragma GCC visibility pop

static_assert(sizeof(ContextHandle) == 0x18);

// The slot of each live context, indexed by its id.
struct ContextSlot {
  const void* key;
  ScriptContext* context;
};

#pragma GCC visibility push(hidden)

extern ContextSlot g_context_slots[ContextHandle::kInvalidId];

#pragma GCC visibility pop

inline ContextHandle::ContextHandle(ScriptContext* context) {
  if (context == nullptr) {
    return;
  }
  uint32_t id = context->GetId();
  if (id == kInvalidId) {
    return;
  }
  const ContextSlot& slot = g_context_slots[id];
  if (slot.context != context) {
    return;
  }
  id_ = id;
  key_ = slot.key;
  context_ = context;
}

inline ScriptContext* ContextHandle::Get() const {
  if (id_ == kInvalidId) {
    return nullptr;
  }
  const ContextSlot& slot = g_context_slots[id_];
  if (slot.context == nullptr || slot.key != key_) {
    return nullptr;
  }
  return slot.context;
}

// The context of the calling thread, for the natives that know it runs one.
inline ScriptContext* GetRunningContext() {
  return g_script_manager->GetThread(g_thread_info->GetIndex())->GetContext();
}

// The context of the script running on the calling thread.
inline ScriptContext* GetCurrentContext() {
  ScriptThread* thread =
    g_script_manager->GetThread(g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

}
