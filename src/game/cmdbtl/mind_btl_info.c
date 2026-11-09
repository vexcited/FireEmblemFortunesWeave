#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b95a48[3];
extern __int64 GameData_2203490;
__int64 MindBtlInfo_Unknown2(__int64 a1);
__int64 MindBtlInfo_Unknown4(__int64 a1);
__int64 MindBtlInfo_Unknown3(__int64 a1);
__int64 MindBtlInfo_Unknown5(__int64 a1);

__int64 MindBtlInfo_Unknown2(__int64 a1)
{
  return GameData_2203490 + ((__int64)*(int*)(a1 + 12) << 7) + 672;
}

__int64 MindBtlInfo_Unknown4(__int64 a1)
{
  return GameData_2203490 + ((__int64)*(int*)(a1 + 12) << 7) + 672;
}

__int64 MindBtlInfo_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 2) {
    v2 = 3;
  }
  else {
    v2 = GameData_1b95a48[v1];
  }
  return GameData_2203490 + (v2 << 7) + 672;
}

__int64 MindBtlInfo_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 2) {
    v2 = 3;
  }
  else {
    v2 = GameData_1b95a48[v1];
  }
  return GameData_2203490 + (v2 << 7) + 672;
}

#pragma GCC visibility pop
