#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN MovieData_a605d;
extern _UNKNOWN MovieData_a606c;
extern _UNKNOWN MovieData_a607c;
extern _UNKNOWN MovieData_a60b6;
extern _UNKNOWN MovieData_a60de;
extern _UNKNOWN MovieData_a60fa;
extern _UNKNOWN MovieData_a6122;
extern _UNKNOWN MovieData_a614a;
__int64 silk_resampler_init(__int64 a1, unsigned int a2, unsigned int a3,
                            int a4);

__int64 silk_resampler_init(__int64 a1, unsigned int a2, unsigned int a3,
                            int a4)
{
  __int64 result;
  char* v9;
  unsigned int v10;
  char v11;
  char v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;

  memset_plt(a1, 0, 304);
  if (a4 != 0) {
    result = 0xFFFFFFFFLL;
    if ((int)a2 <= 15999) {
      if (a2 != 8000 && a2 != 12000) {
        return result;
      }
    }
    else if (a2 != 16000 && a2 != 48000 && a2 != 24000) {
      return result;
    }
    if (a3 != 8000 && a3 != 16000 && a3 != 12000) {
      return result;
    }
    v9 = (char*)&MovieData_a605d +
         3 * (((a2 >> 12) - (a2 > 0x3E80)) >> (a2 > 0x5DC0)) + (a3 >> 12) - 4;
  }
  else {
    if (a2 != 8000 && a2 != 16000 && a2 != 12000) {
      return 0xFFFFFFFFLL;
    }
    result = 0xFFFFFFFFLL;
    if ((int)a3 <= 15999) {
      if (a3 != 8000 && a3 != 12000) {
        return result;
      }
    }
    else if (a3 != 16000 && a3 != 48000 && a3 != 24000) {
      return result;
    }
    v9 = (char*)&MovieData_a606c + 5 * (a2 >> 12) +
         (((a3 >> 12) - (a3 > 0x3E80)) >> (a3 > 0x5DC0)) - 6;
  }
  *(_DWORD*)(a1 + 292) = *v9;
  v10 = (unsigned __int16)a2 / 0x3E8u;
  *(_DWORD*)(a1 + 284) = v10;
  *(_DWORD*)(a1 + 288) = (unsigned __int16)a3 / 0x3E8u;
  *(_DWORD*)(a1 + 268) = 10 * v10;
  if (a3 <= a2) {
    if (a3 >= a2) {
      v11 = 0;
      *(_DWORD*)(a1 + 264) = 0;
    }
    else {
      *(_DWORD*)(a1 + 264) = 3;
      if (4 * a3 == 3 * a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x300000012LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a607c;
      }
      else if (3 * a3 == 2 * a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x200000012LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a60b6;
      }
      else if (a2 == 2 * a3) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000018LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a60de;
      }
      else if (3 * a3 == a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a60fa;
      }
      else if (4 * a3 == a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a6122;
      }
      else {
        if (6 * a3 != a2) {
          return result;
        }
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a614a;
      }
    }
  }
  else if (a3 == 2 * a2) {
    v11 = 0;
    *(_DWORD*)(a1 + 264) = 1;
  }
  else {
    *(_DWORD*)(a1 + 264) = 2;
    v11 = 1;
  }
  v12 = v11 | 0xE;
  v13 = a2 << v11;
  v14 = 4 * ((a2 << v12) / a3);
  do {
    v15 = v14;
    v16 = (v14 * (unsigned __int64)a3) >> 16;
    ++v14;
  } while (v13 > (int)v16);
  *(_DWORD*)(a1 + 272) = v15;
  return 0;
}

#pragma GCC visibility pop
