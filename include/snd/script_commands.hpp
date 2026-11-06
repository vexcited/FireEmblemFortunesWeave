#pragma once

#include "angelscript/fork/add_on/as_string.h"
#include "as/script_context.hpp"

namespace snd::debug {

using Text = as::string;

// Every sound command registered to the scripts opens a block once it ran.
inline void openBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}
