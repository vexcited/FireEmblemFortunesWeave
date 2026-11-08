#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char CudaDriverData_14324b0;
extern char CudaDriverData_14324b4;
extern int CudaDriverData_14324c8;
extern int CudaDriverData_14324cc;
extern __int64 CudaDriverData_14324d0;
extern __int64 (*CudaDriverData_14324e8)(_QWORD);
extern __int64 (*CudaDriverData_14324f0)(_QWORD);
__int64 CudaDriverRoutine_107f60(_QWORD);
__int64 CudaDriverRoutine_108070(_QWORD);
__int64 CudaDriverRoutine_12dd00(_QWORD);
__int64 CudaDriverRoutine_12dea0(_QWORD);
__int64 CudaDriverRoutine_12e210(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1383a0(void);
__int64 CudaDriverRoutine_197de0(void);
__int64 CudaDriverRoutine_19be40(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1b70a0(_QWORD);
__int64 CudaDriverRoutine_1bb040(_QWORD);
__int64 CudaDriverRoutine_1bbd70(_QWORD);
__int64 CudaDriverRoutine_1fff70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_203f30(_QWORD);
__int64 CudaDriverRoutine_2222a0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_2226e0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_223310(_QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_2bb60(__int64, _QWORD*, __int64, char, __int64,
                                _BYTE*, __int64);
__int64 CudaDriverRoutine_2c050(__int64**, __int64*, __int64, __int64*,
                                __int64);
__int64 CudaDriverRoutine_2d560(__int64, __int64, __int64, int, _QWORD*,
                                _QWORD*);
__int64 CudaDriverRoutine_56260(_QWORD);
__int64 CudaDriverRoutine_57450(_QWORD);
__int64 CudaDriverRoutine_59730(__int64*, _QWORD*, unsigned int, unsigned int);
__int64 CudaDriverRoutine_59820(__int64*, _QWORD*, unsigned int);
__int64 CudaDriverRoutine_599a0(__int64, __int64, __int64, __int64);
__int64 CudaDriverRoutine_59a40(_DWORD*, __int64, char, unsigned int);
__int64 CudaDriverRoutine_59ce0(__int64*);
bool CudaDriverRoutine_5a220(__int64, __int64, unsigned int);
__int64 CudaDriverRoutine_5a700(__int64, char, _BYTE*, unsigned int,
                                unsigned int);
bool CudaDriverRoutine_5ada0(__int64);
__int64 CudaDriverRoutine_5ae20(__int64 result, __int64, __int64, unsigned int);
__int64 CudaDriverRoutine_5aeb0(__int64 result, __int64*, __int64, char);
__int64 CudaDriverRoutine_5b8d0(_QWORD);
__int64 CudaDriverRoutine_5ba00(__int64 result, __int64*);
unsigned __int64 CudaDriverRoutine_5bd00(__int64, unsigned __int64);
__int64 CudaDriverRoutine_5bda0(_QWORD);
__int64 CudaDriverRoutine_5bdb0(_DWORD*, _QWORD*);
__int64 CudaDriverRoutine_5c030(_QWORD);
__int64 CudaDriverRoutine_5d740(_QWORD*);
__int64 CudaDriverRoutine_5e7e0(_QWORD);
__int64 CudaDriverRoutine_5ea20(__int64, int, char);
__int64 CudaDriverRoutine_5eba0(__int64, unsigned int);
__int64 CudaDriverRoutine_5f050(__int64, __int64, char);
__int64 CudaDriverRoutine_605e0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_701f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_766e0(void);
__int64 CudaDriverRoutine_98110(_QWORD);
__int64 CudaDriverRoutine_98650(_QWORD, _QWORD);
__int64 CudaDriverRoutine_9aea0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_d9320(_QWORD, _QWORD);
__int64 CudaDriverRoutine_d9ac0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ec740(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_f0f50(void);

__int64 CudaDriverHr_2d700(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _BYTE v12[56];
  __int64 v13;

  v13 = 0;
  v10 = 0;
  v11 = nullptr;
  v4 = CudaDriverRoutine_2d560(a1, a2, (__int64)a3, 0, nullptr, &v13);
  if (v4 != 0) {
    v5 = v13;
    v6 = v4;
    result = CudaDriverRoutine_2c050(&v11, &v10, (__int64)v12, a3, v13);
    if ((_DWORD)result != 0) {
      return result;
    }
    v9 = v10;
    v8 = v11;
    if ((unsigned int)CudaDriverRoutine_d9ac0(v6, v11, v10) == 0) {
      result = CudaDriverRoutine_2bb60(v5, v8, v9, 1, v6 + 856, nullptr,
                                       *(_QWORD*)(v6 + 1200));
      if ((_DWORD)result == 0) {
        return CudaDriverRoutine_d9320(v6, v8);
      }
      return result;
    }
  }
  return 1;
}

__int64 CudaDriverHr_5a970(_DWORD* a1, __int64* a2)
{
  _DWORD* v4;
  __int64 v5;
  __int64 result;
  _BYTE v7[4];

  v4 = a1 + 0x2000;
  CudaDriverRoutine_59a40(a1, *a2, 0, 0x40u);
  v5 = *(_QWORD*)a1;
  *((_QWORD*)v4 + 47) = CudaDriverRoutine_12dea0(*(_QWORD*)a1 + 132696LL);
  result = CudaDriverRoutine_5e7e0(v5);
  if ((_DWORD)result != 0 ||
      (v7[0] = 0, (_DWORD)(result = CudaDriverRoutine_5a700(
                               (__int64)a1, 1, v7, 0x18000u, 0)) != 0) ||
      (_DWORD)(result = (*((__int64 (**)(_DWORD*, bool, _BYTE*))v4 + 168))(
                   a1, v7[0] == 0, v7)) != 0) {
    *a2 = v5 + 34392;
  }
  else {
    result = (*((__int64 (**)(_DWORD*, __int64*, __int64, _QWORD))v4 + 143))(
        a1, a2, 98304, 0);
  }
  *((_BYTE*)v4 + 1384) = 1;
  *(_QWORD*)(v5 + 34368) = a1;
  return result;
}

__int64 CudaDriverHr_5aa50(__int64 a1, __int64* a2, unsigned int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 result;
  _BYTE v10[4];

  v3 = a1 + 0x8000;
  v7 = *(_QWORD*)(a1 + 34160);
  *(_QWORD*)(a1 + 34160) = 0;
  CudaDriverRoutine_59a40((_DWORD*)a1, *a2, 1, 0);
  if (*(_BYTE*)(a1 + 36) != 0) {
    CudaDriverRoutine_59ce0((__int64*)a1);
  }
  v8 = *(_QWORD*)a1;
  *(_QWORD*)(v3 + 376) = CudaDriverRoutine_12dea0(*(_QWORD*)a1 + 132696LL);
  result = CudaDriverRoutine_5e7e0(v8);
  if ((_DWORD)result != 0 ||
      (v10[0] = 0,
       (_DWORD)(result = CudaDriverRoutine_5a700(a1, 1, v10, a3, 0)) != 0) ||
      (_DWORD)(result = (*(__int64 (**)(__int64, bool, _BYTE*))(v3 + 1344))(
                   a1, v10[0] == 0, v10)) != 0) {
    *a2 = v8 + 34392;
  }
  else {
    result = (*(__int64 (**)(__int64, __int64*, _QWORD, _QWORD))(v3 + 1144))(
        a1, a2, a3, 0);
  }
  *(_BYTE*)(v3 + 1384) = 1;
  *(_QWORD*)(v8 + 34368) = a1;
  *(_QWORD*)(v3 + 1392) = v7;
  return result;
}

__int64 CudaDriverHr_5b840(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v6;
  __int64 result;
  unsigned __int64 v8;

  v3 = a1 + 0x8000;
  v6 = atomic_fetch_or((atomic_ullong* volatile)(a1 + 33744), 0);
  result = *(_QWORD*)(a1 + 34160);
  v8 = v6 + 1;
  if (result != 0) {
    result = CudaDriverRoutine_1fff70(result, a1, v6 + 1, a3);
    if (*(_BYTE*)(v3 + 1458) == 0) {
      return result;
    }
    result = CudaDriverRoutine_5aeb0(a1, a2, a3, 0);
    *(_BYTE*)(a1 + 44) = 0;
  }
  *(_QWORD*)(a3 + 8) = a1;
  *(_QWORD*)(a3 + 16) = v8;
  *(_DWORD*)a3 = 1;
  return result;
}

__int64 CudaDriverHr_5b8e0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;

  if ((unsigned int)CudaDriverRoutine_5e7e0(*(_QWORD*)a1) != 0) {
    return CudaDriverRoutine_56260(a3);
  }
  *(_DWORD*)(a3 + 16) = 1;
  v7 = *(_QWORD*)(a3 + 24);
  v8 = atomic_fetch_or((atomic_ullong* volatile)(a1 + 33744), 0);
  result = *(_QWORD*)(a1 + 34160);
  v9 = v8 + 1;
  if (result != 0) {
    result = CudaDriverRoutine_1fff70(result, a1, v8 + 1, v7);
    if (*(_BYTE*)(a1 + 34226) == 0) {
      return result;
    }
    result = CudaDriverRoutine_5aeb0(a1, a2, v7, 0);
    *(_BYTE*)(a1 + 44) = 0;
  }
  *(_DWORD*)v7 = 1;
  *(_QWORD*)(v7 + 8) = a1;
  *(_QWORD*)(v7 + 16) = v9;
  return result;
}

__int64 CudaDriverHr_5bf00(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;

  v7 = 0;
  CudaDriverRoutine_59820((__int64*)a1, &v7, 0);
  v2 = CudaDriverRoutine_5bdb0((_DWORD*)a1, &v7);
  CudaDriverRoutine_59a40((_DWORD*)a1, v7, 1, 0);
  v3 = *(_QWORD*)(a1 + 48);
  if (v3 != 0 && *(_BYTE*)(v3 + 84) != 0) {
    CudaDriverRoutine_59ce0((__int64*)a1);
  }
  v4 = a1;
  if (*(_BYTE*)(a1 + 37) == 0) {
    v4 = *(_QWORD*)(*(_QWORD*)a1 + 48LL);
  }
  CudaDriverRoutine_108070(v4 + 8);
  v5 = CudaDriverRoutine_98110(*(_QWORD*)(*(_QWORD*)a1 + 8LL));
  if ((_BYTE)v5 != 0) {
    CudaDriverRoutine_57450(v5);
  }
  return v2;
}

__int64 CudaDriverHr_5dcf0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1 + 4096;
  *(_BYTE*)a1 = 0;
  if (a1[4295] != 0) {
    CudaDriverRoutine_1b70a0(*(_QWORD*)(a1[1] + 216LL));
    v1[199] = 0;
  }
  CudaDriverRoutine_12e210(a1 + 4292);
  v3 = v1[41];
  CudaDriverRoutine_203f30(*(_QWORD*)(v3 + 56));
  *(_OWORD*)(v3 + 16) = 0u;
  *(_OWORD*)(v3 + 32) = 0u;
  *(_OWORD*)(v3 + 48) = 0u;
  *(_OWORD*)(v3 + 64) = 0u;
  *(_OWORD*)v3 = 0u;
  CudaDriverRoutine_12e340(v3);
  v4 = v1[42];
  v1[41] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v4 + 56));
  *(_OWORD*)(v4 + 16) = 0u;
  *(_OWORD*)(v4 + 32) = 0u;
  *(_OWORD*)(v4 + 48) = 0u;
  *(_OWORD*)(v4 + 64) = 0u;
  *(_OWORD*)v4 = 0u;
  CudaDriverRoutine_12e340(v4);
  v5 = v1[43];
  v1[42] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v5 + 56));
  *(_OWORD*)(v5 + 16) = 0u;
  *(_OWORD*)(v5 + 32) = 0u;
  *(_OWORD*)(v5 + 48) = 0u;
  *(_OWORD*)(v5 + 64) = 0u;
  *(_OWORD*)v5 = 0u;
  CudaDriverRoutine_12e340(v5);
  v6 = v1[44];
  v1[43] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v6 + 56));
  *(_OWORD*)(v6 + 16) = 0u;
  *(_OWORD*)(v6 + 32) = 0u;
  *(_OWORD*)(v6 + 48) = 0u;
  *(_OWORD*)(v6 + 64) = 0u;
  *(_OWORD*)v6 = 0u;
  CudaDriverRoutine_12e340(v6);
  v7 = v1[45];
  v1[44] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v7 + 56));
  *(_OWORD*)(v7 + 16) = 0u;
  *(_OWORD*)(v7 + 32) = 0u;
  *(_OWORD*)(v7 + 48) = 0u;
  *(_OWORD*)(v7 + 64) = 0u;
  *(_OWORD*)v7 = 0u;
  CudaDriverRoutine_12e340(v7);
  v8 = v1[46];
  v1[45] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v8 + 56));
  *(_OWORD*)(v8 + 16) = 0u;
  *(_OWORD*)(v8 + 32) = 0u;
  *(_OWORD*)(v8 + 48) = 0u;
  *(_OWORD*)(v8 + 64) = 0u;
  *(_OWORD*)v8 = 0u;
  CudaDriverRoutine_12e340(v8);
  v9 = v1[47];
  v1[46] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v9 + 56));
  *(_OWORD*)(v9 + 16) = 0u;
  *(_OWORD*)(v9 + 32) = 0u;
  *(_OWORD*)(v9 + 48) = 0u;
  *(_OWORD*)(v9 + 64) = 0u;
  *(_OWORD*)v9 = 0u;
  CudaDriverRoutine_12e340(v9);
  v10 = v1[48];
  v1[47] = 0;
  CudaDriverRoutine_203f30(*(_QWORD*)(v10 + 56));
  *(_OWORD*)(v10 + 16) = 0u;
  *(_OWORD*)(v10 + 32) = 0u;
  *(_OWORD*)(v10 + 48) = 0u;
  *(_OWORD*)(v10 + 64) = 0u;
  *(_OWORD*)v10 = 0u;
  CudaDriverRoutine_12e340(v10);
  v1[48] = 0;
  CudaDriverRoutine_5d740(a1);
  if (v1[194] != 0) {
    CudaDriverRoutine_197de0();
    v1[194] = 0;
  }
  if (v1[195] != 0) {
    CudaDriverRoutine_1383a0();
    v1[195] = 0;
  }
  CudaDriverRoutine_107f60(a1 + 4);
  CudaDriverRoutine_107f60(a1 + 2);
  return CudaDriverRoutine_12e340(a1);
}

