#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1678f0(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
extern __int64 (*GameData_1f6b708[])();
extern __int64 (*GameData_1f6bb70[])();
extern __int64 (*snd_fx_FxMSEQ_vtable[])();
float log10f(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 FxMSCtrl_Unknown5(__int64 result, __int64 a2, int* a3);
float log10f_alt1(float) __asm__("log10f");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 FxMSCtrl_Unknown5(__int64 result, __int64 a2, int* a3)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  signed int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  int* v15;
  _DWORD* v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  float v27;
  int v28;
  __int64 v29;
  float v30;

  v3 = a3[3];
  if (v3 >= 2) {
    v4 = *a3;
    v5 = a3[4];
    v6 = v4 * v3;
    v7 = (unsigned int)(v5 / ((int)v4 * v3));
    if (v5 % ((int)v4 * v3) != 0) {
      nn_diag_detail_AbortImpl_1a0a590_alt1();
    }
    if ((int)v7 > a3[2]) {
      nn_diag_detail_AbortImpl_1a0a590_alt1();
    }
    if ((int)v7 < 1 || (int)v4 < 1) {
      goto LABEL_20;
    }
    v8 = v3 * v4;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    do {
      v11 += (int)fabsf((float)(*(_DWORD*)(a2 + 4LL * v6 * (int)v10 + 4 * v4) +
                                *(_DWORD*)(a2 + 4LL * v6 * (int)v10)));
      if ((v12 & 1) == 0) {
        v11 /= 2;
      }
      if ((_DWORD)v4 != 1) {
        v13 = 4LL * v9;
        if ((unsigned int)(v4 - 2) >= 7) {
          v15 = (int*)(a2 + 32 + v13);
          v16 = (_DWORD*)(a2 + 4 * v4 + 16 + v13);
          v14 = 1;
          v17 = (v4 - 1) & 0xFFFFFFFFFFFFFFF8LL;
          do {
            v14 += 8;
            v17 -= 8LL;
            v18 =
                (int)fabsf((float)(v16[2] + *(v15 - 2))) +
                ((int)fabsf((float)(v16[1] + *(v15 - 3))) +
                 ((int)fabsf((float)(*v16 + *(v15 - 4))) +
                  ((int)fabsf((float)(*(v16 - 1) + *(v15 - 5))) +
                   ((int)fabsf((float)(*(v16 - 2) + *(v15 - 6))) +
                    (v11 + (int)fabsf((float)(*(v16 - 3) + *(v15 - 7)))) / 2) /
                       2) /
                      2) /
                     2) /
                    2;
            v19 = v16[3] + *(v15 - 1);
            v20 = v16[4];
            v16 += 8;
            v21 = *v15;
            v15 += 8;
            v11 = ((int)fabsf((float)(v20 + v21)) +
                   ((int)fabsf((float)v19) + v18 / 2) / 2) /
                  2;
          } while (v17 != 0);
        }
        else {
          v14 = 1;
        }
        if (((v4 - 1) & 7) != 0) {
          v22 = v13 + 4 * v14;
          v23 = (v4 - 1) & 7;
          v24 = (int*)(a2 + v22);
          do {
            v25 = *v24;
            v26 = v24[v4];
            ++v24;
            --v23;
            v11 = (v11 + (int)fabsf((float)(v26 + v25))) / 2;
          } while (v23 != 0);
        }
      }
      ++v10;
      v9 += v8;
      v12 = 0;
    } while (v10 != v7);
    v27 = vcvts_n_f32_s32(v11, 0xFu);
    if (v27 == 0x0.0p+0f) {
    LABEL_20:
      v28 = -100;
    }
    else {
      v29 = result;
      v30 = log10f_alt1(fabsf(v27));
      result = v29;
      v28 = (int)(float)(v30 * 0x1.4000000000000p+4f);
    }
    *(_DWORD*)(result + 104) = v28;
  }
  return result;
}

#pragma GCC visibility pop
