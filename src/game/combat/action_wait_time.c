#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ActionWaitTime_Unknown6(__int64 result);

__int64 ActionWaitTime_Unknown6(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  float v5;
  float v6;
  int v7;
  int v9;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 80);
  if (v2 == 0 ||
      ((v3 = *(_QWORD*)(v1 + 88), *(_QWORD*)(v2 + 8) != -1) ? (v4 = v3 == 0)
                                                            : (v4 = true),
       v4)) {
    v5 = 0x1.11570c0000000p-5f;
  }
  else {
    v5 = (float)(*(float*)(*(_QWORD*)(v3 + 304) + 16LL) *
                 0x1.0aef000000000p+4f) *
         0x1.0624de0000000p-10f;
  }
  v6 = *(float*)(result + 24) - v5;
  *(float*)(result + 24) = v6;
  if (v6 <= 0x0.0p+0f) {
    v7 = *(_DWORD*)(result + 16);
    if (v7 != 1 && v7 != 3) {
      if (v7 == 2) {
        v9 = 3;
      }
      else {
        v9 = 1;
      }
      *(_DWORD*)(result + 16) = v9;
    }
  }
  return result;
}

#pragma GCC visibility pop