__int64 CudaDriverHr_5f050(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _QWORD* v7;
  _QWORD v8[3];

  result = *(_QWORD*)(a2 + 8LL * *(unsigned int*)(a2 + 736) + 616);
  if (result != 0) {
    if (*(_QWORD*)(result + 33176) == a2) {
      return result;
    }
    v7 = (_QWORD*)(result + 33816);
  }
  else {
    if (a3 == 0) {
      return 0;
    }
    v7 = (_QWORD*)(a1 + 33160);
  }
  v8[1] = v3;
  v8[2] = v4;
  v8[0] = *v7;
  return CudaDriverRoutine_5eba0((__int64)v8, 1u);
}

_QWORD* CudaDriverHr_5f100(__int64 a1, unsigned int* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64* v34;
  int v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  bool v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  _BYTE v77[8];
  _BYTE v78[504];
  _DWORD v79[148];
  __int64 v80;
  int v81;
  char v82;
  unsigned int v83;
  _DWORD v84[65];
  __int64 v85;

  v3 = *a2;
  v4 = a3;
  v75 = a3 + 616;
  v6 = *(_QWORD*)(a3 + 616 + 8 * v3);
  if (v6 != 0) {
    v7 = v6 + 0x8000;
    if (*(_QWORD*)(v6 + 33176) == a3) {
      if ((_DWORD)v3 != 5) {
        goto LABEL_29;
      }
      v11 = *(_QWORD*)(v6 + 33816);
      if (*(_DWORD*)(v11 + 24) != 0) {
        v12 = 33736;
        v13 = 0;
        while (1) {
          v14 = *(_QWORD*)(v11 + 8);
          v15 = CudaDriverRoutine_5c030(v14 + v12);
          v16 = CudaDriverRoutine_5bda0(v14 + v12);
          if (v16 < v15 && CudaDriverRoutine_5bd00(v14 + v12, v16) < v15) {
            break;
          }
          ++v13;
          v12 += 34256;
          if (v13 >= *(unsigned int*)(v11 + 24)) {
            goto LABEL_21;
          }
        }
        v17 = *((_QWORD*)a2 + 1);
        v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL);
        if (v18 == v17) {
          v17 = *((_QWORD*)a2 + 2);
        }
        v20 = *(_QWORD*)(v11 + 264);
        v19 = *(_QWORD*)(v11 + 272);
        v21 = v19 == v18 && v20 == v17;
        if (!v21 &&
            ((unsigned int)CudaDriverRoutine_ec740(v19, v20, &v80) != 0 ||
             (unsigned int)CudaDriverRoutine_ec740(v18, v17, v79) != 0 ||
             v82 == 0)) {
          goto LABEL_3;
        }
      }
    LABEL_21:
      v22 = *(_QWORD*)(v7 + 1048);
      v23 = *((_QWORD*)a2 + 1);
      v24 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL);
      if (v24 == v23) {
        v23 = *((_QWORD*)a2 + 2);
      }
      v25 = *(_QWORD*)(v22 + 272);
      if (v25 == 0 || (v26 = *(_QWORD*)(v22 + 264)) == 0 ||
          (unsigned int)CudaDriverRoutine_ec740(v25, v26, &v80) == 0 &&
              (unsigned int)CudaDriverRoutine_ec740(v24, v23, v79) == 0 &&
              (_DWORD)v80 == v79[0] && v81 == v79[2]) {
      LABEL_29:
        result = *(_QWORD**)(v75 + 8 * v3);
        v27 = (_QWORD*)result[4228];
        if (v27[8] != 0 && (_QWORD*)*v27 != result) {
          v28 = *(_QWORD**)(v75 + 8 * v3);
          v29 = CudaDriverRoutine_5ada0(*v27 + 33736LL);
          result = v28;
          if (!v29) {
            return (_QWORD*)*v27;
          }
        }
        return result;
      }
    }
  }
