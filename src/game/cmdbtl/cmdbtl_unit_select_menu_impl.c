#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_15940f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1637e20(_QWORD);
__int64 GameRoutine_16cd870(void);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_206e7e0[])();
extern __int64 GameData_206e7b8;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 CmdbtlUnitSelectMenu_1637be0(__int64 a1, __int64 a2);
__int64 CmdbtlUnitSelectMenu_1637cf0(__int64 a1);

__int64 CmdbtlUnitSelectMenu_1637be0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  unsigned int v14;
  __int64 v15;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  v5 = v12;
  v14 = 0;
  v12[0] = GameData_206e7e0;
  v12[1] = &v14;
  v13 = v12;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v6);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v7, &GameData_206e7b8, 0);
      if (v9 == 0) {
        goto LABEL_3;
      }
      v15 = v9;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  v5 = v13;
  if (v13 != v12) {
    if (v13 != nullptr) {
      v10 = 40;
      goto LABEL_13;
    }
    return v14;
  }

LABEL_12:
  v10 = 32;

LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v5 + v10))(v5, a2);
  return v14;
}

__int64 CmdbtlUnitSelectMenu_1637cf0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  const char* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  char v13;
  int v14;
  int v15;
  char v16;
  __int64 v17;

  GameRoutine_16cd870();
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "L_Num", 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "L_Num/L_KeyHelp", 1);
  v2 = LayoutAccessor_155fbe0(a1 + 952, "L_Num/L_KeyHelp");
  v3 = *(unsigned __int8*)(a1 + 1384);
  v4 = v2;
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v6 = "MID_SysMenu_StartExplore";
  v13 = 1;
  v17 = 0;
  if (v3 == 0) {
    v6 = "MID_SysMenu_StartBattle";
  }
  v12[0] = &GameData_1a9f09e;
  v12[1] = v6;
  v14 = 11;
  v15 = v5;
  v16 = 3;
  GameRoutine_1593d90(v4, v12);
  GameRoutine_1560070(&v10, a1 + 952, "L_Num");
  v8 = CmdbtlUnitSelectMenu_1637be0(a1, v7);
  GameRoutine_15940f0(&v10, v8, *(unsigned int*)(a1 + 1424));
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  return GameRoutine_1637e20(a1);
}

#pragma GCC visibility pop
