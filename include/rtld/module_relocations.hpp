#pragma once

#include "rtld/module.hpp"

namespace fw::rtld {

using RelocationError = void (*)(const char* message);

Module* RelocateModule(Module* module, RelocationError error);

}
