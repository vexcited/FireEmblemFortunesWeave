#pragma once

#include "as/script_context.hpp"

namespace snd::debug {

// The script text a command receives as its argument.
class Text {
public:
  const char* c_str() const;
};

// Every sound command registered to the scripts opens a block once it ran.
inline void openBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}
