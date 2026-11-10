#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64
game_map_MapPanelTargetSelectSub_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 game_map_MapPanelTargetSelectSub_UpdateTarget_lambda1_Invoke(
    __int64 a1, _DWORD* a2, _DWORD* a3);

__int64 game_map_MapPanelTargetSelectSub_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(unsigned __int16*)(a2 + 1);
  return GameRoutine_74e080(v2, &v4);
}

__int64 game_map_MapPanelTargetSelectSub_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                     _DWORD* a2,
                                                                     _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
