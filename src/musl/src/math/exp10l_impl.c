#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_854740(long double);
__int64 __netf2(long double, long double);
__int64 modfl_plt(_QWORD);
__int64 powl_plt(_QWORD, long double, long double);
extern __int128 SdkData_bb0f50;
extern __int128 SdkData_bb32b0;
extern __int128 SdkData_bb4110;
extern long double SdkData_cddfa0[31];
long double SdkRoutine_854fd0(long double, long double);
long double exp2l_plt(long double);
long double pow10l(long double a1);

long double pow10l(long double a1)
{
  __int64 v1;
  long double v2;
  long double v3;
  int v4;
  long double result;
  long double v6;
  long double v8;
  long double v9;
  long double v10;

  v1 = modfl_plt(&v10);
  if ((*((_QWORD*)&v10 + 1) & 0x7FFF000000000000uLL) > 0x4002FFFFFFFFFFFFLL) {
    powl_plt(v1, *(long double*)&SdkData_bb32b0, a1);
  }
  else {
    v6 = v10;
    v8 = v2;
    if ((unsigned int)__netf2(v2, *(long double*)&SdkData_bb4110) != 0) {
      v3 = SdkRoutine_854fd0(v8, *(long double*)&SdkData_bb0f50);
      v9 = exp2l_plt(v3);
      v4 = SdkRoutine_854740(v10);
      return SdkRoutine_854fd0(v9, SdkData_cddfa0[v4 + 15]);
    }
    else {
      return SdkData_cddfa0[(int)SdkRoutine_854740(v6) + 15];
    }
  }
  return result;
}

#pragma GCC visibility pop
