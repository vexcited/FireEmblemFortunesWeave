#pragma once

#include "rtld/module.hpp"

namespace fw::rtld {

uintptr_t BindJumpSlot(Module* module, uint32_t index);

}
