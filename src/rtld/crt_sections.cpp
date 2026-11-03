#include <stdint.h>

namespace fw::rtld {

uint32_t RegisterCrtSections(uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t, uintptr_t, uintptr_t, uintptr_t,
                             uintptr_t) {
  return 2;
}

void InitializeCrtRuntime() {
}

}
