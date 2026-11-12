#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN NgxData_2b6ab58;

extern _UNKNOWN NgxData_2b6ab60;

extern __int64 NgxData_2b89de0;

extern _UNKNOWN NgxData_2b89de8;

extern _WORD NgxData_9387fc[];

extern _UNKNOWN NgxData_9393bc;

extern _UNKNOWN NgxData_9393d4;

extern unsigned int NgxData_93947c[];

extern __int64* NgxData_951388[4];

extern _UNKNOWN* NgxData_9513a8;

extern __int64 NgxData_951460;

extern __int64 NgxData_951468;

extern __int64 NgxData_951470;

extern __int64 NgxData_951478;

extern __int64 NgxData_951480;

__int64 NgxRoutine_420(_QWORD);

__int64 NgxRoutine_430(_QWORD, _QWORD);

void __attribute__((noreturn)) NgxRoutine_bedc0(_QWORD, _QWORD);

__int64 NgxRoutine_bf010(_QWORD*, __int64);

void __attribute__((noreturn)) NgxRoutine_bfea0();

void __attribute__((noreturn)) NgxRoutine_db120();

__int64 NgxRoutine_db240(_QWORD);

void __attribute__((noreturn)) NgxRoutine_dfa90();

__int64 NgxRoutine_e0c40();

__int64 NgxRoutine_e21e0(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) NgxRoutine_e2bd0(_QWORD);

__int64 NgxRoutine_e2c30(_QWORD, _QWORD);

