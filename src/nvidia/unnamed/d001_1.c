#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_114150(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1bbf50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1bc430(_QWORD, _QWORD);
__int64 CudaDriverRoutine_5f050(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_b4790(_QWORD);
__int64 CudaDriverRoutine_f7de0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_fa5c0(_QWORD);
__int64 CudaDriverRoutine_fa660(_QWORD);
__int64 CudaDriverRoutine_fcf00(_QWORD, _QWORD);
__int64 CudaDriverRoutine_fcf10(_QWORD);

__int64 CudaDriverHr_1d7600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  __int64 v19;

  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  CudaDriverRoutine_fa5c0(a4);
  v8 = CudaDriverRoutine_114150(*(_QWORD*)(a2 + 16), a2);
  v9 = CudaDriverRoutine_98340(*(_QWORD*)(a2 + 16));
  if ((unsigned __int8)CudaDriverRoutine_1bc430(v9, v8) != 0) {
    v17[0] =
        CudaDriverRoutine_5f050(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 72LL), a2, 1);
    LODWORD(v18) = 0;
  }
  v10 = CudaDriverRoutine_1bbf50(*(_QWORD*)(a1 + 8), v8, 0, v17);
  CudaDriverRoutine_fa660(a4);
  result = v10;
  if (v10 == 0) {
    v19 = 0;
    v15 = 0;
    v16 = 0;
    v13 = 0;
    v14 = 0;
    v12 = 0;
    CudaDriverRoutine_f7de0(&v19, &v15, &v16, a3);
    CudaDriverRoutine_f7de0(&v14, &v12, &v13, a3 + 200);
    if (*(_QWORD*)(a3 + 408) == 1 && *(_QWORD*)(a3 + 416) == 1) {
      CudaDriverRoutine_fcf00(a4, a3);
      CudaDriverRoutine_fcf10(a4);
      return CudaDriverRoutine_b4790(0);
    }
    else {
      return 801;
    }
  }
  return result;
}

#pragma GCC visibility pop
