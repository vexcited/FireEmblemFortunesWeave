#include <stdint.h>

#include <unordered_map>

#include "game/proc/proc_inst.hpp"

namespace game {

#pragma GCC visibility push(hidden)

extern std::unordered_map<uint32_t, ProcInst*> g_proc_registry;
extern uint32_t g_last_proc_id;

void ProcInst::Register() {
  uint32_t id = g_last_proc_id;
  do {
    do {
      id++;
    } while (id == 0);
  } while (g_proc_registry.find(id) != g_proc_registry.end());

  g_last_proc_id = id;
  g_proc_registry.emplace(id, this);
  id_ = id;
}

void ProcInst::Unregister() {
  const uint32_t id = id_;
  if (g_proc_registry.find(id) != g_proc_registry.end()) {
    g_proc_registry.erase(id);
  }
}

#pragma GCC visibility pop

}
