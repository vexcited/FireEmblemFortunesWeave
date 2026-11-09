#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_e165f0(_QWORD);
__int64 CharacterControllerAutonomy_Unknown2(__int64 a1);

__int64 CharacterControllerAutonomy_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD v5[2];
  char v6;
  char v7;
  char v8;
  char v9;

  v1 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = *(_QWORD*)(v1 + 24);
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  GameRoutine_da9a80(*(_QWORD*)(v3 + 32), v5);
  return GameRoutine_e165f0(a1 + 32);
}

#pragma GCC visibility pop
