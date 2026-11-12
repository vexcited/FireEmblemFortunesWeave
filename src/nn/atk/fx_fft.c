#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 GameData_2134718[24];
extern __int64* snd_g_memory_ptr[2];
__int64 FxFFT_Destructor(_QWORD* a1);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_detail_FftProcessInternalImplFloat32Complex(_QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD, _QWORD,
                                                             _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 FxFFT_Unknown5_alt1(__int64 result, __int64 a2, int* a3, __int64 a4,
                            __int64 a5, __int64 a6) __asm__("FxFFT_Unknown5");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
__int64 FxFFT_Unknown5(__int64 result, __int64 a2, int* a3);

__int64 FxFFT_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = GameData_2134718[0];
  v3 = a1[22];
  a1[22] = 0;
  *a1 = v2 + 16;
  v4 = snd_g_memory_ptr[0];
  if (v3 != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0]);
  }
  v5 = a1[21];
  a1[21] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v6 = a1[20];
  a1[20] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v7 = a1[19];
  a1[19] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v8 = a1[18];
  a1[18] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v9 = a1[14];
  a1[14] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v10 = a1[16];
  a1[16] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  if (a1[15] != 0) {
    v11 = *v4;
    a1[15] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  v12 = a1[13];
  a1[13] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  nn_os_FinalizeMutex(a1 + 23);
  v13 = a1[22];
  a1[22] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v14 = a1[21];
  a1[21] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v15 = a1[20];
  a1[20] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v16 = a1[19];
  a1[19] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v17 = a1[18];
  a1[18] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v18 = a1[16];
  a1[16] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v19 = a1[14];
  a1[14] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v20 = a1[13];
  a1[13] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return GameRoutine_2af380(a1);
}

