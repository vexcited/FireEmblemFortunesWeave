#include "game/proc/proc_list.hpp"

namespace game {

ProcList& ProcList::Call(const std::function<void()>& function) {
  Add([function](ProcInst*) {
    function();
    return Result::kNext;
  });
  return *this;
}

ProcList& ProcList::Call(const std::function<void(ProcInst*)>& function) {
  Add([function](ProcInst* proc) {
    function(proc);
    return Result::kNext;
  });
  return *this;
}

// The step repeats while the function returns true.
ProcList& ProcList::Tick(const std::function<bool()>& function) {
  Add([function](ProcInst*) {
    return function() ? Result::kRepeat : Result::kNext;
  });
  return *this;
}

ProcList& ProcList::Tick(const std::function<Result()>& function) {
  Add([function](ProcInst*) {
    return function();
  });
  return *this;
}

}
