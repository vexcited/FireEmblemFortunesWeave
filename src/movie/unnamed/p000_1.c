#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) MovieRoutine_14f0(const char*);
__int64 MovieRoutine_66220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 MovieRoutine_6eea0(char*, unsigned int, int, _BYTE*, int, int, int);
__int64 MovieRoutine_80de0(__int64, int*, __int64, int);
__int64 MovieRoutine_82b40(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_82ce0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_84620(_QWORD, _QWORD);
__int64 MovieRoutine_84680(_QWORD, _QWORD);
void __attribute__((noreturn)) MovieRoutine_9f60(const char*);
void __attribute__((noreturn)) MovieRoutine_f520();

void __attribute__((noreturn)) MovieHr_f500()
{
  MovieRoutine_9f60("basic_string");
}

void __attribute__((noreturn)) MovieHr_f520()
{
  MovieRoutine_14f0("basic_string");
}

__int64* MovieHr_f540(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  char v4;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;

  v3 = *a1;
  v4 = *(_BYTE*)a1;
  v7 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  if ((*(_BYTE*)a1 & 1) == 0) {
    v7 = 22;
  }
  if ((v3 & 1) != 0) {
    v8 = a1[1];
  }
  else {
    v8 = (unsigned __int8)v3 >> 1;
  }
  if (v7 - v8 >= a3) {
    if (a3 != 0) {
      if ((v3 & 1) != 0) {
        v20 = (char*)a1[2];
      }
      else {
        v20 = (char*)a1 + 1;
      }
      MovieRoutine_82b40(&v20[v8], a2, a3);
      v21 = v8 + a3;
      if ((*(_BYTE*)a1 & 1) != 0) {
        a1[1] = v21;
      }
      else {
        *(_BYTE*)a1 = 2 * v21;
      }
      v20[v21] = 0;
    }
  }
  else {
    v9 = v8 + a3;
    if (v8 + a3 - v7 > -10LL - v7) {
      MovieRoutine_f520();
    }
    v10 = a1[3];
    v11 = 2 * v7;
    if ((v3 & 1) != 0) {
      v13 = (char*)a1[2];
    }
    else {
      v13 = (char*)a1 + 1;
    }
    if (v9 > 2 * v7) {
      v11 = v8 + a3;
    }
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v15 = v11 >= 0x17;
    v16 = 23;
    if (v15) {
      v16 = v14;
    }
    if (v7 <= 0x7FFFFFFFFFFFFFF2LL) {
      v17 = v16;
    }
    else {
      v17 = -9;
    }
    v18 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 40LL))(v10, v17);
    v19 = v18;
    if (v8 != 0) {
      MovieRoutine_82b40(v18, v13, v8);
    }
    MovieRoutine_82b40(v19 + v8, a2, a3);
    if ((v4 & 1) != 0) {
      (*(void (**)(__int64, char*))(*(_QWORD*)a1[3] + 56LL))(a1[3], v13);
    }
    a1[1] = v9;
    a1[2] = v19;
    *a1 = v17 | 1;
    *(_BYTE*)(v19 + v9) = 0;
  }
  return a1;
}

__int64 MovieHr_6f500(_BYTE* a1, unsigned int a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  _BYTE* v9;
  int v10;
  _BYTE* v11;
  char* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18[4];
  int v19;
  __int64 v20;
  _DWORD v21[27];
  char v22[4];
  __int64 v23;
  __int64 v24;

  if ((int)a2 >= 1) {
    if (a2 == a3) {
      return 0;
    }
    if ((int)a2 <= a3) {
      v23 = v3;
      v24 = v4;
      MovieRoutine_82ce0(v18, 0, 496);
      v9 = &a1[a3];
      v10 = a3;
      v11 = a1;
      v12 = &v9[-a2];
      MovieRoutine_82b40(v12, a1, a2);
      v18[0] = *v12;
      v13 = MovieRoutine_84620(v12, 8000);
      v21[24] = v13;
      v14 = MovieRoutine_84680(v12, a2);
      if (v14 < 1) {
        return 4294967292LL;
      }
      v15 = v14;
      if (v14 * v13 > 960) {
        return 4294967292LL;
      }
      v22[0] = 0;
      result = MovieRoutine_66220(v12, a2, 0, v22, &v20, v21, 0, 0);
      if ((int)result >= 1) {
        v16 = v19 + v15;
        v19 += v15;
      LABEL_10:
        v17 = MovieRoutine_6eea0(v18, 0, v16, v11, v10, 0, 1);
        return v17 & (unsigned int)(v17 >> 31);
      }
      if ((_DWORD)result == 0) {
        v16 = v19;
        goto LABEL_10;
      }
      return result;
    }
  }
  return 0xFFFFFFFFLL;
}

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
