#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190b6a0(__int64, __int64, __int64);
__int64 strlen(_QWORD);
double* GameRoutine_191a2b0(double* result, int, __int64, char);
double* SpineBuildCallbackForCapture_Unknown2(double* result, int a2,
                                              __int64 a3, char a4);
double* SpineBuildCallbackForCapture_Unknown2(double* result, int a2,
                                              __int64 a3, char a4)
{
  double* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a3 != 0 && (a4 & 1) != 0) {
    v5 = result;
    result = GameRoutine_191a2b0(result, a2, a3, 1);
    if (a2 == 1 && *(_BYTE*)(a3 + 1040) == 1) {
      v7 = *((_QWORD*)v5 + 11);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 8);
        v9 = strlen(v8);
        return (double*)GameRoutine_190b6a0(a3, v8, v9);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
