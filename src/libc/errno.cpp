#include "libc/errno.hpp"

#include <stdint.h>

namespace fw::libc {

int* GetThreadError() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return reinterpret_cast<int*>(tls + 0x1d8);
}

int* GetErrnoLocation() {
  return GetThreadError();
}

}
