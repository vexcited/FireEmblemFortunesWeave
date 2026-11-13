#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 NgxData_2b6ab70;
extern _UNKNOWN* NgxData_94c0b0;
extern __int64 (*NgxData_94c448[])();
extern __int64 (*NgxData_94c518[])();
extern __int64 (*NgxData_94c578[])();
extern __int64* NgxData_9521d8[10];
extern __int64* NgxData_9521f0[7];
extern __int64* NgxData_9521f8[6];
extern __int64* NgxData_952208[4];
__int64 NgxRoutine_27b20(_QWORD, _QWORD);
__int64 NgxRoutine_27b30(_DWORD*);
__int64 NgxRoutine_27bf0(_DWORD*, __int64);
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) NgxRoutine_27cd0(_QWORD);
__int64 NgxRoutine_294b0(_QWORD, _QWORD);
__int64 NgxRoutine_29780(_QWORD, _QWORD);
__int64 NgxRoutine_29a20(_QWORD, _QWORD);
__int64 NgxRoutine_29b90(_QWORD, _QWORD);
__int64 NgxRoutine_29ca0(_QWORD);
__int64 NgxRoutine_29cc0(_QWORD);
__int64 NgxRoutine_312c0(_QWORD, _QWORD);
__int64 NgxRoutine_340(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_420(__int64);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf10(_QWORD);
void __attribute__((noreturn)) NgxRoutine_e2370(const char*, ...);
__int64 NgxRoutine_e30c0(_QWORD);
__int64 NgxRoutine_e30e0(_QWORD, _QWORD, _QWORD);
__int64 NgxRoutine_e3120(_QWORD, _QWORD, _QWORD);

__int64 NgxHr_200()
{
  return NgxRoutine_340(&NgxData_94c0b0, 0, NgxData_2b6ab70);
}

void NgxHr_270() { __udf(0x8003u); }

__int64 NgxHr_2b0() { return 0xFFFFFFFFLL; }

void NgxHr_340() { ; }

__int64 NgxHr_440(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = a2 * a1;
  v3 = NgxRoutine_e30c0(a2 * a1);
  NgxRoutine_e30e0(v3, 0, v2);
  return v3;
}

unsigned __int64 NgxHr_480(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return (unsigned int)(v3 >> 3) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_540(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return (unsigned int)(v3 >> 3) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_600(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_6c0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_780(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_840(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 2) << 32);
}

__int64 NgxHr_8a0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 128;
  }
  *(_QWORD*)(result + 88) = 128;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 128 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 63;
  v15 = v14 < -63;
  v17 = v14 + 126;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 6) - 1;
  return result;
}

unsigned __int64 NgxHr_9b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 2) << 32);
}

__int64 NgxHr_a00(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_b10(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_b60(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_c70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 2) << 32);
}

__int64 NgxHr_cc0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_dd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_e20(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_f30(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return (unsigned int)(v3 >> 3) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_f80(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 128;
  }
  *(_QWORD*)(result + 88) = 128;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 128 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 63;
  v15 = v14 < -63;
  v17 = v14 + 126;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 6) - 1;
  return result;
}

unsigned __int64 NgxHr_1090(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return (unsigned int)(v3 >> 3) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_10e0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_11f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return (unsigned int)(v3 >> 3) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_1240(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 128;
  }
  *(_QWORD*)(result + 88) = 128;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 128 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 63;
  v15 = v14 < -63;
  v17 = v14 + 126;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 6) - 1;
  return result;
}

unsigned __int64 NgxHr_1350(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_13a0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_14b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_1500(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 128;
  }
  *(_QWORD*)(result + 88) = 128;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 128 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 63;
  v15 = v14 < -63;
  v17 = v14 + 126;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 6) - 1;
  return result;
}

unsigned __int64 NgxHr_1610(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_1660(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_1770(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_17c0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 128;
  }
  *(_QWORD*)(result + 88) = 128;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 128 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 63;
  v15 = v14 < -63;
  v17 = v14 + 126;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 6) - 1;
  return result;
}

unsigned __int64 NgxHr_18d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_1920(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_1a30(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_1a80(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 128;
  }
  *(_QWORD*)(result + 88) = 128;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 128 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 63;
  v15 = v14 < -63;
  v17 = v14 + 126;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 6) - 1;
  return result;
}