LABEL_3:
  result = nullptr;
  v9 = a1;
  switch (*a2) {
  case 0u:
    goto LABEL_58;
  case 1u:
    v10 = *(_QWORD*)(a1 + 33768);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 2u:
    v10 = *(_QWORD*)(a1 + 33760);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 3u:
    v10 = *(_QWORD*)(a1 + 34304);
    if (v10 != 0) {
      goto LABEL_111;
    }
    v10 = *(_QWORD*)(a1 + 34296);
    *a2 = 4;
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 4u:
    v10 = *(_QWORD*)(a1 + 34296);
    if (v10 != 0) {
      goto LABEL_111;
    }
    v10 = *(_QWORD*)(a1 + 34304);
    *a2 = 3;
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 5u:
    v30 = *((_QWORD*)a2 + 1);
    v31 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL);
    if (v31 == v30) {
      v32 = *((_QWORD*)a2 + 2);
    }
    else {
      v32 = *((_QWORD*)a2 + 1);
    }
    if ((unsigned int)CudaDriverRoutine_ec740(
            *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL), v32, &v80) != 0 ||
        *a2 != 5) {
      v34 = nullptr;
      v33 = 0;
      v35 = v80;
      if ((v80 & 0x20) != 0) {
        goto LABEL_72;
      }
    }
    else if (v31 == v30) {
      v33 = v84[64];
      v34 = &v85;
      v35 = v80;
      if ((v80 & 0x20) != 0) {
        goto LABEL_72;
      }
    }
    else {
      v33 = v83;
      v34 = (__int64*)v84;
      v35 = v80;
      if ((v80 & 0x20) != 0) {
        goto LABEL_72;
      }
    }
    if (v31 != v32 || v35 != 0) {
      goto LABEL_77;
    }
  LABEL_72:
    if (v33 == 0) {
      v37 = *(unsigned int*)(a1 + 34288);
      if ((_DWORD)v37 != 0) {
        v73 = v4;
        CudaDriverRoutine_25cf30(v77, a1 + 33776, 8 * v37);
        goto LABEL_87;
      }
    LABEL_77:
      v40 = 0;
      v41 = 0;
      goto LABEL_105;
    }
    v37 = v33;
    v73 = v4;
    v38 = a1 + 33176;
    if (v33 == 1) {
      v39 = 0;
    LABEL_81:
      v48 = v39;
      v49 = ((_BYTE)v37 - (_BYTE)v39) & 7;
      if ((((_BYTE)v37 - (_BYTE)v39) & 7) != 0) {
        v48 = v39;
        do {
          --v49;
          *(_QWORD*)&v77[8 * v48] =
              *(_QWORD*)(v38 + 8LL * *((unsigned int*)v34 + v48));
          ++v48;
        } while (v49 != 0);
      }
      if ((unsigned __int64)(v39 - v37) <= 0xFFFFFFFFFFFFFFF8LL) {
        v50 = v37 - v48;
        v51 = (unsigned int*)v34 + v48 + 4;
        v52 = &v78[8 * v48 + 24];
        do {
          v50 -= 8;
          v53 = *(_QWORD*)(v38 + 8LL * *(v51 - 3));
          *(v52 - 4) = *(_QWORD*)(v38 + 8LL * *(v51 - 4));
          *(v52 - 3) = v53;
          v54 = *(_QWORD*)(v38 + 8LL * *(v51 - 1));
          *(v52 - 2) = *(_QWORD*)(v38 + 8LL * *(v51 - 2));
          *(v52 - 1) = v54;
          v55 = *(_QWORD*)(v38 + 8LL * v51[1]);
          *v52 = *(_QWORD*)(v38 + 8LL * *v51);
          v52[1] = v55;
          v56 = v51[2];
          v57 = v51[3];
          v51 += 8;
          v58 = *(_QWORD*)(v38 + 8 * v57);
          v52[2] = *(_QWORD*)(v38 + 8 * v56);
          v52[3] = v58;
          v52 += 8;
        } while (v50 != 0);
      }
      goto LABEL_87;
    }
    v39 = v33 & 0xFFFFFFFE;
    v42 = (unsigned int*)v34 + 1;
    v43 = v78;
    v44 = (unsigned int)v37 & 0xFFFFFFFE;
    do {
      v45 = *(v42 - 1);
      v46 = *v42;
      v42 += 2;
      v44 -= 2;
      v47 = *(_QWORD*)(v38 + 8 * v46);
      *(v43 - 1) = *(_QWORD*)(v38 + 8 * v45);
      *v43 = v47;
      v43 += 2;
    } while (v44 != 0);
    if (v39 != v37) {
      goto LABEL_81;
    }
  LABEL_87:
    v59 = 0;
    v74 = 0;
    v10 = 0;
    do {
      while (1) {
        v60 = v37;
        v41 = *(_QWORD*)&v77[8 * v59];
        if (*(_DWORD*)(v41 + 24) != 0) {
          break;
        }
      LABEL_88:
        v10 = CudaDriverRoutine_605e0(v10, v41);
        ++v59;
        v37 = v60;
        if (v59 == v60) {
          goto LABEL_104;
        }
      }
      v61 = 33736;
      v62 = 0;
      while (1) {
        v63 = *(_QWORD*)(v41 + 8);
        v64 = CudaDriverRoutine_5c030(v63 + v61);
        v65 = CudaDriverRoutine_5bda0(v63 + v61);
        if (v65 < v64 && CudaDriverRoutine_5bd00(v63 + v61, v65) < v64) {
          break;
        }
        ++v62;
        v61 += 34256;
        if (v62 >= *(unsigned int*)(v41 + 24)) {
          goto LABEL_88;
        }
      }
      v66 = *((_QWORD*)a2 + 1);
      v67 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64LL);
      if (v67 == v66) {
        v66 = *((_QWORD*)a2 + 2);
      }
      v69 = *(_QWORD*)(v41 + 264);
      v68 = *(_QWORD*)(v41 + 272);
      v70 = v68 == v67 && v69 == v66;
      if (v70 ||
          (unsigned int)CudaDriverRoutine_ec740(v68, v69, &v80) == 0 &&
              (unsigned int)CudaDriverRoutine_ec740(v67, v66, v79) == 0 &&
              v82 != 0) {
        v4 = v73;
        v10 = v41;
        if (*(_DWORD*)(v41 + 24) != 1) {
          goto LABEL_112;
        }
        return *(_QWORD**)(v10 + 8);
      }
      v74 = CudaDriverRoutine_605e0(v74, v41);
      ++v59;
      v37 = v60;
    } while (v59 != v60);
  LABEL_104:
    v9 = a1;
    v4 = v73;
    v40 = v74;
    if (v10 == 0) {
    LABEL_105:
      v71 = a2[6];
      if (v71 == 1) {
        v72 = 33768;
      LABEL_109:
        v41 = *(_QWORD*)(v9 + v72);
      }
      else if (v71 == 2) {
        v72 = 33760;
        goto LABEL_109;
      }
      v10 = CudaDriverRoutine_605e0(v40, v41);
    }
  LABEL_111:
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
  LABEL_112:
    if ((*(_BYTE*)(v4 + 56) & 3) != 0) {
      return *(_QWORD**)(v10 + 8);
    }
    result = *(_QWORD**)(v75 + 8LL * *(unsigned int*)(v10 + 36));
    if (result == nullptr || result[4147] != v4 || result[4227] != v10) {
      v80 = v10;
      return (_QWORD*)CudaDriverRoutine_5eba0((__int64)&v80, 1u);
    }
    return result;
  case 6u:
    v10 = *(_QWORD*)(a1 + 33744);
    if (v10 != 0) {
      goto LABEL_111;
    }
  LABEL_58:
    v10 = *(_QWORD*)(a1 + 33160);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 7u:
    v10 = *(_QWORD*)(a1 + 33752);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 8u:
    v10 = *(_QWORD*)(a1 + 33688);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 0xAu:
    v10 = *(_QWORD*)(a1 + 33704);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 0xBu:
    v10 = *(_QWORD*)(a1 + 33712);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 0xCu:
    v10 = *(_QWORD*)(a1 + 33720);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 0xDu:
    v10 = *(_QWORD*)(a1 + 33728);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  case 0xEu:
    v10 = *(_QWORD*)(a1 + 33168);
    if (*(_DWORD*)(v10 + 24) == 1) {
      return *(_QWORD**)(v10 + 8);
    }
    goto LABEL_112;
  default:
    return result;
  }
}

