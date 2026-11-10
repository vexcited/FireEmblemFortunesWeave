#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN SdkData_f72ea4;
extern _UNKNOWN SdkData_f76ea4;
extern void (*SdkData_ea4340)(_QWORD, __int64, __int64);
extern void (*SdkData_ea4350)(_QWORD, unsigned __int64, __int64);
void __attribute__((noreturn)) cuda_Realloc(unsigned __int64 a1, __int64 a2,
                                            __int64 a3);

void __attribute__((noreturn)) cuda_Realloc(unsigned __int64 a1, __int64 a2,
                                            __int64 a3)
{
  if (a1 != 0 && a1 >= (unsigned __int64)&SdkData_f72ea4 &&
      a1 < (unsigned __int64)&SdkData_f76ea4) {
    SdkData_ea4340(&SdkData_ea4340, a2, a3);
  }
  SdkData_ea4350(&SdkData_ea4340, a1, a2);
}

#pragma GCC visibility pop
