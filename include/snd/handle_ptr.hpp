#pragma once

#include <cstdint>

#include "nn/os/mutex.hpp"

namespace snd {

// Base of every object a fnd::WeakHandle can point at. The object owns one
// slot of the global handle table, the slot keeps a serial so that handles
// to a destroyed object stop resolving.
class HandlePtr {
public:
  HandlePtr() {
    registerHandle();
  }

  virtual ~HandlePtr();

  void registerHandle();
  [[gnu::noinline]] void unregisterHandle();

  uint32_t getIndex() const {
    return index_;
  }

private:
  uint32_t index_ = 0x2000;
};

struct HandleEntry {
  uint64_t serial;
  HandlePtr* object;
};

constexpr uint32_t kHandleCount = 0x2000;

void clearHandles();

// The table, its lock and the serial counter are reached through the GOT in
// some functions and directly in others, so each has a second declaration.
extern nn::os::MutexType g_handleMutex;
extern HandleEntry g_handleTable[kHandleCount];
extern uint64_t g_handleSerial;

#pragma GCC visibility push(hidden)

extern nn::os::MutexType s_handleMutex;
extern HandleEntry s_handleTable[kHandleCount];
extern uint64_t s_handleSerial;

#pragma GCC visibility pop

}
