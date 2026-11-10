#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 CudaDriverData_143bd80;
__int64 CudaDriverRoutine_108520(__int64);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_10ef20(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1fc5a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_8a8a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);

__int64 CudaDriverHr_10e6a0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4;
  int v6;
  _QWORD* i;
  __int64 v9;
  __int64 v10;
  _BYTE v11[4];

  v4 = a3;
  v6 = CudaDriverRoutine_1fc5a0(a2 + 184, a1, a3, v11);
  if (v6 == 0) {
    return 705;
  }
  if (v4 == 0 && v6 == 1) {
    if (*(_BYTE*)(a1 + 161) == 0) {
      for (i = *(_QWORD**)(CudaDriverData_143bd80 + 32); i != nullptr;
           i = (_QWORD*)i[31]) {
        if (*(_QWORD*)(*i + 80LL) == a2) {
          v9 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 8));
          CudaDriverRoutine_108520(v9 + 24);
          CudaDriverRoutine_8a8a0(i, *(_QWORD*)(a1 + 8));
          v10 = CudaDriverRoutine_98340(*(_QWORD*)(a1 + 8));
          CudaDriverRoutine_1085d0(v10 + 24);
        }
      }
    }
    CudaDriverRoutine_10ef20(a1, a2);
  }
  if (v11[0] != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 21056LL))(*(_QWORD*)a1,
                                                             *(_QWORD*)a2);
  }
  return 0;
}

#pragma GCC visibility pop
