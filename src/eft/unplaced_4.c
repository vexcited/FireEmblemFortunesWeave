#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5dfff0(__int64 result, int, char);
extern int* GameData_2136530;
__int64 eft_5e0240(__int64 a1, __int64 a2);

__int64 eft_5e0240(__int64 a1, __int64 a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)(a1 + 104) = a2;
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 40);
  *(_DWORD*)(a1 + 116) = *(unsigned __int16*)(a2 + 90);
  *(_WORD*)(a1 + 96) &= ~1u;
  result =
      GameRoutine_5dfff0(a1, *(_DWORD*)(a2 + 80), (*(_WORD*)(a2 + 4) & 4) != 0);
  *(_WORD*)(a1 + 100) = *(_WORD*)(a2 + 88);
  v5 = *(unsigned __int16*)(a2 + 90);
  *(_DWORD*)(a1 + 60) = v5;
  *(_DWORD*)(a1 + 64) = *GameData_2136530;
  if (v5 != 0 && (signed __int32)*(_DWORD*)(a1 + 56) >= v5) {
    v6 = 0;
    v7 = 0;
    do {
      ++v7;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v6) = 2139095040;
      v6 += 12;
    } while (v7 < *(int*)(a1 + 60));
  }
  return result;
}

#pragma GCC visibility pop
