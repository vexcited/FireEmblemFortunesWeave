#pragma once

#include <cstdint>
#include <functional>

class CScriptAny;
class asIScriptFunction;
class asIScriptModule;

// The game layer over AngelScript. The class names are not recovered, the
// slot names describe their use.
namespace as {

class Any;
class ScriptContext;

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

  // Takes the key and the slot of the other handle, then looks the context
  // up again.
  void Assign(const ContextHandle& other) {
    key_ = other.key_;
    id_ = other.id_;
    context_ = Get();
  }

  // The context the slot holds, without checking the key.
  ScriptContext* GetSlotContext() const;

private:
  const void* key_ = nullptr;
  uint32_t id_ = kInvalidId;
  ScriptContext* context_ = nullptr;
};

class string;

// The script value type as::Variable, holding a number, a string, an any,
// a pointer or a context handle. The inline members are defined in
// as/variable.hpp.
class Variable {
public:
  enum Type {
    kNone,
    kInt,
    kHex,
    kFloat,
    kString,
    kBool,
    kPointer,
    kAny,
    kHandle,
  };

  Variable() : pointer_(nullptr), type_(kNone) {}
  explicit Variable(int value);
  explicit Variable(uint32_t value);
  explicit Variable(float value);
  explicit Variable(bool value);
  explicit Variable(const string& value);
  explicit Variable(const CScriptAny& value);
  Variable(const Variable& other);
  Variable(void* ref, int typeId);
  virtual ~Variable();

  int getInt() const;
  uint32_t getHex() const;
  float getFloat() const;
  string& getString() const;
  bool getBool() const;
  CScriptAny& getAny() const;
  ContextHandle getHandle() const;
  bool isInt() const;
  bool isHex() const;
  bool isFloat() const;
  bool isString() const;
  bool isBool() const;
  bool isAny() const;

  void setInt(int value);
  void setHex(uint32_t value);
  void setFloat(float value);
  [[gnu::always_inline]] void setString(const string& value);
  void setBool(bool value);
  void setVariable(const Variable& other);
  void setAny(const CScriptAny& value);
  void setHandle(const ContextHandle& handle);
  void store(void* ref, int typeId);

  // Drops the value held before and keeps a raw pointer.
  void*& pointerRef();

  // The exit argument natives name the any of the scripts as::Any.
  void SetAny(Any* any);

  Variable& operator=(int value);
  Variable& operator=(uint32_t value);
  Variable& operator=(float value);
  Variable& operator=(const string& value);
  Variable& operator=(bool value);
  Variable& operator=(const Variable& other);
  Variable& operator=(const CScriptAny& value);

private:
  [[gnu::always_inline]] void reset();

  union {
    int int_;
    uint32_t hex_;
    float float_;
    bool bool_;
    string* string_;
    CScriptAny* any_;
    void* pointer_;
    ContextHandle handle_;
  };
  Type type_;
};

static_assert(sizeof(Variable) == 0x28);

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
  virtual int SetArgObject(uint32_t arg, void* object);
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
  virtual asIScriptFunction* GetFunction(uint32_t stackLevel = 0);
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

  ContextHandle& GetBrother() {
    return brother_;
  }

  asIScriptModule* GetModule() const {
    return module_;
  }

  int GetPriority() const {
    return priority_;
  }

  const ContextHandle& GetOwner() const {
    return owner_;
  }

  static constexpr int kVariableCount = 16;

  // The variables a context hands to the contexts it runs.
  Variable& GetVariable(int index) {
    return variables_[index];
  }

private:
  static constexpr uint16_t kFlagExit = 0x100;

  uint8_t unknown_00_[0x8];
  uint32_t id_;
  uint8_t unknown_0c_[0xc];
  ScriptRunner* runner_;
  uint8_t unknown_20_[0x8];
  asIScriptModule* module_;
  int priority_;
  int state_;
  ContextHandle owner_;
  uint8_t unknown_50_[0x100];
  char exit_function_[0x80];
  Variable exit_argument_;
  Variable variables_[kVariableCount];
  uint8_t unknown_478_[0x3cc];
  int run_ctrl_;
  uint8_t unknown_848_[0x10];
  uint32_t skip_counter_;
  uint32_t skip_mask_;
  uint16_t flags_;
  uint8_t unknown_862_[0x6];
  ContextHandle brother_;
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
    return current_[index];
  }

  // Each thread keeps a stack of the threads it runs, the top is the
  // current one.
  void PushThread(uint32_t index, ScriptThread* thread) {
    stack_[index][++depth_[index]] = thread;
    current_[index] = thread;
  }

  void PopThread(uint32_t index) {
    stack_[index][depth_[index]--] = nullptr;
    current_[index] = stack_[index][depth_[index]];
  }

  // The context running the functions of the module.
  ContextHandle FindContext(const char* moduleName);

  // Starts the function of the declaration in a new context of the owner,
  // with the parent and the kind of the run, 2 to run and 3 to post.
  ContextHandle Run(const ContextHandle& owner, const ContextHandle& parent,
    const char* declaration, int priority, int runCtrl, int kind);

  // Starts the function as a brother of the parent, the function is null
  // when the owner lacks it.
  ContextHandle RunBrother(const ContextHandle& owner,
    const ContextHandle& parent, const char* declaration,
    asIScriptFunction* function, int priority, int runCtrl, int kind);

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
  static constexpr int kThreadCount = 32;
  static constexpr int kStackDepth = 16;

  uint8_t unknown_00_[0x120];
  ScriptThread* stack_[kThreadCount][kStackDepth];
  ScriptThread* current_[kThreadCount];
  int depth_[kThreadCount];
  uint8_t unknown_12a0_[0x10];
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

// The handle keeps the context even when its slot no longer holds it.
inline ContextHandle::ContextHandle(ScriptContext* context) {
  if (context == nullptr) {
    return;
  }
  uint32_t id = context->GetId();
  if (id != kInvalidId) {
    const ContextSlot& slot = g_context_slots[id];
    if (slot.context == context) {
      id_ = id;
      key_ = slot.key;
    }
  }
  context_ = context;
}

inline ScriptContext* ContextHandle::GetSlotContext() const {
  return id_ != kInvalidId ? g_context_slots[id_].context : nullptr;
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
