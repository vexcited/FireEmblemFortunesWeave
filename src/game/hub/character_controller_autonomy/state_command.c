#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 StateCommand_Unknown4(__int64 a1);

__int64 StateCommand_Unknown4(__int64 a1)
{
  __int16 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  _QWORD v6[2];
  char v7;
  char v8;
  char v9;
  char v10;

  v1 = *(_WORD*)(a1 + 24);
  v6[0] = 0;
  v6[1] = 0;
  v8 = 0;
  v2 = *(_DWORD*)(a1 + 16);
  v3 = *(_DWORD*)(a1 + 20);
  v9 = 0;
  v10 = 0;
  v7 = 0;
  LOWORD(v6[1]) = v1;
  v4 = *(_QWORD*)(a1 + 8);
  v6[0] = __PAIR64__(v3, v2);
  return GameRoutine_da9a80(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 24LL) + 32LL), v6);
}

#pragma GCC visibility pop
