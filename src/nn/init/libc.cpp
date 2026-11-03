#include <stddef.h>
#include <stdint.h>

extern "C" void* memcpy(void*, const void*, size_t);

extern "C" {
uintptr_t __stack_chk_guard;
}

namespace nn::init::detail {

void EmptyRuntimeHook() {
}

void InitializeRuntimeHooks() {
  EmptyRuntimeHook();
  EmptyRuntimeHook();
  EmptyRuntimeHook();
}

void InitializeStackGuard(const void* entropy) {
  if (entropy) {
    memcpy(&__stack_chk_guard, entropy, sizeof(__stack_chk_guard));
  }
  else {
    __stack_chk_guard = uintptr_t(&__stack_chk_guard) * 0x41c64e6d;
  }

  reinterpret_cast<unsigned char*>(&__stack_chk_guard)[1] = 0;
}

}

extern "C" __attribute__((weak)) void _init_libc0() {
}

extern "C" __attribute__((weak)) void _init_libc1() {
  nn::init::detail::InitializeRuntimeHooks();
  nn::init::detail::InitializeStackGuard(nullptr);
}

extern "C" __attribute__((weak)) void _init_libc2() {
}
