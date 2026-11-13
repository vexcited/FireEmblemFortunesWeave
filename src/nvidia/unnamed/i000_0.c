#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN CudaDriverData_1411d90;

extern __int64 (*CudaDriverData_1423158[13])();

extern __int64 (*CudaDriverData_1423160[12])();

extern __int64 (*CudaDriverData_1423168[11])();

extern __int64 (*CudaDriverData_1423170[10])();

extern __int64 (*CudaDriverData_1423178[9])();

extern __int64 (*CudaDriverData_1423180[8])();

extern __int64 (*CudaDriverData_1423188[7])();

extern _UNKNOWN* CudaDriverData_14245d8;

extern __int64 CudaDriverData_14324d0;

extern char CudaDriverData_1434758;

extern _UNKNOWN CudaDriverData_14347a8;

extern int CudaDriverData_1434ac0;

extern __int128 CudaDriverData_14403f8;

__int64 CudaDriverRoutine_105c00(void);

__int64 CudaDriverRoutine_105df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);

__int64 CudaDriverRoutine_108490(_QWORD);

__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_1085d0(_QWORD);

__int64 CudaDriverRoutine_1223e0(_QWORD);

__int64 CudaDriverRoutine_12e330(_QWORD);

__int64 CudaDriverRoutine_12e340(_QWORD);

__int64 CudaDriverRoutine_194640(_QWORD);

__int64 CudaDriverRoutine_195ad0(_QWORD);

__int64 CudaDriverRoutine_199dd0(void);

__int64 CudaDriverRoutine_19e6f0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_1a0640(_QWORD, _QWORD);

__int64 CudaDriverRoutine_1a0740(_QWORD);

__int64 CudaDriverRoutine_1a1060();

__int64 CudaDriverRoutine_1a2980(_QWORD, _QWORD);

__int64 CudaDriverRoutine_1c1350(void);

__int64 CudaDriverRoutine_1cb9d0();

__int64 CudaDriverRoutine_1cbaa0();

__int64 CudaDriverRoutine_1cbb50();

__int64 CudaDriverRoutine_1cbbc0();

__int64 CudaDriverRoutine_1cbc60();

__int64 CudaDriverRoutine_1cbcc0();

__int64 CudaDriverRoutine_1cbda0();

__int64 CudaDriverRoutine_1cbdc0();

__int64 CudaDriverRoutine_1cbde0();

__int64 CudaDriverRoutine_1cbe80();

__int64 CudaDriverRoutine_1cbec0();

__int64 CudaDriverRoutine_1cbf80();

__int64 CudaDriverRoutine_1cc4e0();

__int64 CudaDriverRoutine_1cc6c0();

__int64 CudaDriverRoutine_1cc8f0();

__int64 CudaDriverRoutine_1cc920();

__int64 CudaDriverRoutine_1cc9d0();

__int64 CudaDriverRoutine_1cc9e0();

__int64 CudaDriverRoutine_1ccb40();

__int64 CudaDriverRoutine_1ccc30();

__int64 CudaDriverRoutine_1ccd20();

__int64 CudaDriverRoutine_1ccf10();

__int64 CudaDriverRoutine_1d9f90(_QWORD);

__int64 CudaDriverRoutine_1da1b0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_1db800(_QWORD);

__int64 CudaDriverRoutine_1db920(_QWORD);

__int64 CudaDriverRoutine_1dbfd0(_QWORD);

__int64 CudaDriverRoutine_1dc800(_QWORD, _QWORD);

__int64 CudaDriverRoutine_1dd030(_QWORD);

__int64 CudaDriverRoutine_2080d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_222860(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_222a80(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_223310(_QWORD, _QWORD);

__int64 CudaDriverRoutine_223400(_QWORD, _QWORD);

__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_4f840(_QWORD);

__int64 CudaDriverRoutine_76a80(_QWORD);

__int64 CudaDriverRoutine_76be0();

__int64 CudaDriverRoutine_87110(_QWORD, _QWORD);

__int64 CudaDriverRoutine_874e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_8bb20(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_91bd0(_QWORD);

__int64 CudaDriverRoutine_98340(_QWORD);

__int64 CudaDriverRoutine_98b30(_QWORD, _QWORD);

__int64 CudaDriverRoutine_bae90(_QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_e37c0(_QWORD);

__int64 CudaDriverRoutine_f6230(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD);

bool CudaDriverHr_3150(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_31c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v10;

  result = *(_QWORD*)(a1 + 2112);
  v4 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v5 = *(_DWORD*)(v4 + 8);
  v6 = a2 - v5;
  if ((unsigned int)a2 >= v5 && *(_DWORD*)(v4 + 12) + v5 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v4 + 24) + 4LL * v6) == 3) {
    v7 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 8LL * v6);
    *(_QWORD*)a3 = v7;
    v8 = *(unsigned __int8*)(v7 + 517);
    if (v8 != 1) {
      v7 = 0;
    }
    *(_QWORD*)a3 = v7;
    if (v8 == 1) {
      v10 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v10 + 96);
    }
  }
  return result;
}

bool CudaDriverHr_15980(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_159f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v10;

  result = *(_QWORD*)(a1 + 2112);
  v4 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v5 = *(_DWORD*)(v4 + 8);
  v6 = a2 - v5;
  if ((unsigned int)a2 >= v5 && *(_DWORD*)(v4 + 12) + v5 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v4 + 24) + 4LL * v6) == 3) {
    v7 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 8LL * v6);
    *(_QWORD*)a3 = v7;
    v8 = *(unsigned __int8*)(v7 + 517);
    if (v8 != 1) {
      v7 = 0;
    }
    *(_QWORD*)a3 = v7;
    if (v8 == 1) {
      v10 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v10 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_38360(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = result;
  if (a2 != 0) {
    v3 = CudaDriverRoutine_1dbfd0(result);
    if (v3 != 0 &&
        (v4 = v3, (unsigned __int8)CudaDriverRoutine_1dd030(v2) == 0)) {
      CudaDriverRoutine_98b30(v4, v2);
      result = v2;
    }
    else {
      result = v2;
    }
    *(_BYTE*)(result + 472) |= 1u;
  }
  else {
    *(_BYTE*)(result + 472) &= ~1u;
  }
  return result;
}

bool CudaDriverHr_69de0(int a1)
{
  _BOOL8 result;

  result = a1 != 0;
  CudaDriverData_1434758 = result;
  return result;
}

__int64 CudaDriverHr_76a90(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (result != 0) {
    v1 = (_QWORD*)result;
    CudaDriverRoutine_222a80(*(_QWORD*)(result + 32), CudaDriverRoutine_76be0,
                             0);
    v2 = v1[3];
    v1[4] = 0;
    CudaDriverRoutine_12e340(v2);
    v3 = v1[8];
    v1[3] = 0;
    v1[5] = 0;
    v1[6] = 0;
    CudaDriverRoutine_12e340(v3);
    v4 = v1[10];
    v1[8] = 0;
    CudaDriverRoutine_12e340(v4);
    v1[10] = 0;
    return CudaDriverRoutine_12e340(v1);
  }
  return result;
}

__int64 CudaDriverHr_76be0(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 vars0;
  __int64 _28;

  if (result != 0) {
    v1 = (_QWORD*)result;
    CudaDriverRoutine_223400(CudaDriverData_14324d0, *(_QWORD*)(result + 48));
    CudaDriverRoutine_223400(*(_QWORD*)(*(_QWORD*)(v1[9] + 16LL) + 128LL),
                             v1[5]);
    CudaDriverRoutine_222a80(v1[11], CudaDriverRoutine_76a80, 0);
    v2 = v1[12];
    v1[11] = 0;
    if (v2 != 0) {
      CudaDriverRoutine_222a80(v2, CudaDriverRoutine_76a80, 0);
      v1[12] = 0;
    }
    v3 = CudaDriverRoutine_223310(*(_QWORD*)(*(_QWORD*)(v1[9] + 16LL) + 136LL),
                                  v1[5]);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 56);
      v5 = (_QWORD*)v3;
      if (v4 != 0) {
        if (*(_DWORD*)(v3 + 32) != 0) {
          CudaDriverRoutine_223400(*(_QWORD*)(v4 + 136), *(_QWORD*)(v3 + 16));
        }
        v6 = v5[1];
        if (v6 != 0) {
          CudaDriverRoutine_222860(*(_QWORD*)(v5[7] + 152LL), v6, 0);
        }
      }
      CudaDriverRoutine_222a80(v5[11], CudaDriverRoutine_76a80, 0);
      CudaDriverRoutine_222a80(v5[12], CudaDriverRoutine_76a80, 0);
      CudaDriverRoutine_12e340(v5);
    }
    v7 = v1;
    v8 = v1[18];
    if (v8 != 0) {
      vars0 = _28;
      CudaDriverRoutine_222a80(v8, CudaDriverRoutine_1a1060, 0);
      v7 = v1;
      v1[18] = 0;
    }
    return CudaDriverRoutine_12e340(v7);
  }
  return result;
}

