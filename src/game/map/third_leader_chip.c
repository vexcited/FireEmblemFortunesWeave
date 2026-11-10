#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136ac50(_QWORD, _QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
__int64 ThirdLeaderChip_SetIcon(__int64 result, __int64 a2);

__int64 ThirdLeaderChip_SetIcon(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  const char* v6;

  v2 = result;
  v3 = *(_DWORD*)(*(_QWORD*)(result + 40) + 592LL);
  if (v3 < 2) {
    v6 = "Battle_MiniMap_Unit_ThirdLeader";
    if (a2 == 0) {
    LABEL_11:
      result = GameRoutine_136ac50(ui_Manager_instance_ + 1264, 8, v6);
      *(_QWORD*)(v2 + 48) = result;
      return result;
    }
  LABEL_10:
    GameRoutine_136a920(ui_Manager_instance_ + 1264, a2, 0, 8, v6);
    goto LABEL_11;
  }
  if (v3 == 2) {
    v4 = a2;
    if (a2 != 0) {
      GameRoutine_136a920(ui_Manager_instance_ + 1264, a2, 0, 8,
                          "Battle_MiniMap_Unit2x2_ThirdLeader");
    }
    result = GameRoutine_136ac50(ui_Manager_instance_ + 1264, 8,
                                 "Battle_MiniMap_Unit2x2_ThirdLeader");
    v5 = *(_QWORD*)(v2 + 40);
    *(_QWORD*)(v2 + 48) = result;
    a2 = v4;
    v3 = *(_DWORD*)(v5 + 592);
  }
  if (v3 == 3) {
    v6 = "Battle_MiniMap_Unit3x3_ThirdLeader";
    if (a2 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  return result;
}

#pragma GCC visibility pop
