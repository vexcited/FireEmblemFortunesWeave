#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_21347a0[7];
extern __int64* snd_g_memory_ptr[2];
__int64 FxSurround_Destructor(_QWORD* a1);
__int64 FxSurround_Unknown5(__int64 result, __int64 a2, int* a3);

__int64 FxSurround_Destructor(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_21347a0[0];
  v3 = (void (***)(_QWORD))a1[3095];
  a1[3095] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  nn_os_FinalizeMutex(a1 + 3096);
  v5 = (void (***)(_QWORD))a1[3095];
  a1[3095] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 FxSurround_Unknown5(__int64 result, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int* v7;
  _DWORD* v8;
  int v11;
  _DWORD* v12;
  int v13;
  int v14;
  int v15;
  int* v16;
  __int64 v17;
  int v18;
  _DWORD* v19;
  _DWORD* v20;
  _DWORD* v21;
  _DWORD* v22;
  _DWORD* v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  __int64 v64;
  __int64 v65;
  float* v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  int v86;
  int v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  int v97;
  __int64 v98;
  float* v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  __int64 v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;

  v3 = a3[3];
  if ((v3 | 2) != 6) {
    return result;
  }
  v4 = a3[4];
  v5 = *a3 * v3;
  v6 = v4 / v5;
  if (v4 % v5 != 0) {
    result = nn_diag_detail_AbortImpl_1a0a590(result);
  LABEL_41:
    nn_diag_detail_AbortImpl_1a0a590(result);
    __udf(0);
  }
  if (v6 > a3[2]) {
    goto LABEL_41;
  }
  if (*(_BYTE*)(result + 104) == 1) {
    v7 = (int*)(result + 24576);
    v8 = (_DWORD*)result;
    nn_os_LockMutex(result + 24768);
    v11 = v8[27];
    v12 = v8;
    v7[40] = v11;
    v7[41] = v11;
    v13 = v8[31];
    v7[42] = v13;
    v7[43] = v13;
    v14 = v8[33];
    v7[44] = v14;
    v7[45] = v14;
    if (v6 >= 1) {
      v15 = *a3;
      v16 = a3;
      if (*a3 >= 1) {
        v17 = a2;
        v18 = 0;
        v19 = v8 + 34;
        v20 = v8 + 1058;
        v21 = v8 + 4130;
        v22 = v8 + 5154;
        v23 = v8 + 2082;
        v24 = v8 + 3106;
        do {
          if (v15 >= 1) {
            v25 = v15;
            v26 = 0;
            v27 = 2 * v15;
            v28 = 3 * v15;
            v29 = 4LL * v15 * v16[3] * v18;
            v30 = v29 + 16LL * v15;
            v31 = v17 + v29;
            v32 = v17 + v29 + 20LL * v15;
            v33 = v17 + v30;
            v34 = v17 + v29 + 4 * v28;
            v35 = v17 + v29 + 4 * v25;
            v36 = v17 + v29 + 4 * v27;
            do {
              v49 = *(_DWORD*)(v36 + 4 * v26) + *(_DWORD*)(v31 + 4 * v26);
              v50 = *(_DWORD*)(v34 + 4 * v26) + *(_DWORD*)(v35 + 4 * v26);
              v51 = v50;
              v52 = *(_QWORD*)(*((_QWORD*)v12 + 3095) + 8LL);
              v53 = v49;
              if (*(_DWORD*)(v52 + 124) != 0) {
                v54 = *(float*)(v52 + 16);
                v56 = *(float*)(v52 + 24);
                v55 = *(float*)(v52 + 28);
                v57 = *(float*)(v52 + 32);
                v58 = *(float*)(v52 + 36);
                v59 = v55 * *(float*)(v52 + 20);
                v60 = *(float*)(v52 + 8);
                v61 = *(float*)(v52 + 12);
                v62 = *(float*)(v52 + 40);
                *(float*)(v52 + 28) = (float)v49;
                *(float*)(v52 + 32) = v55;
                v63 = (float)((float)((float)(v59 + (float)(v54 * (float)v49)) +
                                      (float)(v56 * v57)) -
                              (float)(v60 * v58)) -
                      (float)(v61 * v62);
                *(float*)(v52 + 36) = v63;
                *(float*)(v52 + 40) = v58;
                v53 = (int)v63;
                v64 = *((_QWORD*)v12 + 3095);
                v65 = *(_QWORD*)(v64 + 8);
                if (*(_DWORD*)(v65 + 124) != 0) {
                  v66 = *(float**)(v64 + 16);
                  v67 = *(float*)(v65 + 16);
                  v68 = *(float*)(v65 + 24);
                  v69 = *(float*)(v65 + 8);
                  v70 = *(float*)(v65 + 12);
                  v71 = v66[7];
                  v72 = v66[8];
                  v73 = v66[9];
                  v74 = v66[10];
                  v75 = v71 * *(float*)(v65 + 20);
                  v66[7] = (float)v50;
                  v66[8] = v71;
                  v76 =
                      (float)((float)((float)(v75 + (float)(v67 * (float)v50)) +
                                      (float)(v68 * v72)) -
                              (float)(v69 * v73)) -
                      (float)(v70 * v74);
                  v51 = (int)v76;
                  v66[9] = v76;
                  v66[10] = v73;
                }
                else {
                  v51 = v50;
                }
              }
              v77 = (v53 + v51) * v12[30] / 128;
              v78 = v12[29] * (v53 - v51) / 128;
              v79 = v78 + v77;
              v19[v7[34]] = (v77 - v78) * v12[28] / 128;
              v80 = v7[34];
              v81 = v7[35];
              if (v80 + 1 < v7[40]) {
                v82 = v80 + 1;
              }
              else {
                v82 = 0;
              }
              v7[34] = v82;
              v20[v81] = v12[28] * v79 / 128;
              v83 = v7[35];
              v84 = v7[34];
              v85 = v7[38];
              if (v83 + 1 < v7[41]) {
                v86 = v83 + 1;
              }
              else {
                v86 = 0;
              }
              v7[35] = v86;
              v87 = v19[v84];
              v88 = v20[v86];
              v21[v85] = v49;
              v89 = v7[38];
              v90 = v7[39];
              if (v89 + 1 < v7[44]) {
                v91 = v89 + 1;
              }
              else {
                v91 = 0;
              }
              v7[38] = v91;
              v22[v90] = v50;
              v92 = v7[39];
              v93 = v7[38];
              v94 = *((_QWORD*)v12 + 3095);
              if (v92 + 1 < v7[45]) {
                v95 = v92 + 1;
              }
              else {
                v95 = 0;
              }
              v7[39] = v95;
              v96 = v21[v93];
              v97 = v22[v95];
              v98 = *(_QWORD*)(v94 + 16);
              if (*(_DWORD*)(v98 + 124) != 0) {
                v99 = *(float**)(v94 + 8);
                v100 = *(float*)(v98 + 16);
                v101 = *(float*)(v98 + 24);
                v102 = *(float*)(v98 + 8);
                v103 = *(float*)(v98 + 12);
                v104 = v99[11];
                v105 = v99[12];
                v106 = v99[13];
                v107 = v99[14];
                v108 = v104 * *(float*)(v98 + 20);
                v99[11] = (float)v96;
                v99[12] = v104;
                v109 =
                    (float)((float)((float)(v108 + (float)(v100 * (float)v96)) +
                                    (float)(v101 * v105)) -
                            (float)(v102 * v106)) -
                    (float)(v103 * v107);
                v99[13] = v109;
                v99[14] = v106;
                v96 = (int)v109;
                v110 = *(_QWORD*)(*((_QWORD*)v12 + 3095) + 16LL);
                if (*(_DWORD*)(v110 + 124) != 0) {
                  v111 = *(float*)(v110 + 44);
                  v112 = *(float*)(v110 + 48);
                  v113 = *(float*)(v110 + 16);
                  v114 = *(float*)(v110 + 24);
                  v115 = v111 * *(float*)(v110 + 20);
                  v116 = *(float*)(v110 + 52);
                  v117 = *(float*)(v110 + 56);
                  v118 = *(float*)(v110 + 8);
                  v119 = *(float*)(v110 + 12);
                  *(float*)(v110 + 44) = (float)v97;
                  *(float*)(v110 + 48) = v111;
                  v120 = (float)((float)((float)(v115 +
                                                 (float)(v113 * (float)v97)) +
                                         (float)(v114 * v112)) -
                                 (float)(v118 * v116)) -
                         (float)(v119 * v117);
                  v97 = (int)v120;
                  *(float*)(v110 + 52) = v120;
                  *(float*)(v110 + 56) = v116;
                }
              }
              v37 = v87 + v49;
              v38 = (v96 + v97) * v12[29] / 128;
              v39 = v12[30] * (v96 - v97) / 128;
              v40 = v39 + v38;
              v41 = v38 - v39;
              v23[v7[36]] = v40 * v12[32] / 128;
              v42 = v7[36];
              v43 = v7[37];
              if (v42 + 1 < v7[42]) {
                v44 = v42 + 1;
              }
              else {
                v44 = 0;
              }
              v7[36] = v44;
              v24[v43] = v12[32] * v41 / 128;
              v45 = v7[37];
              v46 = v7[36];
              if (v45 + 1 < v7[43]) {
                v47 = v45 + 1;
              }
              else {
                v47 = 0;
              }
              v7[37] = v47;
              v48 = v24[v47];
              *(_DWORD*)(v31 + 4 * v26) = v37 + v23[v46];
              *(_DWORD*)(v35 + 4 * v26) = v88 + v50 + v48;
              *(_DWORD*)(v36 + 4 * v26) = 0;
              *(_DWORD*)(v34 + 4 * v26) = 0;
              *(_DWORD*)(v33 + 4 * v26) = 0;
              *(_DWORD*)(v32 + 4 * v26++) = 0;
            } while (v26 < *v16);
            v15 = *v16;
          }
          ++v18;
        } while (v18 != v6);
      }
    }
    return nn_os_UnlockMutex(v12 + 6192);
  }
  return result;
}

#pragma GCC visibility pop
