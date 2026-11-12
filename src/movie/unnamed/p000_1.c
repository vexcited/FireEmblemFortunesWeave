#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_80de0(__int64, int*, __int64, int);

__int64 MovieHr_81060(_QWORD* a1, __int64 a2, int* a3, int a4, int a5)
{
  __int64 v5;
  int v11;
  __int64 v13;
  __int64 v14;

  if ((__int64)a1[9] < 1) {
    return 0;
  }
  v5 = a1[10];
  if (v5 == 0) {
    return -1;
  }
  if (a4 >= 1) {
    v11 = 0;
    while ((unsigned int)MovieRoutine_80de0((__int64)a1, a3, v5, a5) == 0) {
      if ((__int64)a1[4] >= 1 && v11 < a4) {
        v13 = 0;
        do {
          v14 = v11 + 1LL + v13;
          *(_DWORD*)(a2 + 4LL * v11 + 4 * v13) += *(_DWORD*)(v5 + 4 * v13);
        } while (a1[4] > ++v13 && v14 < (unsigned int)a4);
        v11 += v13;
      }
      if (v11 >= a4) {
        return 0;
      }
    }
    return -1;
  }
  return 0;
}

__int64 MovieHr_81160(_QWORD* a1, __int64 a2, int* a3, int a4, int a5)
{
  __int64 v8;
  int v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  int v17;
  _DWORD* v18;
  __int64 v19;
  __int64 v20;

  if ((__int64)a1[9] <= 0) {
    if (a4 >= 1) {
      v16 = a1[4];
      v17 = 0;
      do {
        if (v16 >= 1) {
          v18 = (_DWORD*)(a2 + 4LL * v17);
          v19 = 1;
          v20 = v17 + 1LL;
          do {
            *v18++ = 0;
            ++v17;
            v16 = a1[4];
            v12 = v16 <= v19++;
          } while (!v12 && v20++ < (unsigned int)a4);
        }
      } while (v17 < a4);
    }
    return 0;
  }
  v8 = a1[10];
  if (v8 != 0) {
    if (a4 >= 1) {
      v11 = 0;
      while ((unsigned int)MovieRoutine_80de0((__int64)a1, a3, v8, a5) == 0) {
        v12 = (__int64)a1[4] >= 1 && v11 < a4;
        if (v12) {
          v13 = 0;
          do {
            v14 = v11 + 1LL + v13;
            *(_DWORD*)(a2 + 4LL * v11 + 4 * v13) = *(_DWORD*)(v8 + 4 * v13);
          } while (a1[4] > ++v13 && v14 < (unsigned int)a4);
          v11 += v13;
        }
        if (v11 >= a4) {
          return 0;
        }
      }
      return -1;
    }
    return 0;
  }
  return -1;
}

__int64 MovieHr_812c0(__int64* a1, __int64 a2, __int64 a3, int a4, int* a5,
                      int a6, int a7)
{
  __int64 v7;
  __int64 v9;
  __int64 v13;
  int v15;
  bool v16;
  __int64 v17;
  int* v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;

  if (a1[9] < 1) {
    return 0;
  }
  v7 = a1[10];
  if (v7 == 0) {
    return -1;
  }
  if (a6 >= 1) {
    v9 = a3 + a6;
    v13 = a3;
    v15 = 0;
    while ((unsigned int)MovieRoutine_80de0((__int64)a1, a5, v7, a7) == 0) {
      v16 = a1[4] >= 1 && v13 < v9;
      if (v16) {
        v17 = 1;
        v18 = (int*)v7;
        do {
          v19 = *(_QWORD*)(a2 + 8LL * v15);
          v21 = *v18++;
          v20 = v21;
          v22 = v15 + 1;
          if (v15 + 1 == a4) {
            v15 = 0;
          }
          else {
            ++v15;
          }
          *(_DWORD*)(v19 + 4 * v13) += v20;
          if (v22 == a4) {
            ++v13;
          }
          v16 = v17++ < a1[4];
        } while (v16 && v13 < v9);
      }
      if (v13 >= v9) {
        return 0;
      }
    }
    return -1;
  }
  return 0;
}

#pragma GCC visibility pop