__int64 CudaDriverHr_60360(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  v2 = (_QWORD*)CudaDriverRoutine_f0f50();
  v3 = v2[1];
  if (v2[4218] != 0) {
    v6 = v2[4218];
  }
  else {
    v6 = v2[4145];
    if (v6 == 0) {
      v4 = 0;
      goto LABEL_5;
    }
  }
  v4 = CudaDriverRoutine_5eba0((__int64)&v6, 1u);
LABEL_5:
  CudaDriverRoutine_5a220(v4, a1, 0xAu);
  return CudaDriverRoutine_98650(v3, 1);
}

__int64 CudaDriverHr_61b00(__int64* a1, __int64 a2, unsigned int a3,
                           __int64* a4)
{
  __int64* v4;
  __int64 v9;

  v4 = a4;
  v9 = 0;
  if (a4 == nullptr) {
    v4 = &v9;
    CudaDriverRoutine_59730(a1, &v9, 0x18000u, 0);
  }
  CudaDriverRoutine_5ae20((__int64)a1, (__int64)v4, a2, a3);
  if (v9 != 0) {
    CudaDriverRoutine_59a40(a1, *v4, 0, (a3 >> 2) & 4 | (32 * ((a3 & 4) != 0)));
  }
  return 0;
}

__int64 CudaDriverHr_62940(__int64* a1, char a2)
{
  __int64 v2;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v19;

  v2 = a1[1];
  v19 = 0;
  CudaDriverRoutine_9aea0(*(_QWORD*)(v2 + 64), 1);
  CudaDriverRoutine_1bb040(a1);
  v5 = *((unsigned int*)a1 + 4);
  if ((_DWORD)v5 == 0) {
    return 0;
  }
  v6 = 1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = nullptr;
  v11 = nullptr;
  do {
    v12 = a1[3];
    v13 = *(_DWORD*)(v12 + v7);
    if (v13 <= 4) {
      switch (v13) {
      case 1:
        v14 = *(__int64**)(v12 + v7 + 8);
        break;
      case 3:
        v14 = *(__int64**)(v12 + v7 + 24);
        break;
      case 4:
        if (v11 == nullptr && ((v11 = *(__int64**)(*a1 + 132704)) == nullptr ||
                               v11[4143] != *(_QWORD*)(*a1 + 132712)) ||
            v6 == 0) {
          if (v10 != nullptr) {
          LABEL_25:
            v6 = 0;
            v14 = v10;
            break;
          }
          goto LABEL_29;
        }
      LABEL_21:
        v6 = 1;
        v14 = v11;
        break;
      default:
        return 999;
      }
    LABEL_31:
      CudaDriverRoutine_59820(v14, &v19, 0);
      v16 = *(_DWORD*)(v12 + v7);
      if ((v16 | 2) == 6) {
        *(_QWORD*)(*a1 + 132704) = v14;
        *(_QWORD*)(*a1 + 132712) = v14[4143];
        v16 = *(_DWORD*)(v12 + v7);
      }
      if (v16 != 1) {
        CudaDriverRoutine_5aeb0((__int64)v14, &v19, v12 + v7, 0);
      }
      if ((a2 & 2) != 0) {
        v17 = v12 + v7;
        v9 = 1;
        *(_DWORD*)v17 = 1;
        *(_QWORD*)(v17 + 8) = v14;
        *(_QWORD*)(v17 + 16) = CudaDriverRoutine_5b8d0(v14 + 4217);
      }
      CudaDriverRoutine_5ba00((__int64)v14, &v19);
      CudaDriverRoutine_599a0((__int64)v14, v19, 1, 0);
      v5 = *((unsigned int*)a1 + 4);
      goto LABEL_4;
    }
    if (v13 == 5) {
      goto LABEL_4;
    }
    if (v13 == 6) {
      v15 = CudaDriverRoutine_5f050(*a1, *(_QWORD*)(v12 + v7 + 24), 0);
      if (v15 != 0) {
      LABEL_30:
        v14 = (__int64*)v15;
        goto LABEL_31;
      }
      if (v11 == nullptr && ((v11 = *(__int64**)(*a1 + 132704)) == nullptr ||
                             v11[4143] != *(_QWORD*)(*a1 + 132712)) ||
          v6 == 0) {
        if (v10 != nullptr) {
          goto LABEL_25;
        }
      LABEL_29:
        v15 = CudaDriverRoutine_5ea20(*a1, 0, 1);
        v10 = (__int64*)v15;
        v6 = 0;
        goto LABEL_30;
      }
      goto LABEL_21;
    }
    if (v13 != 16) {
      return 999;
    }
  LABEL_4:
    ++v8;
    v7 += 40;
  } while (v8 < v5);
  if (v9 != 0) {
    CudaDriverRoutine_1bbd70(a1);
  }
  return 0;
}

