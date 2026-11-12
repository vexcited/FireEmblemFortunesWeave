#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int SdkData_10450c0;

extern char SdkData_10450c4;

extern __int64 SdkData_10450c8;

__int64 SdkRoutine_875d30(_QWORD);

__int64 SdkRoutine_876530(_QWORD);

__int64 SdkRoutine_8768a0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8769f0(_QWORD, _QWORD, _QWORD);

__int64 SdkHr_6acb00(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0) {
    return 5;
  }
  v5 = *(_QWORD*)(v4 + 40);
  if (v5 == 0) {
    return 5;
  }
  result = SdkRoutine_8769f0(v5, 3, 1);
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 196623) {
      return 9;
    }
    else {
      if ((_DWORD)result == 4) {
        return 5;
      }
      return 7;
    }
  }
  return result;
}

__int64 SdkHr_6ad560(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  unsigned int v6;
  __int64 result;
  _QWORD v8[2];
  int v9;
  int v10;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    if (v4 != 0 && *(_QWORD*)(v4 + 24) != 0 && *(_DWORD*)(a1 + 24) != 0) {
      v5 = *(_DWORD**)(a1 + 32);
      if (v5 != nullptr) {
        v6 = 0;
        while (*v5 == 48) {
          result =
              SdkRoutine_8768a0(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL), v8, v6);
          if ((_DWORD)result != 0) {
            return 7;
          }
          ++v6;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 4LL) = v8[0];
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) = v8[1];
          *(_DWORD*)(*(_QWORD*)(a1 + 32) + 16LL) = v9;
          *(_DWORD*)(*(_QWORD*)(a1 + 32) + 20LL) = v10;
          *(_DWORD*)(*(_QWORD*)(a1 + 32) + 12LL) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) = 0;
          v5 = (_DWORD*)((char*)v5 + (unsigned int)*v5);
          if (v6 >= *(_DWORD*)(a1 + 24)) {
            return result;
          }
        }
      }
    }
  }
  return 5;
}

#pragma GCC visibility pop
