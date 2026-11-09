#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) SdkRoutine_10de70(_QWORD);
__int64 SdkRoutine_4f4ab0(__int64 result, __int64);
_QWORD* SdkRoutine_53b960(__int64, __int64*, __int64*, _QWORD*);
__int64 SdkRoutine_593ae0(_WORD*, __int64, __int64);
__int64 SdkRoutine_5a4050(__int64, _BYTE*, _DWORD*, __int64, __int64, __int64,
                          __int64, __int64, char, unsigned int);
_QWORD* SdkRoutine_5cc220(_QWORD* result, int);
__int64 SdkRoutine_5d2920(__int64, __int64, __int64, unsigned int);
__int64 SdkRoutine_5d2db0(__int64, int, unsigned __int64, char);
__int64 SdkRoutine_5d2ec0(__int64, _DWORD*, __int64);
__int64 SdkRoutine_5d3600(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5e6180(__int64, unsigned int*);
__int64 SdkRoutine_5e6400(__int64);
__int64 SdkRoutine_5e6a80(__int64, unsigned __int64*, unsigned __int64*);
__int64 SdkRoutine_5e7d80(__int64, _QWORD*, __int64, __int64);
__int64 SdkRoutine_5e80a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5e8340(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5e84e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857150(_QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_858b40(_QWORD);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_858b90(_QWORD);
__int64 SdkRoutine_858be0(_QWORD, _QWORD);
__int64 SdkRoutine_858ce0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_859020(_QWORD);
__int64 SdkRoutine_859030(_QWORD);
__int64 SdkRoutine_859040(_QWORD);
__int64 SdkRoutine_859050(_QWORD);
__int64 SdkRoutine_859060(_QWORD, _QWORD);
__int64 SdkRoutine_859070(_QWORD);
__int64 SdkRoutine_8591f0(_QWORD, _QWORD);
__int64 SdkRoutine_859350(_QWORD);
__int64 SdkRoutine_859360(_QWORD);
__int64 SdkRoutine_85d1a0(_QWORD);
__int64 SdkRoutine_85d430(_QWORD);
__int64 SdkRoutine_85d490(_QWORD);
__int64 SdkRoutine_85d5e0(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_874b90(_QWORD);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkHr_53db80(__int64 result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;

  if (a3 != 0) {
    v3 = a3;
    v5 = result;
    do {
      v6 = *a2;
      *(_DWORD*)(v5 + 8) = *((_DWORD*)a2 + 2);
      *(_QWORD*)v5 = v6;
      v7 = a2[2];
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)(v5 + 40) = 0;
      *(_QWORD*)(v5 + 16) = v7;
      *(_QWORD*)(v5 + 24) = 0;
      v9 = a2[3];
      v8 = a2[4];
      v10 = v8 - v9;
      if (v8 != v9) {
        if (v10 < 0) {
          SdkRoutine_10de70(result);
        }
        v11 = SdkRoutine_85e050(v8 - v9);
        v12 = v11 + v10;
        *(_QWORD*)(v5 + 24) = v11;
        *(_QWORD*)(v5 + 32) = v11;
        *(_QWORD*)(v5 + 40) = v11 + v10;
        result = SdkRoutine_856130(v11, v9, v10);
        *(_QWORD*)(v5 + 32) = v12;
      }
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      v13 = (__int64*)a2[6];
      v14 = (__int64*)a2[7];
      v15 = (char*)v14 - (char*)v13;
      if (v14 != v13) {
        if (0xCCCCCCCCCCCCCCCDLL * (v15 >> 4) >= 0x333333333333334LL) {
          SdkRoutine_10de70(result);
        }
        v16 = (_QWORD*)SdkRoutine_85e050((char*)v14 - (char*)v13);
        *(_QWORD*)(v5 + 48) = v16;
        *(_QWORD*)(v5 + 56) = v16;
        *(_QWORD*)(v5 + 64) = (char*)v16 + v15;
        *(_QWORD*)(v5 + 56) = SdkRoutine_53b960(v5 + 64, v13, v14, v16);
        v13 = (__int64*)a2[6];
      }
      if (v13 != nullptr) {
        v17 = (__int64*)a2[7];
        v18 = v13;
        if (v13 != v17) {
          do {
            if ((*(_BYTE*)(v17 - 4) & 1) != 0) {
              SdkRoutine_857220(*(v17 - 2), *(v17 - 4) & 0xFFFFFFFFFFFFFFFELL);
            }
            SdkRoutine_4f4ab0((__int64)(v17 - 8), *(v17 - 7));
            v17 -= 10;
          } while (v17 != v13);
          v18 = (__int64*)a2[6];
        }
        v19 = a2[8];
        a2[7] = (__int64)v13;
        SdkRoutine_857220(v18, v19 - (_QWORD)v18);
      }
      result = a2[3];
      if (result != 0) {
        v20 = a2[5];
        a2[4] = result;
        result = SdkRoutine_857220(result, v20 - result);
      }
      --v3;
      v5 += 72;
      a2 += 9;
    } while (v3 != 0);
  }
  return result;
}

__int64 SdkHr_593bd0(_WORD* a1, __int64 a2)
{
  _QWORD v3[2];

  v3[0] = 0;
  v3[1] = 0;
  return SdkRoutine_593ae0(a1, a2, (__int64)v3) & 1;
}

__int64 SdkHr_5a44e0(__int64 a1, _BYTE* a2, _DWORD* a3, __int64* a4,
                     __int64* a5, __int64 a6, char a7)
{
  return SdkRoutine_5a4050(a1 + 8, a2, a3, *a4, 12 * a4[1], *a5, a5[1], a6,
                           a7 & 1, 1u);
}

__int64 SdkHr_5ce460(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 48);
  v10 = 0;
  v8 = v2;
  v9 = &v10;
  SdkRoutine_5cc220(&v8, 0);
  if (v9 == nullptr) {
    v5 = 5642;
    v6 = v10;
    if (v10 == 0) {
      return v5;
    }
    goto LABEL_3;
  }
  v8 = *a2;
  v5 = SdkRoutine_e3b70(a1 + 8, &v8, 100, &v10);
  v6 = v10;
  if (v10 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return v5;
}

__int64 SdkHr_5d3270(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned __int64 v4;
  unsigned int v5;
  __int64* v6;
  __int64 v8;
  unsigned __int64 explicit;
  bool v11;
  int v12;
  int v13;
  _BOOL4 v14;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  int v20;
  unsigned int v21;
  _BOOL4 v22;

  v2 = *(unsigned __int8*)(a2 + 4);
  if (*(_DWORD*)a2 == 0 && v2 == 0) {
    v4 = *(_QWORD*)(a2 + 8);
    if (v4 == 0) {
      return 1;
    }
    v5 = -1;
    v6 = (__int64*)(a1 + 176);
  }
  else {
    if (v2 > 1) {
      SdkRoutine_857150(a1);
      __udf(0);
    }
    v4 = *(_QWORD*)(a2 + 8);
    v5 = ~*(_DWORD*)a2;
    v6 = (__int64*)(a1 + 176);
  }
  v8 = v6[1];
  if (*(_QWORD*)(v8 + 16) == 0 || v5 > *(_DWORD*)(v8 + 4)) {
    return SdkRoutine_5d2db0(*v6, v5, v4, v2);
  }
  explicit = atomic_load_explicit(
      (atomic_ullong* volatile)(*(_QWORD*)(v8 + 24) + 8LL * v5),
      memory_order_acquire);
  if (explicit == -1) {
    return 1;
  }
  v11 = explicit >= v4;
  v12 = explicit - v4;
  v13 = !v11;
  v14 = v12 < 0;
  if ((unsigned __int8)v2 == 1) {
    v14 = v13;
  }
  if (!v14) {
    return 1;
  }
  v15 = v2;
  v16 = v4;
  v17 = v5;
  v18 = v5;
  SdkRoutine_858b60(v8 + 64);
  SdkRoutine_5d2920(v8, v8 + 72, v8 + 120, v18);
  SdkRoutine_858b80(v8 + 64);
  v19 = atomic_load_explicit(
      (atomic_ullong* volatile)(*(_QWORD*)(v8 + 24) + 8 * v17),
      memory_order_acquire);
  if (v19 == -1) {
    return 1;
  }
  v11 = v19 >= v16;
  v20 = v19 - v16;
  v21 = v11;
  v22 = v20 > -1;
  if (v15 == 1) {
    return v21;
  }
  else {
    return v22;
  }
}

__int64 SdkHr_5d33f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int8 v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;
  char v23;
  unsigned __int64 explicit;
  bool v25;
  int v26;
  int v27;
  _BOOL4 v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  bool v32;
  bool v33;
  _QWORD v34[2];
  _QWORD v35[5];
  unsigned __int8 v36;
  unsigned __int64 v37;
  unsigned int v38;
  _QWORD v39[3];
  _QWORD v40[7];

  v5 = *(unsigned __int8*)(a2 + 4);
  if (*(_DWORD*)a2 == 0 && v5 == 0) {
    v8 = *(_QWORD*)(a2 + 8);
    if (v8 == 0) {
      return 1;
    }
    v9 = -1;
    v10 = *(_QWORD*)(a1 + 176);
    v11 = a1 + 192;
    v12 = *(_QWORD*)(a1 + 184);
  }
  else {
    if (v5 > 1) {
      v40[5] = v3;
      v40[6] = v4;
      SdkRoutine_857150(a1);
      __udf(0);
    }
    v8 = *(_QWORD*)(a2 + 8);
    v9 = ~*(_DWORD*)a2;
    v10 = *(_QWORD*)(a1 + 176);
    v11 = a1 + 192;
    v12 = *(_QWORD*)(a1 + 184);
  }
  v39[1] = v3;
  v39[2] = v4;
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(_DWORD*)(v12 + 4);
  v16 = a3;
  v17 = v5;
  v18 = v8;
  v19 = v9;
  v20 = v11;
  v40[0] = v12;
  v39[0] = v10;
  v38 = v9;
  v37 = v8;
  v36 = v5;
  if (v14 == 0 || v9 > v15) {
    v22 = v10;
    if ((SdkRoutine_5d2db0(v10, v9, v8, v5) & 1) != 0) {
    LABEL_32:
      v23 = 1;
      return v23 & 1;
    }
  }
  else {
    explicit = atomic_load_explicit(
        (atomic_ullong* volatile)(*(_QWORD*)(v12 + 24) + 8LL * v9),
        memory_order_acquire);
    if (explicit == -1) {
      goto LABEL_32;
    }
    v25 = explicit >= v8;
    v26 = explicit - v8;
    v27 = !v25;
    v28 = v26 < 0;
    if ((unsigned __int8)v5 == 1) {
      v28 = v27;
    }
    if (!v28) {
      goto LABEL_32;
    }
    v29 = v12;
    SdkRoutine_858b60(v12 + 64);
    SdkRoutine_5d2920(v29, v29 + 72, v29 + 120, v19);
    SdkRoutine_858b80(v29 + 64);
    v30 = atomic_load_explicit(
        (atomic_ullong* volatile)(*(_QWORD*)(v29 + 24) + 8LL * v19),
        memory_order_acquire);
    if (v30 == -1) {
      goto LABEL_32;
    }
    v25 = v30 >= v18;
    v31 = v30 - v18;
    v32 = v25;
    v33 = v31 > -1;
    if (v17 == 1) {
      v33 = v32;
    }
    if (v33) {
      goto LABEL_32;
    }
    v22 = v39[0];
    v19 = v38;
    v17 = v36;
    v18 = v37;
  }
  v35[0] = v40;
  v35[1] = v39;
  v35[2] = &v38;
  v35[3] = &v37;
  v35[4] = &v36;
  v34[0] = ~v19 | ((unsigned __int64)v17 << 32);
  v34[1] = v18;
  v23 = SdkRoutine_5d3600(v22, v20, v35, v34, v16);
  return v23 & 1;
}

__int64 SdkHr_5d3a30(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  unsigned int v5;
  __int64 result;
  unsigned int v7;

  a2[3] = 0;
  a2[4] = 0;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(_QWORD*)(a1 + 176);
  v7 = 0;
  if ((SdkRoutine_5d2ec0(a1 + 192, &v7, v4) & 1) == 0) {
    return 33011;
  }
  v5 = v7;
  result = 0;
  *(_DWORD*)a2 = v7;
  a2[1] = a1 + 48LL * v5 + 272;
  a2[2] = 1;
  a2[3] = 0;
  a2[4] = 0;
  return result;
}

__int64 SdkHr_5e6b80(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v10;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  _QWORD* v17;
  unsigned int* v18;
  __int64 v19;
  _QWORD v20[7];
  __int64 v21;
  _QWORD v22[7];
  __int64 v23;
  _QWORD v24[6];

  SdkRoutine_858b60(a4);
  v10 = atomic_load((unsigned int*)(a5 + 16));
  if (v10 == 2) {
    *a1 = *(_QWORD*)(a5 + 24);
    return SdkRoutine_858b80(a4);
  }
  SdkRoutine_858b80(a4);
  memset(v24, 0, sizeof(v24));
  SdkRoutine_859040(v24);
  v23 = 0;
  memset(v22, 0, sizeof(v22));
  SdkRoutine_8591f0(v22, a2);
  v23 = 1;
  SdkRoutine_859060(v24, v22);
  v21 = 0;
  memset(v20, 0, sizeof(v20));
  SdkRoutine_858be0(v20, a5 + 32);
  v21 = 2;
  SdkRoutine_859060(v24, v20);
  while (1) {
    v14 = SdkRoutine_859070(v24);
    v15 = *(_QWORD*)(v14 + 56);
    if (v15 == 2) {
      break;
    }
    if (v15 != 1) {
      SdkRoutine_857150(v14);
      __udf(0);
    }
    SdkRoutine_858b60(a3);
    v16 = SdkRoutine_85d430(a2);
    v12 = a3;
    if ((v16 & 1) != 0) {
      SdkRoutine_85d490(a2);
      v17 = *(_QWORD**)(a3 + 8);
      v12 = a3;
      if (v17 != nullptr) {
        v19 = *v17;
        v18 = (unsigned int*)(v17 + 1);
        if ((*(unsigned int (**)(_QWORD, unsigned int*, __int64))(
                *(_QWORD*)v19 + 120LL))(*(_QWORD*)(*(_QWORD*)v19 + 24LL), v18,
                                        128) != 0) {
          SdkRoutine_5e6400(a4);
        }
        else {
          SdkRoutine_5e6180(a4, v18);
        }
        v12 = a3;
      }
    }
  LABEL_5:
    SdkRoutine_858b80(v12);
  }
  SdkRoutine_858b60(a4);
  v12 = a4;
  v13 = atomic_load((unsigned int*)(a5 + 16));
  if (v13 != 2) {
    goto LABEL_5;
  }
  *a1 = *(_QWORD*)(a5 + 24);
  SdkRoutine_858b80(a4);
  SdkRoutine_859020(v20);
  v21 = 0;
  SdkRoutine_859030(v20);
  SdkRoutine_859020(v22);
  v23 = 0;
  SdkRoutine_859030(v22);
  return SdkRoutine_859050(v24);
}

__int64 SdkHr_5e7f40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  _QWORD v16[5];
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19[2];
  __int64 v20;

  v17 = 0;
  v18 = nullptr;
  v19[0] = 1;
  v19[1] = a3;
  memset(v16, 0, sizeof(v16));
  v12 = 0;
  v14 = 0;
  v11 = 0;
  SdkRoutine_858ce0(v16, 0, 0);
  v17 = (__int64)&v17;
  v18 = &v17;
  SdkRoutine_858b90(v16);
  v15 = 0;
  v13 = 0;
  SdkRoutine_5e6a80(a1 + 16, &v11, v19);
  v20 = 0;
  if (a2 == 0) {
    v7 = SdkRoutine_5e8340(&v20, a1 + 16, &v11, a4);
    SdkRoutine_858b60(a1 + 16);
    if (&v17 == (__int64*)(a1 + 152)) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v7 = SdkRoutine_5e80a0(&v20, a2, a1, a1 + 16, &v11, a4);
  SdkRoutine_858b60(a1 + 16);
  if (&v17 != (__int64*)(a1 + 152)) {
  LABEL_3:
    v8 = v18;
    v9 = *v18;
    *(_QWORD*)(v17 + 8) = v18;
    *v8 = v17;
    *(_QWORD*)(v9 + 8) = &v17;
    v17 = v9;
  }
LABEL_4:
  SdkRoutine_858b90(v16);
  v15 = 0;
  v13 = 0;
  v11 = 0;
  v12 = 0;
  SdkRoutine_858b80(a1 + 16);
  SdkRoutine_858b40(v16);
  return v7 & 1;
}

__int64 SdkHr_5e80a0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  unsigned int v12;
  unsigned int v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  _QWORD* v28;
  unsigned int* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[7];
  __int64 v36;
  _QWORD v37[7];
  __int64 v38;
  _QWORD v39[6];

  if (a6 <= 0) {
    return SdkRoutine_5e84e0(a1, a2, a3, a4, a5);
  }
  SdkRoutine_858b60(a4);
  v12 = atomic_load((unsigned int*)(a5 + 16));
  if (v12 == 2) {
    *a1 = *(_QWORD*)(a5 + 24);
    SdkRoutine_858b80(a4);
    return 1;
  }
  v15 = SdkRoutine_858b80(a4);
  v16 = SdkRoutine_859350(v15);
  v17 = SdkRoutine_85d1a0(a6);
  memset(v39, 0, sizeof(v39));
  SdkRoutine_859040(v39);
  v38 = 0;
  memset(v37, 0, sizeof(v37));
  SdkRoutine_8591f0(v37, a2);
  v38 = 1;
  SdkRoutine_859060(v39, v37);
  v36 = 0;
  memset(v35, 0, sizeof(v35));
  SdkRoutine_858be0(v35, a5 + 32);
  v36 = 2;
  SdkRoutine_859060(v39, v35);
  v18 = SdkRoutine_85d5e0(v39, a6);
  if (v18 == 0) {
  LABEL_17:
    v13 = 0;
  LABEL_19:
    SdkRoutine_859020(v35);
    v36 = 0;
    SdkRoutine_859030(v35);
    SdkRoutine_859020(v37);
    v38 = 0;
    SdkRoutine_859030(v37);
    SdkRoutine_859050(v39);
    return v13;
  }
  v19 = v17 + v16;
  v20 = v18;
  while (1) {
    v23 = SdkRoutine_859350(v18);
    v24 = SdkRoutine_859360(v19 - v23);
    v25 = *(_QWORD*)(v20 + 56);
    v26 = v24;
    if (v25 != 2) {
      break;
    }
    SdkRoutine_858b60(a4);
    v21 = a4;
    v22 = atomic_load((unsigned int*)(a5 + 16));
    if (v22 == 2) {
      *a1 = *(_QWORD*)(a5 + 24);
      SdkRoutine_858b80(a4);
      v13 = 1;
      goto LABEL_19;
    }
  LABEL_8:
    SdkRoutine_858b80(v21);
    v18 = SdkRoutine_85d5e0(v39, v26 & ~(v26 >> 63));
    v20 = v18;
    if (v18 == 0) {
      goto LABEL_17;
    }
  }
  if (v25 == 1) {
    SdkRoutine_858b60(a3);
    v27 = SdkRoutine_85d430(a2);
    v21 = a3;
    if ((v27 & 1) != 0) {
      SdkRoutine_85d490(a2);
      v28 = *(_QWORD**)(a3 + 8);
      v21 = a3;
      if (v28 != nullptr) {
        v30 = *v28;
        v29 = (unsigned int*)(v28 + 1);
        if ((*(unsigned int (**)(_QWORD, unsigned int*, __int64))(
                *(_QWORD*)v30 + 120LL))(*(_QWORD*)(*(_QWORD*)v30 + 24LL), v29,
                                        128) != 0) {
          SdkRoutine_5e6400(a4);
        }
        else {
          SdkRoutine_5e6180(a4, v29);
        }
        v21 = a3;
      }
    }
    goto LABEL_8;
  }
  v31 = SdkRoutine_857150(v24);
  return SdkRoutine_5e8340(v31, v32, v33, v34);
}

__int64 SdkHr_5e84e0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v10;
  _QWORD* v11;
  unsigned int* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;

  SdkRoutine_858b60(a4);
  v10 = atomic_load((unsigned int*)(a5 + 16));
  if (v10 == 2) {
    goto LABEL_8;
  }
  SdkRoutine_858b80(a4);
  SdkRoutine_858b60(a3);
  if ((SdkRoutine_85d430(a2) & 1) != 0) {
    SdkRoutine_85d490(a2);
    v11 = *(_QWORD**)(a3 + 8);
    if (v11 != nullptr) {
      v13 = *v11;
      v12 = (unsigned int*)(v11 + 1);
      if ((*(unsigned int (**)(_QWORD, unsigned int*, __int64))(
              *(_QWORD*)v13 + 120LL))(*(_QWORD*)(*(_QWORD*)v13 + 24LL), v12,
                                      128) != 0) {
        SdkRoutine_5e6400(a4);
      }
      else {
        SdkRoutine_5e6180(a4, v12);
      }
    }
  }
  SdkRoutine_858b80(a3);
  SdkRoutine_858b60(a4);
  v14 = atomic_load((unsigned int*)(a5 + 16));
  if (v14 == 2) {
  LABEL_8:
    v15 = *(_QWORD*)(a5 + 24);
    v16 = 1;
    *a1 = v15;
  }
  else {
    v16 = 0;
  }
  SdkRoutine_858b80(a4);
  return v16;
}

__int64 SdkHr_5e9100(__int64 a1, _DWORD* a2, _QWORD* a3, __int64 a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[2];
  __int64 v14;

  if (*(_DWORD*)(a4 + 64) != 0) {
    return 5234;
  }
  v14 = 0;
  result = SdkRoutine_5e7d80(a4 + 40, &v14, a1, 1);
  if ((_DWORD)result == 0) {
    v8 = *(unsigned int*)(a4 + 696);
    if ((_DWORD)v8 == *(_DWORD*)(a4 + 700)) {
      *(_QWORD*)(a4 + 208) &= ~v14;
      return 3698;
    }
    else {
      v9 = *(unsigned int*)(a4 + 4 * v8 + 704);
      *(_DWORD*)(a4 + 696) = ((_BYTE)v8 + 1) & 0xF;
      v10 = a4 + 32 * v9;
      v11 = *(_QWORD*)(v10 + 240);
      v13[0] = *(_QWORD*)(v10 + 232);
      v13[1] = v11;
      *(_BYTE*)(v10 + 216) = 2;
      *(_QWORD*)(v10 + 224) = v14;
      *a2 = v9;
      *a3 = SdkRoutine_874b90(v13);
      a3[1] = v12;
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