__int64 FxFFT_Unknown5(__int64 result, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  int v11;
  int v12;
  bool v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  unsigned int v61;
  int* v62;
  __int64 v63;
  __int64 v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int* v69;
  int v70;
  int* v71;
  __int64 v72;
  __int64 v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int* v78;
  int v79;
  int v80;
  unsigned int v81;
  int v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned int v92;
  unsigned int v93;
  unsigned __int64 v94;
  int v95;
  unsigned int v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  float* v100;
  unsigned __int64 v101;
  float v102;
  float v103;
  unsigned __int64 v104;
  float v105;
  float v106;
  unsigned int v107;

  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v3 = *a3;
  v5 = a3[3];
  v4 = a3[4];
  v6 = v5 * *a3;
  v7 = v4 / v6;
  if (v4 % v6 != 0) {
    nn_diag_detail_AbortImpl_1a0a590_alt1(),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (v7 > a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590_alt1(),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v8 = *(_QWORD*)(result + 104);
  if ((v5 | 2) == 6) {
    v9 = 0;
    if (v7 >= 1 && v3 >= 1) {
      v20 = 0;
      do {
        if (v3 >= 1) {
          v21 = v3;
          v22 = 0;
          v23 = 4LL * v3 * a3[3] * v20;
          v24 = v23 + 8LL * v3;
          v25 = a2 + v23;
          v26 = a2 + v23 + 12LL * v3;
          v27 = a2 + v24;
          v28 = a2 + v23 + 4 * v21;
          do {
            v29 = *(_DWORD*)(v26 + 4 * v22);
            v30 = v9 + v22;
            v31 = *(_DWORD*)(v28 + 4 * v22) + *(_DWORD*)(v25 + 4 * v22);
            v32 = *(_DWORD*)(v27 + 4 * v22++);
            *(_DWORD*)(v8 + 4LL * v30) = ((v29 + v32) / 2 + v31 / 2) / 2;
          } while (v22 < *a3);
          v9 = (unsigned int)(v9 + v22);
          v3 = *a3;
        }
        ++v20;
      } while (v20 != v7);
    }
    if (*(_DWORD*)(result + 136) != 0) {
      v11 = *(_DWORD*)(result + 224);
      v12 = *(_DWORD*)(result + 228);
      v13 = __OFSUB__(v12, v11);
      v14 = v12 - v11;
      if (v14 < 0 != v13) {
        v14 += 0x2000;
      }
      if ((v9 + v14) >> 13 == 0) {
        if (v9 != 0) {
          v15 = *(_QWORD*)(result + 144);
          v16 = v9 & 3;
          if (v9 >= 4) {
            v62 = (int*)(v8 + 8);
            v63 = 0;
            v64 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFFCLL);
            do {
              v63 -= 4;
              *(float*)(v15 + 4LL * v12) =
                  (float)*(v62 - 2) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v12 + 1) >> 13 != 0) {
                v65 = 0;
              }
              else {
                v65 = v12 + 1;
              }
              *(float*)(v15 + 4LL * v65) =
                  (float)*(v62 - 1) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v65 + 1) >> 13 != 0) {
                v66 = 0;
              }
              else {
                v66 = v65 + 1;
              }
              *(float*)(v15 + 4LL * v66) = (float)*v62 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v66 + 1) >> 13 != 0) {
                v67 = 0;
              }
              else {
                v67 = v66 + 1;
              }
              v68 = v62[1];
              v62 += 4;
              *(float*)(v15 + 4LL * v67) = (float)v68 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v67 + 1) >> 13 != 0) {
                v12 = 0;
              }
              else {
                v12 = v67 + 1;
              }
            } while (v64 != v63);
            v17 = -v63;
            if (v16 == 0) {
              goto LABEL_94;
            }
          }
          else {
            v17 = 0;
            if (v16 == 0) {
              goto LABEL_94;
            }
          }
          v69 = (int*)(v8 + 4 * v17);
          do {
            v70 = *v69++;
            *(float*)(v15 + 4LL * v12) = (float)v70 * 0x1.0000000000000p-15f;
            if ((unsigned int)(v12 + 1) >> 13 != 0) {
              v12 = 0;
            }
            else {
              ++v12;
            }
            --v16;
          } while (v16 != 0);
        }
      LABEL_94:
        *(_DWORD*)(result + 228) = v12;
      }
    }
  }
  else {
    if (v7 < 1 || v3 < 1) {
      v19 = 0;
    }
    else {
      if (v7 == 1) {
        v19 = 0;
        v33 = 0;
      }
      else {
        v45 = 1;
        v33 = 0;
        v19 = 0;
        do {
          if (v3 >= 1) {
            v46 = 0;
            v47 = 4LL * v3 * a3[3] * v33;
            v48 = v47 + 4LL * v3;
            v49 = a2 + v47;
            v50 = a2 + v48;
            do {
              v51 = *(_DWORD*)(v49 + 4 * v46);
              v52 = *(_DWORD*)(v50 + 4 * v46);
              v53 = v19 + v46++;
              *(_DWORD*)(v8 + 4LL * v53) = (v52 + v51) / 2;
            } while (v46 < *a3);
            v19 = (unsigned int)(v19 + v46);
            v3 = *a3;
          }
          if (v3 >= 1) {
            v54 = 0;
            v55 = 4LL * v3 * a3[3] * v45;
            v56 = v55 + 4LL * v3;
            v57 = a2 + v55;
            v58 = a2 + v56;
            do {
              v59 = *(_DWORD*)(v57 + 4 * v54);
              v60 = *(_DWORD*)(v58 + 4 * v54);
              v61 = v19 + v54++;
              *(_DWORD*)(v8 + 4LL * v61) = (v60 + v59) / 2;
            } while (v54 < *a3);
            v19 = (unsigned int)(v19 + v54);
            v3 = *a3;
          }
          v33 += 2;
          v45 += 2;
        } while (v33 != (v7 & 0x7FFFFFFE));
      }
      if ((v7 & 1) != 0 && v3 >= 1) {
        v34 = 0;
        v35 = a2 + 4LL * v3 * v33 * a3[3];
        v36 = v35 + 4LL * v3;
        do {
          v37 = *(_DWORD*)(v35 + 4 * v34);
          v38 = *(_DWORD*)(v36 + 4 * v34);
          v39 = v19 + v34++;
          *(_DWORD*)(v8 + 4LL * v39) = (v38 + v37) / 2;
        } while (v34 < *a3);
        v19 = (unsigned int)(v19 + v34);
      }
    }
    if (*(_DWORD*)(result + 136) != 0) {
      v40 = *(_DWORD*)(result + 224);
      v12 = *(_DWORD*)(result + 228);
      v13 = __OFSUB__(v12, v40);
      v41 = v12 - v40;
      if (v41 < 0 != v13) {
        v41 += 0x2000;
      }
      if ((v19 + v41) >> 13 == 0) {
        if (v19 != 0) {
          v42 = *(_QWORD*)(result + 144);
          v43 = v19 & 3;
          if (v19 >= 4) {
            v71 = (int*)(v8 + 8);
            v72 = 0;
            v73 = -(__int64)(v19 & 0xFFFFFFFFFFFFFFFCLL);
            do {
              v72 -= 4;
              *(float*)(v42 + 4LL * v12) =
                  (float)*(v71 - 2) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v12 + 1) >> 13 != 0) {
                v74 = 0;
              }
              else {
                v74 = v12 + 1;
              }
              *(float*)(v42 + 4LL * v74) =
                  (float)*(v71 - 1) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v74 + 1) >> 13 != 0) {
                v75 = 0;
              }
              else {
                v75 = v74 + 1;
              }
              *(float*)(v42 + 4LL * v75) = (float)*v71 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v75 + 1) >> 13 != 0) {
                v76 = 0;
              }
              else {
                v76 = v75 + 1;
              }
              v77 = v71[1];
              v71 += 4;
              *(float*)(v42 + 4LL * v76) = (float)v77 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v76 + 1) >> 13 != 0) {
                v12 = 0;
              }
              else {
                v12 = v76 + 1;
              }
            } while (v73 != v72);
            v44 = -v72;
          }
          else {
            v44 = 0;
          }
          if (v43 != 0) {
            v78 = (int*)(v8 + 4 * v44);
            do {
              v79 = *v78++;
              *(float*)(v42 + 4LL * v12) = (float)v79 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v12 + 1) >> 13 != 0) {
                v12 = 0;
              }
              else {
                ++v12;
              }
              --v43;
            } while (v43 != 0);
          }
        }
        goto LABEL_94;
      }
    }
  }
  v81 = *(_DWORD*)(result + 224);
  v80 = *(_DWORD*)(result + 228);
  v13 = __OFSUB__(v80, v81);
  v82 = v80 - v81;
  if (v82 < 0 != v13) {
    v83 = v82 + 0x2000;
  }
  else {
    v83 = v82;
  }
  v84 = *(unsigned int*)(result + 136);
  if (v83 >= (unsigned int)v84) {
    v85 = *(_QWORD*)(result + 152);
    v86 = *(_QWORD*)(result + 160);
    v87 = *(_QWORD*)(result + 176);
    v88 = result;
    v89 = *(_QWORD*)(result + 128);
    v90 = *(_QWORD*)(result + 144);
    result = memset_alt1(v85, 0, 4 * v84),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v92 = *(_DWORD*)(v88 + 136);
    if (v83 >= v92) {
      if (v92 != 0) {
        v93 = 1;
        v94 = 0;
        do {
          v95 = *(_DWORD*)(v90 + 4LL * v81);
          v96 = v93 - 1;
          *(_DWORD*)(v89 + 4LL * v93) = 0;
          ++v94;
          v93 += 2;
          ++v81;
          *(_DWORD*)(v89 + 4LL * v96) = v95;
          v97 = *(unsigned int*)(v88 + 136);
        } while (v94 < v97);
        v98 = (unsigned int)(2 * v97);
      }
      else {
        v98 = 0;
      }
      result = ((__int64 (*)(
          __int64, __int64, __int64, _QWORD, __int64, __int64, __int64,
          __int64))nn_audio_detail_FftProcessInternalImplFloat32Complex)(
          v89, v98, v89, (unsigned int)v98, *(_QWORD*)(v88 + 112) + 8LL, 1, 1,
          v91),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      LODWORD(v99) = *(_DWORD*)(v88 + 136);
      if ((unsigned int)v99 >= 2) {
        v100 = (float*)(v89 + 4);
        v101 = 0;
        do {
          v102 = *(v100 - 1);
          v103 = *v100;
          v100 += 2;
          *(float*)(v87 + 4 * v101++) =
              sqrtf((float)(PSEUDO_UNFUSED(v103 * v103)) +
                    (float)(v102 * v102)) /
              (float)((unsigned int)v99 >> 1);
          v99 = *(unsigned int*)(v88 + 136);
        } while (v101 < v99 >> 1);
      }
      if ((unsigned int)v99 >= 2) {
        v104 = 0;
        do {
          v105 = *(float*)(v87 + 4 * v104);
          if (*(float*)(v85 + 4 * v104) < v105) {
            *(float*)(v85 + 4 * v104) = v105;
            v106 = *(float*)(v87 + 4 * v104);
            if (*(float*)(v86 + 4 * v104) < v106) {
              *(float*)(v86 + 4 * v104) = v106;
            }
          }
          ++v104;
        } while (v104 < (unsigned __int64)*(unsigned int*)(v88 + 136) >> 1);
        LODWORD(v99) = *(_DWORD*)(v88 + 136);
      }
      v107 = *(_DWORD*)(v88 + 224) + v99;
      if (v107 >> 13 != 0) {
        v107 = 0;
      }
      *(_DWORD*)(v88 + 224) = v107;
    }
  }
  return result;
}

#pragma GCC visibility pop
