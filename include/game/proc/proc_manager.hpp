#pragma once

#include <functional>

#include "game/proc/proc_inst.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// A process descriptor is the command list a process starts with.
struct ProcDesc;

class ProcManager {
public:
  // Walks both process trees at 0x21c6960 and 0x21c6968. The name is a
  // guess, the RTTI strings only name the wrappers below.
  static void Each(const std::function<void(ProcInst*)>& function);

  static void EachByDesc(const ProcDesc* desc,
    const std::function<void(ProcInst*)>& function);

  template <class T>
  static void EachByClass(const std::function<void(T*)>& function) {
    Each([function](ProcInst* proc) {
      if (T* instance = dynamic_cast<T*>(proc)) {
        function(instance);
      }
    });
  }
};

#pragma GCC visibility pop

}
