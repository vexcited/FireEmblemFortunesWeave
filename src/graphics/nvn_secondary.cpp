#include "graphics/nvn_secondary.hpp"

namespace fw::graphics::nvn::secondary {

namespace {

constexpr const char* kNames[] = {
#define NVN_PROCEDURE(Name) "nvn" #Name,
#include "graphics/nvn_procedures.inc"
#undef NVN_PROCEDURE
};

static_assert(sizeof(kNames) / sizeof(kNames[0]) ==
  static_cast<size_t>(Entry::Count));

}

Procedure LoadProcedures(void* device, Resolver resolver) {
  Procedure result = nullptr;

  for (size_t index = 0; index < static_cast<size_t>(Entry::Count); ++index) {
    result = resolver(device, kNames[index]);
    g_procedures[index] = result;
  }

  return result;
}

}
