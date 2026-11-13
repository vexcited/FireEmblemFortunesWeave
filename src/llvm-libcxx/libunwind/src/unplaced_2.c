#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int SdkData_d03174[98];
char* llvm_libcxx_libunwind_src_850960(__int64 a1, int a2);

char* llvm_libcxx_libunwind_src_850960(__int64 a1, int a2)
{
  if ((unsigned int)(a2 + 2) > 0x61) {
    return "unknown register";
  }
  else {
    return (char*)SdkData_d03174 + SdkData_d03174[a2 + 2];
  }
}

#pragma GCC visibility pop
