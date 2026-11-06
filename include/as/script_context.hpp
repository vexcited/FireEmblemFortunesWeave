#pragma once

#include <cstdint>
#include <functional>

// The game layer over AngelScript. The class names are not recovered, the
// slot names describe their use.
namespace as {

class ContextHandle;
class Variable;

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
};

class ScriptContext {
public:
  ScriptRunner* GetRunner() const {
    return runner_;
  }

  void ClearCallback() {
    callback_ = nullptr;
  }

private:
  uint8_t unknown_00_[0x18];
  ScriptRunner* runner_;
  uint8_t unknown_20_[0x880];
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

private:
  uint8_t unknown_00_[0x1120];
  ScriptThread* threads_[1];
};

#pragma GCC visibility push(hidden)

extern ScriptManager* g_script_manager;
extern ThreadInfo* g_thread_info;

#pragma GCC visibility pop

// The context of the script running on the calling thread.
inline ScriptContext* GetCurrentContext() {
  ScriptThread* thread =
    g_script_manager->GetThread(g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

}
