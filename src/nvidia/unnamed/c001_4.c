#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN CudaDriverData_1432130;
extern __int64 (*CudaDriverData_14324a0)(_QWORD*);
extern __int64 (*CudaDriverData_1432d10)(__int64, unsigned int*);
extern __int64 (*CudaDriverData_1432d48)(__int64);
extern __int64 (*CudaDriverData_1432d50)(__int64, _QWORD);
extern _UNKNOWN* CudaDriverData_1432d58;
extern __int64 (*CudaDriverData_1432d60)(__int64, _QWORD);
extern __int64 (*CudaDriverData_1432d68)(__int64, __int64, __int64, _QWORD);
extern __int64 (*CudaDriverData_1432d78)(__int64, __int64, __int64);
extern char CudaDriverData_1436502;
__int64 CudaDriverRoutine_102e00(_QWORD);
__int64 CudaDriverRoutine_105dd0(_QWORD);
__int64 CudaDriverRoutine_1074e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_107f90(__int64);
__int64 CudaDriverRoutine_108070(_QWORD*);
__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_112c00(void);
__int64 CudaDriverRoutine_11ac50(_QWORD, _QWORD);
__int64 CudaDriverRoutine_11aff0(_QWORD);
__int64 CudaDriverRoutine_11b100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD);
__int64 CudaDriverRoutine_12e330(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e550(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a2960(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1ba7d0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1da1b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1db190(_QWORD);
__int64 CudaDriverRoutine_1db800(_QWORD);
__int64 CudaDriverRoutine_1dbf90(_QWORD);
__int64 CudaDriverRoutine_1dbfc0(_QWORD);
__int64 CudaDriverRoutine_1dc880(_QWORD);
__int64 CudaDriverRoutine_1dca30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_203100(_QWORD);
__int64 CudaDriverRoutine_205fa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_206060(_QWORD, _QWORD);
__int64 CudaDriverRoutine_20b420(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25d010(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_595a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5f100(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_98190(__int64, unsigned int);
__int64 CudaDriverRoutine_985a0(_QWORD);
__int64 CudaDriverRoutine_985c0(_QWORD);
__int64 CudaDriverRoutine_9aa20(_QWORD);
__int64 CudaDriverRoutine_9ab40(_QWORD);
__int64 CudaDriverRoutine_aaf70(__int64, _QWORD*, __int64, unsigned __int8);
__int64 CudaDriverRoutine_ab0c0(void);
__int64 CudaDriverRoutine_b3f80(__int64, unsigned __int64, char,
                                unsigned __int64);
__int64 CudaDriverRoutine_b9380(__int64, __int64);
__int64 CudaDriverRoutine_b9680(__int64, __int64, __int64, __int64, char,
                                _BYTE*);
__int64 CudaDriverRoutine_b9e20();
__int64 CudaDriverRoutine_bfee0(__int64, __int64*);
__int64 CudaDriverRoutine_c08b0(__int64, __int64);
__int64 CudaDriverRoutine_c2360(_QWORD);
__int64 CudaDriverRoutine_c4540(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_c5b00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ef110(_QWORD, _QWORD);

__int64 CudaDriverHr_98a90(_QWORD* a1, __int64 a2, __int64 a3)
{
  _QWORD* v5;

  v5 = a1;
  if (*(_DWORD*)a1 == 1) {
    v5 = (_QWORD*)a1[21];
  }
  CudaDriverRoutine_107f90(a3 + 592);
  CudaDriverRoutine_107f90(v5 + 121);
  CudaDriverRoutine_1a2960(v5[123], *(_QWORD*)(a2 + 120), 1);
  CudaDriverRoutine_1ba7d0(v5[124], *(_QWORD*)(a3 + 584));
  ++v5[125];
  CudaDriverRoutine_108070(v5 + 121);
  return CudaDriverRoutine_108070(a3 + 592);
}

__int64 CudaDriverHr_b42b0(_QWORD* a1, _QWORD* a2, __int64* a3,
                           unsigned __int8 a4, char a5, char a6,
                           unsigned int a7, __int64 a8, char* a9,
                           unsigned __int64 a10)
{
  __int64 v11;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;

  v11 = a2[10];
  v32 = v11;
  if (v11 != 0) {
    if ((unsigned __int8)a10 == 9 && (a2[1] & 4) != 0) {
      goto LABEL_12;
    }
    if (a3 == nullptr || *(_DWORD*)(v11 + 1000) != 0) {
      result = CudaDriverRoutine_ab0c0();
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_12;
    }
    v19 = *a9;
    v20 = *((unsigned int*)a9 + 2);
    v21 = *((_QWORD*)a9 + 2);
    v22 = *((_QWORD*)a9 + 3);
    if ((_BYTE)a10 != 0) {
      if ((unsigned __int8)a10 == 9) {
        v26 = a3[2];
        a3 += 2;
        v23 = v26;
        if (v26 == 0) {
        LABEL_34:
          v27 = *((_QWORD*)a9 + 2);
          v28 = *((unsigned int*)a9 + 2);
          v29 = a7;
          v30 = a3;
          result = CudaDriverRoutine_11aff0(a3);
          if ((_DWORD)result != 0) {
            return result;
          }
          v23 = *v30;
          a7 = v29;
          v20 = v28;
          v21 = v27;
        }
        return CudaDriverRoutine_11b100(v23, *((unsigned int*)a2 + 3), *a2, a7,
                                        v19 & 1, v20, v22, v21);
      }
      if ((unsigned __int8)a10 != 2) {
        return 200;
      }
      ++a3;
    }
    v23 = *a3;
    if (*a3 == 0) {
      goto LABEL_34;
    }
    return CudaDriverRoutine_11b100(v23, *((unsigned int*)a2 + 3), *a2, a7,
                                    v19 & 1, v20, v22, v21);
  }
  if (a6 == 0) {
  LABEL_17:
    if (a5 != 0) {
      return 0;
    }
    else {
      return 999;
    }
  }
  result = CudaDriverRoutine_aaf70((__int64)a1, a2, (__int64)&v32, a4);
  if ((_DWORD)result == 0 || a5 != 0 && (_DWORD)result == 500) {
  LABEL_12:
    v16 = v32;
    if (v32 != 0) {
      if ((unsigned __int8)a10 == 9) {
        if ((a2[1] & 4) == 0) {
          if (a1[18] != 0) {
            v24 =
                *(_QWORD*)(a1[59] + 4464LL) - CudaDriverRoutine_102e00(a1[18]);
            v16 = v32;
          }
          else {
            v24 = 0;
          }
          v17 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1[3] + 64LL) + 18872LL))(
              v16);
          v18 = v24 + *(unsigned int*)(v32 + 80);
          goto LABEL_41;
        }
        v25 = a2[11];
      }
      else {
        if ((unsigned __int8)a10 != 2) {
          if ((_BYTE)a10 == 0) {
            v17 = (*(__int64 (**)(void))(*(_QWORD*)(a1[3] + 64LL) + 18872LL))();
            v18 = *(unsigned int*)(v32 + 80);
          LABEL_41:
            v25 = v17 + v18;
            return CudaDriverRoutine_b3f80(a8, a10, 1,
                                           *((_QWORD*)a9 + 2) + v25);
          }
          return 200;
        }
        if ((unsigned __int8)CudaDriverRoutine_105dd0(a1) != 0) {
          if (*(_QWORD*)(v32 + 1120) != 0) {
            return 200;
          }
          v31 = *(_QWORD*)(v32 + 944);
          *(_WORD*)(v32 + 977) |= 6u;
          v25 = CudaDriverRoutine_102e00(v31);
        }
        else {
          v25 = 0;
          *((_QWORD*)a9 + 2) = 0;
        }
      }
      return CudaDriverRoutine_b3f80(a8, a10, 1, *((_QWORD*)a9 + 2) + v25);
    }
    goto LABEL_17;
  }
  return result;
}

__int64 CudaDriverHr_b4500(__int64 result, __int64 a2, _QWORD* a3, __int64 a4,
                           __int64 a5, unsigned __int64 a6)
{
  if (result != 0) {
    result = CudaDriverRoutine_11ac50(result, *a3);
    if (result != 0 && *(_DWORD*)(result + 16) == 17) {
      return CudaDriverRoutine_b3f80(a4, a6, 0, *(_QWORD*)(result + 24) + a5);
    }
  }
  return result;
}

__int64 CudaDriverHr_b9820(__int64 a1, __int64 a2)
{
  int v3;
  __int64 v4;
  int v5;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 i;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 j;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _BYTE v64[8];

  if (a2 == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 188);
  v4 = a2;
  v5 = (unsigned __int8)CudaDriverRoutine_9aa20(*(_QWORD*)(a1 + 64));
  if (v3 != 3 && v5 != 0) {
    v12 = CudaDriverRoutine_9ab40(*(_QWORD*)(a1 + 64));
    if (v12 == 0) {
      do {
        CudaDriverRoutine_1dca30(*(_QWORD*)(v4 + 96), 0,
                                 *(unsigned int*)(v4 + 64), 0);
        v4 = *(_QWORD*)(v4 + 1144);
      } while (v4 != 0);
    }
    v13 = *(_QWORD*)(a1 + 96);
    v14 = *(_QWORD*)(a1 + 64);
    v56 = 0;
    CudaDriverRoutine_205fa0(0, v13, &v56, v64);
    v15 = (*(__int64 (**)(__int64))(v14 + 19176))(v56);
    v16 = v15;
    v56 = v15;
    if (*(_BYTE*)(a1 + 16377) == 0) {
      v16 = (*(__int64 (**)(__int64, __int64))(v14 + 18992))(v15, 1);
      v56 = v16;
    }
    CudaDriverRoutine_206060(*(_QWORD*)(a1 + 96), v16);
    return 0;
  }
  if (*(_QWORD*)(v4 + 1144) == 0) {
    return CudaDriverRoutine_b9380(a1, v4);
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  for (i = v4; i != 0; i = *(_QWORD*)(i + 1144)) {
    if (v9 >= v8) {
      if (v8 != 0) {
        v8 *= 2LL;
      }
      else {
        v8 = 256;
      }
      v7 = CudaDriverRoutine_12e550(v7, 8 * v8);
      if (v7 == 0) {
        v49 = 2;
        goto LABEL_90;
      }
    }
    if (*(_DWORD*)(i + 1000) != 0) {
      *(_QWORD*)(v7 + 8 * v9++) = i;
    }
  }
  CudaDriverRoutine_25d010(v7, v9, 8, CudaDriverRoutine_b9e20);
  v17 = 16;
  if (*(_DWORD*)(a1 + 188) == 3) {
    v17 = 168;
  }
  v18 = 88;
  if (*(_DWORD*)(a1 + 188) == 3) {
    v18 = 48;
  }
  if (*(_DWORD*)(*(_QWORD*)((char*)&CudaDriverData_1432130 + v17) + v18) != 0) {
    for (j = v4; j != 0; j = *(_QWORD*)(j + 1144)) {
      v20 = *(unsigned int*)(j + 64);
      LODWORD(v56) = 64;
      v57 = v20;
      v58 = a1;
      v59 = *(_QWORD*)(j + 32);
      v60 = j;
      v61 = *(_QWORD*)(j + 8);
      v62 = *(unsigned int*)(j + 16);
      v63 = 0;
      v21 = *(_DWORD*)(a1 + 188);
      if (v21 == 3) {
        v22 = 21;
      }
      else {
        v22 = 2;
      }
      if (v21 == 3) {
        v23 = 12;
      }
      else {
        v23 = 22;
      }
      CudaDriverRoutine_20b420(v22, v23, &v56);
    }
  }
  if (v9 == 0) {
    v35 = 0;
    v26 = 0;
    v40 = *(_QWORD*)(a1 + 64);
    v56 = 0;
    goto LABEL_58;
  }
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v54 = 0;
  v55 = 0;
  v51 = 0;
  v52 = 0;
  v27 = 0;
  v53 = 0;
  do {
    v29 = *(_QWORD*)(v7 + 8 * v25);
    if ((unsigned __int8)CudaDriverRoutine_1dc880(*(_QWORD*)(v29 + 96)) != 0) {
      v30 = *(_QWORD*)(v29 + 32);
      v31 = *(unsigned int*)(v29 + 1004);
      v32 = *(_QWORD*)(v29 + 96);
      LOBYTE(v56) = 0;
      v33 = CudaDriverRoutine_1074e0(v30, v31, 0, 0);
      v34 = CudaDriverRoutine_b9680(a1, v32, v33, *(unsigned int*)(v29 + 64), 0,
                                    &v56);
      if (v34 != 0) {
        v35 = v55;
      LABEL_88:
        v49 = v34;
        goto LABEL_89;
      }
      v26 |= (unsigned __int8)v56;
    }
    else {
      if (v24 != 0) {
        v35 = v55;
      }
      else {
        v36 = CudaDriverRoutine_1db800(*(_QWORD*)(v29 + 96));
        v50 = CudaDriverRoutine_1dbf90(*(_QWORD*)(v29 + 96));
        if (v36 == v27 + v52) {
          v37 = CudaDriverRoutine_1dbfc0(*(_QWORD*)(v29 + 96));
          if (v37 == CudaDriverRoutine_1dbfc0(v54)) {
            v39 = CudaDriverRoutine_1074e0(*(_QWORD*)(v29 + 32),
                                           *(unsigned int*)(v29 + 1004), 0, 0);
            CudaDriverRoutine_25cf30(v55 + v51, v39,
                                     *(unsigned int*)(v29 + 64));
            v24 = 0;
            v27 += v50;
            v51 += v50;
            goto LABEL_39;
          }
        }
        v35 = v55;
        LOBYTE(v56) = 0;
        v34 = CudaDriverRoutine_b9680(a1, v54, v55, v27, 1, &v56);
        if (v34 != 0) {
          goto LABEL_88;
        }
        v26 |= (unsigned __int8)v56;
      }
      v52 = CudaDriverRoutine_1db800(*(_QWORD*)(v29 + 96));
      v27 = CudaDriverRoutine_1dbf90(*(_QWORD*)(v29 + 96));
      v54 = *(_QWORD*)(v29 + 96);
      v38 = *(_QWORD*)(CudaDriverRoutine_1dbfc0(v54) + 128);
      if (v53 < v38) {
        v35 = CudaDriverRoutine_12e550(v35, v38);
        v53 = v38;
        if (v35 == 0) {
          v49 = 2;
        LABEL_89:
          CudaDriverRoutine_12e340(v35);
          goto LABEL_90;
        }
      }
      v28 = CudaDriverRoutine_1074e0(*(_QWORD*)(v29 + 32),
                                     *(unsigned int*)(v29 + 1004), 0, 0);
      v55 = v35;
      CudaDriverRoutine_25cf30(v35, v28, *(unsigned int*)(v29 + 64));
      v24 = 0;
      v51 = v27;
    }
  LABEL_39:
    ++v25;
  } while (v9 != v25);
  if (v24 != 0) {
    v35 = v55;
    v40 = *(_QWORD*)(a1 + 64);
    v56 = 0;
    if (v26 != 0) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  v35 = v55;
  LOBYTE(v56) = 0;
  v34 = CudaDriverRoutine_b9680(a1, v54, v55, v27, 1, &v56);
  if (v34 != 0) {
    goto LABEL_88;
  }
  v26 |= (unsigned __int8)v56;
  v40 = *(_QWORD*)(a1 + 64);
  v56 = 0;
  if (v26 != 0) {
  LABEL_59:
    CudaDriverRoutine_205fa0(0, *(_QWORD*)(a1 + 96), &v56, v64);
    v41 = v56;
    if (v26 != 0) {
      v41 = (*(__int64 (**)(__int64))(v40 + 19176))(v56);
      v56 = v41;
    }
    if (*(_BYTE*)(a1 + 16377) == 0) {
      v41 = (*(__int64 (**)(__int64, __int64))(v40 + 18992))(v41, 1);
      v56 = v41;
    }
    CudaDriverRoutine_206060(*(_QWORD*)(a1 + 96), v41);
  }
  else {
  LABEL_58:
    if (*(_BYTE*)(a1 + 16377) == 0) {
      goto LABEL_59;
    }
  }
  CudaDriverRoutine_12e340(v35);
  v42 = 16;
  if (*(_DWORD*)(a1 + 188) == 3) {
    v42 = 168;
  }
  v43 = 80;
  if (*(_DWORD*)(a1 + 188) == 3) {
    v43 = 44;
  }
  if (*(_DWORD*)(*(_QWORD*)((char*)&CudaDriverData_1432130 + v42) + v43) != 0) {
    do {
      v44 = *(_DWORD*)(a1 + 188);
      if (v44 == 3) {
        v45 = 168;
      }
      else {
        v45 = 16;
      }
      if (v44 == 3) {
        v46 = 44;
      }
      else {
        v46 = 80;
      }
      if (*(_DWORD*)(*(_QWORD*)((char*)&CudaDriverData_1432130 + v45) + v46) !=
          0) {
        LODWORD(v56) = 56;
        if (v44 == 3) {
          v47 = 21;
        }
        else {
          v47 = 2;
        }
        if (v44 == 3) {
          v48 = 11;
        }
        else {
          v48 = 20;
        }
        v57 = *(unsigned int*)(v4 + 64);
        v58 = a1;
        v59 = *(_QWORD*)(v4 + 32);
        v60 = v4;
        v61 = *(_QWORD*)(v4 + 8);
        v62 = *(unsigned int*)(v4 + 16);
        CudaDriverRoutine_20b420(v47, v48, &v56);
      }
      v4 = *(_QWORD*)(v4 + 1144);
    } while (v4 != 0);
  }
  v49 = 0;
LABEL_90:
  CudaDriverRoutine_12e340(v7);
  return v49;
}

__int64 CudaDriverHr_be9a0(__int64* a1)
{
  unsigned int v2;
  __int64* v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];
  int v7;
  __int64* v8;

  if (a1[8] == 0) {
    return 0;
  }
  v2 = CudaDriverRoutine_98190(*a1, 0);
  v3 = (__int64*)a1[8];
  if (v3[8] != 0) {
    CudaDriverRoutine_1db190(v3 + 8);
    v3 = (__int64*)a1[8];
  }
  if (v3[13] != 0) {
    CudaDriverRoutine_1db190(v3 + 13);
    v3 = (__int64*)a1[8];
  }
  if (v3[19] != 0) {
    CudaDriverRoutine_203100(v3 + 19);
    *(_QWORD*)(a1[8] + 144) = 0;
    v3 = (__int64*)a1[8];
  }
  if (*v3 == 0) {
    goto LABEL_23;
  }
  v5 = *v3;
  v6[1] = 0;
  v7 = 1;
  v8 = &v5;
  v6[0] = 0x800000011LL;
  CudaDriverData_14324a0(v6);
  result = HIDWORD(v6[0]);
  if (SHIDWORD(v6[0]) <= 2) {
    if (HIDWORD(v6[0]) != 0) {
      if (HIDWORD(v6[0]) == 1) {
        return result;
      }
      if (HIDWORD(v6[0]) == 2) {
        return 400;
      }
      return 999;
    }
    v3 = (__int64*)a1[8];
    v2 = 0;
  LABEL_23:
    CudaDriverRoutine_12e340(v3);
    a1[8] = 0;
    return v2;
  }
  if (SHIDWORD(v6[0]) > 4) {
    if (HIDWORD(v6[0]) == 5) {
      return 211;
    }
    if (HIDWORD(v6[0]) == 6) {
      return 2;
    }
    return 999;
  }
  if (HIDWORD(v6[0]) == 3) {
    return 219;
  }
  else {
    return 208;
  }
}

__int64 CudaDriverHr_bee30(__int64 a1, __int64* a2)
{
  int v2;
  int v3;
  char v6;
  bool v7;
  char v8;
  char v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 result;
  char v20;
  __int64 v21;
  unsigned int v22;
  unsigned __int64 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int128 v44;
  __int128 v45;
  __int128 v46;
  __int64 v47;

  v2 = *(_DWORD*)(a1 + 56);
  v3 = *(_DWORD*)(a1 + 8);
  v47 = 0;
  v31 = 0u;
  v30 = 0u;
  v29 = 0u;
  v28 = 0u;
  v27 = 0u;
  v26 = 0u;
  v25 = 0u;
  v24 = 0u;
  if (v2 != 0) {
    v6 = 4;
  }
  else {
    v6 = 0;
  }
  v7 = v3 == 0 || *(_DWORD*)(a1 + 16) == 35882;
  v39 = 0u;
  v38 = 0u;
  v37 = 0u;
  v36 = 0u;
  v35 = 0u;
  v34 = 0u;
  v33 = 0u;
  v32 = 0u;
  v8 = *(_BYTE*)(a1 + 32);
  v41 = 0u;
  v42 = 0u;
  v43 = 0u;
  v44 = 0u;
  v45 = 0u;
  v46 = 0u;
  v9 = v8 & 0xFB | v6;
  v40 = 0u;
  v10 = 0x40000904000200LL;
  *(_BYTE*)(a1 + 32) = v9;
  if (v7 && v2 == 0) {
    v11 = CudaDriverRoutine_985c0(*a2);
    v10 = 0x40000908000200LL;
    if (v11 != 0) {
      v10 = 0x4000090C000200LL;
    }
    v2 = *(_DWORD*)(a1 + 56);
  }
  if (v2 != 0) {
    DWORD1(v45) = -1;
    v12 = 16;
    if ((CudaDriverData_1436502 & 1) == 0) {
      v12 = 24;
    }
    v13 = v10 | 0x1000001 | v12;
  }
  else {
    v13 = v10 | 2;
  }
  v14 = *a2;
  v15 = *(_QWORD*)(a1 + 48);
  v23 = v13;
  v16 = *(_QWORD*)(a1 + 64);
  if (*(_DWORD*)(*(_QWORD*)(v14 + 64) + 21864LL) == 4) {
    v17 = v13 & 0xFFFFFFFFFFFE7FFFLL;
    DWORD2(v37) = *(_DWORD*)(a1 + 76);
    v18 = 0x8000;
    if (DWORD2(v37) == 0) {
      v18 = 0;
    }
    v23 = v18 | v17;
  }
  *(_QWORD*)&v37 = v15;
  *(_QWORD*)&v30 = v16;
  result = CudaDriverRoutine_98190(v14, 0);
  if ((_DWORD)result == 0) {
    v20 = CudaDriverRoutine_985a0(*a2);
    v21 = *a2;
    if (v20 != 0) {
      CudaDriverRoutine_108520(v21 + 24, 0, 0, 0);
      v22 = CudaDriverRoutine_1da1b0(*(_QWORD*)(*a2 + 80), &v23,
                                     *(_QWORD*)(a1 + 80), a1 + 88);
      CudaDriverRoutine_1085d0(*a2 + 24);
      result = v22;
      if (v22 != 0) {
        return result;
      }
    }
    else {
      result = CudaDriverRoutine_1da1b0(*(_QWORD*)(v21 + 80), &v23,
                                        *(_QWORD*)(a1 + 80), a1 + 88);
      if ((_DWORD)result != 0) {
        return result;
      }
    }
    CudaDriverRoutine_ef110(*(_QWORD*)(a1 + 88), 6);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_c20d0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  bool v6;
  __int64 v7;
  char v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  void (*v15)(__int64, __int64);
  unsigned int v16;
  unsigned int v17;

  v3 = *(_DWORD*)(a1 + 12);
  v4 = *a2;
  v17 = v3;
  v6 = (unsigned __int8)CudaDriverRoutine_985a0(v4) == 0;
  v7 = *(unsigned int*)(a1 + 12);
  if (v6) {
    v8 = 0;
  }
  else {
    v8 = 8;
  }
  *(_BYTE*)(a1 + 32) = *(_BYTE*)(a1 + 32) & 0xF7 | v8;
  if ((unsigned __int8)CudaDriverData_1432d48(v7) != 0) {
    CudaDriverData_1432d10(36007, &v17);
    CudaDriverData_1432d50(36161, *(unsigned int*)(a1 + 12));
    if ((unsigned int)CudaDriverRoutine_c2360(a1) != 0) {
      v9 = 1;
      v10 = v17;
      if (v17 != *(_DWORD*)(a1 + 12)) {
        goto LABEL_16;
      }
      goto LABEL_17;
    }
    CudaDriverData_1432d78(36161, 36162, a1 + 104);
    CudaDriverData_1432d78(36161, 36163, a1 + 108);
    if (v17 != *(_DWORD*)(a1 + 12)) {
      CudaDriverData_1432d50(36161, v17);
    }
    *(_QWORD*)(a1 + 112) = 0;
    *(_QWORD*)(a1 + 120) = 0;
    *(_DWORD*)(a1 + 824) = 1;
    *(_QWORD*)(a1 + 128) = 1;
    v11 = CudaDriverRoutine_12e330(8);
    *(_QWORD*)(a1 + 832) = v11;
    if (v11 != 0) {
      CudaDriverRoutine_25cf10(v11, 0, 8LL * *(unsigned int*)(a1 + 824));
      CudaDriverRoutine_c08b0(a1, *(_QWORD*)(*a2 + 64));
      v12 = CudaDriverRoutine_bfee0(a1, a2);
      if (v12 != 0 ||
          (v12 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)a1 + 88LL))(
               a1, a2)) != 0 ||
          (v12 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)a1 + 80LL))(
               a1, a2)) != 0) {
        v9 = v12;
        v10 = v17;
        if (v17 != *(_DWORD*)(a1 + 12)) {
        LABEL_16:
          CudaDriverData_1432d50(36161, v10);
        }
      LABEL_17:
        (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 32LL))(a1, a2);
        return v9;
      }
      v14 =
          CudaDriverRoutine_12e330(*(_QWORD*)(**(_QWORD**)(a1 + 832) + 120LL));
      *(_QWORD*)(a1 + 856) = v14;
      if (v14 != 0) {
        v15 = (void (*)(__int64, __int64))CudaDriverData_1432d58;
        *(_QWORD*)(a1 + 148) = 0;
        *(_QWORD*)(a1 + 140) = 0;
        v15(1, a1 + 872);
        CudaDriverData_1432d10(36010, &v16);
        CudaDriverData_1432d60(36008, *(unsigned int*)(a1 + 872));
        CudaDriverData_1432d68(36008, 36064, 36161, *(unsigned int*)(a1 + 12));
        CudaDriverData_1432d60(36008, v16);
        return 0;
      }
    }
    v9 = 2;
    v10 = v17;
    if (v17 == *(_DWORD*)(a1 + 12)) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  return 400;
}

