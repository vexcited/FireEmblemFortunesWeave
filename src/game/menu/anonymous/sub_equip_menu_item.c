#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_TransporterConst_List_instance__ptr[6];
const char* SubEquipMenuItem_Unknown3(__int64 a1);

const char* SubEquipMenuItem_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    v3 = v2 + 8 * v1 + 828;
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v1 + 4;
  }
  if ((*(_BYTE*)(v3 + 3) & 1) != 0) {
    return "MID_Menu_Remove";
  }
  else {
    return "MID_Menu_Equip";
  }
}

#pragma GCC visibility pop
