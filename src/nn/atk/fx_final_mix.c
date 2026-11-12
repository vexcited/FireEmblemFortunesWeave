#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173a50(_QWORD);
__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134720[23];
extern __int64* snd_g_memory_ptr[2];
__int64 FxFinalMix_Destructor(_QWORD* a1);
__int64 FxFinalMix_Unknown5(__int64 result, __int64 a2, int* a3);
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_2134728[22];
_QWORD* FxFinalMix_173a50(_QWORD* a1);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 FxFinalMix_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134720[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 15);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 FxFinalMix_Unknown5(__int64 result, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v6;
  int v7;
  __int64 v8;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  int* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  float* v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float* v25;
  float v26;
  float v27;
  float v28;
  int v29;
  int* v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float* v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float* v43;
  float v44;
  float v45;
  float v46;
  int v47;
  int* v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  __int64 v54;
  __int64 v55;
  float* v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float* v61;
  float v62;
  float v63;
  float v64;
  int v65;
  int* v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  __int64 v73;
  float* v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float* v79;
  float v80;
  float v81;
  float v82;
  int v83;
  float v84;
  float v85;
  float v86;

  if (*(_BYTE*)(result + 112) == 1) {
    v3 = a3[3];
    v4 = a3[4];
    v6 = v3 * *a3;
    v7 = v4 / v6;
    if (v4 % v6 != 0) {
      nn_diag_detail_AbortImpl_1a0a590_alt1();
    }
    if (v7 > a3[2]) {
      nn_diag_detail_AbortImpl_1a0a590_alt1();
    }
    if (v3 >= 4) {
      v8 = 4;
    }
    else {
      v8 = (unsigned int)v3;
    }
    if (v7 >= 1 && v3 >= 1) {
      v10 = result;
      v11 = 0;
      do {
        v12 = 0;
        v13 = a2 + 4LL * *a3 * v11 * a3[3];
        do {
          v16 = (int*)(v13 + 4LL * *a3 * (int)v12);
          v17 = *(_QWORD**)(v10 + 104);
          v18 = v17[1];
          if (*(_DWORD*)(v18 + 124) != 0) {
            v19 = v18 + 16 * v12;
            v21 = *(float*)(v19 + 28);
            v22 = *(float*)(v19 + 32);
            v20 = (float*)(v19 + 28);
            v24 = v20[2];
            v23 = v20[3];
            nn_os_LockMutex_alt1(v10 + 120);
            v25 = *(float**)(*(_QWORD*)(v10 + 104) + 8LL);
            result = nn_os_UnlockMutex_alt1(v10 + 120);
            if (*a3 <= 0) {
              v35 = v24;
              v33 = v22;
            }
            else {
              v26 = v25[4];
              v27 = v25[5];
              v28 = v25[6];
              v29 = 0;
              v30 = v16;
              v31 = -v25[2];
              v32 = -v25[3];
              do {
                v33 = v21;
                ++v29;
                v21 = (float)*v30;
                v34 = (float)((float)(PSEUDO_UNFUSED(v27 * v33)) +
                              (float)(v26 * v21)) +
                      (float)(v28 * v22);
                v22 = v33;
                v35 = (float)(v34 + (float)(v31 * v24)) + (float)(v32 * v23);
                v23 = v24;
                v24 = v35;
                *v30++ = (int)v35;
              } while (*a3 > (unsigned __int16)v29);
            }
            *v20 = v21;
            v20[1] = v33;
            v20[2] = v35;
            v20[3] = v23;
            v17 = *(_QWORD**)(v10 + 104);
          }
          v36 = v17[2];
          if (*(_DWORD*)(v36 + 124) != 0) {
            v37 = v36 + 16 * v12;
            v39 = *(float*)(v37 + 28);
            v40 = *(float*)(v37 + 32);
            v38 = (float*)(v37 + 28);
            v41 = v38[2];
            v42 = v38[3];
            nn_os_LockMutex_alt1(v10 + 120);
            v43 = *(float**)(*(_QWORD*)(v10 + 104) + 16LL);
            result = nn_os_UnlockMutex_alt1(v10 + 120);
            if (*a3 < 1) {
              v52 = v42;
              v51 = v40;
            }
            else {
              v44 = v43[4];
              v45 = v43[5];
              v46 = v43[6];
              v47 = 0;
              v48 = v16;
              v49 = -v43[2];
              v50 = -v43[3];
              do {
                v51 = v39;
                v52 = v41;
                ++v47;
                v39 = (float)*v48;
                v53 = (float)((float)(PSEUDO_UNFUSED(v45 * v51)) +
                              (float)(v44 * v39)) +
                      (float)(v46 * v40);
                v40 = v51;
                v41 = (float)(v53 + (float)(v49 * v41)) + (float)(v50 * v42);
                v42 = v52;
                *v48++ = (int)v41;
              } while (*a3 > (unsigned __int16)v47);
            }
            *v38 = v39;
            v38[1] = v51;
            v38[2] = v41;
            v38[3] = v52;
            v17 = *(_QWORD**)(v10 + 104);
          }
          v54 = v17[3];
          if (*(_DWORD*)(v54 + 124) != 0) {
            v55 = v54 + 16 * v12;
            v57 = *(float*)(v55 + 28);
            v58 = *(float*)(v55 + 32);
            v56 = (float*)(v55 + 28);
            v59 = v56[2];
            v60 = v56[3];
            nn_os_LockMutex_alt1(v10 + 120);
            v61 = *(float**)(*(_QWORD*)(v10 + 104) + 24LL);
            result = nn_os_UnlockMutex_alt1(v10 + 120);
            if (*a3 < 1) {
              v70 = v60;
              v69 = v58;
            }
            else {
              v62 = v61[4];
              v63 = v61[5];
              v64 = v61[6];
              v65 = 0;
              v66 = v16;
              v67 = -v61[2];
              v68 = -v61[3];
              do {
                v69 = v57;
                v70 = v59;
                ++v65;
                v57 = (float)*v66;
                v71 = (float)((float)(PSEUDO_UNFUSED(v63 * v69)) +
                              (float)(v62 * v57)) +
                      (float)(v64 * v58);
                v58 = v69;
                v59 = (float)(v71 + (float)(v67 * v59)) + (float)(v68 * v60);
                v60 = v70;
                *v66++ = (int)v59;
              } while (*a3 > (unsigned __int16)v65);
            }
            *v56 = v57;
            v56[1] = v69;
            v56[2] = v59;
            v56[3] = v70;
            v17 = *(_QWORD**)(v10 + 104);
          }
          v72 = v17[4];
          if (*(_DWORD*)(v72 + 124) != 0) {
            v73 = v72 + 16 * v12;
            v75 = *(float*)(v73 + 28);
            v76 = *(float*)(v73 + 32);
            v74 = (float*)(v73 + 28);
            v77 = v74[2];
            v78 = v74[3];
            nn_os_LockMutex_alt1(v10 + 120);
            v79 = *(float**)(*(_QWORD*)(v10 + 104) + 32LL);
            result = nn_os_UnlockMutex_alt1(v10 + 120);
            if (*a3 < 1) {
              v14 = v78;
              v15 = v76;
            }
            else {
              v80 = v79[4];
              v81 = v79[5];
              v82 = v79[6];
              v83 = 0;
              v84 = -v79[2];
              v85 = -v79[3];
              do {
                v15 = v75;
                v14 = v77;
                ++v83;
                v75 = (float)*v16;
                v86 = (float)((float)(PSEUDO_UNFUSED(v81 * v15)) +
                              (float)(v80 * v75)) +
                      (float)(v82 * v76);
                v76 = v15;
                v77 = (float)(v86 + (float)(v84 * v77)) + (float)(v85 * v78);
                v78 = v14;
                *v16++ = (int)v77;
              } while (*a3 > (unsigned __int16)v83);
            }
            *v74 = v75;
            v74[1] = v15;
            v74[2] = v77;
            v74[3] = v14;
          }
          ++v12;
        } while (v12 != v8);
        ++v11;
      } while (v11 != v7);
    }
  }
  return result;
}

_QWORD* FxFinalMix_173a50(_QWORD* a1)
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

  v2 = GameData_2134728[0];
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
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 192LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 192LL) + 8LL) = -17536;
  return a1;
}

#pragma GCC visibility pop
