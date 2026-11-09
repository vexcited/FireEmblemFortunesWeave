#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1262240(_QWORD*, unsigned __int16*, int);
__int64 GameRoutine_12623a0(_QWORD*, __int64, int);
__int64 DeliveryKindExecutor_Destructor(__int64 a1, unsigned __int16* a2);
__int64 DeliveryKindExecutor_DeletingDestructor(__int64 a1, __int64 a2, int a3);

__int64 DeliveryKindExecutor_Destructor(__int64 a1, unsigned __int16* a2)
{
  int v2;
  int v3;
  int v4;
  _QWORD* v7;
  unsigned __int16* v8;
  int v9;
  int v10;
  int v11;
  _QWORD* v12;

  v2 = a2[1];
  v3 = *(_DWORD*)(a1 + 96);
  v4 = *(_DWORD*)(a1 + 8);
  v7 = (_QWORD*)(a1 + 16);
  v8 = a2 + 2;
  v9 = v3 + v2;
  v10 = v4 - v3;
  if (v9 >= v4) {
    v11 = v10;
  }
  else {
    v11 = v2;
  }
  v12 = (_QWORD*)GameRoutine_1262240(v7, v8, v11);
  GameRoutine_12623a0(v12, 0, *a2);
  *(_DWORD*)(a1 + 96) += v11;
  return 0;
}

__int64 DeliveryKindExecutor_DeletingDestructor(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v6;

  v6 = (_QWORD*)GameRoutine_1262240(
      (_QWORD*)(a1 + 16), (unsigned __int16*)(a2 + 8LL * a3 + 828), 1);
  GameRoutine_12623a0(v6, a2, a3);
  ++*(_DWORD*)(a1 + 96);
  return 0;
}

#pragma GCC visibility pop
