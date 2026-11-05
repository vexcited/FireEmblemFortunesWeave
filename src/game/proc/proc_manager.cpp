#include "game/proc/proc_manager.hpp"

namespace game {

void ProcManager::EachByDesc(const ProcDesc* desc,
  const std::function<void(ProcInst*)>& function) {
  Each([desc, function](ProcInst* proc) {
    if (reinterpret_cast<const ProcDesc*>(proc->GetCommands()) == desc) {
      function(proc);
    }
  });
}

}
