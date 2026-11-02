#pragma once

#include <stddef.h>

namespace fw::graphics::nvn {

using Procedure = void (*)();
using Resolver = Procedure (*)(void* device, const char* name);

enum class Entry : size_t {
#define NVN_PROCEDURE(Name) Name,
#include "graphics/nvn_procedures.inc"
#undef NVN_PROCEDURE
  Count
};

extern Procedure g_procedures[static_cast<size_t>(Entry::Count)];

Procedure LoadProcedures(void* device, Resolver resolver);

}