__int64 NgxRoutine_e30e0(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3100(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3180(_QWORD);

__int64 NgxRoutine_e3190(_QWORD);

__int64 NgxRoutine_e3220(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3230(_QWORD);

__int64 NgxRoutine_e33f0(_QWORD);

__int64 NgxRoutine_e3700(_QWORD);

__int64 NgxRoutine_e3710(_QWORD);

__int64 NgxRoutine_e3720(_QWORD);

__int64 NgxRoutine_e3730(_QWORD);

__int64 NgxRoutine_e37c0(_QWORD);

__int64 NgxRoutine_e37d0(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e37e0(_QWORD);

__int64 NgxRoutine_e3800(_QWORD);

__int64 NgxRoutine_e3860(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3870(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3950(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3960(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e3970(_QWORD, _QWORD, _QWORD);

__int64 NgxRoutine_e39a0(_QWORD, _QWORD);

__int64 NgxRoutine_e39b0(_QWORD);

__int64 NgxRoutine_e39c0(void);

__int64 NgxRoutine_e39e0(_QWORD);

__int64 NgxRoutine_e39f0(_QWORD, _QWORD);

__int64 NgxRoutine_e3a00(_QWORD, _QWORD);

__int64 NgxRoutine_e3a10(_QWORD);

__int64 NgxRoutine_e3a20(_QWORD);

__int64 NgxRoutine_e3a30(_QWORD, _QWORD);

void __attribute__((noreturn)) NgxHr_c0f38(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64 a6,
                                           __int64 a7, __int64 a8, __int64 a9,
                                           __int64 a10, __int64 a11)
{
  __int64 v11;

  if (a11 != 0) {
    v11 = a1;
    NgxRoutine_e3800(a11);
    a1 = v11;
  }
  NgxRoutine_e3720(a1);
  __udf(0);
}

void __attribute__((noreturn)) NgxHr_c5718(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64 a6,
                                           __int64 a7, __int64 a8, __int64 a9,
                                           __int64 a10, __int64 a11)
{
  __int64 v11;

  if (a11 != 0) {
    v11 = a1;
    NgxRoutine_e3800(a11);
    a1 = v11;
  }
  NgxRoutine_e3720(a1);
  __udf(0);
}

void __attribute__((noreturn)) NgxHr_d71f4(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;

  if ((*(_BYTE*)(v2 - 104) & 1) != 0) {
    goto LABEL_5;
  }
LABEL_2:
  if ((*(_BYTE*)(v2 - 80) & 1) != 0) {
    while (1) {
      NgxRoutine_430(*(_QWORD*)(v2 - 64),
                     *(_QWORD*)(v2 - 80) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v2 - 56) & 1) != 0) {
        break;
      }
    LABEL_4:
      NgxRoutine_db240(v2 - 16);
      NgxRoutine_e3720(a1);
      NgxRoutine_e3800(v1);
      if ((*(_BYTE*)(v2 - 104) & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_5:
      NgxRoutine_430(*(_QWORD*)(v2 - 88),
                     *(_QWORD*)(v2 - 104) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v2 - 80) & 1) == 0) {
        goto LABEL_3;
      }
    }
  }
  else {
  LABEL_3:
    if ((*(_BYTE*)(v2 - 56) & 1) == 0) {
      goto LABEL_4;
    }
  }
  NgxRoutine_430(*(_QWORD*)(v2 - 40),
                 *(_QWORD*)(v2 - 56) & 0xFFFFFFFFFFFFFFFELL);
  NgxRoutine_db240(v2 - 16);
  v4 = NgxRoutine_e3720(a1);
  NgxRoutine_db240(v2 - 16);
  NgxRoutine_e3720(v4);
  __udf(0);
}

void __attribute__((noreturn)) NgxHr_d8484(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;

  if ((*(_BYTE*)(v2 - 104) & 1) != 0) {
    goto LABEL_5;
  }
LABEL_2:
  if ((*(_BYTE*)(v2 - 80) & 1) != 0) {
    while (1) {
      NgxRoutine_430(*(_QWORD*)(v2 - 64),
                     (4LL * *(_QWORD*)(v2 - 80)) & 0xFFFFFFFFFFFFFFF8LL);
      if ((*(_BYTE*)(v2 - 56) & 1) != 0) {
        break;
      }
    LABEL_4:
      NgxRoutine_db240(v2 - 16);
      NgxRoutine_e3720(a1);
      NgxRoutine_e3800(v1);
      if ((*(_BYTE*)(v2 - 104) & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_5:
      NgxRoutine_430(*(_QWORD*)(v2 - 88),
                     (4LL * *(_QWORD*)(v2 - 104)) & 0xFFFFFFFFFFFFFFF8LL);
      if ((*(_BYTE*)(v2 - 80) & 1) == 0) {
        goto LABEL_3;
      }
    }
  }
  else {
  LABEL_3:
    if ((*(_BYTE*)(v2 - 56) & 1) == 0) {
      goto LABEL_4;
    }
  }
  NgxRoutine_430(*(_QWORD*)(v2 - 40),
                 *(_QWORD*)(v2 - 56) & 0xFFFFFFFFFFFFFFFELL);
  NgxRoutine_db240(v2 - 16);
  v4 = NgxRoutine_e3720(a1);
  NgxRoutine_db240(v2 - 16);
  NgxRoutine_e3720(v4);
  __udf(0);
}

__int64 NgxHr_db310(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 result;
  __int64 v7;
  __int64** v8;
  __int64* v9;

  v7 = a2;
  v2 = *a1;
  if (atomic_load_explicit((atomic_ullong* volatile)a2, memory_order_acquire) !=
      -1) {
    v9 = &v7;
    v8 = &v9;
    NgxRoutine_e21e0(a2, &v8, NgxRoutine_e0c40);
  }
  v4 = *(_QWORD*)(v2 + 16);
  v5 = *(int*)(a2 + 8) - 1LL;
  if (v5 >= (*(_QWORD*)(v2 + 24) - v4) >> 3 ||
      (result = *(_QWORD*)(v4 + 8 * v5)) == 0) {
    NgxRoutine_db120();
  }
  return result;
}

__int64 NgxHr_db6d0(__int64 result, __int64 a2, char a3, __int64 a4)
{
  __int64* v4;

  v4 = NgxData_951388[0];
  *(_QWORD*)(result + 16) = a2;
  *(_BYTE*)(result + 24) = a3;
  *(_QWORD*)result = v4 + 2;
  *(_QWORD*)(result + 8) = a4 - 1;
  if (a2 == 0) {
    *(_QWORD*)(result + 16) = NgxData_9387fc;
  }
  return result;
}

__int64 NgxHr_dfab0(__int64 result, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  v3 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v5 = result;
  if (a2 <= (v2 - v3) >> 3) {
    if (a2 != 0) {
      result = NgxRoutine_e30e0(*(_QWORD*)(result + 8), 0, 8 * a2);
      v3 += 8 * a2;
    }
    *(_QWORD*)(v5 + 8) = v3;
  }
  else {
    v6 = *(_QWORD*)result;
    v7 = v3 - *(_QWORD*)result;
    v8 = v7 >> 3;
    v9 = (v7 >> 3) + a2;
    if (v9 >> 61 != 0) {
      NgxRoutine_dfa90();
    }
    v10 = v2 - v6;
    v11 = result + 24;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x1E || (*(_BYTE*)(result + 264) & 1) != 0) {
        if (v12 >> 61 != 0) {
          NgxRoutine_bfea0();
        }
        v13 = NgxRoutine_420(8 * v12);
      }
      else {
        v13 = result + 24;
        *(_BYTE*)(v5 + 264) = 1;
      }
    }
    else {
      v13 = 0;
    }
    v14 = v13 + v7;
    v15 = v13 + 8 * v12;
    NgxRoutine_e30e0(v13 + v7, 0, 8 * a2);
    NgxRoutine_e3100(v14 - 8 * v8, v6, v7);
    result = *(_QWORD*)v5;
    v16 = *(_QWORD*)(v5 + 16);
    *(_QWORD*)v5 = v14 - 8 * v8;
    *(_QWORD*)(v5 + 8) = v14 + 8 * a2;
    *(_QWORD*)(v5 + 16) = v15;
    if (result != 0) {
      if (result == v11) {
        *(_BYTE*)(v5 + 264) = 0;
      }
      else {
        return NgxRoutine_430(result, v16 - result);
      }
    }
  }
  return result;
}

__int64 NgxHr_dfc20(__int64* a1)
{
  __int64 result;

  result = *a1;
  if (result != 0) {
    return NgxRoutine_e3230(result);
  }
  return result;
}

__int64*** NgxHr_e0c40(__int64*** result)
{
  __int64 v1;

  v1 = ***result;
  *(_DWORD*)(v1 + 8) =
      atomic_fetch_add((atomic_uint* volatile)NgxData_9513a8, 1u) + 1;
  return result;
}

__int64 NgxHr_e0d60(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4)
{
  _DWORD* v8;
  int v9;
  _DWORD* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (a1 == a2) {
    goto LABEL_10;
  }
  v8 = (_DWORD*)NgxRoutine_e33f0(a1);
  v9 = *v8;
  *v8 = 0;
  v10 = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v13);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3860(a1, &v14, a4);
  if (*v10 == 0) {
    v12 = v14;
    *v10 = v9;
    if (v12 == a2) {
      return result;
    }
    goto LABEL_10;
  }
  if (v14 != a2) {
  LABEL_10:
    result = 0;
    *a3 = 4;
    return result;
  }
  if (*v10 == 34) {
    *a3 = 4;
    if (result > 0) {
      return 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      return 0x8000000000000000LL;
    }
  }
  return result;
}

__int64 NgxHr_e0e80(__int64 a1, __int64 a2, _DWORD* a3, unsigned int a4)
{
  _DWORD* v8;
  int v9;
  _DWORD* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (a1 == a2) {
    goto LABEL_10;
  }
  v8 = (_DWORD*)NgxRoutine_e33f0(a1);
  v9 = *v8;
  *v8 = 0;
  v10 = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v13);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3860(a1, &v14, a4);
  if (*v10 == 0) {
    v12 = v14;
    *v10 = v9;
    if (v12 == a2) {
      return result;
    }
    goto LABEL_10;
  }
  if (v14 != a2) {
  LABEL_10:
    result = 0;
    *a3 = 4;
    return result;
  }
  if (*v10 == 34) {
    *a3 = 4;
    if (result > 0) {
      return 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      return 0x8000000000000000LL;
    }
  }
  return result;
}

unsigned __int64 NgxHr_e0fa0(unsigned __int8* a1, unsigned __int8* a2,
                             _DWORD* a3, unsigned int a4)
{
  int v5;
  unsigned __int8* v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  unsigned __int64 result;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int8* v15;

  if (a1 == a2) {
    goto LABEL_13;
  }
  v5 = *a1;
  v8 = a1;
  if (v5 == 45) {
    v8 = a1 + 1;
    if (a1 + 1 == a2) {
      goto LABEL_13;
    }
  }
  v9 = (_DWORD*)NgxRoutine_e33f0(a1);
  v10 = *v9;
  *v9 = 0;
  v11 = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v14);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3870(v8, &v15, a4);
  if (*v11 != 0) {
    if (v15 == a2) {
      if (result >> 16 == 0 && *v11 != 34) {
        goto LABEL_9;
      }
      goto LABEL_17;
    }
  LABEL_13:
    result = 0;
  LABEL_14:
    *a3 = 4;
    return result;
  }
  v13 = v15;
  *v11 = v10;
  if (v13 != a2) {
    goto LABEL_13;
  }
  if (result >= 0x10000) {
  LABEL_17:
    result = 0xFFFF;
    goto LABEL_14;
  }
LABEL_9:
  if (v5 == 45) {
    return (unsigned int)-(int)result;
  }
  else {
    return (unsigned int)result;
  }
}

void __attribute__((noreturn)) NgxHr_e10d0(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

unsigned __int64 NgxHr_e10f0(unsigned __int8* a1, unsigned __int8* a2,
                             _DWORD* a3, unsigned int a4)
{
  int v5;
  unsigned __int8* v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  unsigned __int64 result;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int8* v15;

  if (a1 == a2) {
    goto LABEL_13;
  }
  v5 = *a1;
  v8 = a1;
  if (v5 == 45) {
    v8 = a1 + 1;
    if (a1 + 1 == a2) {
      goto LABEL_13;
    }
  }
  v9 = (_DWORD*)NgxRoutine_e33f0(a1);
  v10 = *v9;
  *v9 = 0;
  v11 = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v14);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3870(v8, &v15, a4);
  if (*v11 != 0) {
    if (v15 == a2) {
      if (HIDWORD(result) == 0 && *v11 != 34) {
        goto LABEL_9;
      }
      goto LABEL_17;
    }
  LABEL_13:
    result = 0;
  LABEL_14:
    *a3 = 4;
    return result;
  }
  v13 = v15;
  *v11 = v10;
  if (v13 != a2) {
    goto LABEL_13;
  }
  if (HIDWORD(result) != 0) {
  LABEL_17:
    result = 0xFFFFFFFFLL;
    goto LABEL_14;
  }
LABEL_9:
  if (v5 == 45) {
    return (unsigned int)-(int)result;
  }
  else {
    return (unsigned int)result;
  }
}

void __attribute__((noreturn)) NgxHr_e1220(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_e1240(unsigned __int8* a1, unsigned __int8* a2, _DWORD* a3,
                    unsigned int a4)
{
  int v5;
  unsigned __int8* v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  __int64 result;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int8* v15;

  if (a1 == a2) {
    goto LABEL_10;
  }
  v5 = *a1;
  v8 = a1;
  if (v5 == 45) {
    v8 = a1 + 1;
    if (a1 + 1 == a2) {
      goto LABEL_10;
    }
  }
  v9 = (_DWORD*)NgxRoutine_e33f0(a1);
  v10 = *v9;
  *v9 = 0;
  v11 = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v14);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3870(v8, &v15, a4);
  if (*v11 == 0) {
    v13 = v15;
    *v11 = v10;
    if (v13 == a2) {
      goto LABEL_13;
    }
  LABEL_10:
    result = 0;
    goto LABEL_11;
  }
  if (v15 != a2) {
    goto LABEL_10;
  }
  if (*v11 == 34) {
    result = -1;
  LABEL_11:
    *a3 = 4;
    return result;
  }
LABEL_13:
  if (v5 == 45) {
    return -result;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e1360(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_e1380(unsigned __int8* a1, unsigned __int8* a2, _DWORD* a3,
                    unsigned int a4)
{
  int v5;
  unsigned __int8* v8;
  _DWORD* v9;
  int v10;
  _DWORD* v11;
  __int64 result;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int8* v15;

  if (a1 == a2) {
    goto LABEL_10;
  }
  v5 = *a1;
  v8 = a1;
  if (v5 == 45) {
    v8 = a1 + 1;
    if (a1 + 1 == a2) {
      goto LABEL_10;
    }
  }
  v9 = (_DWORD*)NgxRoutine_e33f0(a1);
  v10 = *v9;
  *v9 = 0;
  v11 = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v14);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3870(v8, &v15, a4);
  if (*v11 == 0) {
    v13 = v15;
    *v11 = v10;
    if (v13 == a2) {
      goto LABEL_13;
    }
  LABEL_10:
    result = 0;
    goto LABEL_11;
  }
  if (v15 != a2) {
    goto LABEL_10;
  }
  if (*v11 == 34) {
    result = -1;
  LABEL_11:
    *a3 = 4;
    return result;
  }
LABEL_13:
  if (v5 == 45) {
    return -result;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e14a0(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_e14c0(__int64 result, __int64 a2, _DWORD* a3)
{
  __int64 v5;
  _DWORD* v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (result == a2) {
    goto LABEL_9;
  }
  v5 = result;
  v6 = (_DWORD*)NgxRoutine_e33f0(result);
  v7 = *v6;
  *v6 = 0;
  v8 = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v10);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3950(v5, &v11, NgxData_2b89de0);
  if (*v8 == 0) {
    v9 = v11;
    *v8 = v7;
    if (v9 == a2) {
      return result;
    }
  LABEL_9:
    *a3 = 4;
    return result;
  }
  if (v11 != a2 || *v8 == 34) {
    goto LABEL_9;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e15d4(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_e15f0(__int64 result, __int64 a2, _DWORD* a3)
{
  __int64 v5;
  _DWORD* v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (result == a2) {
    goto LABEL_9;
  }
  v5 = result;
  v6 = (_DWORD*)NgxRoutine_e33f0(result);
  v7 = *v6;
  *v6 = 0;
  v8 = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v10);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3960(v5, &v11, NgxData_2b89de0);
  if (*v8 == 0) {
    v9 = v11;
    *v8 = v7;
    if (v9 == a2) {
      return result;
    }
  LABEL_9:
    *a3 = 4;
    return result;
  }
  if (v11 != a2 || *v8 == 34) {
    goto LABEL_9;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e1704(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_e1720(__int64 result, __int64 a2, _DWORD* a3)
{
  __int64 v5;
  _DWORD* v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (result == a2) {
    *a3 = 4;
    return result;
  }
  v5 = result;
  v6 = (_DWORD*)NgxRoutine_e33f0(result);
  v7 = *v6;
  *v6 = 0;
  v8 = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)NgxRoutine_e3180(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = NgxRoutine_e3220(0x7FFFFFFF, "C", 0, v10);
    NgxRoutine_e3190(&NgxData_2b89de8);
  }
  result = NgxRoutine_e3970(v5, &v11, NgxData_2b89de0);
  if (*v8 == 0) {
    v9 = v11;
    *v8 = v7;
    if (v9 == a2) {
      return result;
    }
  LABEL_9:
    *a3 = 4;
    return result;
  }
  if (v11 != a2 || *v8 == 34) {
    goto LABEL_9;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e1844(__int64 a1)
{
  NgxRoutine_e3730(&NgxData_2b89de8);
  NgxRoutine_e3720(a1);
  __udf(0);
}

__int64 NgxHr_e1fc0(unsigned __int64 a1, unsigned int a2)
{
  __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;

  if (a1 < a2) {
    return 1;
  }
  v3 = a2 * a2;
  v4 = a1;
  result = 4;
  v5 = (unsigned int)(v3 * v3);
  while (1) {
    if (v4 < v3) {
      return (unsigned int)(result - 2);
    }
    if (v4 < (unsigned int)v3 * a2) {
      break;
    }
    if (v4 < v5) {
      return result;
    }
    v4 /= v5;
    result = (unsigned int)(result + 4);
    if (v4 < a2) {
      return (unsigned int)(result - 3);
    }
  }
  return (unsigned int)(result - 1);
}

__int64 NgxHr_e21e0(unsigned __int64* a1, __int64 a2, void (*a3)(__int64))
{
  NgxRoutine_e3700(&NgxData_2b6ab58);
  while (*a1 == 1) {
    NgxRoutine_e39a0(&NgxData_2b6ab60, &NgxData_2b6ab58);
  }
  if (*a1 != 0) {
    return NgxRoutine_e3710(&NgxData_2b6ab58);
  }
  *a1 = 1;
  NgxRoutine_e3710(&NgxData_2b6ab58);
  a3(a2);
  NgxRoutine_e3700(&NgxData_2b6ab58);
  atomic_store(0xFFFFFFFFFFFFFFFFLL, a1);
  NgxRoutine_e3710(&NgxData_2b6ab58);
  return NgxRoutine_e39b0(&NgxData_2b6ab60);
}

__int64 NgxHr_e22d0(__int64 result, char a2)
{
  _QWORD* v2;

  if ((a2 & 1) == 0) {
    v2 = (_QWORD*)result;
    NgxRoutine_e3700(&NgxData_2b6ab58);
    *v2 = 0;
    NgxRoutine_e3710(&NgxData_2b6ab58);
    return NgxRoutine_e39b0(&NgxData_2b6ab60);
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e2320()
{
  __int64 v0;

  v0 = NgxRoutine_e37c0(8);
  NgxRoutine_e39c0();
  NgxRoutine_e37d0(v0, NgxData_951460, NgxData_951468);
  __udf(0);
}

unsigned __int64 NgxHr_e2400(unsigned __int64 a1)
{
  unsigned int* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned int* v4;
  unsigned int* v5;
  unsigned int v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int* v11;
  unsigned __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;

  if (a1 > 0xD3) {
    if (a1 >= 0xFFFFFFFFFFFFFFC6LL) {
      NgxRoutine_e2bd0("__next_prime overflow");
    }
    v8 = 48;
    v9 = a1 / 0xD2;
    v10 = 210 * (a1 / 0xD2);
    v11 = NgxData_93947c;
    do {
      v12 = v8 >> 1;
      v13 = &v11[v8 >> 1];
      v15 = *v13;
      v14 = v13 + 1;
      v8 += ~(v8 >> 1);
      if (a1 % 0xD2 > v15) {
        v11 = v14;
      }
      else {
        v8 = v12;
      }
    } while (v8 != 0);
    v16 = v11 - NgxData_93947c;
  LABEL_16:
    result = v10 + NgxData_93947c[v16];
    v17 = 42;
    v18 = (unsigned int*)&NgxData_9393d4;
    while (1) {
      v19 = *(v18 - 1);
      if (result / v19 < v19) {
        break;
      }
      if (result == result / v19 * v19) {
        goto LABEL_129;
      }
      v20 = *v18;
      if (result / v20 < v20) {
        return result;
      }
      if (result == result / v20 * v20) {
        goto LABEL_129;
      }
      v21 = v18[1];
      if (result / v21 < v21) {
        return result;
      }
      if (result == result / v21 * v21) {
        goto LABEL_129;
      }
      v22 = v18[2];
      if (result / v22 < v22) {
        return result;
      }
      if (result == result / v22 * v22) {
        goto LABEL_129;
      }
      v23 = v18[3];
      if (result / v23 < v23) {
        return result;
      }
      if (result == result / v23 * v23) {
        goto LABEL_129;
      }
      v24 = v18[4];
      if (result / v24 < v24) {
        return result;
      }
      if (result == result / v24 * v24) {
        goto LABEL_129;
      }
      v25 = v18[5];
      if (result / v25 < v25) {
        return result;
      }
      if (result == result / v25 * v25) {
      LABEL_129:
        if (v16 == 47) {
          ++v9;
          v16 = 0;
        }
        else {
          ++v16;
        }
        v10 = 210 * v9;
        goto LABEL_16;
      }
      v17 -= 7;
      v18 += 7;
      if (v17 == 0) {
        v26 = 419;
        while (1) {
          v27 = result / (v26 - 208);
          if (v27 < v26 - 208) {
            return result;
          }
          if (result == v27 * (v26 - 208)) {
            goto LABEL_129;
          }
          v28 = result / (v26 - 198);
          if (v28 < v26 - 198) {
            return result;
          }
          if (result == v28 * (v26 - 198)) {
            goto LABEL_129;
          }
          v29 = result / (v26 - 196);
          if (v29 < v26 - 196) {
            return result;
          }
          if (result == v29 * (v26 - 196)) {
            goto LABEL_129;
          }
          v30 = result / (v26 - 192);
          if (v30 < v26 - 192) {
            return result;
          }
          if (result == v30 * (v26 - 192)) {
            goto LABEL_129;
          }
          v31 = result / (v26 - 190);
          if (v31 < v26 - 190) {
            return result;
          }
          if (result == v31 * (v26 - 190)) {
            goto LABEL_129;
          }
          v32 = result / (v26 - 186);
          if (v32 < v26 - 186) {
            return result;
          }
          if (result == v32 * (v26 - 186)) {
            goto LABEL_129;
          }
          v33 = result / (v26 - 180);
          if (v33 < v26 - 180) {
            return result;
          }
          if (result == v33 * (v26 - 180)) {
            goto LABEL_129;
          }
          v34 = result / (v26 - 178);
          if (v34 < v26 - 178) {
            return result;
          }
          if (result == v34 * (v26 - 178)) {
            goto LABEL_129;
          }
          v35 = result / (v26 - 172);
          if (v35 < v26 - 172) {
            return result;
          }
          if (result == v35 * (v26 - 172)) {
            goto LABEL_129;
          }
          v36 = result / (v26 - 168);
          if (v36 < v26 - 168) {
            return result;
          }
          if (result == v36 * (v26 - 168)) {
            goto LABEL_129;
          }
          v37 = result / (v26 - 166);
          if (v37 < v26 - 166) {
            return result;
          }
          if (result == v37 * (v26 - 166)) {
            goto LABEL_129;
          }
          v38 = result / (v26 - 162);
          if (v38 < v26 - 162) {
            return result;
          }
          if (result == v38 * (v26 - 162)) {
            goto LABEL_129;
          }
          v39 = result / (v26 - 156);
          if (v39 < v26 - 156) {
            return result;
          }
          if (result == v39 * (v26 - 156)) {
            goto LABEL_129;
          }
          v40 = result / (v26 - 150);
          if (v40 < v26 - 150) {
            return result;
          }
          if (result == v40 * (v26 - 150)) {
            goto LABEL_129;
          }
          v41 = result / (v26 - 148);
          if (v41 < v26 - 148) {
            return result;
          }
          if (result == v41 * (v26 - 148)) {
            goto LABEL_129;
          }
          v42 = result / (v26 - 142);
          if (v42 < v26 - 142) {
            return result;
          }
          if (result == v42 * (v26 - 142)) {
            goto LABEL_129;
          }
          v43 = result / (v26 - 138);
          if (v43 < v26 - 138) {
            return result;
          }
          if (result == v43 * (v26 - 138)) {
            goto LABEL_129;
          }
          v44 = result / (v26 - 136);
          if (v44 < v26 - 136) {
            return result;
          }
          if (result == v44 * (v26 - 136)) {
            goto LABEL_129;
          }
          v45 = result / (v26 - 130);
          if (v45 < v26 - 130) {
            return result;
          }
          if (result == v45 * (v26 - 130)) {
            goto LABEL_129;
          }
          v46 = result / (v26 - 126);
          if (v46 < v26 - 126) {
            return result;
          }
          if (result == v46 * (v26 - 126)) {
            goto LABEL_129;
          }
          v47 = result / (v26 - 120);
          if (v47 < v26 - 120) {
            return result;
          }
          if (result == v47 * (v26 - 120)) {
            goto LABEL_129;
          }
          v48 = result / (v26 - 112);
          if (v48 < v26 - 112) {
            return result;
          }
          if (result == v48 * (v26 - 112)) {
            goto LABEL_129;
          }
          v49 = result / (v26 - 108);
          if (v49 < v26 - 108) {
            return result;
          }
          if (result == v49 * (v26 - 108)) {
            goto LABEL_129;
          }
          v50 = result / (v26 - 106);
          if (v50 < v26 - 106) {
            return result;
          }
          if (result == v50 * (v26 - 106)) {
            goto LABEL_129;
          }
          v51 = result / (v26 - 102);
          if (v51 < v26 - 102) {
            return result;
          }
          if (result == v51 * (v26 - 102)) {
            goto LABEL_129;
          }
          v52 = result / (v26 - 100);
          if (v52 < v26 - 100) {
            return result;
          }
          if (result == v52 * (v26 - 100)) {
            goto LABEL_129;
          }
          v53 = result / (v26 - 96);
          if (v53 < v26 - 96) {
            return result;
          }
          if (result == v53 * (v26 - 96)) {
            goto LABEL_129;
          }
          v54 = result / (v26 - 88);
          if (v54 < v26 - 88) {
            return result;
          }
          if (result == v54 * (v26 - 88)) {
            goto LABEL_129;
          }
          v55 = result / (v26 - 82);
          if (v55 < v26 - 82) {
            return result;
          }
          if (result == v55 * (v26 - 82)) {
            goto LABEL_129;
          }
          v56 = result / (v26 - 78);
          if (v56 < v26 - 78) {
            return result;
          }
          if (result == v56 * (v26 - 78)) {
            goto LABEL_129;
          }
          v57 = result / (v26 - 72);
          if (v57 < v26 - 72) {
            return result;
          }
          if (result == v57 * (v26 - 72)) {
            goto LABEL_129;
          }
          v58 = result / (v26 - 70);
          if (v58 < v26 - 70) {
            return result;
          }
          if (result == v58 * (v26 - 70)) {
            goto LABEL_129;
          }
          v59 = result / (v26 - 66);
          if (v59 < v26 - 66) {
            return result;
          }
          if (result == v59 * (v26 - 66)) {
            goto LABEL_129;
          }
          v60 = result / (v26 - 60);
          if (v60 < v26 - 60) {
            return result;
          }
          if (result == v60 * (v26 - 60)) {
            goto LABEL_129;
          }
          v61 = result / (v26 - 58);
          if (v61 < v26 - 58) {
            return result;
          }
          if (result == v61 * (v26 - 58)) {
            goto LABEL_129;
          }
          v62 = result / (v26 - 52);
          if (v62 < v26 - 52) {
            return result;
          }
          if (result == v62 * (v26 - 52)) {
            goto LABEL_129;
          }
          v63 = result / (v26 - 46);
          if (v63 < v26 - 46) {
            return result;
          }
          if (result == v63 * (v26 - 46)) {
            goto LABEL_129;
          }
          v64 = result / (v26 - 42);
          if (v64 < v26 - 42) {
            return result;
          }
          if (result == v64 * (v26 - 42)) {
            goto LABEL_129;
          }
          v65 = result / (v26 - 40);
          if (v65 < v26 - 40) {
            return result;
          }
          if (result == v65 * (v26 - 40)) {
            goto LABEL_129;
          }
          v66 = result / (v26 - 36);
          if (v66 < v26 - 36) {
            return result;
          }
          if (result == v66 * (v26 - 36)) {
            goto LABEL_129;
          }
          v67 = result / (v26 - 30);
          if (v67 < v26 - 30) {
            return result;
          }
          if (result == v67 * (v26 - 30)) {
            goto LABEL_129;
          }
          v68 = result / (v26 - 28);
          if (v68 < v26 - 28) {
            return result;
          }
          if (result == v68 * (v26 - 28)) {
            goto LABEL_129;
          }
          v69 = result / (v26 - 22);
          if (v69 < v26 - 22) {
            return result;
          }
          if (result == v69 * (v26 - 22)) {
            goto LABEL_129;
          }
          v70 = result / (v26 - 18);
          if (v70 < v26 - 18) {
            return result;
          }
          if (result == v70 * (v26 - 18)) {
            goto LABEL_129;
          }
          v71 = result / (v26 - 16);
          if (v71 < v26 - 16) {
            return result;
          }
          if (result == v71 * (v26 - 16)) {
            goto LABEL_129;
          }
          v72 = result / (v26 - 12);
          if (v72 < v26 - 12) {
            return result;
          }
          if (result == v72 * (v26 - 12)) {
            goto LABEL_129;
          }
          v73 = result / (v26 - 10);
          if (v73 < v26 - 10) {
            return result;
          }
          if (result == v73 * (v26 - 10)) {
            goto LABEL_129;
          }
          if (result / v26 < v26) {
            return result;
          }
          v74 = result / v26 * v26;
          v26 += 210LL;
          if (result == v74) {
            goto LABEL_129;
          }
        }
      }
    }
  }
  else {
    v1 = (unsigned int*)&NgxData_9393bc;
    v2 = 48;
    do {
      v3 = v2 >> 1;
      v4 = &v1[v2 >> 1];
      v6 = *v4;
      v5 = v4 + 1;
      v2 += ~(v2 >> 1);
      if (a1 > v6) {
        v1 = v5;
      }
      else {
        v2 = v3;
      }
    } while (v2 != 0);
    return *v1;
  }
  return result;
}

void __attribute__((noreturn)) NgxHr_e2bd0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = NgxRoutine_e37c0(16);
  NgxRoutine_e2c30(v2, a1);
  v3 = NgxRoutine_e37d0(v2, NgxData_951470, NgxData_951478);
  NgxRoutine_e37e0(v2);
  NgxRoutine_e3720(v3);
  __udf(0);
}

__int64 NgxHr_e2c30(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = NgxRoutine_bf010(a1, a2);
  *a1 = NgxData_951480 + 16;
  return result;
}

__int64 NgxHr_e2c70(__int64 a1)
{
  __int64 result;

  result = NgxRoutine_e3700(a1);
  if ((_DWORD)result != 0) {
    NgxRoutine_bedc0(result, "mutex lock failed");
  }
  return result;
}

__int64 NgxHr_e2ca0(__int64 a1) { return NgxRoutine_e3710(a1); }

__int64 NgxHr_e2cc0(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  __int64 result;
  unsigned int v6;
  unsigned int v7;
  _BYTE v8[4];

  v2 = NgxRoutine_e39e0(v8);
  if (v2 != 0) {
    NgxRoutine_bedc0(v2, "recursive_mutex constructor failed");
  }
  v3 = NgxRoutine_e39f0(v8, 1);
  if (v3 != 0) {
    v6 = v3;
    NgxRoutine_e3a10(v8);
    NgxRoutine_bedc0(v6, "recursive_mutex constructor failed");
  }
  v4 = NgxRoutine_e3a00(a1, v8);
  result = NgxRoutine_e3a10(v8);
  if (v4 != 0) {
    NgxRoutine_bedc0(v4, "recursive_mutex constructor failed");
  }
  if ((_DWORD)result != 0) {
    v7 = result;
    NgxRoutine_e3a20(a1);
    NgxRoutine_bedc0(v7, "recursive_mutex constructor failed");
  }
  return result;
}

__int64 NgxHr_e2d90(__int64 a1) { return NgxRoutine_e3a20(a1); }

__int64 NgxHr_e2db0(__int64 a1)
{
  __int64 result;

  result = NgxRoutine_e3700(a1);
  if ((_DWORD)result != 0) {
    NgxRoutine_bedc0(result, "recursive_mutex lock failed");
  }
  return result;
}

__int64 NgxHr_e2de0(__int64 a1) { return NgxRoutine_e3710(a1); }

__int64 NgxHr_e3000()
{
  __int64 v0;
  unsigned int* v2;
  _QWORD v3[2];

  v0 = NgxRoutine_e3a30(1, v3);
  if ((_DWORD)v0 != 0) {
    v2 = (unsigned int*)NgxRoutine_e33f0(v0);
    NgxRoutine_bedc0(*v2, "clock_gettime(CLOCK_MONOTONIC) failed");
  }
  return v3[1] + 1000000000LL * v3[0];
}

#pragma GCC visibility pop
