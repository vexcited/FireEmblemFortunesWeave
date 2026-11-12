#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN MovieData_c03d0;
void* opus_custom_mode_create(int a1, int a2, int* a3);

void* opus_custom_mode_create(int a1, int a2, int* a3)
{
  void* result;
  int v4;

  if (a1 == 48000 && (a2 == 960 || (a2 & 0x7FFFFFFF) == 0x1E0 ||
                      (a2 & 0x3FFFFFFF) == 0xF0 || (a2 & 0x1FFFFFFF) == 0x78)) {
    result = &MovieData_c03d0;
    if (a3 == nullptr) {
      return result;
    }
    v4 = 0;
  }
  else {
    result = nullptr;
    if (a3 == nullptr) {
      return result;
    }
    v4 = -1;
  }
  *a3 = v4;
  return result;
}

#pragma GCC visibility pop
