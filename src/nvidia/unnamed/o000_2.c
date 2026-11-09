#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_102e00(_QWORD);
__int64 CudaDriverRoutine_103e40(__int64, __int64, _QWORD*, __int64, char,
                                 __int64*);
__int64 CudaDriverRoutine_104720(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);

__int64 CudaDriverHr_104cd0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7;
  __int64 v8;
  __int64 result;
  _QWORD v11[3];
  int64x2_t v12;
  int v13;
  __int64 v14[6];
  char v15;

  if (a3 == 0) {
    return 0;
  }
  v7 = CudaDriverRoutine_102e00(a2);
  v11[2] = a3;
  v8 = *(_QWORD*)(a1 + 96);
  v11[0] = v7;
  v13 = 1;
  v11[1] = 0x100000000LL;
  v12 = vdupq_n_s64(1u);
  result = CudaDriverRoutine_103e40(a1, 0, v11, v8, a4, v14);
  if (v15 == 0 && (_DWORD)result == 0) {
    return CudaDriverRoutine_104720(a1, v11, v8, a4, v14, 0);
  }
  return result;
}

#pragma GCC visibility pop
