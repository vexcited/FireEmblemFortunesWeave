#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern int CudaDriverData_14358d0;
extern __int64 CudaDriverData_1438938;
extern __int16 CudaDriverData_1438958;
__int64 CudaDriverRoutine_105dd0(void);
__int64 CudaDriverRoutine_1a2b00(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1b76a0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1b77e0(_QWORD);
__int64 CudaDriverRoutine_1b7920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1db1b0(_QWORD);
__int64 CudaDriverRoutine_1db800(_QWORD);
__int64 CudaDriverRoutine_1dbe40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbfd0(_QWORD);
__int64 CudaDriverRoutine_1dc880(_QWORD);
__int64 CudaDriverRoutine_1dc900(_QWORD);
__int64 CudaDriverRoutine_1dc930(_QWORD);
__int64 CudaDriverRoutine_1dd060(_QWORD);
__int64 CudaDriverRoutine_205e20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_206060(_QWORD, _QWORD);
__int64 CudaDriverRoutine_2060c0(_QWORD);
__int64 CudaDriverRoutine_2075f0(_QWORD);
__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5e9b0(_QWORD);
_QWORD* CudaDriverRoutine_640e0(_QWORD* result, __int64*, char, unsigned int);
__int64 CudaDriverRoutine_87d10(_QWORD);
bool CudaDriverRoutine_8f480(_QWORD*);
__int64 CudaDriverRoutine_92bd0(__int64, __int64, _QWORD*);
__int64 CudaDriverRoutine_944a0(_QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_985a0(_QWORD);
__int64 CudaDriverRoutine_9ab40(_QWORD);
__int64 CudaDriverRoutine_9abe0(_QWORD);
__int64 CudaDriverRoutine_ed630(_QWORD, _QWORD, const char*, ...);
__int64 CudaDriverRoutine_f6e20(_QWORD);
__int64 CudaDriverRoutine_f7f50(_QWORD);
__int64 CudaDriverRoutine_fb5d0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_fb840(_QWORD, _QWORD);
__int64 CudaDriverRoutine_fba20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void CudaDriverRoutine_fbd40(__int64, char);
__int64 CudaDriverRoutine_fc8b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_fc9d0(_QWORD, _QWORD);

__int64 CudaDriverHr_87fc0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  _DWORD* v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;

  if ((*(_BYTE*)(a1 + 28) & 0x40) == 0) {
    return 0;
  }
  v2 = *(unsigned int*)(a1 + 40);
  v3 = *(_QWORD*)(a1 + 64);
  v5 = CudaDriverRoutine_87d10(a1 + 8);
  v7 = *(unsigned __int8*)(a1 + 20) - 145;
  if (v7 >= 0xE) {
    v8 = 0;
  }
  else {
    v8 = 2;
  }
  if ((_DWORD)v2 == 0) {
    return 0;
  }
  v9 = (unsigned int)v5 >> v8;
  v10 = HIDWORD(v5) >> v8;
  if (v7 >= 0xE) {
    v11 = 0;
  }
  else {
    v11 = 3;
  }
  if (*(_DWORD*)(*(_QWORD*)v3 + 8LL) == 3) {
    result = 0;
    while (1) {
      v12 = *(_DWORD**)(v3 + 8 * result);
      v13 = v12[3];
      v14 = v12[4];
      v15 = v12[5];
      v16 = (unsigned int)(v11 + v14) >> v8;
      v17 = (unsigned int)(v11 + v13) >> v8 >= v9 && v16 >= v10;
      if (!v17 || v15 < v6) {
        break;
      }
      if (v2 == ++result) {
        return (unsigned int)v2;
      }
    }
  }
  else if (v6 <= 1) {
    result = 0;
    while (1) {
      v19 = *(_QWORD*)(v3 + 8 * result);
      v20 = (unsigned int)(v11 + *(_DWORD*)(v19 + 12)) >> v8;
      v21 = (unsigned int)(v11 + *(_DWORD*)(v19 + 16)) >> v8;
      if (v20 < v9 || v21 < v10) {
        break;
      }
      if (v2 == ++result) {
        return (unsigned int)v2;
      }
    }
  }
  else {
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_92ca0(__int64 a1)
{
  __int64 v2;
  int v3;
  _DWORD* v4;
  __int64 v5;
  _QWORD v7[2];

  if ((unsigned __int8)CudaDriverRoutine_105dd0() == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 224);
  if (v2 == 0) {
    return 0;
  }
  while (1) {
    v3 = *(_DWORD*)(v2 + 1072);
    v4 = (_DWORD*)(v2 + 1072);
    if ((v3 & 1) == 0) {
      *(_DWORD*)(v2 + 1072) = v3 | 1;
      if (CudaDriverRoutine_8f480((_QWORD*)(v2 + 848))) {
        *v4 |= 2u;
      }
      if ((unsigned __int8)CudaDriverRoutine_944a0(v2 + 848) != 0) {
        *v4 |= 4u;
      }
      v5 = *(_QWORD*)(v2 + 1080);
      if (v5 != 0) {
        v7[0] = *(_QWORD*)(v2 + 32);
        v7[1] = v2 + 1072;
        CudaDriverRoutine_1a2b00(v5, CudaDriverRoutine_92bd0, v7);
      }
    }
    if ((~*v4 & 6) == 0) {
      break;
    }
    v2 = *(_QWORD*)(v2 + 1144);
    if (v2 == 0) {
      return 0;
    }
  }
  CudaDriverRoutine_ed630(
      "CUDA", 0,
      "Function '%s' contains an unsupported interaction between different "
      "versions of CUDA Dynamic Parallelism.",
      *(const char**)(v2 + 8));
  return 812;
}

__int64 CudaDriverHr_fbf70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  int v12;
  int* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  unsigned int v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  char v28;
  __int64 v29;
  _BOOL4 v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  unsigned int v37;
  char v38;
  __int64 v39;
  __int64 v40;
  int v41;
  char v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  _DWORD* v63;
  _DWORD v64[260];

  CudaDriverRoutine_98340(*(_QWORD*)(a3 + 16));
  v8 = *(_QWORD*)(a2 + 408);
  v62 = 0;
  v63 = nullptr;
  if (v8 == 1) {
    v9 = *(_QWORD*)(a2 + 416) == 1;
    v10 = *(_DWORD*)a2;
    if (*(_DWORD*)a2 != 0) {
      goto LABEL_3;
    }
  LABEL_8:
    v11 = *(_QWORD*)(a2 + 24);
    if (v11 == 0) {
    LABEL_12:
      if (a1 == v11) {
        goto LABEL_17;
      }
      goto LABEL_13;
    }
  LABEL_11:
    v11 = CudaDriverRoutine_1dbfd0(v11);
    goto LABEL_12;
  }
  v9 = 0;
  v10 = *(_DWORD*)a2;
  if (*(_DWORD*)a2 == 0) {
    goto LABEL_8;
  }
LABEL_3:
  if (v10 == 1) {
    v11 = *(_QWORD*)(a2 + 32);
    if (v11 == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if (v10 == 2) {
    if (a1 == *(_QWORD*)(a2 + 96)) {
      goto LABEL_17;
    }
  }
  else if (a1 == 0) {
    goto LABEL_17;
  }
LABEL_13:
  if ((unsigned __int8)CudaDriverRoutine_985a0(a1) != 0 && *(_DWORD*)a2 == 1) {
    CudaDriverRoutine_1db1b0(*(_QWORD*)(a2 + 32));
  }
LABEL_17:
  v13 = (int*)(a2 + 200);
  v12 = *(_DWORD*)(a2 + 200);
  switch (v12) {
  case 0:
    v14 = *(_QWORD*)(a2 + 224);
    if (v14 == 0) {
    LABEL_24:
      if (a1 == v14) {
        goto LABEL_31;
      }
      break;
    }
  LABEL_23:
    v14 = CudaDriverRoutine_1dbfd0(v14);
    goto LABEL_24;
  case 1:
    v14 = *(_QWORD*)(a2 + 232);
    if (v14 == 0) {
      goto LABEL_24;
    }
    goto LABEL_23;
  case 2:
    if (a1 == *(_QWORD*)(a2 + 296)) {
      goto LABEL_31;
    }
    break;
  default:
    if (a1 == 0) {
      goto LABEL_31;
    }
    break;
  }
  if ((unsigned __int8)CudaDriverRoutine_985a0(a1) != 0 && *v13 == 1) {
    CudaDriverRoutine_1db1b0(*(_QWORD*)(a2 + 232));
  }
LABEL_31:
  v15 = CudaDriverRoutine_f7f50(a2);
  v16 = CudaDriverRoutine_f7f50(a2 + 200);
  CudaDriverRoutine_fbd40(a2, v9);
  if ((unsigned __int8)CudaDriverRoutine_1b76a0(a1, a2) != 0 &&
      (unsigned __int8)CudaDriverRoutine_fb5d0(a1, a2) != 0) {
    CudaDriverRoutine_25cf10(v64, 0, 1032);
    CudaDriverRoutine_1b77e0(v64);
    CudaDriverRoutine_25cf30(v64, a2, 472);
    return CudaDriverRoutine_1b7920(a1, v64, a3, a4);
  }
  v18 = CudaDriverData_14358d0;
  if (CudaDriverData_14358d0 != 0) {
    v19 = *(_DWORD*)a2;
    if (*(int*)a2 > 1) {
      if (v19 != 3) {
        if (v19 != 2 || *(_BYTE*)(a2 + 153) == 0) {
          goto LABEL_60;
        }
      LABEL_46:
        v18 = CudaDriverData_14358d0;
      }
      if (v18 < 2) {
        goto LABEL_73;
      }
      v21 = *(_DWORD*)a2;
      if (*(int*)a2 > 1) {
        if (v21 == 2) {
          if (*(_BYTE*)(a2 + 159) == 0) {
            goto LABEL_73;
          }
          goto LABEL_60;
        }
        if (v21 != 3) {
          goto LABEL_61;
        }
        v22 = CudaDriverRoutine_1dbe40(a1, *(_QWORD*)(a2 + 64), 0);
      }
      else if (v21 != 0) {
        if (v21 != 1) {
          goto LABEL_61;
        }
        v22 = *(_QWORD*)(a2 + 32);
      }
      else {
        v22 = *(_QWORD*)(a2 + 24);
      }
      if (v22 != 0 && (unsigned __int8)CudaDriverRoutine_1dd060(v22) == 0) {
        goto LABEL_73;
      }
      goto LABEL_60;
    }
    if (v19 != 0) {
      if (v19 != 1) {
        goto LABEL_60;
      }
      v20 = *(_QWORD*)(a2 + 32);
      if (v20 == 0) {
        goto LABEL_60;
      }
    }
    else {
      v20 = *(_QWORD*)(a2 + 24);
      if (v20 == 0) {
        goto LABEL_60;
      }
    }
    if ((unsigned __int8)CudaDriverRoutine_1dc880(v20) != 0) {
      goto LABEL_46;
    }
  LABEL_60:
    v21 = *(_DWORD*)a2;
  LABEL_61:
    if (v21 != 0) {
      if (v21 != 1) {
        if (v21 != 2 || *(_BYTE*)(a2 + 152) != 0 || *(_BYTE*)(a2 + 153) != 0 ||
            CudaDriverRoutine_f6e20(a2) !=
                *(_QWORD*)(*(_QWORD*)(a2 + 96) + 64LL) ||
            *(_BYTE*)(a2 + 158) != 0) {
          return 801;
        }
        goto LABEL_73;
      }
      v23 = *(_QWORD*)(a2 + 32);
      if (v23 == 0) {
        return 801;
      }
    }
    else {
      v23 = *(_QWORD*)(a2 + 24);
      if (v23 == 0) {
        return 801;
      }
    }
    if ((unsigned __int8)CudaDriverRoutine_1dc930(v23) == 0) {
      return 801;
    }
  LABEL_73:
    v24 = *v13;
    if (*v13 > 1) {
      if (v24 != 3 && (v24 != 2 || *(_BYTE*)(a2 + 353) == 0)) {
        goto LABEL_97;
      }
    }
    else {
      if (v24 != 0) {
        if (v24 != 1) {
          goto LABEL_97;
        }
        v25 = *(_QWORD*)(a2 + 232);
        if (v25 == 0) {
          goto LABEL_97;
        }
      }
      else {
        v25 = *(_QWORD*)(a2 + 224);
        if (v25 == 0) {
          goto LABEL_97;
        }
      }
      if ((unsigned __int8)CudaDriverRoutine_1dc880(v25) == 0) {
        goto LABEL_97;
      }
    }
    if ((unsigned int)CudaDriverData_14358d0 < 2) {
      goto LABEL_110;
    }
    v26 = *v13;
    if (*v13 > 1) {
      if (v26 == 2) {
        v28 = *(_BYTE*)(a2 + 359);
      LABEL_96:
        if (v28 == 0) {
          goto LABEL_110;
        }
        goto LABEL_97;
      }
      if (v26 != 3) {
        goto LABEL_98;
      }
      v27 = CudaDriverRoutine_1dbe40(a1, *(_QWORD*)(a2 + 264), 0);
    }
    else if (v26 != 0) {
      if (v26 != 1) {
        goto LABEL_98;
      }
      v27 = *(_QWORD*)(a2 + 232);
    }
    else {
      v27 = *(_QWORD*)(a2 + 224);
    }
    if (v27 != 0) {
      v28 = CudaDriverRoutine_1dd060(v27);
      goto LABEL_96;
    }
  LABEL_97:
    v26 = *v13;
  LABEL_98:
    if (v26 != 0) {
      if (v26 != 1) {
        if (v26 == 2 && *(_BYTE*)(a2 + 352) == 0 && *(_BYTE*)(a2 + 353) == 0 &&
            CudaDriverRoutine_f6e20(a2 + 200) ==
                *(_QWORD*)(*(_QWORD*)(a2 + 296) + 64LL) &&
            *(_BYTE*)(a2 + 358) == 0) {
          goto LABEL_110;
        }
        return 801;
      }
      v29 = *(_QWORD*)(a2 + 232);
      if (v29 == 0) {
        return 801;
      }
    }
    else {
      v29 = *(_QWORD*)(a2 + 224);
      if (v29 == 0) {
        return 801;
      }
    }
    if ((unsigned __int8)CudaDriverRoutine_1dc930(v29) != 0) {
      goto LABEL_110;
    }
    return 801;
  }
LABEL_110:
  CudaDriverRoutine_fb840(a1, a2);
  if (*(_DWORD*)(a2 + 200) != 0) {
    v30 = *(_DWORD*)a2 == 0;
    v31 = (unsigned __int8)v9 & (*(_DWORD*)a2 != 0);
    v61 = v31;
    if ((CudaDriverData_1438958 & 0x20) != 0) {
      goto LABEL_118;
    }
  }
  else {
    v30 = true;
    LOBYTE(v31) = 0;
    v61 = 0;
    if ((CudaDriverData_1438958 & 0x20) != 0) {
      goto LABEL_118;
    }
  }
  if ((unsigned __int8)CudaDriverRoutine_5e9b0(*(_QWORD*)(a1 + 72)) == 0) {
    v32 = *(_QWORD*)(a1 + 64);
  LABEL_121:
    if ((*(_BYTE*)(v32 + 16976) & 2) != 0) {
      v33 = 3;
    }
    else {
      v33 = 2;
    }
    if ((*(_WORD*)(*(_QWORD*)(a1 + 64) + 16848LL) & 0x80) == 0) {
      goto LABEL_127;
    }
    goto LABEL_125;
  }
  if ((v31 & 1) == 0) {
    v32 = *(_QWORD*)(a1 + 64);
    if (*(_DWORD*)(v32 + 3432) != 1) {
      goto LABEL_121;
    }
  }
LABEL_118:
  v33 = 3;
  if ((*(_WORD*)(*(_QWORD*)(a1 + 64) + 16848LL) & 0x80) != 0) {
  LABEL_125:
    if (v33 == 2) {
      return 999;
    }
  }
LABEL_127:
  memset(v64, 0, 32);
  CudaDriverRoutine_fba20(a1, a2, v33, v30, v64);
  CudaDriverRoutine_205e20(v64, a3, &v62, &v63);
  if (v64[0] == 4) {
    *(_BYTE*)(a2 + 460) = 1;
  }
  if (CudaDriverData_1438938 == 0) {
    goto LABEL_135;
  }
  v34 = *(_QWORD*)(a2 + 416);
  v59 = *(_QWORD*)(a2 + 408);
  v60 = *(_QWORD*)(a2 + 400);
  if ((unsigned __int8)CudaDriverRoutine_9abe0(*(_QWORD*)(a1 + 64)) == 0) {
    goto LABEL_135;
  }
  v58 = v34;
  v35 = v63;
  v36 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v63 + 8LL) + 64LL);
  if (*(_DWORD*)(v36 + 21864) == 1) {
    goto LABEL_135;
  }
  v37 = v63[8];
  if (v37 != 11 && v37 != 0) {
    if (v37 > 0xA) {
      goto LABEL_179;
    }
    if ((*(unsigned __int8 (**)(void*))(v36 + 21112))(
            *(void**)(*(_QWORD*)(*(_QWORD*)v63 + 8LL) + 64LL)) != 0) {
      goto LABEL_135;
    }
  }
  else if ((*(_BYTE*)(v36 + 16976) & 4) != 0) {
  LABEL_135:
    v38 = 1;
    goto LABEL_136;
  }
  v37 = v35[8];
  if (v37 == 0) {
    if (*(_DWORD*)(*((_QWORD*)v35 + 4227) + 24LL) == 1) {
      goto LABEL_135;
    }
    v37 = 0;
  }
LABEL_179:
  v38 = 1;
  if (v37 != 11 && v58 * v60 * v59 > (unsigned __int64)CudaDriverData_1438938) {
    v52 = CudaDriverRoutine_1db800(*(_QWORD*)(a1 + 8LL * (v63[8] - 1) + 1360));
    v53 = (*(__int64 (**)(__int64, _DWORD*, _QWORD, __int64, __int64, _QWORD,
                          __int64))(*(_QWORD*)(a1 + 64) + 19112LL))(
        v62, v63, 0, a1, v52, 0, 1);
    v54 = *(_QWORD*)(a1 + 64);
    v62 = v53;
    v55 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(v54 + 19096))(
        v53, v52, 1, 37);
    v38 = 0;
    v62 = v55;
  }
LABEL_136:
  CudaDriverRoutine_fc8b0(a4, a2, a3, v63, v33, &v62);
  if ((unsigned __int8)CudaDriverRoutine_9ab40(*(_QWORD*)(a1 + 64)) != 0) {
    goto LABEL_137;
  }
  v41 = *(_DWORD*)a2;
  if (*(_DWORD*)a2 == 0) {
    v48 = 24;
    goto LABEL_167;
  }
  if (v41 == 1) {
    v48 = 32;
  LABEL_167:
    v49 = *(_QWORD*)(a2 + v48);
    if (v49 == 0) {
      goto LABEL_137;
    }
    v42 = CudaDriverRoutine_1dc880(v49);
    goto LABEL_169;
  }
  if (v41 != 2) {
    goto LABEL_138;
  }
  v42 = *(_BYTE*)(a2 + 153);
LABEL_169:
  if (v42 == 0) {
    goto LABEL_137;
  }
  v50 = *(_DWORD*)a2;
  if (*(_DWORD*)a2 == 0) {
    v56 = 24;
    goto LABEL_184;
  }
  if (v50 == 1) {
    v56 = 32;
  LABEL_184:
    v57 = *(_QWORD*)(a2 + v56);
    if (v57 != 0) {
      v51 = CudaDriverRoutine_1dc900(v57);
    LABEL_186:
      if (v51 != 0) {
        CudaDriverRoutine_640e0((_QWORD*)a2, (__int64*)(a2 + 400), v61, 0);
      }
    }
  LABEL_137:
    if (*(_DWORD*)a2 == 0) {
      goto LABEL_139;
    }
    goto LABEL_138;
  }
  if (v50 == 2) {
    v51 = *(_BYTE*)(a2 + 155);
    goto LABEL_186;
  }
LABEL_138:
  *(_QWORD*)(a2 + 176) = 0;
  *(_QWORD*)(a2 + 184) = 0;
  *(_QWORD*)(a2 + 192) = 0;
LABEL_139:
  if (*v13 != 0) {
    *(_QWORD*)(a2 + 376) = 0;
    *(_QWORD*)(a2 + 384) = 0;
    *(_QWORD*)(a2 + 392) = 0;
  }
  v39 = *(_QWORD*)(a1 + 64);
  if (v33 == 3) {
    if (v61 != 0) {
      v40 = (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD, __int64,
                            _QWORD, __int64))(v39 + 19224))(
          v62, a1, v16, v15, *(_QWORD*)(a2 + 400), a2 + 424, 0, 2);
    LABEL_146:
      v62 = v40;
      goto LABEL_156;
    }
    v43 = 19272;
  }
  else {
    if (v61 != 0) {
      v40 = (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD, __int64,
                            __int64))(v39 + 19216))(
          v62, a1, v16, v15, *(_QWORD*)(a2 + 400), a2 + 424, 2);
      goto LABEL_146;
    }
    v43 = 19264;
  }
  v44 = (*(__int64 (**)(__int64*, __int64, _DWORD*, __int64, __int64, __int64,
                        __int64))(v39 + v43))(&v62, a1, v63, v16, v15, a2, 2);
  if (v44 == 0) {
  LABEL_156:
    CudaDriverRoutine_fc9d0(a4, &v62);
    v45 = 1;
    v46 = 0;
    if ((v38 & 1) != 0) {
      goto LABEL_158;
    }
    goto LABEL_157;
  }
  v45 = 0;
  v46 = v44;
  if ((v38 & 1) == 0) {
  LABEL_157:
    v47 = CudaDriverRoutine_1db800(*(_QWORD*)(a1 + 8LL * (v63[8] - 1) + 1360));
    v62 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)(a1 + 64) + 19096LL))(v62, v47, 0xFFFFFFFFLL, 37);
  }
LABEL_158:
  if (v33 == 2) {
    CudaDriverRoutine_2060c0(a3);
    result = v46;
    if (v45 == 0) {
      return result;
    }
  }
  else {
    CudaDriverRoutine_206060(a3, v62);
    result = v46;
    if (v45 == 0) {
      return result;
    }
  }
  if (*(_QWORD*)(a4 + 8) != 0) {
    CudaDriverRoutine_2075f0(*(_QWORD*)(a4 + 8));
    return v46;
  }
  return result;
}

#pragma GCC visibility pop
