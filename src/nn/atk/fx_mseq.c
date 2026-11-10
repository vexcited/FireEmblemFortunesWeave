#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134758[16];
extern __int64* snd_g_memory_ptr[2];
__int64 FxMSEQ_Destructor(_QWORD* a1);
void FxMSEQ_Unknown5(__int64 a1, __int64 a2, int* a3);
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_2134760[15];
__int64 FxMSEQ_16e750(_QWORD* a1);

__int64 FxMSEQ_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134758[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 16);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

void FxMSEQ_Unknown5(__int64 a1, __int64 a2, int* a3)
{
  __int64 v3;
  __int64 v4;
  float v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float* v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  int v34;
  int v35;
  float v36;
  float v37;
  int v38;
  float v39;
  int v40;
  float v41;
  int v42;
  float* v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float* v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  int v55;
  int v56;
  int v57;
  float v58;
  int v59;
  float v60;
  int v61;
  int v62;

  if (a3[3] < 2) {
    return;
  }
  v3 = a1;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    return;
  }
  v4 = *(_QWORD*)(a1 + 104);
  v6 = *(float*)(a1 + 112) +
       (float)((float)(*(float*)(a1 + 116) - *(float*)(a1 + 112)) * 0.03125f);
  *(float*)(a1 + 112) = v6;
  *(float*)(*(_QWORD*)(v4 + 8) + 204LL) = v6;
  v7 = *(_DWORD*)(a1 + 112);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL) + 204LL) = v7;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL) + 204LL) = v7;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 32LL) + 204LL) =
      *(_DWORD*)(a1 + 112);
  v8 = a3[4];
  v9 = a3[3] * *a3;
  v10 = v8 / v9;
  if (v8 % v9 != 0) {
    a1 = nn_diag_detail_AbortImpl_1a0a590(a1);
  LABEL_25:
    nn_diag_detail_AbortImpl_1a0a590(a1);
    __udf(0);
  }
  if (v10 > a3[2]) {
    goto LABEL_25;
  }
  if (v10 >= 1) {
    v11 = 0;
    v62 = v8 / v9;
    do {
      v12 = *a3;
      v13 = 0;
      v14 = 4LL * a3[3] * (int)v12 * v11;
      v15 = a2 + v14;
      v16 = a2 + v14 + 4 * v12;
      v17 = a2 + v14 + 12LL * (_DWORD)v12;
      v18 = a2 + v14 + 8LL * (_DWORD)v12;
      do {
        v21 = *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v13 + 8);
        v22 = *(float*)(v21 + 204);
        if (v22 != 0.0f && *(_DWORD*)(v21 + 124) != 0) {
          v23 = *(float*)(v21 + 28);
          v24 = *(float*)(v21 + 32);
          v25 = *(float*)(v21 + 36);
          v26 = *(float*)(v21 + 40);
          nn_os_LockMutex(v3 + 128);
          v27 = *(float**)(*(_QWORD*)(v3 + 104) + 8 * v13 + 8);
          nn_os_UnlockMutex(v3 + 128);
          if (*a3 < 1) {
            v37 = v26;
            v36 = v24;
          }
          else {
            v28 = v27[4];
            v29 = v27[5];
            v30 = v27[6];
            v31 = 0;
            v32 = -v27[2];
            v33 = -v27[3];
            do {
              v34 = *(_DWORD*)(v15 + 4 * v31);
              v35 = *(_DWORD*)(v16 + 4 * v31);
              v36 = v23;
              v37 = v25;
              v38 = v35 + v34;
              v39 = v29 * v23;
              v40 = v34 - v35;
              v23 = (float)v38;
              v41 =
                  (float)(v39 + (float)(v28 * (float)v38)) + (float)(v30 * v24);
              v24 = v36;
              v25 = (float)(v41 + (float)(v32 * v25)) + (float)(v33 * v26);
              v26 = v37;
              v42 = (int)(float)((float)(v22 * v25) +
                                 (float)((float)v38 * (float)(1.0f - v22)));
              *(_DWORD*)(v15 + 4 * v31) = (v40 + v42) / 2;
              *(_DWORD*)(v16 + 4 * v31++) = (v42 - v40) / 2;
            } while (v31 < *a3);
          }
          *(float*)(v21 + 28) = v23;
          *(float*)(v21 + 32) = v36;
          *(float*)(v21 + 36) = v25;
          *(float*)(v21 + 40) = v37;
          v43 = *(float**)(*(_QWORD*)(v3 + 104) + 8 * v13 + 8);
          v44 = v43[11];
          v45 = v43[12];
          v46 = v43[13];
          v47 = v43[14];
          nn_os_LockMutex(v3 + 128);
          v48 = *(float**)(*(_QWORD*)(v3 + 104) + 8 * v13 + 8);
          nn_os_UnlockMutex(v3 + 128);
          if (*a3 < 1) {
            v19 = v47;
            v20 = v45;
          }
          else {
            v49 = v48[4];
            v50 = v48[5];
            v51 = v48[6];
            v52 = 0;
            v53 = -v48[2];
            v54 = -v48[3];
            do {
              v55 = *(_DWORD*)(v18 + 4 * v52);
              v56 = *(_DWORD*)(v17 + 4 * v52);
              v20 = v44;
              v19 = v46;
              v57 = v56 + v55;
              v58 = v50 * v44;
              v59 = v55 - v56;
              v44 = (float)v57;
              v60 =
                  (float)(v58 + (float)(v49 * (float)v57)) + (float)(v51 * v45);
              v45 = v20;
              v46 = (float)(v60 + (float)(v53 * v46)) + (float)(v54 * v47);
              v47 = v19;
              v61 = (int)(float)((float)(v22 * v46) +
                                 (float)((float)v57 * (float)(1.0f - v22)));
              *(_DWORD*)(v18 + 4 * v52) = (v59 + v61) / 2;
              *(_DWORD*)(v17 + 4 * v52++) = (v61 - v59) / 2;
            } while (v52 < *a3);
          }
          v43[11] = v44;
          v43[12] = v20;
          v43[13] = v46;
          v43[14] = v19;
        }
        ++v13;
      } while (v13 != 4);
      ++v11;
    } while (v11 != v62);
  }
}

