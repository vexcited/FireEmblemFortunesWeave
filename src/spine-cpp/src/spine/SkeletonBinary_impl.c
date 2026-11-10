#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
void spine_SkeletonBinary_readFloatArray(float a1, __int64 a2, __int64 a3,
                                         int a4, _QWORD* a5);

void spine_SkeletonBinary_readFloatArray(float a1, __int64 a2, __int64 a3,
                                         int a4, _QWORD* a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  int v22;
  int v23;
  int v24;

  v6 = a5[1];
  v5 = a5[2];
  v9 = a4;
  a5[1] = a4;
  if (v5 >= a4) {
    goto LABEL_8;
  }
  v12 = a5[3];
  if ((unsigned int)(int)(float)((float)(unsigned __int64)a4 *
                                 0x1.c000000000000p+0f) <= 8) {
    v13 = 8;
  }
  else {
    v13 = (int)(float)((float)(unsigned __int64)a4 * 0x1.c000000000000p+0f);
  }
  a5[2] = v13;
  v14 = GameRoutine_19e10();
  for (a5[3] = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                               __int64))(*(_QWORD*)v14 + 32LL))(
           v14, v12, 4LL * v13,
           "/Program/Externals/Spine/include\\spine/Vector.h", 82);
       ; *(_DWORD*)(a5[3] + 4 * v6++) = 0) {
    v9 = a5[1];
  LABEL_8:
    if (v6 >= v9) {
      break;
    }
  }
  if (a1 == 0x1.0000000000000p+0f) {
    if (a4 >= 1) {
      v15 = 0;
      while (1) {
        v16 = *(unsigned __int8**)(a3 + 8);
        *(_QWORD*)(a3 + 8) = v16 + 1;
        v17 = *v16;
        *(_QWORD*)(a3 + 8) = v16 + 2;
        v18 = v16[1];
        *(_QWORD*)(a3 + 8) = v16 + 3;
        v19 = v16[2];
        *(_QWORD*)(a3 + 8) = v16 + 4;
        if (a5[1] <= v15) {
          break;
        }
        *(_DWORD*)(a5[3] + 4 * v15++) =
            v16[3] | (((v17 << 16) | (v18 << 8) | v19) << 8);
        if (a4 == v15) {
          return;
        }
      }
      goto LABEL_20;
    }
  }
  else if (a4 >= 1) {
    v20 = 0;
    while (1) {
      v21 = *(unsigned __int8**)(a3 + 8);
      *(_QWORD*)(a3 + 8) = v21 + 1;
      v22 = *v21;
      *(_QWORD*)(a3 + 8) = v21 + 2;
      v23 = v21[1];
      *(_QWORD*)(a3 + 8) = v21 + 3;
      v24 = v21[2];
      *(_QWORD*)(a3 + 8) = v21 + 4;
      if (a5[1] <= v20) {
        break;
      }
      *(float*)(a5[3] + 4 * v20++) =
          a1 * COERCE_FLOAT(v21[3] | (((v22 << 16) | (v23 << 8) | v24) << 8));
      if (a4 == v20) {
        return;
      }
    }
  LABEL_20:
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                  "operator[]");
    __udf(0);
  }
}

#pragma GCC visibility pop