__int64 CudaDriverHr_6deb0(__int64 (*a1)(_QWORD), __int64 (*a2)(_QWORD))
{
  if (CudaDriverData_14324b4 == 1 &&
      (unsigned int)CudaDriverRoutine_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  CudaDriverData_14324c8 = 1;
  CudaDriverData_14324e8 = a2;
  CudaDriverData_14324f0 = a1;
  return 0;
}

__int64 CudaDriverHr_6df20(__int64 (*a1)(_QWORD))
{
  if (CudaDriverData_14324b4 == 1 &&
      (unsigned int)CudaDriverRoutine_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  CudaDriverData_14324c8 = 2;
  CudaDriverData_14324e8 = a1;
  return 0;
}

__int64 CudaDriverHr_6df90(__int64 (*a1)(_QWORD))
{
  if (CudaDriverData_14324b4 == 1 &&
      (unsigned int)CudaDriverRoutine_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  CudaDriverData_14324c8 = 3;
  CudaDriverData_14324e8 = a1;
  return 0;
}

__int64 CudaDriverHr_70110(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  char v12;

  if (CudaDriverData_14324b0 != 1) {
    return 5;
  }
  v10 = v1;
  v11 = v2;
  if (CudaDriverData_14324b4 == 1 &&
      (unsigned int)CudaDriverRoutine_12dd00(
          (unsigned int)CudaDriverData_14324cc) != 0) {
    return 44;
  }
  v8 = a1;
  v9 = 0;
  v7 = -1;
  v5 = CudaDriverRoutine_223310(CudaDriverData_14324d0, a1);
  if (v5 == 0) {
    return 0;
  }
  v6 = v5;
  result = CudaDriverRoutine_19be40(v5, &v12);
  if ((_DWORD)result == 0) {
    if ((v12 & 1) != 0) {
      return 18;
    }
    result = CudaDriverRoutine_701f0(v6, &v7);
    if ((_DWORD)result == 0) {
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_701f0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned int v8;

  v2 = *(_QWORD*)(a2 + 8) - a1[6];
  if (v2 >= a1[7] || CudaDriverRoutine_2226e0(a1[11], v2) != 0 ||
      *(_DWORD*)a2 != -1 &&
          *(_DWORD*)a2 !=
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1[9] + 16LL) + 8LL) + 1088LL)) {
    return 0;
  }
  v6 = CudaDriverRoutine_12e510(1, 64);
  if (v6 == 0) {
    return 10;
  }
  *(_QWORD*)(v6 + 8) = a1[4] + v2;
  v7 = a1[5];
  *(_BYTE*)v6 = 0;
  *(_QWORD*)(v6 + 16) = v7 + v2;
  *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1[9] + 16LL);
  if ((unsigned int)CudaDriverRoutine_2222a0(a1[11], v2, v6) != 0) {
    return 1;
  }
  if (*(_BYTE*)(a2 + 16) != 1) {
    return 0;
  }
  CudaDriverRoutine_766e0();
  result = v8;
  if (v8 == 0) {
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
