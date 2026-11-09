#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e40be0(_QWORD, _QWORD);
__int64 LegionStackMoveTo_Unknown4(__int64 a1);
bool LegionStackMoveTo_Unknown5(__int64 a1);

__int64 LegionStackMoveTo_Unknown4(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v1 + 120);
  if (*(_BYTE*)(v3 + 96) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    *(_BYTE*)(v3 + 96) = 0;
    GameRoutine_e40be0(*(_QWORD*)(v4 + 104), 0);
    v1 = *(_QWORD*)(a1 + 40);
  }
  result = GameRoutine_e40be0(*(_QWORD*)(v1 + 104), 0);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_DWORD*)(v6 + 116) = 0;
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 128LL);
  if (*(_DWORD*)(v7 + 84) != 0) {
    *(_QWORD*)(v7 + 84) = 0;
    *(_QWORD*)(v7 + 92) = 0;
    *(_DWORD*)(v7 + 100) = 0;
    v8 = *(unsigned __int8*)(v7 + 64);
    *(_DWORD*)(v7 + 32) = 0;
    if (v8 == 1) {
      *(_BYTE*)(v7 + 64) = 0;
    }
  }
  return result;
}

bool LegionStackMoveTo_Unknown5(__int64 a1)
{
  return *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL) + 116LL) == 0;
}

#pragma GCC visibility pop
