#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_207020(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_207170(_QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverStub_12e330(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
__int64 zstd_227e00(_QWORD* a1, __int64 a2);
__int64 zstd_227ee0(__int64 a1, __int64 a2, unsigned int a3);
__int64 zstd_227f60(__int64 a1);

__int64 zstd_227e00(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = 0;
  if (a1 != nullptr && a2 != 0) {
    v2 = *a1;
    v5 = strlen_plt(a2);
    v6 = a1[1];
    v7 = v5 + 1;
    v8 = v5 + 1 + v2;
    if (v8 >= v6) {
      while (((v6 >> 30) & 0x1FFFFFFFFLL) == 0) {
        v6 *= 2LL;
        if (v6 >= v8) {
          v11 = CudaDriverStub_12e330(v6);
          if (v11 != 0) {
            v9 = v11;
            memcpy_plt(v11, a1[2], *a1);
            CudaDriverRoutine_12e340(a1[2]);
            v10 = *a1;
            a1[1] = v6;
            a1[2] = v9;
            goto LABEL_9;
          }
          return 0;
        }
      }
      return 0;
    }
    else {
      v9 = a1[2];
      v10 = v2;
    LABEL_9:
      memcpy_plt(v9 + v10, a2, v7);
      *a1 += v7;
    }
  }
  return v2;
}

__int64 zstd_227ee0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v6 = CudaDriverRoutine_98340(a2);
  CudaDriverRoutine_108520(v6 + 24, 0, 0, 0);
  v7 = CudaDriverRoutine_207020(a1, a2, a3);
  v8 = CudaDriverRoutine_98340(a2);
  CudaDriverRoutine_1085d0(v8 + 24);
  return v7;
}

__int64 zstd_227f60(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 16);
  v3 = CudaDriverRoutine_98340(v1);
  CudaDriverRoutine_108520(v3 + 24, 0, 0, 0);
  CudaDriverRoutine_207170(a1);
  v4 = CudaDriverRoutine_98340(v1);
  CudaDriverRoutine_1085d0(v4 + 24);
  return 0;
}

#pragma GCC visibility pop