void CudaDriverHr_816f0(__int64 a1, unsigned int a2, int a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        __int64 a9, __int64 a10)
{
  __int64 v11;
  __int64 v12;

  if (a10 != 0) {
    if (a3 != 5) {
      a4 = a5;
    }
    v11 = *(_QWORD*)(*(_QWORD*)a10 + 72LL);
    if (v11 != 0 && *(_QWORD*)(v11 + 56) >= (unsigned __int64)a2) {
      v12 = *(_QWORD*)(v11 + 16);
      if (v12 != 0) {
        *(_QWORD*)(v12 + 24LL * a2 + 8) = a4;
      }
    }
  }
}

__int64 CudaDriverHr_87190(__int64 a1, unsigned int* a2, unsigned __int8 a3,
                           unsigned int a4, char a5)
{
  char v10;
  int v11;
  int v12;
  __int64 result;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  _BOOL4 v19;
  char v20;
  int v21;
  _BOOL4 v23;
  _BOOL4 v24;
  char v25;
  int v26;
  unsigned int v27;
  bool v28;
  bool v29;
  _DWORD* v30;
  int v31;
  _BOOL4 v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  bool v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  unsigned int v56;

  if (a2 == nullptr) {
    return 1;
  }
  v10 = CudaDriverRoutine_4f840(*(_QWORD*)(a1 + 64));
  v11 = a2[5];
  v12 = v10 != 0 ? 2147483152 : 2147483216;
  if ((v12 & v11) != 0 || a5 != 0 && (v11 & 0x80) != 0) {
    return 1;
  }
  if ((v11 & 0x40) != 0) {
    result = 1;
    if (a5 != 0 || (v11 & 0xA6) != 0) {
      return result;
    }
  }
  else if (a5 != 0) {
    goto LABEL_16;
  }
  if ((v11 & 0x20) != 0) {
    return 1;
  }
LABEL_16:
  v14 = *a2;
  v15 = a2[1];
  v16 = a2[2];
  v17 = v16 | a2[5] & 1;
  v19 = *a2 == 0 || v15 != 0;
  if ((v11 & 4) == 0 && !v19 && v17 == 0) {
    LOBYTE(result) = 1;
    v20 = 1;
    v21 = 1;
    goto LABEL_50;
  }
  v23 = v14 != 0 && v15 != 0;
  if ((v11 & 4) == 0 && v23 && v17 == 0) {
    LOBYTE(result) = 0;
    v21 = 2;
  LABEL_49:
    v20 = 1;
    goto LABEL_50;
  }
  v24 = v16 != 0 && v23;
  if ((v11 & 4) == 0 && (v11 & 1) == 0 && v24) {
    v21 = 3;
  LABEL_48:
    LOBYTE(result) = 1;
    goto LABEL_49;
  }
  if ((v11 & 4) == 0 && (v11 & 1) != 0 && !v19 && v16 != 0) {
    v21 = 4;
    goto LABEL_48;
  }
  if ((v11 & 4) != 0 || (a2[5] & 1 & v24) == 0) {
    if (v14 == 0) {
      return 1;
    }
    if ((v11 & 1) != 0 || (v11 & 4) == 0 || v14 != v15 || v16 != 6) {
      result = 1;
      if (v14 != v15 || v16 == 0 || (v11 & 4) == 0 || (v11 & 1) == 0 ||
          v16 % 6 != 0) {
        return result;
      }
      v21 = 7;
      goto LABEL_49;
    }
    v21 = 6;
    goto LABEL_48;
  }
  v20 = 0;
  v21 = 5;
  LOBYTE(result) = 1;
LABEL_50:
  if (v11 < 0) {
    v25 = result;
  }
  else {
    v25 = 0;
  }
  result = 1;
  if ((v25 & 1) != 0 ||
      (*(_DWORD*)&v20 & ((unsigned int)(v21 - 4) < 0xFFFFFFFE) &
       (a2[5] >> 6)) != 0) {
    return result;
  }
  v26 = *((unsigned __int8*)a2 + 12);
  v56 = a2[2];
  if ((unsigned int)CudaDriverRoutine_87110(*((unsigned __int8*)a2 + 12),
                                            a2[4]) != 0) {
    return 1;
  }
  if ((unsigned int)(v26 - 159) <= 0x16 &&
      ((1 << (v26 - 159)) & 0x7E07FD) != 0) {
    if (v21 != 5 && v21 != 2) {
      return 1;
    }
    v27 = v56;
    result = 1;
    if ((v15 & 1) != 0 || a4 > 1 || (v14 & 1) != 0) {
      return result;
    }
    v28 = a5 != 0 && v26 == 176;
    v29 = v28;
    if ((v11 & 0x100) == 0 && !v29) {
      return result;
    }
    goto LABEL_82;
  }
  v27 = v56;
  if ((unsigned int)(v26 - 159) < 0xFFFFFFF2) {
  LABEL_82:
    v30 = *(_DWORD**)(a1 + 64);
    if ((v11 & 2) == 0) {
      goto LABEL_96;
    }
    v31 = CudaDriverRoutine_874e0(v30, (unsigned int)v21, v14, v15, v56);
    v27 = v56;
    if (v31 == 0) {
      goto LABEL_96;
    }
    return 1;
  }
  if ((v11 & 2) != 0) {
    return 801;
  }
  result = 1;
  if (v21 == 1 || v21 == 4) {
    return result;
  }
  v30 = *(_DWORD**)(a1 + 64);
LABEL_96:
  v32 = (v11 & 8) != 0;
  if (v21 != 2 && (v11 & 8) != 0) {
    return 1;
  }
  if (v21 <= 3) {
    if (v21 == 1) {
      v43 = 1034;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      if (a3 == 0) {
        v43 = 986;
      }
      if (v14 <= v30[v43] && v15 == 0 && v27 == 0) {
        return 0;
      }
    }
    else if (v21 == 2) {
      v50 = (v32 | a3) == 0;
      v51 = 1035;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      if ((v32 | a3) == 0) {
        v51 = 987;
      }
      v52 = 1036;
      if (v50) {
        v52 = 988;
      }
      v53 = v30[v52];
      if (v14 <= v30[v51] && v15 <= v53 && v27 == 0) {
        return 0;
      }
    }
    else {
      v36 = v30[997];
      v37 = v30[998];
      v38 = v30[999];
      if (v14 <= v30[994] && v15 <= v30[995] && v27 <= v30[996]) {
        return 0;
      }
    }
  }
  else if (v21 > 5) {
    if (v21 == 6) {
      v41 = v30[1000];
      v42 = 6;
    }
    else {
      v41 = v30[1023];
      v42 = v30[1024];
    }
    v36 = 0;
    v37 = 0;
    v38 = 0;
    if (v14 <= v41 && v15 <= v41 && v27 <= v42) {
      return 0;
    }
  }
  else {
    if (v21 == 4) {
      v33 = v30[1018];
      v35 = v30[1019];
      v34 = 0;
    }
    else {
      v33 = v30[1020];
      v34 = v30[1021];
      v35 = v30[1022];
    }
    v36 = 0;
    v37 = 0;
    v38 = 0;
    if (v14 <= v33 && v15 <= v34 && v27 <= v35) {
      return 0;
    }
  }
  result = 1;
  if (v14 <= v36 && v15 <= v37 && v27 <= v38) {
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_92160(__int64 a1)
{
  __int64 (*v3)();
  __int64 (*v4)();
  __int64 (*v5)();
  __int64 (*v6)();

  CudaDriverRoutine_91bd0(a1 + 1088);
  v3 = CudaDriverData_1423168[0];
  v4 = CudaDriverData_1423170[0];
  v5 = CudaDriverData_1423158[0];
  *(__int64 (**)())(a1 + 1144) = CudaDriverData_1423160[0];
  *(_QWORD*)(a1 + 1152) = v3;
  *(_QWORD*)(a1 + 1160) = v4;
  *(_QWORD*)(a1 + 1168) = v5;
  v6 = CudaDriverData_1423180[0];
  *(__int64 (**)())(a1 + 1176) = CudaDriverData_1423178[0];
  *(_QWORD*)(a1 + 1184) = v6;
  *(__int64 (**)())(a1 + 1192) = CudaDriverData_1423188[0];
  return a1 + 1144;
}

__int64 CudaDriverHr_98870(__int64 result)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_uint* volatile)(result + 48), 0xFFFFFFFF) == 1 &&
      (*(_BYTE*)(result + 12) & 2) == 0) {
    if (*(_DWORD*)result == 1) {
      *(_OWORD*)(result + 16) = 0u;
      *(_OWORD*)(result + 32) = 0u;
      *(_OWORD*)(result + 48) = 0u;
      *(_OWORD*)(result + 64) = 0u;
      *(_OWORD*)result = 0u;
      *(_OWORD*)(result + 80) = 0u;
      *(_OWORD*)(result + 96) = 0u;
      *(_OWORD*)(result + 112) = 0u;
      *(_OWORD*)(result + 128) = 0u;
      *(_OWORD*)(result + 144) = 0u;
      *(_OWORD*)(result + 160) = 0u;
      *(_OWORD*)(result + 176) = 0u;
      *(_OWORD*)(result + 192) = 0u;
      *(_OWORD*)(result + 208) = 0u;
      *(_OWORD*)(result + 224) = 0u;
      *(_OWORD*)(result + 240) = 0u;
      *(_OWORD*)(result + 256) = 0u;
    }
    else {
      v1 = result;
      CudaDriverRoutine_108490(result + 24);
      CudaDriverRoutine_25cf10(v1, 0, 17864);
      result = v1;
    }
    return CudaDriverRoutine_12e340(result);
  }
  return result;
}

