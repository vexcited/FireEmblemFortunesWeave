#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134740[19];
extern __int64* snd_g_memory_ptr[2];
__int64 FxMS_Destructor(_QWORD* a1);
void FxMS_Unknown5_alt1(__int64 a1, __int64 a2,
                        int* a3) __asm__("FxMS_Unknown5");
__int64 snd_coef_BiQuadCoef_BiQuadCoef(void);
extern __int64 GameData_2134748[18];
__int64 FxMS_16d650(_QWORD* a1);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
__int64 FxMS_Unknown5(__int64 result, __int64 a2, int* a3);

__int64 FxMS_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134740[0];
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

__int64 FxMS_Unknown5(__int64 result, __int64 a2, int* a3)
{
  __int64 v3;
  __int64 v4;
  float v6;
  int v7;
  int v8;
  int v9;
  int v11;
  float v12;
  float v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float* v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  float v38;
  float v39;
  int v40;
  float v41;
  int v42;
  float v43;
  int v44;
  float* v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float* v50;
  float v51;
  float v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  float v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  float v62;
  float v63;
  int v64;
  float v65;
  int v66;
  float v67;
  int v68;
  __int64 v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float* v75;
  float v76;
  float v77;
  float v78;
  __int64 v79;
  float v80;
  __int64 v81;
  float v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  int v87;
  float v88;
  float v89;
  int v90;
  float v91;
  int v92;
  float v93;
  int v94;
  float* v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float* v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  float v105;
  __int64 v106;
  float v107;
  __int64 v108;
  __int64 v109;
  int v110;
  int v111;
  int v112;
  float v113;
  int v114;
  float v115;
  int v116;
  int v117;

  if (a3[3] >= 2) {
    v3 = result;
    if ((*(_BYTE*)(result + 120) & 1) == 0) {
      v4 = *(_QWORD*)(result + 104);
      v6 = *(float*)(result + 112) +
           (float)(PSEUDO_UNFUSED(
               (float)(*(float*)(result + 116) - *(float*)(result + 112)) *
               0x1.0000000000000p-5f));
      *(float*)(result + 112) = v6;
      *(float*)(*(_QWORD*)(v4 + 8) + 204LL) = v6;
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 104) + 16LL) + 204LL) =
          *(_DWORD*)(result + 112);
      v7 = a3[4];
      v8 = a3[3] * *a3;
      v9 = v7 / v8;
      if (v7 % v8 != 0) {
        nn_diag_detail_AbortImpl_1a0a590_alt1();
      }
      if (v9 > a3[2]) {
        nn_diag_detail_AbortImpl_1a0a590_alt1();
      }
      if (v9 >= 1) {
        v11 = 0;
        v117 = v7 / v8;
        do {
          v14 = *a3;
          v15 = a3[3];
          v16 = 2 * (int)v14;
          v17 = 3 * (int)v14;
          v18 = *(_QWORD*)(v3 + 104);
          v19 = *(_QWORD*)(v18 + 8);
          v20 = *(float*)(v19 + 204);
          if (v20 != 0x0.0p+0f && *(_DWORD*)(v19 + 124) != 0) {
            v21 = *(float*)(v19 + 28);
            v22 = *(float*)(v19 + 32);
            v23 = *(float*)(v19 + 36);
            v24 = *(float*)(v19 + 40);
            nn_os_LockMutex_alt1(v3 + 128);
            v25 = *(float**)(*(_QWORD*)(v3 + 104) + 8LL);
            nn_os_UnlockMutex_alt1(v3 + 128);
            if (*a3 < 1) {
              v39 = v24;
              v38 = v22;
            }
            else {
              v26 = v25[4];
              v27 = v25[5];
              v28 = v25[6];
              v29 = 0;
              v30 = -v25[2];
              v31 = 4LL * v15 * (int)v14 * v11;
              v32 = -v25[3];
              v33 = v31 + 4 * v14;
              v34 = a2 + v31;
              v35 = a2 + v33;
              do {
                v36 = *(_DWORD*)(v34 + 4 * v29);
                v37 = *(_DWORD*)(v35 + 4 * v29);
                v38 = v21;
                v39 = v23;
                v40 = v37 + v36;
                v41 = v27 * v21;
                v42 = v36 - v37;
                v21 = (float)v40;
                v43 = (float)(v41 + (float)(v26 * (float)v40)) +
                      (float)(v28 * v22);
                v22 = v38;
                v23 = (float)(v43 + (float)(v30 * v23)) + (float)(v32 * v24);
                v24 = v39;
                v44 =
                    (int)(float)((float)(PSEUDO_UNFUSED(v20 * v23)) +
                                 (float)((float)v40 *
                                         (float)(0x1.0000000000000p+0f - v20)));
                *(_DWORD*)(v34 + 4 * v29) = (v42 + v44) / 2;
                *(_DWORD*)(v35 + 4 * v29++) = (v44 - v42) / 2;
              } while (v29 < *a3);
            }
            *(float*)(v19 + 28) = v21;
            *(float*)(v19 + 32) = v38;
            *(float*)(v19 + 36) = v23;
            *(float*)(v19 + 40) = v39;
            v45 = *(float**)(*(_QWORD*)(v3 + 104) + 8LL);
            v46 = v45[11];
            v47 = v45[12];
            v48 = v45[13];
            v49 = v45[14];
            nn_os_LockMutex_alt1(v3 + 128);
            v50 = *(float**)(*(_QWORD*)(v3 + 104) + 8LL);
            result = nn_os_UnlockMutex_alt1(v3 + 128);
            if (*a3 < 1) {
              v63 = v49;
              v62 = v47;
            }
            else {
              v51 = v50[4];
              v52 = v50[5];
              v53 = v50[6];
              v54 = 0;
              v55 = -v50[2];
              v56 = 4LL * v15 * (int)v14 * v11;
              v57 = -v50[3];
              v58 = a2 + v56 + 4 * v17;
              v59 = a2 + v56 + 4 * v16;
              do {
                v60 = *(_DWORD*)(v59 + 4 * v54);
                v61 = *(_DWORD*)(v58 + 4 * v54);
                v62 = v46;
                v63 = v48;
                v64 = v61 + v60;
                v65 = v52 * v46;
                v66 = v60 - v61;
                v46 = (float)v64;
                v67 = (float)(v65 + (float)(v51 * (float)v64)) +
                      (float)(v53 * v47);
                v47 = v62;
                v48 = (float)(v67 + (float)(v55 * v48)) + (float)(v57 * v49);
                v49 = v63;
                v68 =
                    (int)(float)((float)(PSEUDO_UNFUSED(v20 * v48)) +
                                 (float)((float)v64 *
                                         (float)(0x1.0000000000000p+0f - v20)));
                *(_DWORD*)(v59 + 4 * v54) = (v66 + v68) / 2;
                *(_DWORD*)(v58 + 4 * v54++) = (v68 - v66) / 2;
              } while (v54 < *a3);
            }
            v45[11] = v46;
            v45[12] = v62;
            v45[13] = v48;
            v45[14] = v63;
            v9 = v117;
            v18 = *(_QWORD*)(v3 + 104);
          }
          v69 = *(_QWORD*)(v18 + 16);
          v70 = *(float*)(v69 + 204);
          if (v70 != 0x0.0p+0f && *(_DWORD*)(v69 + 124) != 0) {
            v71 = *(float*)(v69 + 28);
            v72 = *(float*)(v69 + 32);
            v73 = *(float*)(v69 + 36);
            v74 = *(float*)(v69 + 40);
            nn_os_LockMutex_alt1(v3 + 128);
            v75 = *(float**)(*(_QWORD*)(v3 + 104) + 16LL);
            nn_os_UnlockMutex_alt1(v3 + 128);
            if (*a3 < 1) {
              v89 = v74;
              v88 = v72;
            }
            else {
              v76 = v75[4];
              v77 = v75[5];
              v78 = v75[6];
              v79 = 0;
              v80 = -v75[2];
              v81 = 4LL * v15 * (int)v14 * v11;
              v82 = -v75[3];
              v83 = v81 + 4 * v14;
              v84 = a2 + v81;
              v85 = a2 + v83;
              do {
                v86 = *(_DWORD*)(v84 + 4 * v79);
                v87 = *(_DWORD*)(v85 + 4 * v79);
                v88 = v71;
                v89 = v73;
                v90 = v87 + v86;
                v91 = v77 * v71;
                v92 = v86 - v87;
                v71 = (float)v90;
                v93 = (float)(v91 + (float)(v76 * (float)v90)) +
                      (float)(v78 * v72);
                v72 = v88;
                v73 = (float)(v93 + (float)(v80 * v73)) + (float)(v82 * v74);
                v74 = v89;
                v94 =
                    (int)(float)((float)(PSEUDO_UNFUSED(v70 * v73)) +
                                 (float)((float)v90 *
                                         (float)(0x1.0000000000000p+0f - v70)));
                *(_DWORD*)(v84 + 4 * v79) = (v92 + v94) / 2;
                *(_DWORD*)(v85 + 4 * v79++) = (v94 - v92) / 2;
              } while (v79 < *a3);
            }
            *(float*)(v69 + 28) = v71;
            *(float*)(v69 + 32) = v88;
            *(float*)(v69 + 36) = v73;
            *(float*)(v69 + 40) = v89;
            v95 = *(float**)(*(_QWORD*)(v3 + 104) + 16LL);
            v96 = v95[11];
            v97 = v95[12];
            v98 = v95[13];
            v99 = v95[14];
            nn_os_LockMutex_alt1(v3 + 128);
            v100 = *(float**)(*(_QWORD*)(v3 + 104) + 16LL);
            result = nn_os_UnlockMutex_alt1(v3 + 128);
            if (*a3 < 1) {
              v12 = v99;
              v13 = v97;
            }
            else {
              v101 = v100[4];
              v102 = v100[5];
              v103 = v100[6];
              v104 = 0;
              v105 = -v100[2];
              v106 = 4LL * v15 * (int)v14 * v11;
              v107 = -v100[3];
              v108 = a2 + v106 + 4 * v17;
              v109 = a2 + v106 + 4 * v16;
              do {
                v110 = *(_DWORD*)(v109 + 4 * v104);
                v111 = *(_DWORD*)(v108 + 4 * v104);
                v13 = v96;
                v12 = v98;
                v112 = v111 + v110;
                v113 = v102 * v96;
                v114 = v110 - v111;
                v96 = (float)v112;
                v115 = (float)(v113 + (float)(v101 * (float)v112)) +
                       (float)(v103 * v97);
                v97 = v13;
                v98 = (float)(v115 + (float)(v105 * v98)) + (float)(v107 * v99);
                v99 = v12;
                v116 =
                    (int)(float)((float)(PSEUDO_UNFUSED(v70 * v98)) +
                                 (float)((float)v112 *
                                         (float)(0x1.0000000000000p+0f - v70)));
                *(_DWORD*)(v109 + 4 * v104) = (v114 + v116) / 2;
                *(_DWORD*)(v108 + 4 * v104++) = (v116 - v114) / 2;
              } while (v104 < *a3);
            }
            v9 = v117;
            v95[11] = v96;
            v95[12] = v13;
            v95[13] = v98;
            v95[14] = v12;
          }
          ++v11;
        } while (v11 != v9);
      }
    }
  }
  return result;
}

__int64 FxMS_16d650(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  __int64 v9;
  __int64 result;

  v2 = GameData_2134748[0];
  a1[2] = 0;
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
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v8 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
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
  v9 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  *(_DWORD*)(a1[2] + 204LL) = 0;
  return result;
}

#pragma GCC visibility pop
