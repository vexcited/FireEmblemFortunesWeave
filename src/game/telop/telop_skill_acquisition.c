#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
void GameRoutine_17644e0(_QWORD*, __int64, __int64, __int64);
void TelopSkillAcquisition_Unknown57(__int64 a1);

void TelopSkillAcquisition_Unknown57(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[6];

  v2 = (_QWORD*)GameRoutine_1760e40(a1, 19);
  GameRoutine_1562cf0(v2, "ArrowOff");
  v3 = *(_QWORD*)(a1 + 1168);
  v4 = *(_QWORD*)(a1 + 1176);
  v5[4] = 0;
  GameRoutine_17644e0(v2, v3, v4, (__int64)v5);
}

#pragma GCC visibility pop
