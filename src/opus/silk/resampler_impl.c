#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int, unsigned __int64);
extern _UNKNOWN SdkData_c1dc15;
extern _UNKNOWN SdkData_c1dc24;
extern _UNKNOWN SdkData_c1dc34;
extern _UNKNOWN SdkData_c1dc6e;
extern _UNKNOWN SdkData_c1dc96;
extern _UNKNOWN SdkData_c1dcb2;
extern _UNKNOWN SdkData_c1dcda;
extern _UNKNOWN SdkData_c1dd02;
__int64 silk_resampler_init(__int64 a1, unsigned int a2, unsigned int a3,
                            unsigned __int64 a4);

__int64 silk_resampler_init(__int64 a1, unsigned int a2, unsigned int a3,
                            unsigned __int64 a4)
{
  int v5;
  __int64 result;
  char* v9;
  unsigned int v10;
  char v11;
  char v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;

  v5 = a4;
  memset_plt((void*)a1, nullptr, 304, a4);
  if (v5 != 0) {
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
    v9 = (char*)&SdkData_c1dc15 +
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
    v9 = (char*)&SdkData_c1dc24 + 5 * (a2 >> 12) +
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
        *(_QWORD*)(a1 + 296) = &SdkData_c1dc34;
      }
      else if (3 * a3 == 2 * a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x200000012LL;
        *(_QWORD*)(a1 + 296) = &SdkData_c1dc6e;
      }
      else if (a2 == 2 * a3) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000018LL;
        *(_QWORD*)(a1 + 296) = &SdkData_c1dc96;
      }
      else if (3 * a3 == a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &SdkData_c1dcb2;
      }
      else if (4 * a3 == a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &SdkData_c1dcda;
      }
      else {
        if (6 * a3 != a2) {
          return result;
        }
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &SdkData_c1dd02;
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
