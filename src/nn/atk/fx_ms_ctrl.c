#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1678f0(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
extern __int64 (*GameData_1f6b708[])();
extern __int64 (*GameData_1f6bb70[])();
extern __int64 (*snd_fx_FxMSEQ_vtable[])();
float log10f(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 FxMSCtrl_Unknown5(__int64 result, __int64 a2, int* a3);

__int64 FxMSCtrl_Unknown5(__int64 result, __int64 a2, int* a3)
{
  int v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  _DWORD* v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  float v27;
  int v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v3 = a3[3];
  if (v3 < 2) {
    return result;
  }
  v4 = *a3;
  v5 = a3[4];
  v6 = v4 * v3;
  v7 = (unsigned int)(v5 / ((int)v4 * v3));
  if (v5 % ((int)v4 * v3) != 0) {
    result = nn_diag_detail_AbortImpl_1a0a590(result);
  }
  else if ((int)v7 <= a3[2]) {
    if ((int)v7 < 1 || (int)v4 < 1) {
      goto LABEL_21;
    }
    v8 = v3 * v4;
    v9 = 0;
    v10 = 0;
    LODWORD(v11) = 0;
    v12 = 1;
    v13 = a2 + 4 * v4 + 16;
    do {
      LODWORD(v11) =
          v11 +
          (int)fabsf((float)(*(_DWORD*)(a2 + 4LL * v6 * (int)v10 + 4 * v4) +
                             *(_DWORD*)(a2 + 4LL * v6 * (int)v10)));
      v14 = (unsigned int)((int)v11 / 2);
      if ((v12 & 1) != 0) {
        v11 = (unsigned int)v11;
      }
      else {
        v11 = (unsigned int)v14;
      }
      if ((_DWORD)v4 != 1) {
        v15 = 4LL * v9;
        if ((unsigned int)(v4 - 2) >= 7) {
          v16 = (int*)(a2 + 32 + v15);
          v17 = (_DWORD*)(v13 + v15);
          v14 = 1;
          v18 = (v4 - 1) & 0xFFFFFFFFFFFFFFF8LL;
          do {
            v14 += 8;
            v18 -= 8LL;
            v19 =
                (int)fabsf((float)(v17[2] + *(v16 - 2))) +
                ((int)fabsf((float)(v17[1] + *(v16 - 3))) +
                 ((int)fabsf((float)(*v17 + *(v16 - 4))) +
                  ((int)fabsf((float)(*(v17 - 1) + *(v16 - 5))) +
                   ((int)fabsf((float)(*(v17 - 2) + *(v16 - 6))) +
                    ((int)v11 + (int)fabsf((float)(*(v17 - 3) + *(v16 - 7)))) /
                        2) /
                       2) /
                      2) /
                     2) /
                    2;
            v20 = v17[3] + *(v16 - 1);
            v21 = v17[4];
            v17 += 8;
            v22 = *v16;
            v16 += 8;
            v11 = (unsigned int)(((int)fabsf((float)(v21 + v22)) +
                                  ((int)fabsf((float)v20) + v19 / 2) / 2) /
                                 2);
          } while (v18 != 0);
        }
        else {
          v14 = 1;
        }
        if (((v4 - 1) & 7) != 0) {
          v23 = v15 + 4 * v14;
          v14 = (v4 - 1) & 7;
          v24 = (int*)(a2 + v23);
          do {
            v25 = *v24;
            v26 = v24[v4];
            ++v24;
            --v14;
            v11 =
                (unsigned int)(((int)v11 + (int)fabsf((float)(v26 + v25))) / 2);
          } while (v14 != 0);
        }
      }
      ++v10;
      v9 += v8;
      v12 = 0;
    } while (v10 != v7);
    v27 = vcvts_n_f32_s32(v11, 0xFu);
    if (v27 == 0.0f) {
    LABEL_21:
      v28 = -100;
    }
    else {
      v29 = result;
      v30 = log10f(result, a2, v13, v11, 0, v14, fabsf(v27));
      result = v29;
      v28 = (int)(float)(v30 * 20.0f);
    }
    *(_DWORD*)(result + 104) = v28;
    return result;
  }
  v31 = nn_diag_detail_AbortImpl_1a0a590(result);
  result = GameRoutine_1678f0(v31, v32, v33);
  *(_QWORD*)v31 = snd_fx_FxMSEQ_vtable;
  *(_QWORD*)(v31 + 5592) = GameData_1f6bb70;
  *(_QWORD*)(v31 + 40) = GameData_1f6b708;
  *(_BYTE*)(v31 + 5680) = 0;
  return result;
}

#pragma GCC visibility pop
