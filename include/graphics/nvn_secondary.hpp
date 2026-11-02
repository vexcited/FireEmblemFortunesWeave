#pragma once

#include "graphics/nvn_dispatch.hpp"

namespace fw::graphics::nvn::secondary {

extern Procedure g_procedures[static_cast<size_t>(Entry::Count)];

Procedure LoadProcedures(void* device, Resolver resolver);

}
