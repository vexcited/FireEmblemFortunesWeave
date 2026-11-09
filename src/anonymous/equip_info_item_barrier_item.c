#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d4820(_QWORD*, __int64, _QWORD*);
__int64 game_util_Format(const char*, ...);
__int64 strlen(_QWORD);
__int64 EquipInfoItem_BarrierItem_Unknown16(__int64 a1);

__int64 EquipInfoItem_BarrierItem_Unknown16(__int64 a1)
{
  int v1;
  _QWORD v4[2];
  _QWORD v5[2];

  v1 = *(_DWORD*)(a1 + 40);
  v5[0] = "L_MenuItem_Item";
  v5[1] = 15;
  v4[0] = game_util_Format("BarrierItem%02d", v1);
  v4[1] = strlen(v4[0]);
  return GameRoutine_16d4820((_QWORD*)a1, (__int64)v5, v4);
}

#pragma GCC visibility pop
