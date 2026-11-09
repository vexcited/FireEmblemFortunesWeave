#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_743fc0(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
extern __int64 GameData_21cf830;
extern __int64* GameData_212cfd0[8];
__int64 SubUseMenuItem_15c36a0(__int64 a1);
__int64 SubUseMenuItem_Unknown71(__int64 a1);

__int64 SubUseMenuItem_15c36a0(__int64 a1)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
  return 4;
}

__int64 SubUseMenuItem_Unknown71(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;

  v2 = GameData_212cfd0[0];
  result = GameRoutine_743fc0(*GameData_212cfd0[0], *(_QWORD*)(a1 + 144));
  v4 = *v2;
  v5 = *(unsigned int*)(a1 + 40);
  *(_DWORD*)(*v2 + 40) = v5;
  if ((v5 & 0x80000000) != 0) {
    *(_QWORD*)(v4 + 44) = 0;
  }
  else if (*(_BYTE*)(v4 + 8) != 0) {
    result = game_UnitPool_Get(v4 + 8);
    if (result != 0) {
      result = game_UnitPool_Get(v4 + 8);
      v6 = result + 8 * v5;
      v7 = *(_WORD*)(v6 + 828);
      *(_BYTE*)(v4 + 46) = *(_BYTE*)(v6 + 830);
      *(_WORD*)(v4 + 44) = v7;
      *(_BYTE*)(v4 + 47) = *(_BYTE*)(v6 + 831);
      *(_DWORD*)(v4 + 48) = *(_DWORD*)(v6 + 832);
    }
  }
  *(_BYTE*)(*v2 + 20) = 11;
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = 26;
  }
  return result;
}

#pragma GCC visibility pop