__int64 CudaDriverHr_c2f40(__int64* a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  _DWORD* v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v15;
  __int64 v16;

  if (a2 != 0) {
    v4 = *a1;
    if (*(_DWORD*)a2 == 0) {
      return CudaDriverRoutine_98190(*a1, 0);
    }
    if ((a4 & 1) != 0) {
      v8 = (_DWORD*)a1[8];
      v9 = v8[12];
      v10 = (__int64)(v8 + 8);
      v11 = v8[13] + 16;
      v8[13] = v11;
      if (v11 >= v9) {
        v11 = 0;
        v12 = v8[14] + 1;
        v8[13] = 0;
        v8[14] = v12;
      }
      *(_DWORD*)(a2 + 4) = v11;
      *(_DWORD*)(a2 + 8) = v8[14];
    }
    else {
      CudaDriverRoutine_985a0(*a1);
      v10 = a1[8] + 112;
    }
    CudaDriverRoutine_205fa0(0, a3, &v16, 0);
    v15 = CudaDriverRoutine_1db800(*(_QWORD*)(v10 + 32));
    v16 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)(v4 + 64) + 19064LL))(v16, v15 + *(unsigned int*)(a2 + 4),
                                        *(unsigned int*)(a2 + 8), 0);
    CudaDriverRoutine_206060(a3, v16);
    if ((a4 & 1) == 0) {
      **(_BYTE**)(a2 + 16) = 1;
    }
  }
  return 0;
}

