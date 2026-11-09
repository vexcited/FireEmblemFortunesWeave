#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_210d168[])();

extern __int64 (
    *game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_vtable
        [])();
extern __int64 (*game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_vtable[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
bool CmdBtlSystemSortieMenuItem_Unknown89(__int64 a1, __int64 a2);

bool CmdBtlSystemSortieMenuItem_Unknown89(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 i;
  __int64 (***v7)();
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  __int64 v13;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0 || *(__int64 (***)())v2 !=
                     game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_vtable) {
    v2 = 0;
  }
  v3 = v10;
  v12 = 0;
  v10[0] = GameData_210d168;
  v10[1] = &v12;
  v5 = *(_QWORD*)(v2 + 232);
  v4 = *(_QWORD*)(v2 + 240);
  v11 = v10;
  if (v4 == v5) {
    goto LABEL_15;
  }
  for (i = 0; i < (v4 - v5) >> 3; ++i) {
    v7 = *(__int64 (****)())(v5 + 8 * i);
    if (v7 == nullptr ||
        *v7 !=
            game_cmdbtl_anonymous_CmdBtlSystemTroopMenu_CmdBtlSystemSortieMenuItem_vtable) {
      continue;
    }
    v13 = *(_QWORD*)(v5 + 8 * i);
    if (v11 == nullptr) {
      GameRoutine_60a310(0);
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v13) & 1) !=
        0) {
      break;
    }
    v5 = *(_QWORD*)(v2 + 232);
    v4 = *(_QWORD*)(v2 + 240);
  }
  v3 = v11;
  if (v11 != v10) {
    if (v11 != nullptr) {
      v8 = 40;
      goto LABEL_16;
    }
    return v12 >= *(_DWORD*)(v2 + 1184);
  }

LABEL_15:
  v8 = 32;

LABEL_16:
  (*(void (**)(_QWORD*, __int64))(*v3 + v8))(v3, a2);
  return v12 >= *(_DWORD*)(v2 + 1184);
}

#pragma GCC visibility pop
