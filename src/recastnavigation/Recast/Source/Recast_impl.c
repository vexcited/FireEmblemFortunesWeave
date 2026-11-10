#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameRoutine_283a90();
__int64 rcCreateHeightfield(_QWORD* a1, __int64 a2, __int64 a3);

__int64 rcCreateHeightfield(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  a1[58] = a2;
  v5 = ((__int64 (*)(__int64))GameRoutine_283a90)(a2);
  a1[20] = v5;
  if (v5 != 0) {
    v6 = v5;
    if (*(int*)(v5 + 8) >= 1) {
      v7 = 0;
      v8 = 0;
      do {
        ++v8;
        v9 = *(_QWORD*)v6 + v7;
        v7 += 24;
        *(_DWORD*)v9 = 1065353216;
        *(_QWORD*)(v9 + 4) = 0;
        *(_QWORD*)(v9 + 12) = 0;
        *(_DWORD*)(v9 + 20) = 0;
        v6 = a1[20];
      } while (v8 < *(int*)(v6 + 8));
    }
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 64LL))(a1);
  *(_QWORD*)(result + 184) = a3;
  return result;
}

#pragma GCC visibility pop
