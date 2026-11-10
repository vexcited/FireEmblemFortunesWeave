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
__int64 FxFFT_Unknown5(__int64 result, __int64 a2, int* a3, __int64 a4,
                       __int64 a5, __int64 a6);

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

__int64 FxFFT_Unknown5(__int64 result, __int64 a2, int* a3, __int64 a4,
                       __int64 a5, __int64 a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  int v14;
  int v15;
  bool v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  unsigned int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
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
  v6 = *a3;
  v8 = a3[3];
  v7 = a3[4];
  v9 = v8 * *a3;
  v10 = v7 / v9;
  if (v7 % v9 != 0) {
    result = nn_diag_detail_AbortImpl_1a0a590(result),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_97:
    nn_diag_detail_AbortImpl_1a0a590(result),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    __udf(0);
  }
  if (v10 > a3[2]) {
    goto LABEL_97;
  }
  v11 = *(_QWORD*)(result + 104);
  if ((v8 | 2) == 6) {
    v12 = 0;
    if (v10 >= 1 && v6 >= 1) {
      v23 = 0;
      do {
        if (v6 >= 1) {
          v24 = v6;
          v25 = 0;
          v26 = 4LL * v6 * a3[3] * v23;
          v27 = v26 + 8LL * v6;
          v28 = a2 + v26;
          v29 = a2 + v26 + 12LL * v6;
          v30 = a2 + v27;
          v31 = a2 + v26 + 4 * v24;
          do {
            a5 = *(unsigned int*)(v29 + 4 * v25);
            v32 = v12 + v25;
            v33 = *(_DWORD*)(v31 + 4 * v25) + *(_DWORD*)(v28 + 4 * v25);
            v34 = *(_DWORD*)(v30 + 4 * v25++);
            a4 = (unsigned int)(((int)a5 + v34) / 2);
            *(_DWORD*)(v11 + 4LL * v32) = ((int)a4 + v33 / 2) / 2;
          } while (v25 < *a3);
          v12 = (unsigned int)(v12 + v25);
          v6 = *a3;
        }
        ++v23;
      } while (v23 != v10);
    }
    if (*(_DWORD*)(result + 136) != 0) {
      v14 = *(_DWORD*)(result + 224);
      v15 = *(_DWORD*)(result + 228);
      v16 = __OFSUB__(v15, v14);
      v17 = v15 - v14;
      if (v17 < 0 != v16) {
        v17 += 0x2000;
      }
      if ((v12 + v17) >> 13 == 0) {
        if (v12 != 0) {
          v18 = *(_QWORD*)(result + 144);
          v19 = v12 & 3;
          if (v12 >= 4) {
            v62 = (int*)(v11 + 8);
            v63 = 0;
            v64 = -(__int64)(v12 & 0xFFFFFFFFFFFFFFFCLL);
            do {
              v63 -= 4;
              *(float*)(v18 + 4LL * v15) =
                  (float)*(v62 - 2) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v15 + 1) >> 13 != 0) {
                v65 = 0;
              }
              else {
                v65 = v15 + 1;
              }
              *(float*)(v18 + 4LL * v65) =
                  (float)*(v62 - 1) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v65 + 1) >> 13 != 0) {
                v66 = 0;
              }
              else {
                v66 = v65 + 1;
              }
              *(float*)(v18 + 4LL * v66) = (float)*v62 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v66 + 1) >> 13 != 0) {
                v67 = 0;
              }
              else {
                v67 = v66 + 1;
              }
              v68 = v62[1];
              v62 += 4;
              *(float*)(v18 + 4LL * v67) = (float)v68 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v67 + 1) >> 13 != 0) {
                v15 = 0;
              }
              else {
                v15 = v67 + 1;
              }
            } while (v64 != v63);
            v20 = -v63;
            if (v19 == 0) {
              goto LABEL_94;
            }
          }
          else {
            v20 = 0;
            if (v19 == 0) {
              goto LABEL_94;
            }
          }
          v69 = (int*)(v11 + 4 * v20);
          do {
            v70 = *v69++;
            *(float*)(v18 + 4LL * v15) = (float)v70 * 0x1.0000000000000p-15f;
            if ((unsigned int)(v15 + 1) >> 13 != 0) {
              v15 = 0;
            }
            else {
              ++v15;
            }
            --v19;
          } while (v19 != 0);
        }
      LABEL_94:
        *(_DWORD*)(result + 228) = v15;
      }
    }
  }
  else {
    if (v10 < 1 || v6 < 1) {
      v22 = 0;
    }
    else {
      if (v10 == 1) {
        v22 = 0;
        v35 = 0;
      }
      else {
        v47 = 1;
        v35 = 0;
        v22 = 0;
        do {
          if (v6 >= 1) {
            v48 = 0;
            v49 = 4LL * v6 * a3[3] * v35;
            v50 = v49 + 4LL * v6;
            v51 = a2 + v49;
            v52 = a2 + v50;
            do {
              v53 = *(_DWORD*)(v51 + 4 * v48);
              a4 = *(unsigned int*)(v52 + 4 * v48);
              v54 = v22 + v48++;
              *(_DWORD*)(v11 + 4LL * v54) = ((int)a4 + v53) / 2;
            } while (v48 < *a3);
            v22 = (unsigned int)(v22 + v48);
            v6 = *a3;
          }
          if (v6 >= 1) {
            v55 = 0;
            v56 = 4LL * v6 * a3[3] * v47;
            v57 = v56 + 4LL * v6;
            v58 = a2 + v56;
            v59 = a2 + v57;
            do {
              v60 = *(_DWORD*)(v58 + 4 * v55);
              a4 = *(unsigned int*)(v59 + 4 * v55);
              v61 = v22 + v55++;
              *(_DWORD*)(v11 + 4LL * v61) = ((int)a4 + v60) / 2;
            } while (v55 < *a3);
            v22 = (unsigned int)(v22 + v55);
            v6 = *a3;
          }
          v35 += 2;
          v47 += 2;
        } while (v35 != (v10 & 0x7FFFFFFE));
      }
      if ((v10 & 1) != 0 && v6 >= 1) {
        v36 = 0;
        v37 = a2 + 4LL * v6 * v35 * a3[3];
        v38 = v37 + 4LL * v6;
        do {
          v39 = *(_DWORD*)(v37 + 4 * v36);
          v40 = *(_DWORD*)(v38 + 4 * v36);
          v41 = v22 + v36++;
          *(_DWORD*)(v11 + 4LL * v41) = (v40 + v39) / 2;
        } while (v36 < *a3);
        v22 = (unsigned int)(v22 + v36);
      }
    }
    if (*(_DWORD*)(result + 136) != 0) {
      v42 = *(_DWORD*)(result + 224);
      v15 = *(_DWORD*)(result + 228);
      v16 = __OFSUB__(v15, v42);
      v43 = v15 - v42;
      if (v43 < 0 != v16) {
        v43 += 0x2000;
      }
      if ((v22 + v43) >> 13 == 0) {
        if (v22 != 0) {
          v44 = *(_QWORD*)(result + 144);
          v45 = v22 & 3;
          if (v22 >= 4) {
            v71 = (int*)(v11 + 8);
            v72 = 0;
            v73 = -(__int64)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            do {
              v72 -= 4;
              *(float*)(v44 + 4LL * v15) =
                  (float)*(v71 - 2) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v15 + 1) >> 13 != 0) {
                v74 = 0;
              }
              else {
                v74 = v15 + 1;
              }
              *(float*)(v44 + 4LL * v74) =
                  (float)*(v71 - 1) * 0x1.0000000000000p-15f;
              if ((unsigned int)(v74 + 1) >> 13 != 0) {
                v75 = 0;
              }
              else {
                v75 = v74 + 1;
              }
              *(float*)(v44 + 4LL * v75) = (float)*v71 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v75 + 1) >> 13 != 0) {
                v76 = 0;
              }
              else {
                v76 = v75 + 1;
              }
              v77 = v71[1];
              v71 += 4;
              *(float*)(v44 + 4LL * v76) = (float)v77 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v76 + 1) >> 13 != 0) {
                v15 = 0;
              }
              else {
                v15 = v76 + 1;
              }
            } while (v73 != v72);
            v46 = -v72;
          }
          else {
            v46 = 0;
          }
          if (v45 != 0) {
            v78 = (int*)(v11 + 4 * v46);
            do {
              v79 = *v78++;
              *(float*)(v44 + 4LL * v15) = (float)v79 * 0x1.0000000000000p-15f;
              if ((unsigned int)(v15 + 1) >> 13 != 0) {
                v15 = 0;
              }
              else {
                ++v15;
              }
              --v45;
            } while (v45 != 0);
          }
        }
        goto LABEL_94;
      }
    }
  }
  v81 = *(_DWORD*)(result + 224);
  v80 = *(_DWORD*)(result + 228);
  v16 = __OFSUB__(v80, v81);
  v82 = v80 - v81;
  if (v82 < 0 != v16) {
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
    result = memset(v85, 0, 4 * v84, a4, a5, a6),
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
