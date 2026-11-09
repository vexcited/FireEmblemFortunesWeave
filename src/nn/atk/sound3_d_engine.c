#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Sound3DEngine_277510(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4, __int64 a5);
__int64 Sound3DEngine_277550(__int64* a1, __int64 a2, __int64 a3,
                             unsigned int a4);
__int64 Sound3DEngine_277510(__int64 a1, __int64 a2, __int64 a3,
                             unsigned int a4, __int64 a5)
{
  __int64 v5;

  if (*(_BYTE*)(a3 + 49) != 0) {
    v5 = *(_DWORD*)(a3 + 32) & 0x1F | 0x20u;
  }
  else {
    v5 = *(_DWORD*)(a3 + 32) & 0x1F;
  }
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD, __int64))(
      *(_QWORD*)a1 + 32LL))(a1, a5, a2, a3, a4, v5);
}

__int64 Sound3DEngine_277550(__int64* a1, __int64 a2, __int64 a3,
                             unsigned int a4)
{
  char v4;
  __int64 v5;
  _QWORD v7[2];
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;

  v4 = *(_DWORD*)(a3 + 32);
  v14 = 0;
  v11 = 0;
  v7[0] = 0x3F8000003F800000LL;
  v7[1] = 0;
  v8 = 0xFFFFFFFFLL;
  v9 = 0xFFFFFFFF00000000LL;
  v10 = 1065353216;
  v5 = *a1;
  v12 = 0;
  v13 = 0;
  (*(void (**)(__int64*, _QWORD*, __int64, __int64, _QWORD, _QWORD))(v5 + 32))(
      a1, v7, a2, a3, a4, v4 & 2 | 0x1000000u);
  return HIDWORD(v8);
}

#pragma GCC visibility pop
