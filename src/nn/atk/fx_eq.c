#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16a840(_QWORD, _QWORD);
__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134708[26];
extern __int64* snd_g_memory_ptr[2];
__int64 FxEQ_Destructor(_QWORD* a1);
void FxEQ_Unknown5(__int64 a1, __int64 a2, int* a3);
__n128 FxEq_16a840(__int64 a1, char a2);

__int64 FxEQ_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134708[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 14);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

void FxEQ_Unknown5(__int64 a1, __int64 a2, int* a3)
{
  int v3;
  int v5;
  int v6;
  __int64 v8;
  int i;
  __int64 v10;
  int* v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float* v20;
  float v21;
  float v22;
  float v23;
  int v24;
  int* v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  int* v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float* v39;
  float v40;
  float v41;
  float v42;
  int v43;
  int* v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;

  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    return;
  }
  v3 = a3[4];
  v5 = a3[3] * *a3;
  v6 = v3 / v5;
  if (v3 % v5 != 0) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
    goto LABEL_29;
  }
  if (v6 > a3[2]) {
  LABEL_29:
    v48 = nn_diag_detail_AbortImpl_1a0a590(a1);
    GameRoutine_16a840(v48, v49);
    return;
  }
  if (v6 >= 1) {
    v8 = a1;
    for (i = 0; i != v6; ++i) {
      v10 = 0;
      v11 = (int*)(a2 + 4LL * *a3 * i * a3[3]);
      do {
        v14 = *(_QWORD*)(*(_QWORD*)(v8 + 104) + 8 * v10 + 8);
        v15 = *(float*)(v14 + 204);
        if (v15 != 0.0f && *(_DWORD*)(v14 + 124) != 0) {
          v16 = *(float*)(v14 + 28);
          v17 = *(float*)(v14 + 32);
          v18 = *(float*)(v14 + 36);
          v19 = *(float*)(v14 + 40);
          nn_os_LockMutex(v8 + 112);
          v20 = *(float**)(*(_QWORD*)(v8 + 104) + 8 * v10 + 8);
          nn_os_UnlockMutex(v8 + 112);
          if (*a3 < 1) {
            v12 = v19;
            v13 = v17;
          }
          else {
            v21 = v20[4];
            v22 = v20[5];
            v23 = v20[6];
            v24 = 0;
            v25 = v11;
            v26 = -v20[2];
            v27 = -v20[3];
            do {
              v13 = v16;
              v12 = v18;
              ++v24;
              v16 = (float)*v25;
              v28 = (float)((float)(v22 * v13) + (float)(v21 * v16)) +
                    (float)(v23 * v17);
              v17 = v13;
              v18 = (float)(v28 + (float)(v26 * v18)) + (float)(v27 * v19);
              v19 = v12;
              *v25++ = (int)(float)((float)(v15 * v18) +
                                    (float)(v16 * (float)(1.0f - v15)));
            } while (*a3 > (unsigned __int16)v24);
          }
          *(float*)(v14 + 28) = v16;
          *(float*)(v14 + 32) = v13;
          *(float*)(v14 + 36) = v18;
          *(float*)(v14 + 40) = v12;
        }
        ++v10;
      } while (v10 != 8);
      v29 = 0;
      v30 = &v11[*a3];
      do {
        v33 = *(_QWORD*)(*(_QWORD*)(v8 + 104) + 8 * v29 + 8);
        v34 = *(float*)(v33 + 204);
        if (v34 != 0.0f && *(_DWORD*)(v33 + 124) != 0) {
          v35 = *(float*)(v33 + 44);
          v36 = *(float*)(v33 + 48);
          v37 = *(float*)(v33 + 52);
          v38 = *(float*)(v33 + 56);
          nn_os_LockMutex(v8 + 112);
          v39 = *(float**)(*(_QWORD*)(v8 + 104) + 8 * v29 + 8);
          nn_os_UnlockMutex(v8 + 112);
          if (*a3 < 1) {
            v31 = v38;
            v32 = v36;
          }
          else {
            v40 = v39[4];
            v41 = v39[5];
            v42 = v39[6];
            v43 = 0;
            v44 = v30;
            v45 = -v39[2];
            v46 = -v39[3];
            do {
              v32 = v35;
              v31 = v37;
              ++v43;
              v35 = (float)*v44;
              v47 = (float)((float)(v41 * v32) + (float)(v40 * v35)) +
                    (float)(v42 * v36);
              v36 = v32;
              v37 = (float)(v47 + (float)(v45 * v37)) + (float)(v46 * v38);
              v38 = v31;
              *v44++ = (int)(float)((float)(v34 * v37) +
                                    (float)(v35 * (float)(1.0f - v34)));
            } while (*a3 > (unsigned __int16)v43);
          }
          *(float*)(v33 + 44) = v35;
          *(float*)(v33 + 48) = v32;
          *(float*)(v33 + 52) = v37;
          *(float*)(v33 + 56) = v31;
        }
        ++v29;
      } while (v29 != 8);
    }
  }
}

__n128 FxEq_16a840(__int64 a1, char a2)
{
  nn_os_LockMutex(a1 + 112);
  *(_BYTE*)(a1 + 144) = a2;
  return nn_os_UnlockMutex(a1 + 112);
}

#pragma GCC visibility pop