__int64 CudaDriverHr_a2830(__int64 result)
{
  atomic_fetch_add((atomic_ullong* volatile)(result + 8), 1u);
  return result;
}

bool CudaDriverHr_a2850(__int64 a1)
{
  return (*(_BYTE*)(a1 + 232) & 0x40) != 0;
}

__int64 CudaDriverHr_107130(__int64 a1, _QWORD* a2)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 80);
  if (*(_BYTE*)v3 != 0) {
    if (a2 != nullptr) {
      *a2 = *(_QWORD*)(v3 + 24);
    }
    return v3 + *(_QWORD*)(v3 + 16);
  }
  else {
    if (a2 != nullptr) {
      *a2 = *(_QWORD*)(v3 + 24);
    }
    return v3 + *(_QWORD*)(v3 + 16);
  }
}

__int64 CudaDriverHr_128a40(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;

  result = CudaDriverRoutine_1d9f90(a1[79]);
  if ((_BYTE)result != 0) {
    v3 = a1[30];
    v4 = a1[31];
    v5 = a1 + 30;
    result = CudaDriverRoutine_1dc800(v3, v4);
    if ((_BYTE)result == 0 && (*v5 & 0x7E00LL) != 0x2000) {
      if ((*v5 & 0x7E00LL) == 0xE00) {
        return *((_BYTE*)v5 + 84) != 0 || *((_BYTE*)v5 + 85) != 0;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

bool CudaDriverHr_1a7d90(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_1a7e00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v10;

  result = *(_QWORD*)(a1 + 2112);
  v4 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v5 = *(_DWORD*)(v4 + 8);
  v6 = a2 - v5;
  if ((unsigned int)a2 >= v5 && *(_DWORD*)(v4 + 12) + v5 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v4 + 24) + 4LL * v6) == 3) {
    v7 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 8LL * v6);
    *(_QWORD*)a3 = v7;
    v8 = *(unsigned __int8*)(v7 + 517);
    if (v8 != 1) {
      v7 = 0;
    }
    *(_QWORD*)a3 = v7;
    if (v8 == 1) {
      v10 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v10 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_1aa8d0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  *(_DWORD*)a1 = 537198615;
  *(_QWORD*)(a1 + 4) = a4;
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 20) = 1;
  return a1 + 24;
}

__int64 CudaDriverHr_1ab730(__int64 a1)
{
  __int64 result;
  _OWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned int v8;
  _QWORD v9[29];

  result = CudaDriverRoutine_199dd0();
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_194640(a1);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_195ad0(a1);
      if ((_DWORD)result == 0) {
        if (*(_QWORD*)(a1 + 2248) != 0) {
          return 0;
        }
        v9[23] = v9[25];
        v9[24] = v9[26];
        v9[28] = v9[27];
        v3 = (_OWORD*)CudaDriverRoutine_12e330(80);
        if (v3 != nullptr) {
          v4 = v3;
          v3[1] = 0u;
          v3[2] = 0u;
          v3[3] = 0u;
          v3[4] = 0u;
          *v3 = 0u;
          *(_QWORD*)(a1 + 2248) = v3;
          CudaDriverRoutine_e37c0(v9);
          v5 = CudaDriverRoutine_8bb20(
              CudaDriverData_14245d8,
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3152LL),
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3156LL));
          v6 = CudaDriverRoutine_98340(a1);
          result = CudaDriverRoutine_105df0(v6, v4, v5, 0, v9,
                                            *(unsigned int*)(a1 + 188));
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bae90(*v4, "IntAligned_AtoD3D_nosurf",
                                             v4 + 1);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_bae90(*v4, "IntAligned_DtoA3D_nosurf",
                                               v4 + 2);
              if ((_DWORD)result == 0) {
                result = CudaDriverRoutine_bae90(
                    *v4, "CharAligned_DtoA3D_nosurf", v4 + 8);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_bae90(
                      *v4, "CharAligned_AtoD3D_nosurf", v4 + 7);
                  if ((_DWORD)result == 0) {
                    result = CudaDriverRoutine_bae90(
                        *v4, "ShortAligned_AtoD3D_nosurf", v4 + 4);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_bae90(
                          *v4, "ShortAligned_DtoA3D_nosurf", v4 + 5);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_bae90(
                            *v4, "ShortAligned_AtoA_nosurf", v4 + 6);
                        if ((_DWORD)result == 0) {
                          result = CudaDriverRoutine_bae90(
                              *v4, "CharAligned_AtoA_nosurf", v4 + 9);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_bae90(
                                *v4, "IntAligned_AtoA_nosurf", v4 + 3);
                            if ((_DWORD)result == 0) {
                              return result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          result = 2;
        }
        v7 = *(_QWORD**)(a1 + 2248);
        if (v7 != nullptr) {
          v8 = result;
          if (*v7 != 0) {
            CudaDriverRoutine_105c00();
            *v7 = 0;
          }
          CudaDriverRoutine_12e340(v7);
          *(_QWORD*)(a1 + 2248) = 0;
          return v8;
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_1ab8f0(__int64 a1, __int64 a2)
{
  CudaDriverRoutine_1223e0(*(_QWORD*)(a2 + 1344));
  return a1;
}

_QWORD* CudaDriverHr_1bc4b0(_QWORD* a1)
{
  CudaDriverRoutine_1c1350();
  a1[441] = CudaDriverRoutine_1cb9d0;
  a1[444] = CudaDriverRoutine_1cbaa0;
  a1[451] = CudaDriverRoutine_1cbb50;
  a1[435] = CudaDriverRoutine_1cbbc0;
  a1[436] = CudaDriverRoutine_1cbc60;
  a1[437] = CudaDriverRoutine_1cbcc0;
  a1[438] = CudaDriverRoutine_1cbda0;
  a1[439] = CudaDriverRoutine_1cbdc0;
  a1[440] = CudaDriverRoutine_1cbde0;
  a1[442] = CudaDriverRoutine_1cbe80;
  a1[443] = CudaDriverRoutine_1cbec0;
  a1[445] = CudaDriverRoutine_1cbf80;
  a1[446] = CudaDriverRoutine_1cc4e0;
  a1[447] = CudaDriverRoutine_1cc6c0;
  a1[448] = CudaDriverRoutine_1cc8f0;
  a1[449] = CudaDriverRoutine_1cc920;
  a1[450] = CudaDriverRoutine_1cc9d0;
  a1[452] = CudaDriverRoutine_1cc9e0;
  a1[454] = CudaDriverRoutine_1ccc30;
  a1[453] = CudaDriverRoutine_1ccb40;
  a1[455] = CudaDriverRoutine_1ccd20;
  a1[456] = CudaDriverRoutine_1ccf10;
  return a1;
}

bool CudaDriverHr_1bf0c0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_1bf130(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v10;

  result = *(_QWORD*)(a1 + 2112);
  v4 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v5 = *(_DWORD*)(v4 + 8);
  v6 = a2 - v5;
  if ((unsigned int)a2 >= v5 && *(_DWORD*)(v4 + 12) + v5 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v4 + 24) + 4LL * v6) == 3) {
    v7 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 8LL * v6);
    *(_QWORD*)a3 = v7;
    v8 = *(unsigned __int8*)(v7 + 517);
    if (v8 != 1) {
      v7 = 0;
    }
    *(_QWORD*)a3 = v7;
    if (v8 == 1) {
      v10 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v10 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_1c94d0(_QWORD* a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;
  __int64 vars10;
  __int64 _18;

  v4 = a1[6];
  if (v4 == -1 ||
      (_DWORD)(result = CudaDriverRoutine_19e6f0(
                   a1[14], v4, *(_QWORD*)(a1[1] + 23375296LL), a2)) == 0) {
    result = CudaDriverRoutine_1a0640(a1, a2);
    if ((_DWORD)result == 0) {
      if ((CudaDriverData_14403f8 & 4) != 0 && (a2 & 0xFFFFFFFD) == 0) {
        v2 = a1[78];
        if (v2 != 0) {
          vars10 = _18;
          CudaDriverRoutine_222a80(v2, CudaDriverRoutine_1a0740, 0);
          a1[78] = 0;
        }
      }
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_1cdbb0(__int64 a1)
{
  __int64 result;
  _OWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned int v8;
  _QWORD v9[29];

  result = CudaDriverRoutine_199dd0();
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_194640(a1);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_195ad0(a1);
      if ((_DWORD)result == 0) {
        if (*(_QWORD*)(a1 + 2248) != 0) {
          return 0;
        }
        v9[23] = v9[25];
        v9[24] = v9[26];
        v9[28] = v9[27];
        v3 = (_OWORD*)CudaDriverRoutine_12e330(80);
        if (v3 != nullptr) {
          v4 = v3;
          v3[1] = 0u;
          v3[2] = 0u;
          v3[3] = 0u;
          v3[4] = 0u;
          *v3 = 0u;
          *(_QWORD*)(a1 + 2248) = v3;
          CudaDriverRoutine_e37c0(v9);
          v5 = CudaDriverRoutine_8bb20(
              CudaDriverData_14245d8,
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3152LL),
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3156LL));
          v6 = CudaDriverRoutine_98340(a1);
          result = CudaDriverRoutine_105df0(v6, v4, v5, 0, v9,
                                            *(unsigned int*)(a1 + 188));
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bae90(*v4, "IntAligned_AtoD3D_nosurf",
                                             v4 + 1);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_bae90(*v4, "IntAligned_DtoA3D_nosurf",
                                               v4 + 2);
              if ((_DWORD)result == 0) {
                result = CudaDriverRoutine_bae90(
                    *v4, "CharAligned_DtoA3D_nosurf", v4 + 8);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_bae90(
                      *v4, "CharAligned_AtoD3D_nosurf", v4 + 7);
                  if ((_DWORD)result == 0) {
                    result = CudaDriverRoutine_bae90(
                        *v4, "ShortAligned_AtoD3D_nosurf", v4 + 4);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_bae90(
                          *v4, "ShortAligned_DtoA3D_nosurf", v4 + 5);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_bae90(
                            *v4, "ShortAligned_AtoA_nosurf", v4 + 6);
                        if ((_DWORD)result == 0) {
                          result = CudaDriverRoutine_bae90(
                              *v4, "CharAligned_AtoA_nosurf", v4 + 9);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_bae90(
                                *v4, "IntAligned_AtoA_nosurf", v4 + 3);
                            if ((_DWORD)result == 0) {
                              return result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          result = 2;
        }
        v7 = *(_QWORD**)(a1 + 2248);
        if (v7 != nullptr) {
          v8 = result;
          if (*v7 != 0) {
            CudaDriverRoutine_105c00();
            *v7 = 0;
          }
          CudaDriverRoutine_12e340(v7);
          *(_QWORD*)(a1 + 2248) = 0;
          return v8;
        }
      }
    }
  }
  return result;
}

bool CudaDriverHr_1f1040(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_1f10b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v10;

  result = *(_QWORD*)(a1 + 2112);
  v4 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v5 = *(_DWORD*)(v4 + 8);
  v6 = a2 - v5;
  if ((unsigned int)a2 >= v5 && *(_DWORD*)(v4 + 12) + v5 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v4 + 24) + 4LL * v6) == 3) {
    v7 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 8LL * v6);
    *(_QWORD*)a3 = v7;
    v8 = *(unsigned __int8*)(v7 + 517);
    if (v8 != 1) {
      v7 = 0;
    }
    *(_QWORD*)a3 = v7;
    if (v8 == 1) {
      v10 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v10 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_1f5f10(__int64 a1)
{
  _OWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  __int64 result;
  _QWORD v9[29];

  result = CudaDriverRoutine_199dd0();
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_194640(a1);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_195ad0(a1);
      if ((_DWORD)result == 0) {
        if (*(_QWORD*)(a1 + 2248) != 0) {
          return 0;
        }
        v9[23] = v9[25];
        v9[24] = v9[26];
        v9[28] = v9[27];
        v1 = (_OWORD*)CudaDriverRoutine_12e330(80);
        if (v1 != nullptr) {
          v2 = v1;
          v1[1] = 0u;
          v1[2] = 0u;
          v1[3] = 0u;
          v1[4] = 0u;
          *v1 = 0u;
          *(_QWORD*)(a1 + 2248) = v1;
          CudaDriverRoutine_e37c0(v9);
          v3 = CudaDriverRoutine_8bb20(
              CudaDriverData_14245d8,
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3152LL),
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3156LL));
          v4 = CudaDriverRoutine_98340(a1);
          result = CudaDriverRoutine_105df0(v4, v2, v3, 0, v9,
                                            *(unsigned int*)(a1 + 188));
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bae90(*v2, "IntAligned_AtoD3D_nosurf",
                                             v2 + 1);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_bae90(*v2, "IntAligned_DtoA3D_nosurf",
                                               v2 + 2);
              if ((_DWORD)result == 0) {
                result = CudaDriverRoutine_bae90(
                    *v2, "CharAligned_DtoA3D_nosurf", v2 + 8);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_bae90(
                      *v2, "CharAligned_AtoD3D_nosurf", v2 + 7);
                  if ((_DWORD)result == 0) {
                    result = CudaDriverRoutine_bae90(
                        *v2, "ShortAligned_AtoD3D_nosurf", v2 + 4);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_bae90(
                          *v2, "ShortAligned_DtoA3D_nosurf", v2 + 5);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_bae90(
                            *v2, "ShortAligned_AtoA_nosurf", v2 + 6);
                        if ((_DWORD)result == 0) {
                          result = CudaDriverRoutine_bae90(
                              *v2, "CharAligned_AtoA_nosurf", v2 + 9);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_bae90(
                                *v2, "IntAligned_AtoA_nosurf", v2 + 3);
                            if ((_DWORD)result == 0) {
                              return result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          result = 2;
        }
        v5 = *(_QWORD**)(a1 + 2248);
        if (v5 != nullptr) {
          v6 = result;
          if (*v5 != 0) {
            CudaDriverRoutine_105c00();
            *v5 = 0;
          }
          CudaDriverRoutine_12e340(v5);
          *(_QWORD*)(a1 + 2248) = 0;
          return v6;
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_218210(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
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
  __int128 v47;
  __int64 v48;
  _QWORD v49[3];

  if (a2 == 0 || *(_DWORD*)(a1 + 4) != 13) {
    return 1;
  }
  v49[1] = v3;
  v49[2] = v4;
  v5 = *(_QWORD*)(a1 + 24);
  if (*(_DWORD*)(v5 + 4) != 2) {
    return 1;
  }
  v6 = *(_QWORD*)(a1 + 1200);
  v7 = *(_QWORD*)(v5 + 376);
  v11 = CudaDriverRoutine_98340(v6);
  v12 = CudaDriverRoutine_1a2980(v7, v11);
  if (*(_DWORD*)(a1 + 44) == 0) {
    return 1;
  }
  v13 = *(_DWORD*)(a1 + 72);
  if (*(_QWORD*)(*(_QWORD*)(v12 + 224) + 24LL * v13) != 0) {
    v49[0] = CudaDriverRoutine_1db920(*(_QWORD*)(v6 + 80));
  }
  else {
    v22 = *(_QWORD*)(a1 + 1200);
    v48 = 0;
    v23 = v12;
    v40 = 0u;
    v42 = 0u;
    v43 = 0u;
    v44 = 0u;
    v45 = 0u;
    v41 = 0u;
    v39 = 0u;
    v38 = 0u;
    v37 = 0u;
    v36 = 0u;
    v35 = 0u;
    v34 = 0u;
    v33 = 0u;
    v46 = 0u;
    v47 = 0u;
    v24 = 0x10C000202LL;
    v25 = 0u;
    v26 = 0u;
    v27 = 0u;
    v28 = 0u;
    v29 = 0u;
    v30 = 0u;
    v31 = 0u;
    v32 = 0u;
    result = CudaDriverRoutine_1da1b0(*(_QWORD*)(v22 + 80), &v24, a3, v49);
    if ((_DWORD)result != 0) {
      return result;
    }
    *(_QWORD*)(*(_QWORD*)(v23 + 224) + 24LL * v13) =
        CudaDriverRoutine_1db800(v49[0]);
  }
  v14 = CudaDriverRoutine_98340(v6);
  CudaDriverRoutine_108520(v14 + 24, 0, 0, 0);
  v15 = CudaDriverRoutine_98340(v6);
  v16 = v49[0];
  v17 = v15;
  v18 = CudaDriverRoutine_98340(v6);
  v19 =
      CudaDriverRoutine_f6230(v17, v16, 0, a2, a3, *(_QWORD*)(v18 + 96), 2, 0);
  v20 = CudaDriverRoutine_98340(v6);
  CudaDriverRoutine_1085d0(v20 + 24);
  result = v19;
  if (v19 == 0) {
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_220970(int a1, int a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
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
  int* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int* v28;
  __int64 v29;
  int v30;
  int v31;
  _DWORD* v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  _DWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int* v45;
  int* v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int* v56;
  int* v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  unsigned __int8* v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  _DWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int* v81;
  _DWORD* v82;
  __int64 v83;
  int* v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int* v94;
  int* v95;
  int* v96;
  __int64 v97;
  int v98;
  int v99;
  int v100;
  unsigned __int8* v101;
  int v102;
  unsigned int v103;
  __int64 v104;
  __int64 v105;
  int v107;
  __int64 v108;
  _DWORD* v109;
  unsigned int v111;
  __int64 result;
  __int64 v115;
  __int64 v116;
  __int64 v118;
  __int64 v120;
  __int128 v121;
  __int128 v122;
  __int128 v123;
  __int128 v124;
  __int64 v125;
  __int64 v126;

  v107 = *(_DWORD*)(a3 + 4);
  if (v107 == 0) {
    return 1;
  }
  v108 = *(_QWORD*)(a3 + 8);
  if (v108 == 0) {
    return 1;
  }
  v109 = *(_DWORD**)(a3 + 24);
  if (v109 == nullptr) {
    return 1;
  }
  v111 = *(_DWORD*)a3;
  if (v107 == 4 || v111 == 0) {
    return 1;
  }
  if (a2 == 3) {
    result = 2;
    if (a1 < 0 || a1 >= CudaDriverData_1434ac0) {
      return result;
    }
    v120 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v120 == 0) {
      return 2;
    }
    if (v107 != 2) {
      return 999;
    }
    *(_QWORD*)&v124 = v104;
    *((_QWORD*)&v124 + 1) = v105;
    v3 = v111;
    if (v111 == 0) {
      return 0;
    }
    v4 = v108;
    v5 = v120;
    v6 = v109;
    v7 = CudaDriverRoutine_12e330(32LL * v111);
    if (v7 == 0) {
      return 2;
    }
    v8 = v7;
    LODWORD(v122) = 0;
    v123 = 0u;
    v121 = 0u;
    CudaDriverRoutine_25cf10(v7, 0, 32LL * v3);
    v15 = v3;
    v16 = v3 & 7;
    *(_QWORD*)&v121 = 0;
    DWORD1(v122) = v3;
    *((_QWORD*)&v122 + 1) = v8;
    v17 = 0;
    if (v3 >= 8) {
      v18 = v8 + 128;
      v19 = (int*)(v4 + 16);
      do {
        *(_WORD*)(v18 - 128) = 0;
        v17 -= 8;
        v20 = *(v19 - 4);
        *(_WORD*)(v18 - 96) = 0;
        *(_DWORD*)(v18 - 116) = v20;
        v21 = *(v19 - 3);
        *(_WORD*)(v18 - 64) = 0;
        *(_DWORD*)(v18 - 84) = v21;
        v22 = *(v19 - 2);
        *(_WORD*)(v18 - 32) = 0;
        *(_DWORD*)(v18 - 52) = v22;
        v23 = *(v19 - 1);
        *(_WORD*)v18 = 0;
        *(_DWORD*)(v18 - 20) = v23;
        v24 = *v19;
        *(_WORD*)(v18 + 32) = 0;
        *(_DWORD*)(v18 + 12) = v24;
        v25 = v19[1];
        *(_WORD*)(v18 + 64) = 0;
        *(_DWORD*)(v18 + 44) = v25;
        v26 = v19[2];
        *(_WORD*)(v18 + 96) = 0;
        *(_DWORD*)(v18 + 76) = v26;
        v27 = v19[3];
        v19 += 8;
        *(_DWORD*)(v18 + 108) = v27;
        v18 += 256;
      } while (-(__int64)(v3 & 0xFFFFFFF8) != v17);
      v17 = -v17;
    }
    if ((v3 & 7) != 0) {
      v28 = (int*)(v4 + 4 * v17);
      v29 = v8 + 32 * v17;
      do {
        *(_WORD*)v29 = 0;
        --v16;
        v30 = *v28++;
        *(_DWORD*)(v29 + 12) = v30;
        v29 += 32;
      } while (v16 != 0);
    }
    v31 = (*(__int64 (**)(__int64, __int128*, __int64, __int64, __int64,
                          __int64, __int64, __int64))(v5 + 20608))(
        v5, &v121, v9, v10, v11, v12, v13, v14);
    if (v31 == 0) {
      v32 = (_DWORD*)(v8 + 20);
      while (*((_BYTE*)v32 - 18) == 0) {
        v33 = *v32;
        v32 += 8;
        --v15;
        *v6++ = v33;
        if (v15 == 0) {
          v31 = 0;
          goto LABEL_90;
        }
      }
      v31 = 999;
    }
  LABEL_90:
    v103 = v31;
    CudaDriverRoutine_12e340(v8);
    return v103;
  }
  if (a2 == 2) {
    v116 = *(_QWORD*)(a3 + 16);
    if (v116 != 0) {
      result = 2;
      if (a1 < 0 || a1 >= CudaDriverData_1434ac0) {
        return result;
      }
      v118 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
      if (v118 == 0) {
        return 2;
      }
      if (v107 != 2) {
        return 999;
      }
      *(_QWORD*)&v124 = v104;
      *((_QWORD*)&v124 + 1) = v105;
      v65 = v111;
      if (v111 == 0) {
        return 0;
      }
      v66 = v116;
      v67 = v108;
      v68 = v109;
      v69 = v118;
      v70 = CudaDriverRoutine_12e330(32LL * v111);
      if (v70 == 0) {
        return 2;
      }
      v8 = v70;
      LODWORD(v122) = 0;
      v123 = 0u;
      v121 = 0u;
      CudaDriverRoutine_25cf10(v70, 0, 32LL * v65);
      v77 = v65;
      v78 = v65 & 3;
      *(_QWORD*)&v121 = 0;
      DWORD1(v122) = v65;
      *((_QWORD*)&v122 + 1) = v8;
      if (v65 >= 4) {
        v80 = v8 + 64;
        v81 = (int*)(v67 + 8);
        v82 = v68 + 2;
        v83 = 0;
        v84 = (int*)(v66 + 8);
        do {
          *(_BYTE*)(v80 - 64) = 1;
          v83 -= 4;
          *(_DWORD*)(v80 - 44) = *(v82 - 2);
          v85 = *(v84 - 2);
          *(_BYTE*)(v80 - 63) = 0;
          *(_DWORD*)(v80 - 36) = v85;
          v86 = *(v81 - 2);
          *(_BYTE*)(v80 - 32) = 1;
          *(_DWORD*)(v80 - 52) = v86;
          *(_DWORD*)(v80 - 12) = *(v82 - 1);
          v87 = *(v84 - 1);
          *(_BYTE*)(v80 - 31) = 0;
          *(_DWORD*)(v80 - 4) = v87;
          v88 = *(v81 - 1);
          *(_BYTE*)v80 = 1;
          *(_DWORD*)(v80 - 20) = v88;
          *(_DWORD*)(v80 + 20) = *v82;
          v89 = *v84;
          *(_BYTE*)(v80 + 1) = 0;
          *(_DWORD*)(v80 + 28) = v89;
          v90 = *v81;
          *(_BYTE*)(v80 + 32) = 1;
          *(_DWORD*)(v80 + 12) = v90;
          v91 = v82[1];
          v82 += 4;
          *(_DWORD*)(v80 + 52) = v91;
          v92 = v84[1];
          *(_BYTE*)(v80 + 33) = 0;
          v84 += 4;
          *(_DWORD*)(v80 + 60) = v92;
          v93 = v81[1];
          v81 += 4;
          *(_DWORD*)(v80 + 44) = v93;
          v80 += 128;
        } while (-(__int64)(v65 & 0xFFFFFFFC) != v83);
        v79 = -v83;
      }
      else {
        v79 = 0;
      }
      if ((v65 & 3) != 0) {
        v94 = (int*)(v67 + 4 * v79);
        v95 = (int*)(v66 + 4 * v79);
        v96 = &v68[v79];
        v97 = v8 + 32 * v79;
        do {
          *(_BYTE*)v97 = 1;
          --v78;
          v98 = *v96++;
          *(_DWORD*)(v97 + 20) = v98;
          v99 = *v95++;
          *(_BYTE*)(v97 + 1) = 0;
          *(_DWORD*)(v97 + 28) = v99;
          v100 = *v94++;
          *(_DWORD*)(v97 + 12) = v100;
          v97 += 32;
        } while (v78 != 0);
      }
      v31 = (*(__int64 (**)(__int64, __int128*, __int64, __int64, __int64,
                            __int64, __int64, __int64))(v69 + 20608))(
          v69, &v121, v71, v72, v73, v74, v75, v76);
      if (v31 == 0) {
        v101 = (unsigned __int8*)(v8 + 2);
        while (1) {
          v102 = *v101;
          v101 += 32;
          if (v102 != 0) {
            break;
          }
          if (--v77 == 0) {
            v31 = 0;
            goto LABEL_90;
          }
        }
        v31 = 999;
      }
      goto LABEL_90;
    }
    return 1;
  }
  if (a2 != 1) {
    return 0;
  }
  result = 2;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v115 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v115 != 0) {
      if (v107 != 2) {
        return 999;
      }
      v125 = v104;
      v126 = v105;
      v34 = v111;
      if (v111 == 0) {
        return 0;
      }
      v35 = v108;
      v36 = v109;
      v37 = v115;
      v38 = CudaDriverRoutine_12e330(32LL * v111);
      if (v38 == 0) {
        return 2;
      }
      v39 = v38;
      LODWORD(v123) = 0;
      v124 = 0u;
      v122 = 0u;
      CudaDriverRoutine_25cf10(v38, 0, 32LL * v34);
      v40 = v34;
      v41 = v34 & 3;
      *(_QWORD*)&v122 = 0;
      DWORD1(v123) = v34;
      *((_QWORD*)&v123 + 1) = v39;
      if (v34 >= 4) {
        v44 = v39 + 64;
        v45 = (int*)(v35 + 8);
        v46 = v36 + 2;
        v47 = 0;
        v43 = v37;
        do {
          *(_BYTE*)(v44 - 64) = 1;
          v47 -= 4;
          v48 = *(v46 - 2);
          *(_DWORD*)(v44 - 36) = -1;
          *(_BYTE*)(v44 - 63) = 0;
          *(_DWORD*)(v44 - 44) = v48;
          v49 = *(v45 - 2);
          *(_BYTE*)(v44 - 32) = 1;
          *(_DWORD*)(v44 - 52) = v49;
          v50 = *(v46 - 1);
          *(_DWORD*)(v44 - 4) = -1;
          *(_BYTE*)(v44 - 31) = 0;
          *(_DWORD*)(v44 - 12) = v50;
          v51 = *(v45 - 1);
          *(_BYTE*)v44 = 1;
          *(_DWORD*)(v44 - 20) = v51;
          v52 = *v46;
          *(_DWORD*)(v44 + 28) = -1;
          *(_BYTE*)(v44 + 1) = 0;
          *(_DWORD*)(v44 + 20) = v52;
          v53 = *v45;
          *(_BYTE*)(v44 + 32) = 1;
          *(_DWORD*)(v44 + 12) = v53;
          v54 = v46[1];
          *(_DWORD*)(v44 + 60) = -1;
          *(_BYTE*)(v44 + 33) = 0;
          v46 += 4;
          *(_DWORD*)(v44 + 52) = v54;
          v55 = v45[1];
          v45 += 4;
          *(_DWORD*)(v44 + 44) = v55;
          v44 += 128;
        } while (-(__int64)(v34 & 0xFFFFFFFC) != v47);
        v42 = -v47;
      }
      else {
        v42 = 0;
        v43 = v37;
      }
      if ((v34 & 3) != 0) {
        v56 = (int*)(v35 + 4 * v42);
        v57 = &v36[v42];
        v58 = v39 + 32 * v42;
        do {
          *(_BYTE*)v58 = 1;
          --v41;
          v59 = *v57++;
          *(_DWORD*)(v58 + 28) = -1;
          *(_BYTE*)(v58 + 1) = 0;
          *(_DWORD*)(v58 + 20) = v59;
          v60 = *v56++;
          *(_DWORD*)(v58 + 12) = v60;
          v58 += 32;
        } while (v41 != 0);
      }
      v61 = (*(__int64 (**)(__int64, __int128*))(v43 + 20608))(v43, &v122);
      if (v61 == 0) {
        v62 = (unsigned __int8*)(v39 + 2);
        while (1) {
          v63 = *v62;
          v62 += 32;
          if (v63 != 0) {
            break;
          }
          if (--v40 == 0) {
            v61 = 0;
            goto LABEL_69;
          }
        }
        v61 = 999;
      }
    LABEL_69:
      v64 = v61;
      CudaDriverRoutine_12e340(v39);
      return v64;
    }
    return 2;
  }
  return result;
}

__int64 CudaDriverHr_228560(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;

  if (a1 == 0) {
    return 999;
  }
  v8 = CudaDriverRoutine_98340(a1);
  if (a2 >= *(_DWORD*)(v8 + 164)) {
    return 1;
  }
  v3 = *(_QWORD*)(v8 + 232);
  if ((a3 & ~*(_QWORD*)(v3 + 320LL * a2 + 168)) != 0) {
    return 1;
  }
  v4 = v3 + 320LL * a2;
  v5 = *(_QWORD*)(v4 + 208);
  *(_QWORD*)(v4 + 200) |= a3;
  *(_QWORD*)(v4 + 208) = v5;
  return 0;
}

__int64 CudaDriverHr_228820(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  if (a1 == 0) {
    return 999;
  }
  if (a3 >= 0x40) {
    v11 = 0;
  }
  else {
    v11 = 1LL << a3;
  }
  v12 = 1LL << a3;
  if (a3 < 0x40) {
    v12 = 1uLL >> -(char)a3;
  }
  if (a3 - 64 >= 0xFFFFFFBF) {
    v13 = 0;
  }
  else {
    v13 = v12;
  }
  v14 = CudaDriverRoutine_98340(a1);
  if (a2 >= *(_DWORD*)(v14 + 164)) {
    return 1;
  }
  v3 = *(_QWORD*)(v14 + 232);
  v4 = v3 + 320LL * a2;
  v5 = v11 & ~*(_QWORD*)(v4 + 168);
  v6 = *(_QWORD*)(v4 + 176) & v13;
  if (v5 != 0 || v6 != v13) {
    return 1;
  }
  v8 = v3 + 320LL * a2;
  v9 = *(_QWORD*)(v8 + 208) | v13;
  *(_QWORD*)(v8 + 200) |= v11;
  *(_QWORD*)(v8 + 208) = v9;
  return 0;
}

__int64 CudaDriverHr_228b90(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v14;

  if (a1 == 0) {
    return 999;
  }
  v14 = CudaDriverRoutine_98340(a1);
  if (a2 >= *(_DWORD*)(v14 + 164)) {
    return 1;
  }
  v4 = *(_QWORD*)(v14 + 232);
  v5 = v4 + 320LL * a2;
  v6 = a3 & ~*(_QWORD*)(v5 + 168);
  v7 = *(_QWORD*)(v5 + 176) & a4;
  if (v6 != 0 || v7 != a4) {
    return 1;
  }
  v9 = v4 + 320LL * a2;
  v10 = *(_QWORD*)(v9 + 208) | a4;
  *(_QWORD*)(v9 + 200) |= a3;
  *(_QWORD*)(v9 + 208) = v10;
  return 0;
}

bool CudaDriverHr_22bb10(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_22bb80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  __int64 v9;
  __int64 result;

  result = *(_QWORD*)(a1 + 2112);
  v3 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if ((unsigned int)a2 >= v4 && *(_DWORD*)(v3 + 12) + v4 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) == 3) {
    v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
    *(_QWORD*)a3 = v6;
    v7 = *(unsigned __int8*)(v6 + 517);
    if (v7 != 1) {
      v6 = 0;
    }
    *(_QWORD*)a3 = v6;
    if (v7 == 1) {
      v9 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v9 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_22d4c0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  *(_DWORD*)a1 = 537198615;
  *(_QWORD*)(a1 + 4) = a4;
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 20) = 1;
  return a1 + 24;
}

__int64 CudaDriverHr_22dab0(__int64 a1)
{
  _OWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  __int64 result;
  _QWORD v9[29];

  result = CudaDriverRoutine_199dd0();
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_194640(a1);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_195ad0(a1);
      if ((_DWORD)result == 0) {
        if (*(_QWORD*)(a1 + 2248) != 0) {
          return 0;
        }
        v9[23] = v9[25];
        v9[24] = v9[26];
        v9[28] = v9[27];
        v1 = (_OWORD*)CudaDriverRoutine_12e330(80);
        if (v1 != nullptr) {
          v2 = v1;
          v1[1] = 0u;
          v1[2] = 0u;
          v1[3] = 0u;
          v1[4] = 0u;
          *v1 = 0u;
          *(_QWORD*)(a1 + 2248) = v1;
          CudaDriverRoutine_e37c0(v9);
          v3 = CudaDriverRoutine_8bb20(
              CudaDriverData_14245d8,
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3152LL),
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3156LL));
          v4 = CudaDriverRoutine_98340(a1);
          result = CudaDriverRoutine_105df0(v4, v2, v3, 0, v9,
                                            *(unsigned int*)(a1 + 188));
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bae90(*v2, "IntAligned_AtoD3D_nosurf",
                                             v2 + 1);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_bae90(*v2, "IntAligned_DtoA3D_nosurf",
                                               v2 + 2);
              if ((_DWORD)result == 0) {
                result = CudaDriverRoutine_bae90(
                    *v2, "CharAligned_DtoA3D_nosurf", v2 + 8);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_bae90(
                      *v2, "CharAligned_AtoD3D_nosurf", v2 + 7);
                  if ((_DWORD)result == 0) {
                    result = CudaDriverRoutine_bae90(
                        *v2, "ShortAligned_AtoD3D_nosurf", v2 + 4);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_bae90(
                          *v2, "ShortAligned_DtoA3D_nosurf", v2 + 5);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_bae90(
                            *v2, "ShortAligned_AtoA_nosurf", v2 + 6);
                        if ((_DWORD)result == 0) {
                          result = CudaDriverRoutine_bae90(
                              *v2, "CharAligned_AtoA_nosurf", v2 + 9);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_bae90(
                                *v2, "IntAligned_AtoA_nosurf", v2 + 3);
                            if ((_DWORD)result == 0) {
                              return result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          result = 2;
        }
        v5 = *(_QWORD**)(a1 + 2248);
        if (v5 != nullptr) {
          v6 = result;
          if (*v5 != 0) {
            CudaDriverRoutine_105c00();
            *v5 = 0;
          }
          CudaDriverRoutine_12e340(v5);
          *(_QWORD*)(a1 + 2248) = 0;
          return v6;
        }
      }
    }
  }
  return result;
}

bool CudaDriverHr_23bbf0(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2112) + 104LL);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 < v4 || *(_DWORD*)(v3 + 12) + v4 <= a2 ||
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) != 3) {
    return true;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
  *a3 = v6;
  v7 = *(unsigned __int8*)(v6 + 517);
  result = v7 != 1;
  if (v7 != 1) {
    v6 = 0;
  }
  *a3 = v6;
  return result;
}

__int64 CudaDriverHr_23bc60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  __int64 v9;
  __int64 result;

  result = *(_QWORD*)(a1 + 2112);
  v3 = *(_QWORD*)(result + 104);
  *(_QWORD*)a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if ((unsigned int)a2 >= v4 && *(_DWORD*)(v3 + 12) + v4 > (unsigned int)a2 &&
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) == 3) {
    v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
    *(_QWORD*)a3 = v6;
    v7 = *(unsigned __int8*)(v6 + 517);
    if (v7 != 1) {
      v6 = 0;
    }
    *(_QWORD*)a3 = v6;
    if (v7 == 1) {
      v9 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 3, a3);
      *(_DWORD*)(*(_QWORD*)a3 + 512LL) = -1;
      --*(_DWORD*)(v9 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_23d580(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  *(_DWORD*)a1 = 537198615;
  *(_QWORD*)(a1 + 4) = a4;
  *(_DWORD*)(a1 + 12) = a3;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 20) = 1;
  return a1 + 24;
}

__int64 CudaDriverHr_23ffa0(__int64 a1)
{
  _OWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  __int64 result;
  _QWORD v9[29];

  result = CudaDriverRoutine_199dd0();
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_194640(a1);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_195ad0(a1);
      if ((_DWORD)result == 0) {
        if (*(_QWORD*)(a1 + 2248) != 0) {
          return 0;
        }
        v9[23] = v9[25];
        v9[24] = v9[26];
        v9[28] = v9[27];
        v1 = (_OWORD*)CudaDriverRoutine_12e330(80);
        if (v1 != nullptr) {
          v2 = v1;
          v1[1] = 0u;
          v1[2] = 0u;
          v1[3] = 0u;
          v1[4] = 0u;
          *v1 = 0u;
          *(_QWORD*)(a1 + 2248) = v1;
          CudaDriverRoutine_e37c0(v9);
          v3 = CudaDriverRoutine_8bb20(
              CudaDriverData_14245d8,
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3152LL),
              *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3156LL));
          v4 = CudaDriverRoutine_98340(a1);
          result = CudaDriverRoutine_105df0(v4, v2, v3, 0, v9,
                                            *(unsigned int*)(a1 + 188));
          if ((_DWORD)result == 0) {
            result = CudaDriverRoutine_bae90(*v2, "IntAligned_AtoD3D_nosurf",
                                             v2 + 1);
            if ((_DWORD)result == 0) {
              result = CudaDriverRoutine_bae90(*v2, "IntAligned_DtoA3D_nosurf",
                                               v2 + 2);
              if ((_DWORD)result == 0) {
                result = CudaDriverRoutine_bae90(
                    *v2, "CharAligned_DtoA3D_nosurf", v2 + 8);
                if ((_DWORD)result == 0) {
                  result = CudaDriverRoutine_bae90(
                      *v2, "CharAligned_AtoD3D_nosurf", v2 + 7);
                  if ((_DWORD)result == 0) {
                    result = CudaDriverRoutine_bae90(
                        *v2, "ShortAligned_AtoD3D_nosurf", v2 + 4);
                    if ((_DWORD)result == 0) {
                      result = CudaDriverRoutine_bae90(
                          *v2, "ShortAligned_DtoA3D_nosurf", v2 + 5);
                      if ((_DWORD)result == 0) {
                        result = CudaDriverRoutine_bae90(
                            *v2, "ShortAligned_AtoA_nosurf", v2 + 6);
                        if ((_DWORD)result == 0) {
                          result = CudaDriverRoutine_bae90(
                              *v2, "CharAligned_AtoA_nosurf", v2 + 9);
                          if ((_DWORD)result == 0) {
                            result = CudaDriverRoutine_bae90(
                                *v2, "IntAligned_AtoA_nosurf", v2 + 3);
                            if ((_DWORD)result == 0) {
                              return result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          result = 2;
        }
        v5 = *(_QWORD**)(a1 + 2248);
        if (v5 != nullptr) {
          v6 = result;
          if (*v5 != 0) {
            CudaDriverRoutine_105c00();
            *v5 = 0;
          }
          CudaDriverRoutine_12e340(v5);
          *(_QWORD*)(a1 + 2248) = 0;
          return v6;
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_2466c0(int a1, _DWORD* a2)
{
  if (a2 == nullptr) {
    return 999;
  }
  if ((unsigned int)(a1 - 1) > 8) {
    return 1;
  }
  *a2 = **((_DWORD**)&CudaDriverData_1411d90 + (unsigned int)(a1 - 1));
  return 0;
}

#pragma GCC visibility pop