unsigned __int64 NgxHr_1b90(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_1be0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = 2 * v2;
  v4 = v1 * (__int64)*(int*)(result + 56);
  if ((_DWORD)v4 == 1) {
    v3 = 64;
  }
  *(_QWORD*)(result + 88) = 32;
  *(_QWORD*)(result + 96) = v3;
  v5 = v4 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v4 - 1) * v2;
  v6 = v4 - 2;
  if ((int)v4 >= 2) {
    v7 = (unsigned int)v4 - 1LL;
    v8 = ((_BYTE)v4 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_1cf0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_1d60(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = 2 * v2;
  v4 = v1 * (__int64)*(int*)(result + 56);
  if ((_DWORD)v4 == 1) {
    v3 = 64;
  }
  *(_QWORD*)(result + 88) = 32;
  *(_QWORD*)(result + 96) = v3;
  v5 = v4 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v4 - 1) * v2;
  v6 = v4 - 2;
  if ((int)v4 >= 2) {
    v7 = (unsigned int)v4 - 1LL;
    v8 = ((_BYTE)v4 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_1e70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_1ee0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_1ff0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_2040(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = 2 * v2;
  v4 = v1 * (__int64)*(int*)(result + 56);
  if ((_DWORD)v4 == 1) {
    v3 = 64;
  }
  *(_QWORD*)(result + 88) = 32;
  *(_QWORD*)(result + 96) = v3;
  v5 = v4 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v4 - 1) * v2;
  v6 = v4 - 2;
  if ((int)v4 >= 2) {
    v7 = (unsigned int)v4 - 1LL;
    v8 = ((_BYTE)v4 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2150(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_21a0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = 2 * v2;
  v4 = v1 * (__int64)*(int*)(result + 56);
  if ((_DWORD)v4 == 1) {
    v3 = 64;
  }
  *(_QWORD*)(result + 88) = 32;
  *(_QWORD*)(result + 96) = v3;
  v5 = v4 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v4 - 1) * v2;
  v6 = v4 - 2;
  if ((int)v4 >= 2) {
    v7 = (unsigned int)v4 - 1LL;
    v8 = ((_BYTE)v4 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_22b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_2300(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2410(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_2460(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2570(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_25c0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_26d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_2720(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 60);
  v2 = *(int*)(result + 40);
  v3 = v1 * (__int64)*(int*)(result + 56);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 88) = 64;
  *(_QWORD*)(result + 96) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 104) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 136);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 104 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 112) = 0;
  v14 = *(_DWORD*)(result + 40);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 368) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2830(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_28f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_2940(__int64 result)
{
  int v1;
  int v2;
  bool v3;
  __int64 v4;
  int v5;
  char v6;

  v2 = *(_DWORD*)(result + 64);
  v1 = *(_DWORD*)(result + 68);
  v3 = v1 * v2 == 1;
  v4 = v1 * (__int64)v2 * *(int*)(result + 60);
  if (v3) {
    v5 = 32;
  }
  else {
    v5 = 8;
  }
  v6 = 3;
  if (v3) {
    v6 = 5;
  }
  *(_QWORD*)(result + 104) =
      2 * ((*(int*)(result + 44) * (__int64)*(int*)(result + 40)) << v6);
  *(_QWORD*)(result + 112) = 2 * (v4 << v6);
  *(_DWORD*)(result + 384) = (v5 + *(_DWORD*)(result + 48) - 1) / v5 - 1;
  return result;
}

unsigned __int64 NgxHr_29b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

unsigned __int64 NgxHr_2a70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_2ac0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = v1 * (__int64)*(int*)(result + 64);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 104) = 64;
  *(_QWORD*)(result + 112) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2bd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_2c20(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = v1 * (__int64)*(int*)(result + 64);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 104) = 64;
  *(_QWORD*)(result + 112) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2d30(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_2da0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = v1 * (__int64)*(int*)(result + 64);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 104) = 64;
  *(_QWORD*)(result + 112) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_2eb0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 7;
  if (a1 < -7) {
    v2 = a1 + 14;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 3) << 32);
}

__int64 NgxHr_2f00(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = v1 * (__int64)*(int*)(result + 64);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 104) = 64;
  *(_QWORD*)(result + 112) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_3010(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_3060(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = 2 * v2;
  v4 = v1 * (__int64)*(int*)(result + 64);
  if ((_DWORD)v4 == 1) {
    v3 = 64;
  }
  *(_QWORD*)(result + 104) = 32;
  *(_QWORD*)(result + 112) = v3;
  v5 = v4 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v4 - 1) * v2;
  v6 = v4 - 2;
  if ((int)v4 >= 2) {
    v7 = (unsigned int)v4 - 1LL;
    v8 = ((_BYTE)v4 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_3170(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_31c0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = 2 * v2;
  v4 = v1 * (__int64)*(int*)(result + 64);
  if ((_DWORD)v4 == 1) {
    v3 = 64;
  }
  *(_QWORD*)(result + 104) = 32;
  *(_QWORD*)(result + 112) = v3;
  v5 = v4 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v4 - 1) * v2;
  v6 = v4 - 2;
  if ((int)v4 >= 2) {
    v7 = (unsigned int)v4 - 1LL;
    v8 = ((_BYTE)v4 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_32d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 15;
  if (a1 < -15) {
    v2 = a1 + 30;
  }
  v3 = a2 + 15;
  if (a2 < -15) {
    v3 = a2 + 30;
  }
  return (unsigned int)(v3 >> 4) |
         ((unsigned __int64)(unsigned int)(v2 >> 4) << 32);
}

__int64 NgxHr_3320(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = v1 * (__int64)*(int*)(result + 64);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 104) = 64;
  *(_QWORD*)(result + 112) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_3430(int a1, int a2)
{
  int v2;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)((a1 + 11) / 12) << 32);
}

__int64 NgxHr_34a0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  unsigned __int64 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;

  v1 = *(_DWORD*)(result + 68);
  v2 = *(int*)(result + 48);
  v3 = v1 * (__int64)*(int*)(result + 64);
  v4 = 2 * v2;
  if ((_DWORD)v3 == 1) {
    v4 = 64;
  }
  *(_QWORD*)(result + 104) = 64;
  *(_QWORD*)(result + 112) = v4;
  v5 = v3 - 1;
  *(_QWORD*)(result + 120) = 64 - 2 * (v3 - 1) * v2;
  v6 = v3 - 2;
  if ((int)v3 >= 2) {
    v7 = (unsigned int)v3 - 1LL;
    v8 = ((_BYTE)v3 - 1) & 3;
    if (v6 < 3) {
      i = 1;
      if (v8 == 0) {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = (unsigned __int64*)(result + 152);
    v12 = 0;
    do {
      *(v11 - 3) =
          (unsigned int)(((int)v12 + 1) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 1) % v1) << 32);
      *(v11 - 2) =
          (unsigned int)(((int)v12 + 2) / v1) |
          ((unsigned __int64)(unsigned int)(((int)v12 + 2) % v1) << 32);
      v13 = v12 + 3;
      v12 += 4;
      *(v11 - 1) = (unsigned int)(v13 / v1) |
                   ((unsigned __int64)(unsigned int)(v13 % v1) << 32);
      *v11 = (unsigned int)((int)v12 / v1) |
             ((unsigned __int64)(unsigned int)((int)v12 % v1) << 32);
      v11 += 4;
    } while (v12 != v10);
    for (i = v12 + 1; v8 != 0; ++i) {
    LABEL_10:
      --v8;
      *(_QWORD*)(result + 120 + 8 * i) =
          (unsigned int)((int)i / v1) |
          ((unsigned __int64)(unsigned int)((int)i % v1) << 32);
    }
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v5 + 128) = 0;
  v14 = *(_DWORD*)(result + 48);
  v16 = v14 + 31;
  v15 = v14 < -31;
  v17 = v14 + 62;
  if (!v15) {
    v17 = v16;
  }
  *(_DWORD*)(result + 384) = (v17 >> 5) - 1;
  return result;
}

unsigned __int64 NgxHr_35b0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 3;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

_DWORD* NgxHr_36f0(_DWORD* result, unsigned int* a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;

  v3 = a3 - 1;
  if (a3 == 1) {
    *result = 0;
    *a2 = v3;
  }
  else {
    if ((a3 & 0x80000000) != 0) {
      v4 = 31;
    }
    else if (a3 >> 30 != 0) {
      v4 = 30;
    }
    else if (a3 >> 29 != 0) {
      v4 = 29;
    }
    else if (a3 >> 28 != 0) {
      v4 = 28;
    }
    else if (a3 >> 27 != 0) {
      v4 = 27;
    }
    else if (a3 >> 26 != 0) {
      v4 = 26;
    }
    else if (a3 >> 25 != 0) {
      v4 = 25;
    }
    else if (HIBYTE(a3) != 0) {
      v4 = 24;
    }
    else if (a3 >> 23 != 0) {
      v4 = 23;
    }
    else if (a3 >> 22 != 0) {
      v4 = 22;
    }
    else if (a3 >> 21 != 0) {
      v4 = 21;
    }
    else if (a3 >> 20 != 0) {
      v4 = 20;
    }
    else if (a3 >> 19 != 0) {
      v4 = 19;
    }
    else if (a3 >> 18 != 0) {
      v4 = 18;
    }
    else if (a3 >> 17 != 0) {
      v4 = 17;
    }
    else if (HIWORD(a3) != 0) {
      v4 = 16;
    }
    else if (a3 >> 15 != 0) {
      v4 = 15;
    }
    else if (a3 >> 14 != 0) {
      v4 = 14;
    }
    else if (a3 >> 13 != 0) {
      v4 = 13;
    }
    else if (a3 > 0xFFF) {
      v4 = 12;
    }
    else if (a3 > 0x7FF) {
      v4 = 11;
    }
    else if (a3 > 0x3FF) {
      v4 = 10;
    }
    else if (a3 > 0x1FF) {
      v4 = 9;
    }
    else if (a3 > 0xFF) {
      v4 = 8;
    }
    else if (a3 > 0x7F) {
      v4 = 7;
    }
    else if (a3 > 0x3F) {
      v4 = 6;
    }
    else if (a3 > 0x1F) {
      v4 = 5;
    }
    else if (a3 > 0xF) {
      v4 = 4;
    }
    else if (a3 > 7) {
      v4 = 3;
    }
    else {
      v4 = 2;
      if (a3 <= 3) {
        if (a3 >= 2) {
          v5 = 2;
        }
        else {
          v5 = a3;
        }
        v4 = v5 - 1;
      }
    }
    if ((a3 & v3) != 0) {
      v6 = v4 + 1;
    }
    else {
      v6 = v4;
    }
    *result =
        ((unsigned __int64)a3 + (1LL << ((unsigned __int8)v6 + 31)) - 1) / a3;
    *a2 = v6 - 1;
  }
  return result;
}

unsigned __int64 NgxHr_3920(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 3;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_3a60(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 3;
  if (a2 < -3) {
    v4 = a2 + 6;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 2;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_3ba0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 3;
  if (a2 < -3) {
    v4 = a2 + 6;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 2;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_3ce0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_3e20(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_3f60(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 15;
  if (a2 < -15) {
    v4 = a2 + 30;
  }
  v5 = v3 >> 3;
  v6 = a3 + 31;
  v7 = v4 >> 4;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_40a0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 15;
  if (a2 < -15) {
    v4 = a2 + 30;
  }
  v5 = v3 >> 3;
  v6 = a3 + 31;
  v7 = v4 >> 4;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_41e0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return ((unsigned __int64)(unsigned int)((v3 >> 3) * (v2 >> 2)) << 32) | 1;
}

unsigned __int64 NgxHr_42e0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  v3 = a2 + 7;
  if (a2 < -7) {
    v3 = a2 + 14;
  }
  return ((unsigned __int64)(unsigned int)((v3 >> 3) * (v2 >> 2)) << 32) | 1;
}

unsigned __int64 NgxHr_43e0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 3;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_4570(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 3;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_46f0(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  return (unsigned int)((a3 + 95) / 96) |
         ((unsigned __int64)(unsigned int)((v4 >> 3) * (v3 >> 2)) << 32);
}

unsigned __int64 NgxHr_4890(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  return (unsigned int)((a3 + 95) / 96) |
         ((unsigned __int64)(unsigned int)((v4 >> 3) * (v3 >> 2)) << 32);
}

unsigned __int64 NgxHr_4a30(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 127;
  v7 = v4 >> 3;
  if (a3 < -127) {
    v6 = a3 + 254;
  }
  return (unsigned int)(v6 >> 7) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_4bb0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 127;
  v7 = v4 >> 3;
  if (a3 < -127) {
    v6 = a3 + 254;
  }
  return (unsigned int)(v6 >> 7) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_4d30(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_4eb0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 3;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_5030(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 3;
  if (a2 < -3) {
    v4 = a2 + 6;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 2;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_51b0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 3;
  if (a2 < -3) {
    v4 = a2 + 6;
  }
  v5 = v3 >> 2;
  v6 = a3 + 63;
  v7 = v4 >> 2;
  if (a3 < -63) {
    v6 = a3 + 126;
  }
  return (unsigned int)(v6 >> 6) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_5330(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 3;
  v6 = a3 + 31;
  v7 = v4 >> 3;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_54b0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 3;
  v6 = a3 + 31;
  v7 = v4 >> 3;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_5630(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 3;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_57b0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 3;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_5930(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 3;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_5ac0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 7;
  if (a2 < -7) {
    v4 = a2 + 14;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 3;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_5c60(int a1, int a2)
{
  int v2;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  return ((unsigned __int64)(unsigned int)((v2 >> 2) * (a2 + 15) / 16) << 32) |
         1;
}

unsigned __int64 NgxHr_5d60(int a1, int a2)
{
  int v2;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  return ((unsigned __int64)(unsigned int)((v2 >> 2) * (a2 + 15) / 16) << 32) |
         1;
}

unsigned __int64 NgxHr_5e60(int a1, int a2)
{
  int v2;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  return ((unsigned __int64)(unsigned int)((v2 >> 2) * (a2 + 15) / 16) << 32) |
         1;
}

unsigned __int64 NgxHr_5f50(int a1, int a2)
{
  int v2;

  v2 = a1 + 3;
  if (a1 < -3) {
    v2 = a1 + 6;
  }
  return ((unsigned __int64)(unsigned int)((v2 >> 2) * (a2 + 15) / 16) << 32) |
         1;
}

unsigned __int64 NgxHr_6040(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 15;
  if (a2 < -15) {
    v4 = a2 + 30;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 4;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_6290(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 15;
  if (a2 < -15) {
    v4 = a2 + 30;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 4;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_64d0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 15;
  if (a2 < -15) {
    v4 = a2 + 30;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 4;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_6710(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  v4 = a2 + 15;
  if (a2 < -15) {
    v4 = a2 + 30;
  }
  v5 = v3 >> 2;
  v6 = a3 + 31;
  v7 = v4 >> 4;
  if (a3 < -31) {
    v6 = a3 + 62;
  }
  return (unsigned int)(v6 >> 5) |
         ((unsigned __int64)(unsigned int)(v7 * v5) << 32);
}

unsigned __int64 NgxHr_6950(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_69a0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_69f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6a40(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 3;
  if (a1 < -3) {
    v3 = a1 + 6;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 2) << 32);
}

unsigned __int64 NgxHr_6a90(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6ae0(int a1, int a2)
{
  int v2;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)((a1 + 11) / 12) << 32);
}

unsigned __int64 NgxHr_6b40(int a1, int a2)
{
  int v2;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)((a1 + 11) / 12) << 32);
}

unsigned __int64 NgxHr_6ba0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_6bf0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_6c40(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 31;
  if (a2 < -31) {
    v2 = a2 + 62;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 5) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6c90(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 31;
  if (a2 < -31) {
    v2 = a2 + 62;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 5) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6ce0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 31;
  if (a2 < -31) {
    v2 = a2 + 62;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 5) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6d30(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 31;
  if (a2 < -31) {
    v2 = a2 + 62;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 5) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6d80(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6dd0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6e20(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_6e70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_6ec0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6f10(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6f60(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_6fb0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7000(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7050(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_70a0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_70f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7140(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7190(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_71e0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7230(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7280(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_72d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7320(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 7;
  if (a2 < -7) {
    v2 = a2 + 14;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 3) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7370(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_73c0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7410(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7460(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_74b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7500(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7550(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_75a0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_75f0(int a1, int a2)
{
  int v2;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)((a1 + 11) / 12) << 32);
}

unsigned __int64 NgxHr_7650(int a1, int a2)
{
  int v2;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)((a1 + 11) / 12) << 32);
}

unsigned __int64 NgxHr_76b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 31;
  if (a2 < -31) {
    v2 = a2 + 62;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 5) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7700(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 31;
  if (a2 < -31) {
    v2 = a2 + 62;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 5) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7750(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_77a0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_77f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7840(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7890(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_78e0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7930(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

unsigned __int64 NgxHr_7980(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_79d0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7a20(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7a70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7ac0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7c10(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

unsigned __int64 NgxHr_7d70(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

__int64 NgxHr_7dc0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  int v7;

  *(_QWORD*)(result + 112) = 32;
  v1 = *(_DWORD*)(result + 76);
  v2 = v1 * (__int64)*(int*)(result + 72);
  if ((_DWORD)v2 == 1) {
    *(_QWORD*)(result + 120) = 64;
    goto LABEL_11;
  }
  *(_QWORD*)(result + 120) = 2LL * *(int*)(result + 52);
  if ((int)v2 < 2) {
    goto LABEL_11;
  }
  v3 = ((_BYTE)v2 - 1) & 3;
  if ((unsigned int)(v2 - 2) < 3) {
    v4 = 1;
    if ((((_BYTE)v2 - 1) & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = (unsigned __int64*)(result + 160);
  v6 = 0;
  do {
    *(v5 - 3) = (unsigned int)(((int)v6 + 1) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 1) % v1) << 32);
    *(v5 - 2) = (unsigned int)(((int)v6 + 2) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 2) % v1) << 32);
    v7 = v6 + 3;
    v6 += 4;
    *(v5 - 1) = (unsigned int)(v7 / v1) |
                ((unsigned __int64)(unsigned int)(v7 % v1) << 32);
    *v5 = (unsigned int)((int)v6 / v1) |
          ((unsigned __int64)(unsigned int)((int)v6 % v1) << 32);
    v5 += 4;
  } while (v6 != (((unsigned int)v2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
  v4 = v6 + 1;
  if ((((_BYTE)v2 - 1) & 3) != 0) {
    do {
    LABEL_10:
      --v3;
      *(_QWORD*)(result + 128 + 8 * v4) =
          (unsigned int)((int)v4 / v1) |
          ((unsigned __int64)(unsigned int)((int)v4 % v1) << 32);
      ++v4;
    } while (v3 != 0);
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v2 + 128) = 0;
  *(_QWORD*)(result + 128) =
      64 - 2LL * *(int*)(result + 52) *
               (*(int*)(result + 76) * (__int64)*(int*)(result + 72) - 1);
  return result;
}

unsigned __int64 NgxHr_7ed0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

__int64 NgxHr_7f20(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  int v7;

  *(_QWORD*)(result + 112) = 64;
  v1 = *(_DWORD*)(result + 76);
  v2 = v1 * (__int64)*(int*)(result + 72);
  if ((_DWORD)v2 == 1) {
    *(_QWORD*)(result + 120) = 64;
    goto LABEL_11;
  }
  *(_QWORD*)(result + 120) = 2LL * *(int*)(result + 52);
  if ((int)v2 < 2) {
    goto LABEL_11;
  }
  v3 = ((_BYTE)v2 - 1) & 3;
  if ((unsigned int)(v2 - 2) < 3) {
    v4 = 1;
    if ((((_BYTE)v2 - 1) & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = (unsigned __int64*)(result + 160);
  v6 = 0;
  do {
    *(v5 - 3) = (unsigned int)(((int)v6 + 1) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 1) % v1) << 32);
    *(v5 - 2) = (unsigned int)(((int)v6 + 2) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 2) % v1) << 32);
    v7 = v6 + 3;
    v6 += 4;
    *(v5 - 1) = (unsigned int)(v7 / v1) |
                ((unsigned __int64)(unsigned int)(v7 % v1) << 32);
    *v5 = (unsigned int)((int)v6 / v1) |
          ((unsigned __int64)(unsigned int)((int)v6 % v1) << 32);
    v5 += 4;
  } while (v6 != (((unsigned int)v2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
  v4 = v6 + 1;
  if ((((_BYTE)v2 - 1) & 3) != 0) {
    do {
    LABEL_10:
      --v3;
      *(_QWORD*)(result + 128 + 8 * v4) =
          (unsigned int)((int)v4 / v1) |
          ((unsigned __int64)(unsigned int)((int)v4 % v1) << 32);
      ++v4;
    } while (v3 != 0);
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v2 + 128) = 0;
  *(_QWORD*)(result + 128) =
      64 - 2LL * *(int*)(result + 52) *
               (*(int*)(result + 76) * (__int64)*(int*)(result + 72) - 1);
  return result;
}

unsigned __int64 NgxHr_8030(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

__int64 NgxHr_8080(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  int v7;

  *(_QWORD*)(result + 112) = 32;
  v1 = *(_DWORD*)(result + 76);
  v2 = v1 * (__int64)*(int*)(result + 72);
  if ((_DWORD)v2 == 1) {
    *(_QWORD*)(result + 120) = 64;
    goto LABEL_11;
  }
  *(_QWORD*)(result + 120) = 2LL * *(int*)(result + 52);
  if ((int)v2 < 2) {
    goto LABEL_11;
  }
  v3 = ((_BYTE)v2 - 1) & 3;
  if ((unsigned int)(v2 - 2) < 3) {
    v4 = 1;
    if ((((_BYTE)v2 - 1) & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = (unsigned __int64*)(result + 160);
  v6 = 0;
  do {
    *(v5 - 3) = (unsigned int)(((int)v6 + 1) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 1) % v1) << 32);
    *(v5 - 2) = (unsigned int)(((int)v6 + 2) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 2) % v1) << 32);
    v7 = v6 + 3;
    v6 += 4;
    *(v5 - 1) = (unsigned int)(v7 / v1) |
                ((unsigned __int64)(unsigned int)(v7 % v1) << 32);
    *v5 = (unsigned int)((int)v6 / v1) |
          ((unsigned __int64)(unsigned int)((int)v6 % v1) << 32);
    v5 += 4;
  } while (v6 != (((unsigned int)v2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
  v4 = v6 + 1;
  if ((((_BYTE)v2 - 1) & 3) != 0) {
    do {
    LABEL_10:
      --v3;
      *(_QWORD*)(result + 128 + 8 * v4) =
          (unsigned int)((int)v4 / v1) |
          ((unsigned __int64)(unsigned int)((int)v4 % v1) << 32);
      ++v4;
    } while (v3 != 0);
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v2 + 128) = 0;
  *(_QWORD*)(result + 128) =
      64 - 2LL * *(int*)(result + 52) *
               (*(int*)(result + 76) * (__int64)*(int*)(result + 72) - 1);
  return result;
}

unsigned __int64 NgxHr_8190(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 15;
  if (a1 < -15) {
    v3 = a1 + 30;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 4) << 32);
}

__int64 NgxHr_81e0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  int v7;

  *(_QWORD*)(result + 112) = 64;
  v1 = *(_DWORD*)(result + 76);
  v2 = v1 * (__int64)*(int*)(result + 72);
  if ((_DWORD)v2 == 1) {
    *(_QWORD*)(result + 120) = 64;
    goto LABEL_11;
  }
  *(_QWORD*)(result + 120) = 2LL * *(int*)(result + 52);
  if ((int)v2 < 2) {
    goto LABEL_11;
  }
  v3 = ((_BYTE)v2 - 1) & 3;
  if ((unsigned int)(v2 - 2) < 3) {
    v4 = 1;
    if ((((_BYTE)v2 - 1) & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = (unsigned __int64*)(result + 160);
  v6 = 0;
  do {
    *(v5 - 3) = (unsigned int)(((int)v6 + 1) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 1) % v1) << 32);
    *(v5 - 2) = (unsigned int)(((int)v6 + 2) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 2) % v1) << 32);
    v7 = v6 + 3;
    v6 += 4;
    *(v5 - 1) = (unsigned int)(v7 / v1) |
                ((unsigned __int64)(unsigned int)(v7 % v1) << 32);
    *v5 = (unsigned int)((int)v6 / v1) |
          ((unsigned __int64)(unsigned int)((int)v6 % v1) << 32);
    v5 += 4;
  } while (v6 != (((unsigned int)v2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
  v4 = v6 + 1;
  if ((((_BYTE)v2 - 1) & 3) != 0) {
    do {
    LABEL_10:
      --v3;
      *(_QWORD*)(result + 128 + 8 * v4) =
          (unsigned int)((int)v4 / v1) |
          ((unsigned __int64)(unsigned int)((int)v4 % v1) << 32);
      ++v4;
    } while (v3 != 0);
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v2 + 128) = 0;
  *(_QWORD*)(result + 128) =
      64 - 2LL * *(int*)(result + 52) *
               (*(int*)(result + 76) * (__int64)*(int*)(result + 72) - 1);
  return result;
}

unsigned __int64 NgxHr_82f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

__int64 NgxHr_8340(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  int v7;

  *(_QWORD*)(result + 112) = 32;
  v1 = *(_DWORD*)(result + 76);
  v2 = v1 * (__int64)*(int*)(result + 72);
  if ((_DWORD)v2 == 1) {
    *(_QWORD*)(result + 120) = 64;
    goto LABEL_11;
  }
  *(_QWORD*)(result + 120) = 2LL * *(int*)(result + 52);
  if ((int)v2 < 2) {
    goto LABEL_11;
  }
  v3 = ((_BYTE)v2 - 1) & 3;
  if ((unsigned int)(v2 - 2) < 3) {
    v4 = 1;
    if ((((_BYTE)v2 - 1) & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = (unsigned __int64*)(result + 160);
  v6 = 0;
  do {
    *(v5 - 3) = (unsigned int)(((int)v6 + 1) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 1) % v1) << 32);
    *(v5 - 2) = (unsigned int)(((int)v6 + 2) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 2) % v1) << 32);
    v7 = v6 + 3;
    v6 += 4;
    *(v5 - 1) = (unsigned int)(v7 / v1) |
                ((unsigned __int64)(unsigned int)(v7 % v1) << 32);
    *v5 = (unsigned int)((int)v6 / v1) |
          ((unsigned __int64)(unsigned int)((int)v6 % v1) << 32);
    v5 += 4;
  } while (v6 != (((unsigned int)v2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
  v4 = v6 + 1;
  if ((((_BYTE)v2 - 1) & 3) != 0) {
    do {
    LABEL_10:
      --v3;
      *(_QWORD*)(result + 128 + 8 * v4) =
          (unsigned int)((int)v4 / v1) |
          ((unsigned __int64)(unsigned int)((int)v4 % v1) << 32);
      ++v4;
    } while (v3 != 0);
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v2 + 128) = 0;
  *(_QWORD*)(result + 128) =
      64 - 2LL * *(int*)(result + 52) *
               (*(int*)(result + 76) * (__int64)*(int*)(result + 72) - 1);
  return result;
}

unsigned __int64 NgxHr_8450(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 7;
  if (a1 < -7) {
    v3 = a1 + 14;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 3) << 32);
}

__int64 NgxHr_84a0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  __int64 v6;
  int v7;

  *(_QWORD*)(result + 112) = 64;
  v1 = *(_DWORD*)(result + 76);
  v2 = v1 * (__int64)*(int*)(result + 72);
  if ((_DWORD)v2 == 1) {
    *(_QWORD*)(result + 120) = 64;
    goto LABEL_11;
  }
  *(_QWORD*)(result + 120) = 2LL * *(int*)(result + 52);
  if ((int)v2 < 2) {
    goto LABEL_11;
  }
  v3 = ((_BYTE)v2 - 1) & 3;
  if ((unsigned int)(v2 - 2) < 3) {
    v4 = 1;
    if ((((_BYTE)v2 - 1) & 3) == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v5 = (unsigned __int64*)(result + 160);
  v6 = 0;
  do {
    *(v5 - 3) = (unsigned int)(((int)v6 + 1) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 1) % v1) << 32);
    *(v5 - 2) = (unsigned int)(((int)v6 + 2) / v1) |
                ((unsigned __int64)(unsigned int)(((int)v6 + 2) % v1) << 32);
    v7 = v6 + 3;
    v6 += 4;
    *(v5 - 1) = (unsigned int)(v7 / v1) |
                ((unsigned __int64)(unsigned int)(v7 % v1) << 32);
    *v5 = (unsigned int)((int)v6 / v1) |
          ((unsigned __int64)(unsigned int)((int)v6 % v1) << 32);
    v5 += 4;
  } while (v6 != (((unsigned int)v2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
  v4 = v6 + 1;
  if ((((_BYTE)v2 - 1) & 3) != 0) {
    do {
    LABEL_10:
      --v3;
      *(_QWORD*)(result + 128 + 8 * v4) =
          (unsigned int)((int)v4 / v1) |
          ((unsigned __int64)(unsigned int)((int)v4 % v1) << 32);
      ++v4;
    } while (v3 != 0);
  }
LABEL_11:
  *(_QWORD*)(result + 8 * v2 + 128) = 0;
  *(_QWORD*)(result + 128) =
      64 - 2LL * *(int*)(result + 52) *
               (*(int*)(result + 76) * (__int64)*(int*)(result + 72) - 1);
  return result;
}

unsigned __int64 NgxHr_85b0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 31;
  if (a1 < -31) {
    v3 = a1 + 62;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 5) << 32);
}

unsigned __int64 NgxHr_8670(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 31;
  if (a1 < -31) {
    v3 = a1 + 62;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 5) << 32);
}

unsigned __int64 NgxHr_8730(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 31;
  if (a1 < -31) {
    v3 = a1 + 62;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 5) << 32);
}

unsigned __int64 NgxHr_87f0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = a2 + 15;
  if (a2 < -15) {
    v2 = a2 + 30;
  }
  v3 = a1 + 31;
  if (a1 < -31) {
    v3 = a1 + 62;
  }
  return (unsigned int)(v2 >> 4) |
         ((unsigned __int64)(unsigned int)(v3 >> 5) << 32);
}

void __attribute__((noreturn)) NgxHr_27cb0()
{
  NgxRoutine_27cd0("basic_string");
}

void __attribute__((noreturn)) NgxHr_27cd0(const char* a1)
{
  NgxRoutine_e2370(
      "length_error was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
}

void __attribute__((noreturn)) NgxHr_27cf0()
{
  NgxRoutine_e2370("bad_array_new_length was thrown in -fno-exceptions mode");
}

__int64 NgxHr_27d10(__int64 a1, __int64 a2)
{
  __int64 result;

  NgxRoutine_312c0(a1, a2);
  *(_QWORD*)a1 = NgxData_9521d8[0] + 2;
  *(_QWORD*)(a1 + 104) = NgxData_94c448;
  NgxRoutine_29ca0(a1 + 112);
  NgxRoutine_29ca0(a1 + 160);
  NgxRoutine_29ca0(a1 + 208);
  NgxRoutine_29ca0(a1 + 256);
  NgxRoutine_29ca0(a1 + 304);
  NgxRoutine_29ca0(a1 + 352);
  NgxRoutine_29ca0(a1 + 400);
  NgxRoutine_29ca0(a1 + 448);
  result = NgxRoutine_29ca0(a1 + 496);
  *(_BYTE*)(a1 + 544) = 0;
  *(_BYTE*)(a1 + 552) = 0;
  *(_WORD*)(a1 + 2112) = 0;
  *(_BYTE*)(a1 + 2156) = 0;
  *(_QWORD*)(a1 + 2116) = -1;
  *(_QWORD*)(a1 + 2124) = -1;
  *(_QWORD*)(a1 + 2132) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 2140) = -1;
  *(_QWORD*)(a1 + 2148) = -1;
  if (*(_DWORD*)(a1 + 84) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
  }
  return result;
}

__int64 NgxHr_27e20(__int64 a1)
{
  NgxRoutine_294b0(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

void NgxHr_27fe0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (a2 != nullptr) {
    v2 = a2[8];
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      NgxRoutine_baf10(v2);
    }
    v4 = a2[6];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      NgxRoutine_baf10(v4);
    }
    v5 = a2[4];
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      NgxRoutine_baf10(v5);
    }
    v6 = a2[2];
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      NgxRoutine_baf10(v6);
      NgxRoutine_430(a2, 72);
    }
    else {
      NgxRoutine_430(a2, 72);
    }
  }
}

__int64 NgxHr_28100(__int64 a1)
{
  NgxRoutine_29780(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

__int64 NgxHr_282c0(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = NgxData_9521f0[0] + 2;
  NgxRoutine_29ca0(a1 + 8);
  NgxRoutine_29ca0(a1 + 56);
  NgxRoutine_29ca0(a1 + 104);
  NgxRoutine_29ca0(a1 + 152);
  NgxRoutine_29ca0(a1 + 200);
  NgxRoutine_29ca0(a1 + 248);
  NgxRoutine_29ca0(a1 + 296);
  NgxRoutine_29ca0(a1 + 344);
  NgxRoutine_29ca0(a1 + 392);
  NgxRoutine_29ca0(a1 + 440);
  NgxRoutine_29ca0(a1 + 488);
  NgxRoutine_29ca0(a1 + 536);
  NgxRoutine_29ca0(a1 + 584);
  NgxRoutine_29ca0(a1 + 632);
  result = NgxRoutine_29ca0(a1 + 680);
  *(_BYTE*)(a1 + 730) = 0;
  *(_WORD*)(a1 + 728) = 256;
  *(_QWORD*)(a1 + 732) = 0x3E2AAAC13E800000LL;
  *(_QWORD*)(a1 + 740) = 0xBE2AAAC100000000LL;
  *(_QWORD*)(a1 + 748) = 0;
  *(_QWORD*)(a1 + 756) = 0;
  *(_QWORD*)(a1 + 764) = 0;
  return result;
}

__int64 NgxHr_283b0(__int64 a1, __int64 a2)
{
  __int64 result;

  NgxRoutine_312c0(a1, a2);
  *(_QWORD*)a1 = NgxData_9521f8[0] + 2;
  *(_QWORD*)(a1 + 104) = NgxData_94c518;
  NgxRoutine_29ca0(a1 + 112);
  NgxRoutine_29ca0(a1 + 160);
  NgxRoutine_29ca0(a1 + 208);
  result = NgxRoutine_29ca0(a1 + 256);
  *(_BYTE*)(a1 + 312) = 0;
  *(_WORD*)(a1 + 1824) = 0;
  *(_BYTE*)(a1 + 1868) = 0;
  *(_BYTE*)(a1 + 304) = 1;
  *(_QWORD*)(a1 + 1828) = -1;
  *(_QWORD*)(a1 + 1836) = -1;
  *(_QWORD*)(a1 + 1844) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 1852) = -1;
  *(_QWORD*)(a1 + 1860) = -1;
  if (*(_DWORD*)(a1 + 84) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
  }
  return result;
}

__int64 NgxHr_28490(__int64 a1)
{
  NgxRoutine_29a20(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

__int64 NgxHr_28650(__int64 a1, __int64 a2)
{
  __int64 result;

  NgxRoutine_312c0(a1, a2);
  *(_QWORD*)a1 = NgxData_952208[0] + 2;
  *(_QWORD*)(a1 + 104) = NgxData_94c578;
  NgxRoutine_29ca0(a1 + 112);
  NgxRoutine_29ca0(a1 + 160);
  NgxRoutine_29ca0(a1 + 208);
  NgxRoutine_29ca0(a1 + 256);
  result = NgxRoutine_29ca0(a1 + 304);
  *(_BYTE*)(a1 + 360) = 0;
  *(_WORD*)(a1 + 1920) = 0;
  *(_BYTE*)(a1 + 1964) = 0;
  *(_BYTE*)(a1 + 352) = 1;
  *(_QWORD*)(a1 + 1924) = -1;
  *(_QWORD*)(a1 + 1932) = -1;
  *(_QWORD*)(a1 + 1940) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 1948) = -1;
  *(_QWORD*)(a1 + 1956) = -1;
  if (*(_DWORD*)(a1 + 84) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 96LL))(a1);
  }
  return result;
}

__int64 NgxHr_28740(__int64 a1)
{
  NgxRoutine_29b90(a1 + 104, a1 + 88);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
}

__int64 NgxHr_28c80(_QWORD* a1)
{
  _QWORD* v1;
  __int64 result;
  _QWORD* v4;

  v1 = (_QWORD*)a1[5];
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if ((v1[2] & 1) != 0) {
        NgxRoutine_430(v1[4], v1[2] & 0xFFFFFFFFFFFFFFFELL);
      }
      NgxRoutine_430(v1, 48);
      v1 = v4;
    } while (v4 != nullptr);
  }
  result = a1[3];
  a1[3] = 0;
  if (result != 0) {
    return NgxRoutine_430(result, 8LL * a1[4]);
  }
  return result;
}

__int64 NgxHr_29320(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;

  if (a3 > 0x16) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      NgxRoutine_27cb0();
    }
    v7 = a2;
    if ((a3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (a3 | 7) + 1;
    }
    v4 = NgxRoutine_420(v8);
    a1[1] = a3;
    a1[2] = v4;
    a2 = v7;
    *a1 = v8 | 1;
    v5 = a3 + 1;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v4 = (__int64)a1 + 1;
    v5 = a3 + 1;
  }
  return NgxRoutine_e3120(v4, a2, v5);
}

__int64 NgxHr_293c0(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 56);
  NgxRoutine_27b20(*a2, a1 + 104);
  NgxRoutine_27b20(*a2, a1 + 152);
  NgxRoutine_27b20(*a2, a1 + 200);
  NgxRoutine_27b20(*a2, a1 + 248);
  NgxRoutine_27b20(*a2, a1 + 296);
  NgxRoutine_27b20(*a2, a1 + 344);
  return NgxRoutine_27b20(*a2, a1 + 392);
}

__int64 NgxHr_29450(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_294b0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_29510(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 56);
  NgxRoutine_27bf0(*a2, a1 + 104);
  NgxRoutine_27bf0(*a2, a1 + 152);
  NgxRoutine_27bf0(*a2, a1 + 200);
  NgxRoutine_27bf0(*a2, a1 + 248);
  NgxRoutine_27bf0(*a2, a1 + 296);
  NgxRoutine_27bf0(*a2, a1 + 344);
  return NgxRoutine_27bf0(*a2, a1 + 392);
}

__int64 NgxHr_295a0(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 56);
  NgxRoutine_29cc0(a1 + 104);
  NgxRoutine_29cc0(a1 + 152);
  NgxRoutine_29cc0(a1 + 200);
  NgxRoutine_29cc0(a1 + 248);
  NgxRoutine_29cc0(a1 + 296);
  NgxRoutine_29cc0(a1 + 344);
  return NgxRoutine_29cc0(a1 + 392);
}

__int64 NgxHr_29610(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 56);
  NgxRoutine_27b20(*a2, a1 + 104);
  NgxRoutine_27b20(*a2, a1 + 152);
  NgxRoutine_27b20(*a2, a1 + 200);
  NgxRoutine_27b20(*a2, a1 + 248);
  NgxRoutine_27b20(*a2, a1 + 296);
  NgxRoutine_27b20(*a2, a1 + 344);
  NgxRoutine_27b20(*a2, a1 + 392);
  NgxRoutine_27b20(*a2, a1 + 440);
  NgxRoutine_27b20(*a2, a1 + 488);
  NgxRoutine_27b20(*a2, a1 + 536);
  NgxRoutine_27b20(*a2, a1 + 584);
  NgxRoutine_27b20(*a2, a1 + 632);
  return NgxRoutine_27b20(*a2, a1 + 680);
}

__int64 NgxHr_296f0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_29780(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_297f0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 56);
  NgxRoutine_27bf0(*a2, a1 + 104);
  NgxRoutine_27bf0(*a2, a1 + 152);
  NgxRoutine_27bf0(*a2, a1 + 200);
  NgxRoutine_27bf0(*a2, a1 + 248);
  NgxRoutine_27bf0(*a2, a1 + 296);
  NgxRoutine_27bf0(*a2, a1 + 344);
  NgxRoutine_27bf0(*a2, a1 + 392);
  NgxRoutine_27bf0(*a2, a1 + 440);
  NgxRoutine_27bf0(*a2, a1 + 488);
  NgxRoutine_27bf0(*a2, a1 + 536);
  NgxRoutine_27bf0(*a2, a1 + 584);
  NgxRoutine_27bf0(*a2, a1 + 632);
  return NgxRoutine_27bf0(*a2, a1 + 680);
}

__int64 NgxHr_298d0(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 56);
  NgxRoutine_29cc0(a1 + 104);
  NgxRoutine_29cc0(a1 + 152);
  NgxRoutine_29cc0(a1 + 200);
  NgxRoutine_29cc0(a1 + 248);
  NgxRoutine_29cc0(a1 + 296);
  NgxRoutine_29cc0(a1 + 344);
  NgxRoutine_29cc0(a1 + 392);
  NgxRoutine_29cc0(a1 + 440);
  NgxRoutine_29cc0(a1 + 488);
  NgxRoutine_29cc0(a1 + 536);
  NgxRoutine_29cc0(a1 + 584);
  NgxRoutine_29cc0(a1 + 632);
  return NgxRoutine_29cc0(a1 + 680);
}

__int64 NgxHr_29970(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 56);
  NgxRoutine_27b20(*a2, a1 + 152);
  return NgxRoutine_27b20(*a2, a1 + 104);
}

__int64 NgxHr_299d0(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

__int64 NgxHr_29a30(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27bf0(*a2, a1 + 8);
  NgxRoutine_27bf0(*a2, a1 + 56);
  NgxRoutine_27bf0(*a2, a1 + 152);
  return NgxRoutine_27bf0(*a2, a1 + 104);
}

__int64 NgxHr_29a90(__int64 a1)
{
  NgxRoutine_29cc0(a1 + 8);
  NgxRoutine_29cc0(a1 + 56);
  NgxRoutine_29cc0(a1 + 152);
  return NgxRoutine_29cc0(a1 + 104);
}

__int64 NgxHr_29ad0(__int64 a1, _QWORD* a2)
{
  NgxRoutine_27b20(*a2, a1 + 8);
  NgxRoutine_27b20(*a2, a1 + 104);
  NgxRoutine_27b20(*a2, a1 + 152);
  NgxRoutine_27b20(*a2, a1 + 200);
  return NgxRoutine_27b20(*a2, a1 + 56);
}

__int64 NgxHr_29b30(__int64 a1, _DWORD** a2)
{
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  NgxRoutine_27b30(*a2);
  return NgxRoutine_27b30(*a2);
}

#pragma GCC visibility pop