__int64 CudaDriverHr_c43e0(__int64 a1, int a2, __int64 a3, __int64 a4,
                           __int64 a5, _QWORD* a6, __int64* a7, unsigned int a8)
{
  __int64 v10;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];

  v10 = *(_QWORD*)(a1 + 1208);
  v16 = *(_QWORD*)(*(_QWORD*)(a1 + 1200) + 72LL);
  memset(v22, 0, sizeof(v22));
  LODWORD(v22[0]) = a2;
  HIDWORD(v22[3]) = a8;
  v17 = CudaDriverRoutine_5f100(v16, v22, v10);
  *a7 = v17;
  result = CudaDriverRoutine_c4540(a1, a4, a5, v17);
  if ((_DWORD)result == 0) {
    v19 = *a7;
    v20 = *(_QWORD*)(a1 + 1208);
    v21 = *(unsigned int*)(*(_QWORD*)(v19 + 33816) + 36LL);
    if (v20 == a3) {
      CudaDriverRoutine_107f90(a3 + 592);
      CudaDriverRoutine_595a0(v19, a6, 98304, a8);
      if ((a8 & 0x80) != 0) {
      LABEL_8:
        *(_QWORD*)(v19 + 33176) = v20;
        *(_DWORD*)(v20 + 736) = v21;
        *(_QWORD*)(v20 + 8 * v21 + 616) = v19;
        return 0;
      }
    }
    else {
      CudaDriverRoutine_595a0(v19, a6, 98304, a8);
      if ((a8 & 0x80) != 0) {
        goto LABEL_8;
      }
    }
    *a6 = CudaDriverRoutine_c5b00(a1, a4, a5, v19, *a6, a8);
    if (*(_BYTE*)(v20 + 336) != 0) {
      *a6 = CudaDriverRoutine_112c00();
    }
    goto LABEL_8;
  }
  return result;
}

#pragma GCC visibility pop