__int64 FxMSEQ_16e750(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  void (***v9)(_QWORD);
  __int64 v10;
  void (***v11)(_QWORD);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 vars0;
  __int64 _8;
  __int64 vars10;
  __int64 _18;

  v2 = GameData_2134760[0];
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  *a1 = v2 + 16;
  a1[1] = 0;
  v3 = snd_g_memory_ptr[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v5 = (void (***)(_QWORD))a1[1];
  a1[1] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v7 = (void (***)(_QWORD))a1[2];
  a1[2] = v6;
  if (v7 != nullptr) {
    (**v7)(v7);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v9 = (void (***)(_QWORD))a1[3];
  a1[3] = v8;
  if (v9 != nullptr) {
    (**v9)(v9);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef();
  v11 = (void (***)(_QWORD))a1[4];
  a1[4] = v10;
  if (v11 != nullptr) {
    (**v11)(v11);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v11);
  }
  vars10 = vars0;
  _18 = _8;
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v12 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  *(_DWORD*)(a1[1] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  v13 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  *(_DWORD*)(a1[2] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[3] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 192LL) + 8LL) = -17536;
  v14 = *(_QWORD*)(a1[3] + 8LL * *(unsigned int*)(a1[3] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  *(_DWORD*)(a1[3] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[4] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 192LL) + 8LL) = -17536;
  v15 = *(_QWORD*)(a1[4] + 8LL * *(unsigned int*)(a1[4] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  *(_DWORD*)(a1[4] + 204LL) = 0;
  return result;
}

#pragma GCC visibility pop
