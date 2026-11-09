#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 Data_Unknown3(__int64 a1, __int64 a2, char a3);
__int64 Data_Unknown4(__int64 a1, int a2);
__int64 Data_Unknown5(__int64 a1, __int64 a2);

__int64 Data_Unknown3(__int64 a1, __int64 a2, char a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (game_GameModeData_instance_ != 0) {
    v4 = a1;
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), a2);
    if (v5 != 0) {
      v6 = *(unsigned int*)(v5 + 32);
    }
    else {
      v6 = 0;
    }
    a1 = v4;
  }
  else {
    v6 = 0;
  }
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 16LL))(
      a1, v6, a3 & 1);
}

__int64 Data_Unknown4(__int64 a1, int a2)
{
  int v2;
  int v3;

  v2 = *(unsigned __int16*)(a1 + 14);
  if (*(_BYTE*)(a1 + 10) == 0) {
    return 0;
  }
  v3 = (a2 + v2) & ~((a2 + v2) >> 31);
  if (v3 >= 10000) {
    v3 = 10000;
  }
  *(_WORD*)(a1 + 14) = v3;
  return (unsigned int)(v3 - v2);
}

__int64 Data_Unknown5(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (game_GameModeData_instance_ != 0) {
    v2 = a1;
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), a2);
    if (v3 != 0) {
      v4 = *(unsigned int*)(v3 + 32);
    }
    else {
      v4 = 0;
    }
    a1 = v2;
  }
  else {
    v4 = 0;
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(a1, v4);
}

#pragma GCC visibility pop
