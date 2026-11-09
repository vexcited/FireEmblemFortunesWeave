#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int128 CudaDriverData_1115950;
extern __int128 CudaDriverData_11159d0;
extern _UNKNOWN CudaDriverData_1133bd8;
extern _UNKNOWN CudaDriverData_1133be4;
extern _UNKNOWN CudaDriverData_1133bf0;
extern _UNKNOWN CudaDriverData_1133bfc;
extern _UNKNOWN CudaDriverData_1133c08;
extern _UNKNOWN CudaDriverData_1133c14;
extern _UNKNOWN CudaDriverData_1133c20;
extern _UNKNOWN CudaDriverData_1133c2c;
extern _UNKNOWN CudaDriverData_1133c38;
extern _UNKNOWN CudaDriverData_1133c44;
extern _UNKNOWN CudaDriverData_1133c50;
extern _UNKNOWN CudaDriverData_1133c5c;
extern _UNKNOWN CudaDriverData_1133c68;
extern _UNKNOWN CudaDriverData_1133c74;
extern _UNKNOWN CudaDriverData_1133c80;
extern _UNKNOWN CudaDriverData_1133c8c;
extern _UNKNOWN CudaDriverData_1133c98;
extern _UNKNOWN CudaDriverData_1133ca4;
extern _UNKNOWN CudaDriverData_1133cb0;
extern _UNKNOWN CudaDriverData_1133cbc;
extern _UNKNOWN CudaDriverData_1133cc8;
extern _UNKNOWN CudaDriverData_1133cd4;
extern _UNKNOWN CudaDriverData_1133ce0;
extern _UNKNOWN CudaDriverData_1133cec;
extern _UNKNOWN CudaDriverData_1133cf8;
extern _UNKNOWN CudaDriverData_1133d04;
extern _UNKNOWN CudaDriverData_1133d10;
extern _UNKNOWN CudaDriverData_1133d1c;
extern _UNKNOWN CudaDriverData_1133d28;
extern _UNKNOWN CudaDriverData_1133d34;
extern _UNKNOWN CudaDriverData_1133d40;
extern _UNKNOWN CudaDriverData_1133d4c;
extern _UNKNOWN CudaDriverData_1133d58;
extern _UNKNOWN CudaDriverData_1133d64;
extern _UNKNOWN CudaDriverData_1133d70;
extern __int64 (*CudaDriverData_14232a0)();
extern __int64 CudaDriverData_1423360;
extern int CudaDriverData_14302f8;
extern char CudaDriverData_1432df0;
extern _UNKNOWN CudaDriverData_1432df4;
extern __int64 (*CudaDriverData_1432df8)(__int64*);
extern __int64 CudaDriverData_14347a0;
extern __int64 CudaDriverData_143bd88;
__int64 CudaDriverRoutine_102e00(_QWORD);
__int64 CudaDriverRoutine_104d90(__int64, __int64, int, __int64, __int64);
__int64 CudaDriverRoutine_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_108070(_QWORD);
__int64 CudaDriverRoutine_10f380(_QWORD);
__int64 CudaDriverRoutine_10f540(_QWORD, _QWORD);
__int64 CudaDriverRoutine_11c740(__int64 result, __int64, unsigned int,
                                 int8x16_t*, _BYTE*);
