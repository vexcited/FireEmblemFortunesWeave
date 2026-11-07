namespace as {

struct ContextSlot;

// The slots are read through the global offset table, so they are declared
// with default visibility before the header.
[[gnu::visibility("default")]] extern ContextSlot g_context_slots[];

}

#include <new>

#include "as/script_context.hpp"

namespace as {

Variable& ContextHandle::getLW(int no) const {
  return g_context_slots[id_].context->GetVariable(no);
}

// The behaviors of the ContextHandle script type, object first.
namespace handle {

void Construct(void* memory) {
  new (memory) ContextHandle;
}

void Destruct(void*) {}

ContextHandle& Assign(ContextHandle& self, const ContextHandle& other) {
  self.Assign(other);
  return self;
}

}

// The ScriptHandle type keeps nothing to destroy.
namespace script_handle {

void Destruct(void*) {}

}

}
