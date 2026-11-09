#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14b730(_QWORD, _QWORD);
__int64 GameRoutine_14b740(_QWORD, _QWORD);
__int64 GameRoutine_277280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Sound3DActorNX_14dc10(_QWORD, _QWORD);
__int64 StartInfoNX_14b920(void);
__int64 Sound3DEngineCustom_Unknown4(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4);
__int64 Sound3DEngineCustom_14b730(__int64 a1, int a2);
__int64 Sound3DEngineCustom_14b740(__int64 result, int a2);

__int64 Sound3DEngineCustom_14b730(__int64 a1, int a2)
{
  return *(_QWORD*)(a1 + 40) + 24LL * a2;
}

__int64 Sound3DEngineCustom_14b740(__int64 result, int a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 40) + 24LL * a2;
  *(_DWORD*)(v2 + 12) = -1;
  *(_QWORD*)(v2 + 16) = 0;
  return result;
}

__int64 Sound3DEngineCustom_Unknown4(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_DWORD*)(a2 + 24) != 0) {
    v6 = a3;
    v7 = a1;
    v8 = StartInfoNX_14b920();
    v9 = Sound3DActorNX_14dc10(v8, 0);
    v10 =
        GameRoutine_14b730(v9 + 4016, (unsigned int)(*(_DWORD*)(a2 + 24) - 1));
    *(_DWORD*)(a4 + 44) = *(_DWORD*)(v10 + 4);
    *(_BYTE*)(a4 + 48) = *(_BYTE*)(v10 + 8);
    *(_BYTE*)(a4 + 49) = *(_BYTE*)(v10 + 9);
    *(_DWORD*)(a4 + 32) = *(_DWORD*)v10;
    GameRoutine_14b740(v9 + 4016, (unsigned int)(*(_DWORD*)(a2 + 24) - 1));
    a1 = v7;
    a3 = v6;
    *(_DWORD*)(a2 + 24) = 0;
  }
  return GameRoutine_277280(a1, a2, a3, a4);
}

#pragma GCC visibility pop
