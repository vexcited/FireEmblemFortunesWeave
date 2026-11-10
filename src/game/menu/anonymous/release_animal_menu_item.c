#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 strlen(_QWORD);
__int64
game_menu_anonymous_ReleaseAnimalMenuItem_ACall_closure_Invoke(__int64 a1);
__int64

game_menu_anonymous_ReleaseAnimalMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  _QWORD v12[2];
  _QWORD v13[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameRoutine_931120(*(_QWORD*)(v1 + 112));
  v3 = *(_QWORD*)(v1 + 8);
  v12[0] = v2;
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  v13[0] = "MID_ReleaseMenu_Result";
  v13[1] = 22;
  v12[1] = strlen(v2);
  GameRoutine_16f9b50(v4, v13, v12);
  v5 = *(_QWORD*)(v1 + 8);
  v6 = *(unsigned __int8**)(v5 + 16);
  if (v6 != nullptr) {
    v7 = *v6;
    v8 = v7 > 0x10;
    v9 = (1 << v7) & 0x1CE00;
    if (!v8 && v9 != 0) {
      *(_WORD*)(v5 + 136) |= 0x80u;
    }
  }
  return 2;
}

#pragma GCC visibility pop