__int64 CudaDriverRoutine_12a4a0(_QWORD);
__int64 CudaDriverRoutine_12df40(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbab0(_QWORD);
__int64 CudaDriverRoutine_1dbb80(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dc880(_QWORD);
__int64 CudaDriverRoutine_1dc930(_QWORD);
__int64 CudaDriverRoutine_1dc9f0(void);
__int64 CudaDriverRoutine_1dcc60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_98110(_QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_9aa40(_QWORD);
__int64 CudaDriverRoutine_a3190(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_a38f0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_b8f70(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_c5a60(_QWORD, _QWORD);
__int64 CudaDriverRoutine_e30b0(_QWORD);
__int64 CudaDriverRoutine_ed630(_QWORD, _QWORD, const char*, ...);
__int64 CudaDriverRoutine_ee010(_QWORD, _QWORD);
__int64 CudaDriverRoutine_ee030(__int64, __int64, _QWORD*, __int128*);
__int64 CudaDriverRoutine_ee120(_QWORD);
__int64 CudaDriverRoutine_ee160(__int64, __int64, _QWORD*, char, unsigned int);
__int64 CudaDriverRoutine_f6e20(_QWORD);
__int64 CudaDriverRoutine_f7a00(_QWORD);
__int64 CudaDriverRoutine_f9380(_QWORD, _QWORD);
__int64 CudaDriverRoutine_f94a0(__int64, unsigned int*, char);
__int64 CudaDriverRoutine_fabf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);

__int64 CudaDriverHr_add60(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;

  v1 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(v1 + 24);
  v4 = *(_QWORD*)(v1 + 80);
  v5 = CudaDriverRoutine_a3190(v4,
                               *(unsigned int*)(*(_QWORD*)(v3 + 64) + 11708LL),
                               *(unsigned int*)(a1 + 1004));
  if (v5 != 0) {
    v6 = CudaDriverRoutine_a38f0(v4, v5, 0);
    v7 = CudaDriverRoutine_a3190(
        v4, *(unsigned int*)(*(_QWORD*)(v3 + 64) + 11704LL),
        *(unsigned int*)(a1 + 1004));
    if (v7 == 0) {
      goto LABEL_7;
    }
  LABEL_5:
    v8 = CudaDriverRoutine_a38f0(v4, v7, 0);
    if (v8 != 0) {
      result = CudaDriverRoutine_b8f70(
          a1, v8, *(unsigned int*)(*(_QWORD*)(v3 + 64) + 11704LL));
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    goto LABEL_7;
  }
  v6 = 0;
  v7 = CudaDriverRoutine_a3190(v4,
                               *(unsigned int*)(*(_QWORD*)(v3 + 64) + 11704LL),
                               *(unsigned int*)(a1 + 1004));
  if (v7 != 0) {
    goto LABEL_5;
  }
LABEL_7:
  if (v6 != 0) {
    v10 = *(_QWORD*)(v3 + 64);
    v11 = *(_DWORD*)(v10 + 3792);
    v12 = *(_DWORD*)(v10 + 3796);
    v13 = (*(__int64 (**)(__int64, __int64))(v10 + 19392))(v3, a1);
    v14 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v3 + 64) + 19392LL))(
        v3, a1);
    v15 = *(_DWORD*)(a1 + 236);
    v16 = *(_DWORD*)(a1 + 240);
    if (v15 != 0 && v16 != 0 && v14 != v15) {
      CudaDriverRoutine_ed630(
          "CUDA", 0,
          "Function %s needs large kernel parameters which is supported on "
          "CUDA 12.1+ drivers. Please use an updated driver.\n",
          *(const char**)(a1 + 8));
      return 801;
    }
    v17 = v13 + 4 * (v12 + v11);
    if (v16 + v15 > v17) {
      CudaDriverRoutine_ed630(
          "CUDA", 0,
          "Function %s exceeds maximum allowed parameters size: %d > %d\n",
          *(const char**)(a1 + 8), v16 + v15, v17);
      return 801;
    }
    *(_DWORD*)(a1 + 232) = v6;
    *(_DWORD*)(a1 + 244) =
        (*(__int64 (**)(void))(*(_QWORD*)(v3 + 64) + 19400LL))();
  }
  if (*(_DWORD*)(a1 + 232) != 0 || (*(_WORD*)(a1 + 977) & 1) == 0) {
    return 0;
  }
  *(_DWORD*)(a1 + 232) = 16;
  return 0;
}

__int64 CudaDriverHr_d8be0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           unsigned __int64 a5, _QWORD* a6, char a7)
{
  __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v14;
  __int64 v16;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  bool v45;
  bool v47;
  const double* v49;
  __int64 v50;
  float64x2_t* v51;
  float64x2_t* v52;
  const double* v53;
  unsigned __int64 v54;
  int64x2_t v55;
  __int64 v56;
  int64x2_t* v57;
  unsigned __int64 v58;
  unsigned __int64* v59;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  unsigned __int64 v67;
  int64x2_t v68;
  int64x2_t* v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64* v72;
  float64x2x2_t v74;
  float64x2x2_t v75;

  v7 = 8 * a5;
  v9 = a5;
  CudaDriverRoutine_25cf10(a2, 0, 8 * a5);
  CudaDriverRoutine_25cf10(a3, 0, v7);
  if (a4 != 0) {
    CudaDriverRoutine_25cf10(a4, 0, v7);
  }
  v14 = *(_QWORD*)(a1 + 104);
  if (v14 == 0 || v9 == 0) {
    v16 = 0;
  LABEL_9:
    *a6 = v16;
    return 0;
  }
  else {
    v18 = 0;
    if ((a7 & 1) != 0) {
      v19 = 1000;
    }
    else {
      v19 = 1056;
    }
    if (a4 != 0) {
      while (1) {
        v21 = a3 + 8 * v18;
        v22 = *(unsigned int*)(v14 + v19 + 36);
        if (v9 >= v22) {
          v23 = *(unsigned int*)(v14 + v19 + 36);
        }
        else {
          v23 = v9;
        }
        if ((_DWORD)v22 != 0) {
          v24 = *(_QWORD*)(v14 + v19);
          if (v23 < 8) {
            v25 = 0;
          LABEL_25:
            v26 = v25;
            if ((((_BYTE)v23 - (_BYTE)v25) & 7) != 0) {
              v27 = 0;
              v28 = 8 * v25 + 8 * v18;
              v29 = (__int64*)(v24 + 16 * v25 + 8);
              v30 = a4 + v28;
              v31 = a3 + v28;
              do {
                *(_QWORD*)(v31 + 8 * v27) = *(v29 - 1);
                v32 = *v29;
                v29 += 2;
                *(_QWORD*)(v30 + 8 * v27++) = v32;
              } while ((((_BYTE)v23 - (_BYTE)v25) & 7) != v27);
              v26 = v25 + v27;
            }
            if (v25 - v23 <= 0xFFFFFFFFFFFFFFF8LL) {
              v33 = v23 - v26;
              v34 = v24 + 16 * v26;
              v35 = 8 * v18 + 8 * v26;
              v36 = (_QWORD*)(v34 + 64);
              v37 = (_QWORD*)(a3 + 32 + v35);
              v38 = (_QWORD*)(a4 + 32 + v35);
              do {
                v33 -= 8;
                *(v37 - 4) = *(v36 - 8);
                *(v38 - 4) = *(v36 - 7);
                *(v37 - 3) = *(v36 - 6);
                *(v38 - 3) = *(v36 - 5);
                *(v37 - 2) = *(v36 - 4);
                *(v38 - 2) = *(v36 - 3);
                *(v37 - 1) = *(v36 - 2);
                *(v38 - 1) = *(v36 - 1);
                *v37 = *v36;
                *v38 = v36[1];
                v37[1] = v36[2];
                v38[1] = v36[3];
                v37[2] = v36[4];
                v38[2] = v36[5];
                v37[3] = v36[6];
                v37 += 8;
                v39 = v36[7];
                v36 += 16;
                v38[3] = v39;
                v38 += 8;
              } while (v33 != 0);
            }
            goto LABEL_55;
          }
          v40 = v24 + 16 * v23;
          v41 = a4 + 8 * v18;
          v25 = 0;
          v42 = a3 + 8 * (v18 + v23);
          v43 = a4 + 8 * (v18 + v23);
          v45 = v21 < v40 && v24 < v42;
          v47 = v41 < v40 && v24 < v43;
          if (v41 < v42 && v21 < v43) {
            goto LABEL_25;
          }
          if (v45) {
            goto LABEL_25;
          }
          if (v47) {
            goto LABEL_25;
          }
          v25 = (unsigned int)v23 & 0xFFFFFFFC;
          v49 = (const double*)(v24 + 32);
          v50 = v25;
          v51 = (float64x2_t*)(a3 + 16 + 8 * v18);
          v52 = (float64x2_t*)(a4 + 16 + 8 * v18);
          do {
            v53 = v49 - 4;
            v75 = vld2q_f64(v49);
            v49 += 8;
            v50 -= 4;
            v74 = vld2q_f64(v53);
            v51[-1] = v74.val[0];
            *v51 = v75.val[0];
            v52[-1] = v74.val[1];
            *v52 = v75.val[1];
            v51 += 2;
            v52 += 2;
          } while (v50 != 0);
          if (v23 != v25) {
            goto LABEL_25;
          }
        }
      LABEL_55:
        if (v9 > v22) {
          CudaDriverRoutine_25cf10(v21 + 8 * v23, 0, 8 * (v9 - v23));
        }
        v16 = v23 + v18;
        if (v18 < v23 + v18) {
          v54 = v18;
          if (v23 < 4) {
            goto LABEL_62;
          }
          v55 = vdupq_n_s64(v14);
          v54 = v18 + ((unsigned int)v23 & 0xFFFFFFFC);
          v56 = (unsigned int)v23 & 0xFFFFFFFC;
          v57 = (int64x2_t*)(a2 + 16 + 8 * v18);
          do {
            v57[-1] = v55;
            *v57 = v55;
            v57 += 2;
            v56 -= 4;
          } while (v56 != 0);
          if (v23 != (v23 & 0xFFFFFFFC)) {
          LABEL_62:
            v58 = v18 + v23 - v54;
            v59 = (unsigned __int64*)(a2 + 8 * v54);
            do {
              *v59++ = v14;
              --v58;
            } while (v58 != 0);
          }
        }
        v14 = *(_QWORD*)(v14 + 1136);
        v9 -= v23;
        v18 += v23;
        if (v14 == 0 || v9 == 0) {
          goto LABEL_9;
        }
      }
    }
    while (1) {
      v61 = *(unsigned int*)(v14 + v19 + 36);
      v62 = v9 >= v61 ? *(unsigned int*)(v14 + v19 + 36) : v9;
      if ((_DWORD)v61 != 0) {
        break;
      }
    LABEL_77:
      if (v9 > v61) {
        CudaDriverRoutine_25cf10(a3 + 8 * v18 + 8 * v62, 0, 8 * (v9 - v62));
      }
      v16 = v62 + v18;
      if (v18 < v62 + v18) {
        v67 = v18;
        if (v62 < 4) {
          goto LABEL_84;
        }
        v68 = vdupq_n_s64(v14);
        v69 = (int64x2_t*)(a2 + 16 + 8 * v18);
        v67 = v18 + ((unsigned int)v62 & 0xFFFFFFFC);
        v70 = (unsigned int)v62 & 0xFFFFFFFC;
        do {
          v69[-1] = v68;
          *v69 = v68;
          v69 += 2;
          v70 -= 4;
        } while (v70 != 0);
        if (v62 != (v62 & 0xFFFFFFFC)) {
        LABEL_84:
          v71 = v18 + v62 - v67;
          v72 = (unsigned __int64*)(a2 + 8 * v67);
          do {
            *v72++ = v14;
            --v71;
          } while (v71 != 0);
        }
      }
      v14 = *(_QWORD*)(v14 + 1136);
      v9 -= v62;
      v18 += v62;
      if (v14 == 0 || v9 == 0) {
        goto LABEL_9;
      }
    }
    v63 = (_QWORD*)(a3 + 8 * v18);
    v64 = v62;
    v65 = (__int64*)(*(_QWORD*)(v14 + v19) + 8LL);
    while (1) {
      *v63++ = *(v65 - 1);
      v66 = *v65;
      v65 += 2;
      if (v66 != CudaDriverData_14347a0) {
        break;
      }
      if (--v64 == 0) {
        goto LABEL_77;
      }
    }
    CudaDriverRoutine_ed630("CUDA", 0,
                            "Edge data is present and cannot be discarded");
    return 402;
  }
}

__int64 CudaDriverHr_e3160(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned int v14;
  _BYTE* v15;
  int v16;
  int* v17;
  int v18;
  int v19;
  int v20;
  int* v21;
  int v22;
  int v23;
  int v24;
  int* v25;
  int v26;
  int v27;
  int* v28;
  int v29;
  int v30;
  int v31;
  int* v32;
  int v33;
  int v34;
  int* v35;
  int v36;
  int v37;
  int v38;
  int* v39;
  int v40;
  int v41;
  int* v42;
  int v43;
  int v44;
  int* v45;
  int v46;
  int v47;
  int* v48;
  int v49;
  int v50;
  int* v51;
  int v52;
  int v53;
  int* v54;
  int v55;
  int v56;
  int* v57;
  int v58;
  int v59;
  int* v60;
  int v61;
  int* v62;
  int v63;
  int v64;
  _QWORD v65[16];
  __int64 v66;
  __int64 v67;
  __int64 v68;

  v67 = v7;
  v68 = v8;
  v66 = 0;
  v64 = -1;
  memset(v65, 0, sizeof(v65));
  if ((_DWORD)result == 0) {
    return result;
  }
  if (a2 == 0 || a3 == 0) {
    CudaDriverRoutine_ed630(
        "CUDA", 0,
        "options or optionValues is NULL with a non-zero numOptions\n", a4, a5,
        a6, a7, 0);
    return 1;
  }
  v9 = (unsigned __int8)a5 == 0;
  v10 = 0;
  v11 = (unsigned int)result;
  v12 = !v9;
  if ((_BYTE)a7 != 0) {
    v13 = v12;
  }
  else {
    v13 = 0;
  }
  do {
    v14 = *(_DWORD*)(a2 + 4 * v10);
    v15 = &CudaDriverData_1133bd8;
    switch (v14) {
    case 0u:
      goto LABEL_48;
    case 1u:
      v15 = &CudaDriverData_1133be4;
      goto LABEL_48;
    case 2u:
      v15 = &CudaDriverData_1133bf0;
      goto LABEL_48;
    case 3u:
      v15 = &CudaDriverData_1133bfc;
      goto LABEL_48;
    case 4u:
      v15 = &CudaDriverData_1133c08;
      goto LABEL_48;
    case 5u:
      v15 = &CudaDriverData_1133c14;
      goto LABEL_48;
    case 6u:
      v15 = &CudaDriverData_1133c20;
      goto LABEL_48;
    case 7u:
      v15 = &CudaDriverData_1133c2c;
      goto LABEL_48;
    case 8u:
      v15 = &CudaDriverData_1133c38;
      goto LABEL_48;
    case 9u:
      v15 = &CudaDriverData_1133c44;
      goto LABEL_48;
    case 0xAu:
      v15 = &CudaDriverData_1133c50;
      goto LABEL_48;
    case 0xBu:
      v15 = &CudaDriverData_1133c5c;
      goto LABEL_48;
    case 0xCu:
      v15 = &CudaDriverData_1133c68;
      goto LABEL_48;
    case 0xDu:
      v15 = &CudaDriverData_1133c74;
      goto LABEL_48;
    case 0xEu:
      v15 = &CudaDriverData_1133c80;
      goto LABEL_48;
    case 0xFu:
      v15 = &CudaDriverData_1133c8c;
      goto LABEL_48;
    case 0x10u:
      v15 = &CudaDriverData_1133c98;
      goto LABEL_48;
    case 0x11u:
      v15 = &CudaDriverData_1133ca4;
      goto LABEL_48;
    case 0x12u:
      v15 = &CudaDriverData_1133cb0;
      goto LABEL_48;
    case 0x13u:
      v15 = &CudaDriverData_1133cbc;
      goto LABEL_48;
    case 0x14u:
      v15 = &CudaDriverData_1133cc8;
      goto LABEL_48;
    case 0x15u:
      v15 = &CudaDriverData_1133cd4;
      goto LABEL_48;
    case 0x16u:
      v15 = &CudaDriverData_1133ce0;
      goto LABEL_48;
    case 0x17u:
      v15 = &CudaDriverData_1133cec;
      goto LABEL_48;
    case 0x18u:
      v15 = &CudaDriverData_1133cf8;
      goto LABEL_48;
    case 0x19u:
      v15 = &CudaDriverData_1133d04;
      goto LABEL_48;
    case 0x1Au:
      v15 = &CudaDriverData_1133d10;
      goto LABEL_48;
    case 0x1Bu:
      v15 = &CudaDriverData_1133d1c;
      goto LABEL_48;
    case 0x1Cu:
      v15 = &CudaDriverData_1133d28;
      goto LABEL_48;
    case 0x1Du:
      v15 = &CudaDriverData_1133d34;
      goto LABEL_48;
    case 0x1Eu:
      v15 = &CudaDriverData_1133d40;
      goto LABEL_48;
    case 0x1Fu:
      v15 = &CudaDriverData_1133d4c;
      goto LABEL_48;
    case 0x20u:
      v15 = &CudaDriverData_1133d58;
      goto LABEL_48;
    case 0x21u:
      v15 = &CudaDriverData_1133d64;
      goto LABEL_48;
    default:
      if (v14 != 10004) {
        CudaDriverRoutine_ed630("CUDA", 0,
                                "Unrecognized option %u (at index %u)\n", v14);
        return 1;
      }
      v15 = &CudaDriverData_1133d70;
    LABEL_48:
      if ((_BYTE)a4 != 0 && v15[10] == 0) {
        CudaDriverRoutine_ed630(
            "CUDA", 0, "Option %u (at index %u) cannot be updated\n", v14);
        return 1;
      }
      if (v13 != 0 && v15[11] == 0) {
        return 1;
      }
      if ((_DWORD)a6 != 6 && v15[(unsigned int)a6 + 4] == 0) {
        CudaDriverRoutine_ed630(
            "CUDA", 0,
            "Option %u (at index %u) not applicable for input type %u\n", v14,
            v10, a6);
        return 1;
      }
      v16 = v64;
      v17 = &v64;
      if (v64 == -1) {
        goto LABEL_10;
      }
      break;
    }
    while (v16 != v14) {
      v18 = v17[1];
      ++v17;
      v16 = v18;
      if (v18 == -1) {
      LABEL_10:
        *v17 = v14;
        v17[1] = -1;
        break;
      }
    }
    ++v10;
  } while (v10 != v11);
  v19 = v64;
  if (v64 == -1) {
    return 0;
  }
  v20 = v64;
  v21 = (int*)v65;
  do {
    v22 = v20;
    if (v20 == 3) {
      break;
    }
    v23 = *v21++;
    v20 = v23;
  } while (v23 != -1);
  v24 = v64;
  v25 = (int*)v65;
  do {
    if (v24 == 4) {
      if (v22 == 3) {
        goto LABEL_70;
      }
    LABEL_91:
      CudaDriverRoutine_ed630(
          "CUDA", 0,
          "CU_JIT_INFO_LOG_BUFFER and CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES must "
          "be specified together\n",
          a4, v10, a6, a7, 0);
      return 1;
    }
    v26 = *v25++;
    v24 = v26;
  } while (v26 != -1);
  if (v22 == 3) {
    goto LABEL_91;
  }
LABEL_70:
  v27 = v64;
  v28 = (int*)v65;
  do {
    v29 = v27;
    if (v27 == 5) {
      break;
    }
    v30 = *v28++;
    v27 = v30;
  } while (v30 != -1);
  v31 = v64;
  v32 = (int*)v65;
  while (2) {
    if (v31 == 6) {
      if (v29 == 5) {
        goto LABEL_77;
      }
      goto LABEL_93;
    }
    v33 = *v32++;
    v31 = v33;
    if (v33 != -1) {
      continue;
    }
    break;
  }
  if (v29 == 5) {
  LABEL_93:
    CudaDriverRoutine_ed630(
        "CUDA", 0,
        "CU_JIT_ERROR_LOG_BUFFER and CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES must "
        "be specified together\n",
        a4, v10, a6, a7, 0);
    return 1;
  }
LABEL_77:
  v34 = v64;
  v35 = (int*)v65;
  do {
    v36 = v34;
    if (v34 == 10000) {
      break;
    }
    v37 = *v35++;
    v34 = v37;
  } while (v37 != -1);
  v38 = v64;
  v39 = (int*)v65;
  while (2) {
    if (v38 == 10001) {
      if (v36 == 10000) {
        goto LABEL_84;
      }
      goto LABEL_95;
    }
    v40 = *v39++;
    v38 = v40;
    if (v40 != -1) {
      continue;
    }
    break;
  }
  if (v36 == 10000) {
  LABEL_95:
    CudaDriverRoutine_ed630("CUDA", 0,
                            "CU_JIT_STATISTICS and CU_JIT_STATISTICS_SIZE must "
                            "be specified together\n",
                            a4, v10, a6, a7, 0);
    return 1;
  }
LABEL_84:
  v41 = v64;
  v42 = (int*)v65;
  while (v41 != 1) {
    v43 = *v42++;
    v41 = v43;
    if (v43 == -1) {
    LABEL_99:
      v47 = v64;
      v48 = (int*)v65;
      while (v47 != 17) {
        v49 = *v48++;
        v47 = v49;
        if (v49 == -1) {
          v50 = v64;
          v51 = (int*)v65;
          while (v50 != 18) {
            v52 = *v51++;
            v50 = v52;
            if (v52 == -1) {
              v53 = v64;
              v54 = (int*)v65;
              while (v53 != 19) {
                v55 = *v54++;
                v53 = v55;
                result = 0;
                if (v55 == -1) {
                  return result;
                }
              }
              goto LABEL_109;
            }
          }
          break;
        }
      }
    LABEL_109:
      v56 = v64;
      v57 = (int*)v65;
      while (v56 != 17) {
        v58 = *v57++;
        v56 = v58;
        if (v58 == -1) {
        LABEL_121:
          CudaDriverRoutine_ed630(
              "CUDA", 0,
              "CU_JIT_GLOBAL_SYMBOL_NAMES, CU_JIT_GLOBAL_SYMBOL_ADDRESSES and "
              "CU_JIT_GLOBAL_SYMBOL_COUNT must be specified together\n",
              a4, v10, a6, a7, 0);
          return 1;
        }
      }
      v59 = v64;
      v60 = (int*)v65;
      while (v59 != 18) {
        v61 = *v60++;
        v59 = v61;
        if (v61 == -1) {
          goto LABEL_121;
        }
      }
      v62 = (int*)v65;
      while (v19 != 19) {
        v63 = *v62++;
        v19 = v63;
        if (v63 == -1) {
          goto LABEL_121;
        }
      }
      return 0;
    }
  }
  v44 = v64;
  v45 = (int*)v65;
  while (v44 != 9) {
    v46 = *v45++;
    v44 = v46;
    if (v46 == -1) {
      goto LABEL_99;
    }
  }
  CudaDriverRoutine_ed630(
      "CUDA", 0, "Cannot specify CU_JIT_THREADS_PER_BLOCK with CU_JIT_TARGET\n",
      a4, v10, a6, a7, 0);
  return 1;
}

__int64 CudaDriverHr_f6020(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, unsigned int a8,
                           __int64 a9)
{
  _DWORD v10[8];
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int64 v38;
  __int64 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int64 v43;

  v43 = 0;
  v42 = 0u;
  memset(v10, 0, sizeof(v10));
  v10[0] = 1;
  v11 = a4;
  v12 = a5;
  v13 = a6;
  v14 = 1;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  DWORD2(v23) = 1;
  v25 = 0;
  v26 = a2;
  v27 = a3;
  v30 = 0u;
  v28 = a6;
  v29 = 1u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v38 = a6;
  v39 = 1;
  v41 = 0u;
  v40 = 1u;
  return CudaDriverRoutine_fabf0(v10, a7, a7, 0, a8, a9, 0);
}

long double CudaDriverHr_f8090(int* a1, __int64 a2)
{
  int v2;
  __int64* v4;
  __int64 v5;
  long double result;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a1;
  if (*a1 != 0) {
    if (v2 == 2) {
      *((_QWORD*)a1 + 12) = a2;
    }
    else if (v2 == 1) {
      v4 = (__int64*)(a1 + 8);
      v5 = CudaDriverRoutine_1dbb80(*((_QWORD*)a1 + 4), *(_QWORD*)(a2 + 80));
      if (v5 != 0) {
        *v4 = v5;
      }
      else if ((unsigned __int8)CudaDriverRoutine_f7a00(a1) != 0) {
        v8 = *((_QWORD*)a1 + 4);
        *a1 = 3;
        v9 = CudaDriverRoutine_1dbab0(v8) + *((_QWORD*)a1 + 5);
        *(_OWORD*)(a1 + 18) = *((_OWORD*)a1 + 3);
        *((_QWORD*)a1 + 8) = v9;
        *(_OWORD*)v4 = 0u;
        *((_OWORD*)a1 + 3) = 0u;
        *(_OWORD*)&result = 0u;
      }
    }
  }
  else {
    v7 = CudaDriverRoutine_1dbb80(*((_QWORD*)a1 + 3), *(_QWORD*)(a2 + 80));
    if (v7 != 0) {
      *((_QWORD*)a1 + 3) = v7;
    }
  }
  return result;
}

__int64 CudaDriverHr_f97c0(__int64 a1, __int64* a2, __int64* a3, __int64* a4)
{
  int v4;
  unsigned int* v5;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned int v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned int v34;
  int v35;
  __int64* v36;
  __int64 v37;

  v5 = (unsigned int*)(a1 + 24);
  v4 = *(_DWORD*)(a1 + 24);
  if (v4 == 0) {
    v10 = *(_QWORD*)(a1 + 48);
    if (v10 == 0) {
      goto LABEL_13;
    }
  LABEL_9:
    if ((unsigned __int8)CudaDriverRoutine_1dc880(v10) == 0) {
      goto LABEL_13;
    }
  LABEL_10:
    v11 = 0;
    v13 = a1 + 224;
    v12 = *(_DWORD*)(a1 + 224);
    if (v12 != 0) {
      goto LABEL_14;
    }
  LABEL_11:
    v14 = *(_QWORD*)(v13 + 24);
    if (v14 == 0) {
      goto LABEL_22;
    }
    goto LABEL_19;
  }
  if (v4 == 1) {
    v10 = *(_QWORD*)(a1 + 56);
    if (v10 == 0) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  if (v4 == 2 && *(_BYTE*)(a1 + 177) != 0) {
    goto LABEL_10;
  }
LABEL_13:
  CudaDriverRoutine_f9380(&v37, v5);
  v11 = v37;
  v13 = a1 + 224;
  v12 = *(_DWORD*)(a1 + 224);
  if (v12 == 0) {
    goto LABEL_11;
  }
LABEL_14:
  if (v12 == 1) {
    v14 = *(_QWORD*)(v13 + 32);
    if (v14 == 0) {
      goto LABEL_22;
    }
  LABEL_19:
    if ((unsigned __int8)CudaDriverRoutine_1dc880(v14) == 0) {
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  if (v12 != 2 || *(_BYTE*)(a1 + 377) == 0) {
  LABEL_22:
    CudaDriverRoutine_f9380(&v37, v13);
    v15 = v37;
    if (v11 != 0) {
      goto LABEL_23;
    }
  LABEL_29:
    v18 = 0x40000000;
    goto LABEL_31;
  }
LABEL_20:
  v15 = 0;
  if (v11 == 0) {
    goto LABEL_29;
  }
LABEL_23:
  if ((unsigned __int8)CudaDriverRoutine_f7a00(v5) != 0 &&
      (unsigned __int8)CudaDriverRoutine_f7a00(v13) != 0) {
    v16 = *(_QWORD*)(a1 + 16);
    if (v16 != 0) {
      v17 = (_QWORD*)(v16 + 16);
    }
    else {
      v17 = (_QWORD*)(a1 + 8);
    }
    if (CudaDriverRoutine_98340(*v17) != v11) {
      goto LABEL_29;
    }
  LABEL_67:
    result = 0;
    v28 = v11;
    goto LABEL_68;
  }
  v19 = CudaDriverRoutine_f94a0(v11, v5, 1);
  v18 = CudaDriverRoutine_f94a0(v11, (unsigned int*)v13, 0) + v19;
  if (v18 == 0) {
    goto LABEL_67;
  }
LABEL_31:
  v36 = a2;
  v20 = a3;
  if (v15 == 0) {
    v22 = a4;
    v25 = v11;
    goto LABEL_46;
  }
  if ((unsigned __int8)CudaDriverRoutine_f7a00(v5) != 0 &&
      (unsigned __int8)CudaDriverRoutine_f7a00(v13) != 0) {
    v21 = *(_QWORD*)(a1 + 16);
    v22 = a4;
    if (v21 != 0) {
      v23 = (_QWORD*)(v21 + 16);
    }
    else {
      v23 = (_QWORD*)(a1 + 8);
    }
    if (CudaDriverRoutine_98340(*v23) == v15) {
      v24 = 0;
    }
    else {
      v24 = 0x40000000;
    }
    v25 = v11;
    if (v24 >= v18) {
      goto LABEL_46;
    }
  }
  else {
    v22 = a4;
    v26 = CudaDriverRoutine_f94a0(v15, v5, 1);
    v24 = CudaDriverRoutine_f94a0(v15, (unsigned int*)v13, 0) + v26;
    v25 = v11;
    if (v24 >= v18) {
    LABEL_46:
      v29 = *(_QWORD*)(a1 + 16);
      if (v29 != 0) {
        v30 = (_QWORD*)(v29 + 16);
      }
      else {
        v30 = (_QWORD*)(a1 + 8);
      }
      v31 = CudaDriverRoutine_98340(*v30);
      if (v31 != 0) {
        if ((unsigned __int8)CudaDriverRoutine_f7a00(v5) != 0 &&
            (unsigned __int8)CudaDriverRoutine_f7a00(v13) != 0) {
          v32 = *(_QWORD*)(a1 + 16);
          if (v32 != 0) {
            v33 = (_QWORD*)(v32 + 16);
          }
          else {
            v33 = (_QWORD*)(a1 + 8);
          }
          if (CudaDriverRoutine_98340(*v33) == v31) {
            v34 = 0;
          }
          else {
            v34 = 0x40000000;
          }
        }
        else {
          v35 = CudaDriverRoutine_f94a0(v31, v5, 1);
          v34 = CudaDriverRoutine_f94a0(v31, (unsigned int*)v13, 0) + v35;
        }
      }
      else {
        v34 = 0x40000000;
      }
      if (v34 >= v18) {
        result = v18;
      }
      else {
        result = v34;
      }
      if (v34 >= v18) {
        v28 = v25;
      }
      else {
        v28 = v31;
      }
      goto LABEL_66;
    }
  }
  v25 = v15;
  v18 = v24;
  if (v24 != 0) {
    goto LABEL_46;
  }
  result = 0;
  v28 = v15;
LABEL_66:
  a4 = v22;
  a3 = v20;
  a2 = v36;
LABEL_68:
  *a2 = v11;
  *a3 = v15;
  *a4 = v28;
  return result;
}

__int64 CudaDriverHr_fd9f0(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 result;

  v1 = *(_DWORD*)a1;
  if (*(_DWORD*)a1 == 0) {
    v4 = *(_QWORD*)(a1 + 24);
    if (v4 == 0) {
      goto LABEL_15;
    }
  LABEL_12:
    v5 = a1;
    v6 = CudaDriverRoutine_1dc930(v4);
    a1 = v5;
    if (v6 != 0) {
      return 1;
    }
    goto LABEL_15;
  }
  if (v1 == 1) {
    v4 = *(_QWORD*)(a1 + 32);
    if (v4 == 0) {
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  if (v1 == 2) {
    if (*(_BYTE*)(a1 + 152) != 0) {
      return *(_BYTE*)(a1 + 153) != 0;
    }
    if (*(_BYTE*)(a1 + 153) == 0) {
      v2 = a1;
      v3 = CudaDriverRoutine_f6e20(a1);
      a1 = v2;
      if (v3 == *(_QWORD*)(*(_QWORD*)(v2 + 96) + 64LL) &&
          *(_BYTE*)(v2 + 158) == 0) {
        return 1;
      }
    }
  LABEL_15:
    v1 = *(_DWORD*)a1;
  }
  if (v1 > 1) {
    if (v1 == 3) {
      return 1;
    }
    if (v1 != 2) {
      return 0;
    }
    return *(_BYTE*)(a1 + 153) != 0;
  }
  if (v1 == 0) {
    result = *(_QWORD*)(a1 + 24);
    if (result == 0) {
      return result;
    }
    return (unsigned __int8)CudaDriverRoutine_1dc880(result) != 0;
  }
  if (v1 != 1) {
    return 0;
  }
  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    return (unsigned __int8)CudaDriverRoutine_1dc880(result) != 0;
  }
  return result;
}

__int64 CudaDriverHr_10a130(_DWORD* a1, _OWORD* a2, __int64 a3, __int64 a4,
                            _BYTE* a5)
{
  __int64 result;
  __int64 v11;
  __int128 v12;
  __int64 v13;
  char v14;
  __int128 v15;
  __int128 v16;
  _QWORD v17[3];
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v15 = 0u;
  v16 = 0u;
  memset(v17, 0, sizeof(v17));
  CudaDriverRoutine_12df40(&CudaDriverData_1432df4, CudaDriverData_14232a0);
  if ((CudaDriverData_1432df0 & 1) != 0) {
    return 999;
  }
  result = (*(__int64 (**)(__int64, _QWORD*))(a4 + 21600))(a4, v17);
  if ((_DWORD)result == 0) {
    *(_QWORD*)&v15 = a3;
    v19 = 7;
    v20 = (__int64*)&v15;
    v18 = 0x200000001LL;
    CudaDriverData_1432df8(&v18);
    if (HIDWORD(v18) != 0) {
      return 999;
    }
    v13 = a3;
    v18 = 0x200000001LL;
    v19 = 9;
    v20 = &v13;
    CudaDriverData_1432df8(&v18);
    if (HIDWORD(v18) != 0) {
      return 999;
    }
    v11 = v16;
    *a5 = v14;
    result = (*(__int64 (**)(__int64, __int64, __int64*))(a4 + 21592))(a4, v11,
                                                                       &v18);
    if ((_DWORD)result == 0) {
      v12 = *(_OWORD*)&v17[1];
      *a1 = v18;
      *a2 = v12;
    }
  }
  return result;
}

__int64 CudaDriverHr_10f0d0(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int8x16_t v19;
  __int64 v20;

  v4 = (_QWORD*)CudaDriverRoutine_12e510(1, 48);
  v5 = v4;
  if (v4 == nullptr) {
    v8 = 2;
    goto LABEL_8;
  }
  *v4 = a2;
  v6 = CudaDriverRoutine_10f540(*(_QWORD*)(a2 + 64), a2);
  *((_DWORD*)v5 + 2) = v6;
  if ((*(_BYTE*)(*(_QWORD*)(a2 + 64) + 16978LL) & 1) != 0) {
    v9 = *v5;
    v10 = v6;
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)(*v5 + 64LL) + 18424LL))(24) *
          *(unsigned int*)(v9 + 164);
    CudaDriverRoutine_ee010(&v19, 0);
    v19 = vorrq_s8(vandq_s8(v19, (int8x16_t)CudaDriverData_11159d0),
                   (int8x16_t)CudaDriverData_1115950);
    v12 = CudaDriverRoutine_ee030(v9, v11, &v20, (__int128*)&v19);
    if (v12 != 0 || (((uint8_t*)&v19)[11] & 0x40) == 0 &&
                        (v12 = CudaDriverRoutine_104d90(
                             v9, v20, 0, v11 >> 2, *(_QWORD*)(v9 + 96))) != 0) {
      v8 = v12;
    }
    else {
      v5[2] = v20;
      v5[3] = v11;
      if ((unsigned __int8)CudaDriverRoutine_9aa40(*(_QWORD*)(*v5 + 64LL)) !=
              0 ||
          (unsigned __int8)CudaDriverRoutine_98110(*v5) == 0) {
        v14 = *v5;
        v15 = CudaDriverRoutine_ee160(*v5, 8, &v19, 0, 3u);
        if (v15 != 0) {
          v8 = v15;
        }
        else {
          v8 = CudaDriverRoutine_104d90(v14, ((int64_t*)&v19)[0], 0, 2,
                                        *(_QWORD*)(v14 + 96));
          if (v8 == 0) {
            v5[4] = ((uint64_t*)&v19)[0];
          }
        }
      }
      else {
        v16 = *v5;
        v8 = CudaDriverRoutine_e30b0(*(_QWORD*)(*v5 + 64LL));
        if (v8 != 0) {
          goto LABEL_8;
        }
        v17 = *(_QWORD*)(v16 + 16136);
        v20 = 0;
        v18 = *(_QWORD*)(v17 + 128);
        memset(&((int8_t*)&v19)[8], 0, 376);
        ((uint64_t*)&v19)[0] = 0x10C000202LL;
        v8 = CudaDriverRoutine_1dcc60(v16, v18, &v19, &v20);
        if (v8 == 0) {
          CudaDriverRoutine_ee120(v20);
          v5[4] = CudaDriverRoutine_102e00(v20);
        }
      }
      v6 = v10;
      if (v8 == 0) {
        goto LABEL_3;
      }
    }
  LABEL_8:
    CudaDriverRoutine_10f380(v5);
    return v8;
  }
LABEL_3:
  if (v6 == 2) {
    v7 = *(_DWORD*)(*(_QWORD*)(a2 + 64) + 17072LL);
  }
  else {
    v7 = 0;
  }
  v8 = 0;
  *((_DWORD*)v5 + 10) = v7;
  *a1 = v5;
  return v8;
}

__int64 CudaDriverHr_117c40(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v18;

  CudaDriverRoutine_107f90(a1 + 8, 0, 0);
  v8 = *(_QWORD*)(a1 + 32);
  if (v8 != 0) {
    if (a2 == 2) {
      if (a3 != 0) {
        do {
          v9 = *(_QWORD*)(v8 + 992);
          if (v9 != 0) {
            CudaDriverRoutine_c5a60(v9, 901);
          }
          v8 = *(_QWORD*)(v8 + 320);
        } while (v8 != 0);
      }
      else {
        do {
          v10 = *(_QWORD*)(v8 + 992);
          if (v10 != 0 && (*(_BYTE*)(v8 + 56) & 4) != 0) {
            CudaDriverRoutine_c5a60(v10, 901);
          }
          v8 = *(_QWORD*)(v8 + 320);
        } while (v8 != 0);
      }
    }
    else if (a3 != 0) {
      if (a2 == 1) {
        do {
          v11 = *(_QWORD*)(v8 + 992);
          if (v11 != 0) {
            v12 = *(_DWORD*)(v11 + 296);
            if (v12 != 2 && (*(_QWORD*)(v11 + 304) == a4 || v12 == 0)) {
              ((void (*)(void))CudaDriverRoutine_c5a60)();
            }
          }
          v8 = *(_QWORD*)(v8 + 320);
        } while (v8 != 0);
      }
      else {
        do {
          v14 = *(_QWORD*)(v8 + 992);
          if (v14 != 0 && *(_DWORD*)(v14 + 296) != 2 &&
              *(_QWORD*)(v14 + 304) == a4) {
            ((void (*)(void))CudaDriverRoutine_c5a60)();
          }
          v8 = *(_QWORD*)(v8 + 320);
        } while (v8 != 0);
      }
    }
    else if (a2 == 1) {
      do {
        v15 = *(_QWORD*)(v8 + 992);
        if (v15 != 0 && (*(_BYTE*)(v8 + 56) & 4) != 0) {
          v16 = *(_DWORD*)(v15 + 296);
          if (v16 != 2 && (*(_QWORD*)(v15 + 304) == a4 || v16 == 0)) {
            ((void (*)(void))CudaDriverRoutine_c5a60)();
          }
        }
        v8 = *(_QWORD*)(v8 + 320);
      } while (v8 != 0);
    }
    else {
      do {
        v18 = *(_QWORD*)(v8 + 992);
        if (v18 != 0 && (*(_BYTE*)(v8 + 56) & 4) != 0 &&
            *(_DWORD*)(v18 + 296) != 2 && *(_QWORD*)(v18 + 304) == a4) {
          ((void (*)(void))CudaDriverRoutine_c5a60)();
        }
        v8 = *(_QWORD*)(v8 + 320);
      } while (v8 != 0);
    }
  }
  return CudaDriverRoutine_108070(a1 + 8);
}

__int64 CudaDriverHr_11c9a0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6;
  int8x16_t v7;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int8x16_t v15;

  v6 = (unsigned __int8)a3;
  CudaDriverRoutine_107f90(a1 + 15856, 0, 0);
  CudaDriverRoutine_11c740(a1, a2, a3, &v15, nullptr);
  if (v6 != 0) {
    v7 = v15;
    if (*(_OWORD*)&v15 != 0) {
      v9 = a1 + 2560;
      v10 = 0;
      do {
        v11 = ((uint64_t*)&v7)[0] >> v10;
        v12 = v10 >= 0x40;
        v13 = v10 - 64;
        v14 = ((uint64_t*)&v7)[1] >> v10;
        if (!v12) {
          LOBYTE(v14) = v11;
        }
        if ((v14 & 1) != 0) {
          (*(void (**)(_QWORD, __int64))(v9 - 16))(*(_QWORD*)(v9 - 80), v9);
        }
        v9 += 104;
        v10 = v13 + 65;
      } while (v13 != 44);
    }
  }
  return CudaDriverRoutine_108070(a1 + 15856);
}

__int64 CudaDriverHr_127fa0()
{
  __int64 result;

  result = (*(__int64 (**)(void))(CudaDriverData_143bd88 + 432))();
  CudaDriverData_14302f8 = result;
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_12a4a0(result);
    CudaDriverData_14302f8 = result;
  }
  return result;
}

__int64 CudaDriverHr_128b40()
{
  _QWORD* v0;

  CudaDriverRoutine_1dc9f0();
  v0 = (_QWORD*)CudaDriverData_1423360;
  CudaDriverRoutine_107f90(*(_QWORD*)CudaDriverData_1423360, 0, 0);
  CudaDriverRoutine_108070(*v0);
  return 0;
}

__int64 CudaDriverHr_128ba0()
{
  _QWORD* v0;

  CudaDriverRoutine_1dc9f0();
  v0 = (_QWORD*)CudaDriverData_1423360;
  CudaDriverRoutine_107f90(*(_QWORD*)CudaDriverData_1423360, 0, 0);
  return CudaDriverRoutine_108070(*v0);
}

__int64 CudaDriverHr_128be0()
{
  CudaDriverRoutine_1dc9f0();
  return 0;
}

#pragma GCC visibility pop
