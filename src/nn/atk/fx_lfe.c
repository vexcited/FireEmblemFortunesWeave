#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_176350(_QWORD);
__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134730[21];
extern __int64* snd_g_memory_ptr[2];
__int64 FxLFE_Destructor(_QWORD* a1);
float* FxLFE_Unknown5(float* result, __int64 a2, int* a3);
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_2134738[20];
__int64 FxLFE_176350(_QWORD* a1);

__int64 FxLFE_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134730[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 17);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

float* FxLFE_Unknown5(float* result, __int64 a2, int* a3)
{
  float v3;
  float v4;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;
  int v14;
  int v15;
  int i;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  int v24;
  float* v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float v44;
  float v45;
  __int64 v46;

  if (a3[3] != 6) {
    return result;
  }
  v4 = result[28];
  v3 = result[29];
  v6 = result;
  v7 = (float)(v3 - v4) * 0.5;
  v8 = v4 + v7;
  if (fabsf(v7) >= 0.1) {
    v3 = v8;
  }
  result[28] = v3;
  v10 = result[30];
  v9 = result[31];
  v11 = (float)(v9 - v10) * 0.5;
  v12 = v10 + v11;
  if (fabsf(v11) >= 0.1) {
    v9 = v12;
  }
  result[30] = v9;
  v13 = a3[4];
  v14 = a3[3] * *a3;
  v15 = v13 / v14;
  if (v13 % v14 != 0) {
    result = (float*)nn_diag_detail_AbortImpl_1a0a590(result);
  }
  else if (v15 <= a3[2]) {
    if (v15 >= 1) {
      for (i = 0; i != v15; ++i) {
        v18 = *(_QWORD*)(*((_QWORD*)v6 + 13) + 8LL);
        if (*(_DWORD*)(v18 + 124) != 0) {
          v20 = *(float*)(v18 + 28);
          v19 = *(float*)(v18 + 32);
          v22 = *(float*)(v18 + 36);
          v21 = *(float*)(v18 + 40);
          v23 = *a3;
          v24 = a3[3];
          nn_os_LockMutex(v6 + 34);
          v25 = *(float**)(*((_QWORD*)v6 + 13) + 8LL);
          result = (float*)nn_os_UnlockMutex(v6 + 34);
          if (*a3 >= 1) {
            v26 = v25[4];
            v27 = v25[5];
            v28 = v25[6];
            v29 = 0;
            v30 = 4LL * v24 * (int)v23 * i;
            v31 = -v25[2];
            v32 = -v25[3];
            v33 = v30 + 20LL * (_DWORD)v23;
            v34 = v30 + 16LL * (_DWORD)v23;
            v35 = v30 + 12LL * (_DWORD)v23;
            v36 = v30 + 8LL * (_DWORD)v23;
            v37 = v30 + 4 * v23;
            v38 = a2 + v30;
            v39 = a2 + v33;
            v40 = a2 + v34;
            v41 = a2 + v35;
            v42 = a2 + v36;
            v43 = a2 + v37;
            do {
              v44 = v19;
              v19 = v20;
              v45 = v21;
              v21 = v22;
              v20 = (float)((*(_DWORD*)(v43 + 4 * v29) +
                             *(_DWORD*)(v38 + 4 * v29) +
                             *(_DWORD*)(v42 + 4 * v29) +
                             *(_DWORD*)(v41 + 4 * v29)) /
                            2);
              *(_DWORD*)(v40 + 4 * v29) += (int)(float)(v6[30] * v20);
              v22 = (float)((float)((float)((float)(v27 * v19) +
                                            (float)(v26 * v20)) +
                                    (float)(v28 * v44)) +
                            (float)(v31 * v22)) +
                    (float)(v32 * v45);
              *(_DWORD*)(v39 + 4 * v29) = (int)(float)(v6[28] * v22);
              if (*((_BYTE*)v6 + 128) == 1) {
                *(_DWORD*)(v38 + 4 * v29) = 0;
                *(_DWORD*)(v43 + 4 * v29) = 0;
                *(_DWORD*)(v42 + 4 * v29) = 0;
                *(_DWORD*)(v41 + 4 * v29) = 0;
              }
              ++v29;
            } while (v29 < *a3);
          }
          *(float*)(v18 + 28) = v20;
          *(float*)(v18 + 32) = v19;
          *(float*)(v18 + 36) = v22;
          *(float*)(v18 + 40) = v21;
        }
      }
    }
    return result;
  }
  v46 = nn_diag_detail_AbortImpl_1a0a590(result);
  return (float*)GameRoutine_176350(v46);
}

__int64 FxLFE_176350(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  void (***v4)(_QWORD);
  __int64 v5;

  *a1 = GameData_2134738[0] + 16;
  a1[1] = 0;
  v2 = snd_g_memory_ptr[0];
  v3 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v4 = (void (***)(_QWORD))a1[1];
  a1[1] = v3;
  if (v4 != nullptr) {
    (**v4)(v4);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v2 + 24LL))(*v2, v4);
    v3 = a1[1];
  }
  *(_WORD*)(*(_QWORD*)(v3 + 128) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v5 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
}

#pragma GCC visibility pop
