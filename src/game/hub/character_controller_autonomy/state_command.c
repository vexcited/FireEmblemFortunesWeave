#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 StateCommand_Unknown4(__int64 a1);
__int64 CharacterInputPlayer_da9a80(__int64 result, __int64);

__int64 StateCommand_Unknown4(__int64 a1)
{
  __int16 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  struct {
    _QWORD v6[2];
    char v7;
    char gap17_[63];
    char v8;
    char gap81_[15];
    char v9;
    char gap97_[15];
    char v10;
  } v6_;

  v1 = *(_WORD*)(a1 + 24);
  v6_.v6[0] = 0;
  v6_.v6[1] = 0;
  v6_.v8 = 0;
  v2 = *(_DWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a1 + 20);
  v6_.v9 = 0;
  v6_.v10 = 0;
  v6_.v7 = 0;
  LOWORD(v6_.v6[1]) = v1;
  v4 = *(_QWORD*)(a1 + 8);
  v6_.v6[0] = __PAIR64__(v3, v2);
  return CharacterInputPlayer_da9a80(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL) + 32LL),
      (__int64)v6_.v6);
}

#pragma GCC visibility pop
