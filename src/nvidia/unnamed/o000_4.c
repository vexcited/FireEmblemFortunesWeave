#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_103e40(__int64, __int64, _QWORD*, __int64, char,
                                 __int64*);
__int64 CudaDriverRoutine_104720(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 CudaDriverRoutine_105ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, long double);
__int64 CudaDriverRoutine_105c00(_QWORD, long double);
__int64 CudaDriverRoutine_106890(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 long double);
__n128 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_1272d0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1274c0(_QWORD);
__int64 CudaDriverRoutine_1274d0(_QWORD);
__int64 CudaDriverRoutine_127670(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_1db9f0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_e37f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_ed630(__int64, __int64, const char*, ...);

__int64 CudaDriverHr_6b250(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 result;
  int v10;
  __int64 v11;
  long double v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  int v22;
  long double v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  _BYTE v27[184];
  __int64 v28;

  v28 = 0;
  v25 = 0;
  v26 = 0;
  v8 = CudaDriverRoutine_98340(a1);
  result = 1;
  if (a2 != nullptr && a3 != 0) {
    result = CudaDriverRoutine_1272d0(*(_QWORD*)(a1 + 64), a3, &v28);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(a4 + 16) = v28;
      v10 = CudaDriverRoutine_e37f0(v27, &v26);
      if (v10 != 0) {
        goto LABEL_24;
      }
      if (*(_DWORD*)a3 != 1180844977) {
        if (*(_DWORD*)a3 == 518347265) {
          v11 = v8 + 24;
          *(__n128*)&v12 = CudaDriverRoutine_108520(v8 + 24, 0, 0, 0);
          v14 =
              CudaDriverRoutine_105ae0(v8, &v25, a3, v26, v27, a4, 1, v13, v12);
        LABEL_8:
          v15 = v14;
          CudaDriverRoutine_1085d0(v11);
          v10 = v15;
        LABEL_9:
          if (v10 == 0) {
            v10 = CudaDriverRoutine_127670(v28);
            if (v10 == 0) {
              v16 = 0;
              *a2 = v25;
            LABEL_26:
              CudaDriverRoutine_1274c0(v28);
              CudaDriverRoutine_12e340(v26);
              return v16;
            }
          }
        LABEL_24:
          v16 = v10;
          if (v25 != 0) {
            CudaDriverRoutine_1274d0(v28);
            *(__n128*)&v24 = CudaDriverRoutine_108520(v8 + 24, 0, 0, 0);
            CudaDriverRoutine_105c00(v25, v24);
            CudaDriverRoutine_1085d0(v8 + 24);
          }
          goto LABEL_26;
        }
        goto LABEL_23;
      }
      v17 = v26;
      v18 = *(_QWORD*)(a3 + 8);
      if (*(int*)(a3 + 4) > 1) {
        if (v18 == 0) {
          goto LABEL_23;
        }
      }
      else {
        v19 = *(_QWORD*)(a3 + 16);
        if (v18 == 0) {
          if (v19 != 0) {
            v11 = v8 + 24;
            *(__n128*)&v23 = CudaDriverRoutine_108520(v8 + 24, 0, 0, 0);
            v14 = CudaDriverRoutine_106890(v8, *(_QWORD*)(a3 + 16), &v25, v17,
                                           v27, a4, v23);
            goto LABEL_8;
          }
        LABEL_23:
          v10 = 1;
          goto LABEL_24;
        }
        if (v19 != 0) {
          goto LABEL_23;
        }
      }
      *(__n128*)&v20 = CudaDriverRoutine_108520(v8 + 24, 0, 0, 0);
      v22 = CudaDriverRoutine_105ae0(v8, &v25, *(_QWORD*)(a3 + 8), v17, v27, a4,
                                     1, v21, v20);
      CudaDriverRoutine_1085d0(v8 + 24);
      v10 = v22;
      if (v22 == 209) {
        if (*(_DWORD*)(a3 + 4) == 2) {
          v10 = 801;
        }
        else {
          v10 = 209;
        }
        goto LABEL_24;
      }
      goto LABEL_9;
    }
  }
  return result;
}

__int64 CudaDriverHr_104d90(__int64 a1, __int64 a2, int a3, __int64 a4,
                            __int64 a5)
{
  __int64 result;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int64x2_t v15;
  int v16;
  __int64 v17[6];
  char v18;

  if (a4 == 0) {
    return 0;
  }
  if (CudaDriverRoutine_1db9f0(*(_QWORD*)(a1 + 80), a2, 4 * a4, 0) != 0) {
    v11 = a2;
    v14 = a4;
    v12 = a3;
    v13 = 4;
    v16 = 1;
    v15 = vdupq_n_s64(1u);
    result = CudaDriverRoutine_103e40(a1, 0, &v11, a5, 2, v17);
    if (v18 == 0 && (_DWORD)result == 0) {
      return CudaDriverRoutine_104720(a1, &v11, a5, 2, v17, 0);
    }
  }
  else {
    CudaDriverRoutine_ed630((__int64)"CUDA", 0,
                            "Invalid memset range - not allocated\n");
    return 1;
  }
  return result;
}

#pragma GCC visibility pop
