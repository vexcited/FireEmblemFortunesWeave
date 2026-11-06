#include "as/script_context.hpp"

namespace as {

namespace {

[[gnu::always_inline]] inline void SetBlockState(int state) {
  ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(state);
  context->ClearCallback();
}

}

// The block markers of the as namespace. The overloads taking a handle or a
// variable ignore it.
#define AS_BLOCK(name, state) \
  [[gnu::used]] void name() { \
    SetBlockState(state); \
  }
#define AS_HANDLE_BLOCK(name) \
  AS_BLOCK(name, 1) \
  [[gnu::used]] void name(ContextHandle&) { \
    SetBlockState(1); \
  } \
  [[gnu::used]] void name(Variable&) { \
    SetBlockState(1); \
  }

AS_BLOCK(end, 3)
AS_HANDLE_BLOCK(inline_start)
AS_BLOCK(inline_end, 3)
AS_HANDLE_BLOCK(shared_inline_start)
AS_BLOCK(shared_inline_end, 3)
AS_HANDLE_BLOCK(brother_start)
AS_BLOCK(brother_end, 3)
AS_HANDLE_BLOCK(shared_brother_start)
AS_BLOCK(shared_brother_end, 3)
AS_BLOCK(exit_start, 1)
AS_BLOCK(exit_end, 3)

#undef AS_HANDLE_BLOCK
#undef AS_BLOCK

}
