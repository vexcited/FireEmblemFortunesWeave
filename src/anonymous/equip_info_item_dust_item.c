#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d4820(_QWORD, _QWORD, _QWORD);
__int64 EquipInfoItem_DustItem_Unknown16(__int64 a1);

__int64 EquipInfoItem_DustItem_Unknown16(__int64 a1)
{
  _QWORD v2[2];
  _QWORD v3[2];

  v3[0] = "L_MenuItem_Item";
  v3[1] = 15;
  v2[0] = "DustItem";
  v2[1] = 8;
  return GameRoutine_16d4820(a1, v3, v2);
}

#pragma GCC visibility pop
